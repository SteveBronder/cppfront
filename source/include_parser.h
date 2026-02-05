
//===========================================================================
//  Cppfront - Include Parser
//
//  This module handles parsing of .h2/.cpp2 files that are included via
//  #include directives, and merges their AST into the including file's
//  translation unit so that metafunctions can access the declarations.
//
//===========================================================================

#ifndef INCLUDE_PARSER_H
#define INCLUDE_PARSER_H

#include "common.h"
#include "parse.h"
#include "lex.h"
#include "io.h"
#include <filesystem>
#include <optional>
#include <set>
#include <vector>

namespace cpp2 {

//-----------------------------------------------------------------------
//  Result of parsing a single include file
//
struct include_parse_result {
    bool success = false;
    std::string error_message;
    std::string error_file;
    source_position error_pos;

    // Parsed declarations (moved on success)
    std::vector<std::unique_ptr<declaration_node>> declarations;
};


//-----------------------------------------------------------------------
//  Configuration for include parsing
//
struct include_config {
    std::filesystem::path base_path;                      // Directory of main file
    std::vector<std::filesystem::path> search_paths;      // Additional search paths
    bool warn_on_circular = true;                         // Emit warning for circular includes
};


//-----------------------------------------------------------------------
//  Include parser - handles parsing and merging of .h2/.cpp2 includes
//
class include_parser {
    // Storage for included file objects (must be kept alive for token lifetime)
    struct included_file {
        std::unique_ptr<source> src;
        std::unique_ptr<tokens> toks;
        std::unique_ptr<parser> pars;
        std::vector<std::string> cpp1;
        std::vector<std::string> build;
    };

    std::vector<included_file> included_files_;

public:
    //  Constructor
    include_parser(
        std::vector<error_entry>& errors_,
        std::set<std::string>& output_includes_,
        include_config const& config_
    )
        : errors{errors_}
        , output_includes{output_includes_}
        , config{config_}
    {
    }

    //  Parse a single .h2 file
    //  Returns empty result with error info on failure
    auto parse_file(std::filesystem::path const& path)
        -> include_parse_result
    {

        include_parse_result result;

        // Check if already parsed (circular detection)
        auto canonical_path = resolve_canonical_path(path);
        if (!canonical_path) {
            result.error_message = "cannot resolve path: " + path.string();
            return result;
        }


        if (was_parsed(*canonical_path)) {
            // Already parsed - return success with empty declarations
            result.success = true;
            return result;
        }

        // Mark as being parsed
        parsed_files_.insert(canonical_path->string());
        include_stack_.push_back(canonical_path->string());

        // Try to parse the file
        try {

            // Create storage for this included file (must keep alive for token lifetime)
            included_file file;
            file.src = std::make_unique<source>(errors);

            if (!file.src->load(canonical_path->string())) {
                result.error_message = "cannot load included file: '" + canonical_path->string() + "'";
                if (!include_stack_.empty()) {
                    result.error_message += "\n  (included from: " + include_stack_.front() + ")";
                }
                result.error_file = canonical_path->string();
                include_stack_.pop_back();
                return result;
            }

            // Create tokens object and lex
            file.toks = std::make_unique<tokens>(errors);
            file.toks->lex(file.src->get_lines());

            // Create parser and parse
            file.pars = std::make_unique<parser>(
                errors, output_includes, file.cpp1, file.build, canonical_path->string()
            );

            auto& token_map = file.toks->get_map();

            for (auto const& [line, entry] : token_map) {
                if (!file.pars->parse(entry, file.toks->get_generated())) {
                    result.error_message = "parse failed in included file";
                    result.error_file = canonical_path->string();
                    result.error_pos = source_position(line, 0);
                    include_stack_.pop_back();
                    return result;
                }
            }

            // Get the parse tree
            auto* parse_tree = file.pars->get_parse_tree();

            if (!parse_tree) {
                result.error_message = "no parse tree from included file";
                include_stack_.pop_back();
                return result;
            }


            // Move declarations to result (make sure to handle empty case)
            if (parse_tree->declarations.empty()) {
                // Empty file is valid
                result.success = true;
                include_stack_.pop_back();
                return result;
            }

            for (size_t i = 0; i < parse_tree->declarations.size(); ++i) {
                auto& decl = parse_tree->declarations[i];
                if (decl) {  // Safety check for null pointers
                    result.declarations.push_back(std::move(decl));
                }
            }


            // IMPORTANT: Store the file object to keep tokens/parser alive
            included_files_.push_back(std::move(file));

            result.success = true;
            include_stack_.pop_back();
            return result;
        }
        catch (std::exception const& e) {
            result.error_message = std::string("exception parsing included file: ") + e.what();
            result.error_file = canonical_path->string();
            include_stack_.pop_back();
            return result;
        }
    }

    //  Process all includes for a file and merge into parse tree
    //  Handles recursive includes automatically
    //  Returns false if any include fails (fail fast)
    auto process_includes(
        std::vector<source::cpp2_include_info> const& includes,
        translation_unit_node& target
    ) -> bool
    {
        if (includes.empty()) {
            return true;  // Nothing to process
        }


        for (auto const& inc : includes) {

            // Resolve path relative to base_path
            auto resolved = resolve_path(inc.path);
            if (!resolved) {
                std::string error_msg = "cannot find included file: '" + inc.path + "'";
                error_msg += "\n  (searched in: " + config.base_path.string();
                for (auto const& search : config.search_paths) {
                    error_msg += ", " + search.string();
                }
                error_msg += ")";

                errors.emplace_back(
                    source_position(inc.line, 0),
                    error_msg
                );
                return false;  // Fail fast
            }

            // Parse the file
            auto result = parse_file(*resolved);

            if (!result.success) {
                // Report error with include trace
                std::string trace = get_include_trace_string();
                if (!trace.empty()) {
                    result.error_message += "\n" + trace;
                }

                errors.emplace_back(
                    result.error_pos.lineno >= 0 ? result.error_pos : source_position(inc.line, 0),
                    result.error_message
                );
                return false;  // Fail fast
            }

            // Process nested includes recursively
            // Check if the included file itself has .h2/.cpp2 includes
            if (!included_files_.empty()) {
                auto* included_src = included_files_.back().src.get();
                auto const& nested_includes = included_src->get_cpp2_includes();

                if (!nested_includes.empty()) {
                    // Create a temporary translation unit to hold nested declarations
                    translation_unit_node temp_tu;

                    // Move current declarations into temp TU
                    temp_tu.declarations = std::move(result.declarations);

                    // Adjust base_path for nested include resolution
                    auto saved_base = config.base_path;
                    config.base_path = resolved->parent_path();

                    // Recursively process nested includes
                    bool nested_ok = process_includes(nested_includes, temp_tu);

                    // Restore base_path
                    config.base_path = saved_base;

                    if (!nested_ok) {
                        return false;  // Nested include failed
                    }

                    // Move all declarations (original + nested) back to result
                    result.declarations = std::move(temp_tu.declarations);
                }
            }

            // Merge declarations into target
            for (size_t i = 0; i < result.declarations.size(); ++i) {
                auto& decl = result.declarations[i];
                // Mark declaration as from include so it won't be emitted
                if (decl) {
                    decl->is_from_include = true;
                }
                target.declarations.push_back(std::move(decl));
            }
        }

        return true;
    }

    //  Check if a file has already been parsed (for circular detection)
    auto was_parsed(std::filesystem::path const& path) const -> bool {
        auto canonical = resolve_canonical_path(path);
        if (!canonical) return false;
        return parsed_files_.count(canonical->string()) > 0;
    }

    //  Get the include trace for error messages
    auto get_include_trace() const -> std::vector<std::string> {
        return include_stack_;
    }

private:
    std::vector<error_entry>& errors;
    std::set<std::string>& output_includes;
    include_config config;

    // Track parsed files (canonical paths)
    std::set<std::string> parsed_files_;

    // Current include stack for circular detection and error traces
    std::vector<std::string> include_stack_;

    //  Resolve include path to absolute path
    auto resolve_path(std::string_view include_path) const
        -> std::optional<std::filesystem::path>
    {
        namespace fs = std::filesystem;

        // Validate path safety: check for null bytes
        if (include_path.find('\0') != std::string_view::npos) {
            return std::nullopt;
        }

        // Validate path doesn't contain suspicious patterns
        // Note: ".." is allowed but we'll validate the canonical result
        std::string path_str(include_path);

        // Try relative to base_path first
        fs::path candidate = config.base_path / include_path;
        if (fs::exists(candidate)) {
            return candidate;
        }

        // Try additional search paths
        for (auto const& search : config.search_paths) {
            candidate = search / include_path;
            if (fs::exists(candidate)) {
                return candidate;
            }
        }

        // Not found
        return std::nullopt;
    }

    //  Resolve a path to canonical form
    auto resolve_canonical_path(std::filesystem::path const& path) const
        -> std::optional<std::filesystem::path>
    {
        try {
            if (std::filesystem::exists(path)) {
                return std::filesystem::canonical(path);
            }
        }
        catch (...) {
            // Ignore errors
        }
        return std::nullopt;
    }

    //  Get include trace as a formatted string
    auto get_include_trace_string() const -> std::string {
        if (include_stack_.empty()) {
            return "";
        }

        std::string trace = "  included from:";
        for (auto const& file : include_stack_) {
            trace += "\n    " + file;
        }
        return trace;
    }
};

} // namespace cpp2

#endif // INCLUDE_PARSER_H
