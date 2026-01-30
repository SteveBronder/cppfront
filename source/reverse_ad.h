#line 14 "source/reverse_ad.h2"
#include "reflect.h"

#ifndef SOURCE_REVERSE_AD_H_CPP2
#define SOURCE_REVERSE_AD_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "source/reverse_ad.h2"

#line 16 "source/reverse_ad.h2"
namespace cpp2 {

namespace meta {

#line 28 "source/reverse_ad.h2"
class reverse_autodiff_base;

#line 33 "source/reverse_ad.h2"
class reverse_autodiff_context;
    

#line 120 "source/reverse_ad.h2"
template<typename MetaType, typename Metadata> class ad_dual;
    

#line 153 "source/reverse_ad.h2"
class ad_expr_metadata;
    

#line 168 "source/reverse_ad.h2"
class ad_stmt_metadata;
    

#line 184 "source/reverse_ad.h2"
class ad_string_substitution_context;
    

#line 277 "source/reverse_ad.h2"
class ad_type_kind;
    

#line 308 "source/reverse_ad.h2"
class ad_type;

#line 627 "source/reverse_ad.h2"
class ad_op_kind;
    

#line 698 "source/reverse_ad.h2"
class ad_expr_kind;
    

#line 732 "source/reverse_ad.h2"
class ad_stmt_kind;
    

#line 790 "source/reverse_ad.h2"
class ad_expr;

#line 1143 "source/reverse_ad.h2"
class ad_stmt;

#line 1503 "source/reverse_ad.h2"
class ad_param;

#line 1540 "source/reverse_ad.h2"
class ad_function_ir;

#line 1644 "source/reverse_ad.h2"
class ad_substitution_context;
    

#line 1850 "source/reverse_ad.h2"
class ad_rule_meta;

#line 1906 "source/reverse_ad.h2"
class ad_reverse_rule_result;

#line 1947 "source/reverse_ad.h2"
class ad_rule_registry;
    

#line 2270 "source/reverse_ad.h2"
class ad_rule_body_result;

#line 2294 "source/reverse_ad.h2"
class ad_parse_expr_result;

#line 2318 "source/reverse_ad.h2"
class ad_parse_stmt_result;

#line 2922 "source/reverse_ad.h2"
class ad_rule_param_names;
    

#line 3053 "source/reverse_ad.h2"
class ad_op_mapping_result;

#line 3135 "source/reverse_ad.h2"
class ad_ir_builder;

#line 4592 "source/reverse_ad.h2"
class ad_rule_application_result;
    

#line 4669 "source/reverse_ad.h2"
class ad_ir_emitter;
    

#line 5406 "source/reverse_ad.h2"
}

}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "source/reverse_ad.h2"

//  Copyright 2022-2026 Herb Sutter
//  SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//  Part of the Cppfront Project, under the Apache License v2.0 with LLVM Exceptions.
//  See https://github.com/hsutter/cppfront/blob/main/LICENSE for license information.


//===========================================================================
//  Reverse-mode autodiff implementation
//  Extracted from reflect.h2
//===========================================================================

#line 16 "source/reverse_ad.h2"
namespace cpp2 {

namespace meta {

/*
  @brief Empty base class to suppress assignment operator generation.
 
  When a Cpp2 type has a base class, cppfront generates only a constructor
  (with member initializer list) rather than both constructor and assignment
  operator. This is needed because function_declaration has deleted copy
  assignment but move assignment is fine.
 */
class reverse_autodiff_base {
      public: reverse_autodiff_base() = default;
      public: reverse_autodiff_base(reverse_autodiff_base const&) = delete; /* No 'that' constructor, suppress copy */
      public: auto operator=(reverse_autodiff_base const&) -> void = delete;
};
#line 29 "source/reverse_ad.h2"

/*
  @brief Context for reverse-mode IR construction and naming.
 */
class reverse_autodiff_context: public reverse_autodiff_base {

#line 36 "source/reverse_ad.h2"
    /// Function being transformed.
           public: meta::function_declaration mf; 

    /// Suffix used for value temporaries.
    public: std::string value_suffix {"_val"}; 
    /// Suffix used for adjoint temporaries.
           public: std::string adj_suffix {"_adj"}; 

    /*
      @brief Initialize the reverse context.
      @param mf_ Function being transformed.
      @return No return value.
     */
    public: reverse_autodiff_context(cpp2::impl::in<meta::function_declaration> mf_);

#line 53 "source/reverse_ad.h2"
    /*
      @brief Create a value name with the configured suffix.
      @param base Base identifier.
      @return Value name with suffix.
     */
    public: [[nodiscard]] auto make_value_name(cpp2::impl::in<std::string> base) const& -> std::string;

#line 65 "source/reverse_ad.h2"
    /*
      @brief Create an adjoint name with the configured suffix.
      @param base Base identifier.
      @return Adjoint name with suffix.
     */
    public: [[nodiscard]] auto make_adj_name(cpp2::impl::in<std::string> base) const& -> std::string;
    public: reverse_autodiff_context(reverse_autodiff_context const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(reverse_autodiff_context const&) -> void = delete;


#line 76 "source/reverse_ad.h2"
};

//-----------------------------------------------------------------------
//
//  Dual-Type IR Infrastructure
//
//  Wraps meta reflection types with AD-specific metadata, enabling
//  transformation without rebuilding AST structure.
//
//-----------------------------------------------------------------------

/*
  @brief Derive a value name from an original identifier.
  @param original Base identifier name.
  @return Value name with _val suffix.
 */
[[nodiscard]] auto make_value_name(cpp2::impl::in<std::string> original) -> std::string;

#line 99 "source/reverse_ad.h2"
/*
  @brief Derive an adjoint name from an original identifier.
  @param original Base identifier name.
  @return Adjoint name with _adj suffix.
 */
[[nodiscard]] auto make_adjoint_name(cpp2::impl::in<std::string> original) -> std::string;

#line 111 "source/reverse_ad.h2"
/*
  @brief Generic dual-type wrapper pairing a meta type with user-provided metadata.
 
  The dual-type approach wraps meta reflection types (meta::expression, meta::statement)
  with AD-specific metadata, avoiding the need to rebuild AST structure.
 
  @tparam MetaType The wrapped meta reflection type.
  @tparam Metadata User-provided metadata type.
 */
template<typename MetaType, typename Metadata> class ad_dual {
    public: MetaType meta; 
    public: Metadata data; 

    /// Constructor with explicit meta and data
    public: ad_dual(MetaType const& m, Metadata const& d);

#line 130 "source/reverse_ad.h2"
    /*
      @brief Wrap a meta type with default-constructed metadata.
      @param m Meta type to wrap.
      @return Dual-type wrapper.
     */
    public: [[nodiscard]] static auto wrap(cpp2::impl::in<MetaType> m) -> ad_dual<MetaType,Metadata>;

#line 139 "source/reverse_ad.h2"
    /*
      @brief Delegate to_string to the underlying meta type.
      @return String representation from meta type.
     */
    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: ad_dual(ad_dual const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_dual const&) -> void = delete;


#line 146 "source/reverse_ad.h2"
};

/*
  @brief Metadata for expressions during AD transformation.
 
  Tracks whether an expression affects gradients (is_active).
 */
class ad_expr_metadata {
    public: bool is_active {false};   // Does this expression affect gradients?

    /// Default constructor
    public: explicit ad_expr_metadata();

    /// Copy constructor
    public: ad_expr_metadata(ad_expr_metadata const& that);
#line 160 "source/reverse_ad.h2"
    public: auto operator=(ad_expr_metadata const& that) -> ad_expr_metadata& ;
#line 160 "source/reverse_ad.h2"
    public: ad_expr_metadata(ad_expr_metadata&& that) noexcept;
#line 160 "source/reverse_ad.h2"
    public: auto operator=(ad_expr_metadata&& that) noexcept -> ad_expr_metadata& ;
};

/*
  @brief Metadata for statements during AD transformation.
 
  Tracks whether a statement is an accumulation (+=) operation.
 */
class ad_stmt_metadata {
    public: bool is_accumulation {false};   // Is this a += statement?

    /// Default constructor
    public: explicit ad_stmt_metadata();

    /// Copy constructor
    public: ad_stmt_metadata(ad_stmt_metadata const& that);
#line 175 "source/reverse_ad.h2"
    public: auto operator=(ad_stmt_metadata const& that) -> ad_stmt_metadata& ;
#line 175 "source/reverse_ad.h2"
    public: ad_stmt_metadata(ad_stmt_metadata&& that) noexcept;
#line 175 "source/reverse_ad.h2"
    public: auto operator=(ad_stmt_metadata&& that) noexcept -> ad_stmt_metadata& ;
};

/*
  @brief String-based substitution context for dual-type rule application.
 
  Maps parameter names to their string replacements. Used during
  rule body substitution where we transform to_string() output.
 */
class ad_string_substitution_context {
    public: std::map<std::string,std::string> substitutions {}; 

    /// Default constructor
    public: explicit ad_string_substitution_context();

    /// Copy constructor
    public: ad_string_substitution_context(ad_string_substitution_context const& that);
#line 191 "source/reverse_ad.h2"
    public: auto operator=(ad_string_substitution_context const& that) -> ad_string_substitution_context& ;
#line 191 "source/reverse_ad.h2"
    public: ad_string_substitution_context(ad_string_substitution_context&& that) noexcept;
#line 191 "source/reverse_ad.h2"
    public: auto operator=(ad_string_substitution_context&& that) noexcept -> ad_string_substitution_context& ;

    /*
      @brief Add a substitution mapping.
      @param name Parameter name to substitute.
      @param replacement String to substitute in place of the parameter.
     */
    public: auto add(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> replacement) & -> void;

#line 202 "source/reverse_ad.h2"
    /*
      @brief Apply all substitutions to a text string.
     
      Replaces all occurrences of parameter names with their replacements.
      Uses word-boundary matching to avoid partial replacements.
     
      @param text Text to transform.
      @return Text with all substitutions applied.
     */
    public: [[nodiscard]] auto apply(cpp2::impl::in<std::string> text) const& -> std::string;

#line 238 "source/reverse_ad.h2"
    /*
      @brief Check if a substitution exists for a name.
      @param name Parameter name to check.
      @return true if a substitution exists.
     */
    public: [[nodiscard]] auto has(cpp2::impl::in<std::string> name) const& -> bool;

#line 247 "source/reverse_ad.h2"
    /*
      @brief Get the replacement for a name.
      @param name Parameter name to look up.
      @return Replacement string, or empty string if not found.
     */
    public: [[nodiscard]] auto get(cpp2::impl::in<std::string> name) const& -> std::string;

#line 259 "source/reverse_ad.h2"
};

//-----------------------------------------------------------------------
//
//  Typed AD IR definitions for reverse-mode autodiff
//
//-----------------------------------------------------------------------

//-----------------------------------------------------------------------
//  Type System - Compositional type representation
//-----------------------------------------------------------------------

/*
  @brief Type kinds for AD IR type system.
 
  Enables compositional type representation where complex types
  are built from simpler ones (e.g., const double& = const_(ref_(double_))).
 */
class ad_type_kind {
private: cpp2::i8 _value; private: constexpr ad_type_kind(cpp2::impl::in<cpp2::i64> _val);

private: constexpr auto operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_type_kind& ;
public: static const ad_type_kind auto_;
public: static const ad_type_kind void_;
public: static const ad_type_kind int_;
public: static const ad_type_kind size_t_;
public: static const ad_type_kind double_;
public: static const ad_type_kind float_;
public: static const ad_type_kind bool_;
public: static const ad_type_kind char_;
public: static const ad_type_kind named;
public: static const ad_type_kind const_;
public: static const ad_type_kind ref;
public: static const ad_type_kind rvalue_ref;
public: static const ad_type_kind pointer;
public: static const ad_type_kind array;
public: static const ad_type_kind template_;
public: [[nodiscard]] constexpr auto get_raw_value() const& -> cpp2::i8;
public: constexpr explicit ad_type_kind();
public: constexpr ad_type_kind(ad_type_kind const& that);
public: constexpr auto operator=(ad_type_kind const& that) -> ad_type_kind& ;
public: constexpr ad_type_kind(ad_type_kind&& that) noexcept;
public: constexpr auto operator=(ad_type_kind&& that) noexcept -> ad_type_kind& ;
public: [[nodiscard]] auto operator<=>(ad_type_kind const& that) const& -> std::strong_ordering = default;
public: [[nodiscard]] auto to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string;
public: [[nodiscard]] auto to_string() const& -> std::string;
public: [[nodiscard]] auto to_code() const& -> std::string;
public: [[nodiscard]] static auto from_string(cpp2::impl::in<std::string_view> s) -> ad_type_kind;
public: [[nodiscard]] static auto from_code(cpp2::impl::in<std::string_view> s) -> ad_type_kind;

#line 278 "source/reverse_ad.h2"
                    // auto keyword
                    // void
                    // int
                    // size_t
                    // double
                    // float
                    // bool
                    // char
                    // Named type (e.g., std::vector<double>, custom types)
                    // const T (inner type in inner_type)
                    // T& (inner type in inner_type)
                    // T&& (inner type in inner_type)
                    // T* (inner type in inner_type)
                    // T[N] (inner type in inner_type, size in array_size)
                    // Template instantiation T<Args...> (name + type_args)
#line 293 "source/reverse_ad.h2"
};

/*
  @brief Compositional type representation for AD IR.
 
  Types are represented as trees where qualifiers and modifiers
  wrap inner types. This enables type transformations as tree operations.
 
  Examples:
  - double -> ad_type_kind::double_
  - const double -> ad_type_kind::const_ with inner = double_
  - double& -> ad_type_kind::ref with inner = double_
  - const double& -> ad_type_kind::const_ with inner = (ref with inner = double_)
  - std::vector<double> -> ad_type_kind::template_ with name="std::vector", type_args=[double_]
 */
class ad_type {
           public: ad_type_kind kind {ad_type_kind::double_}; 
           public: std::string name {""};                      // For named/template types
    public: std::shared_ptr<ad_type> inner_type {};            // For const/ref/ptr/array
    public: std::vector<ad_type> type_args {};                 // For template types
    public: int array_size {0};                                // For array types

    /// Default constructor
    public: explicit ad_type();

    /// Copy constructor
    public: ad_type(ad_type const& that);
#line 319 "source/reverse_ad.h2"
    public: auto operator=(ad_type const& that) -> ad_type& ;
#line 319 "source/reverse_ad.h2"
    public: ad_type(ad_type&& that) noexcept;
#line 319 "source/reverse_ad.h2"
    public: auto operator=(ad_type&& that) noexcept -> ad_type& ;

    // ===== Factory methods for primitive types =====

    /*
      @brief Create an auto type.
      @return auto type node.
     */
    public: [[nodiscard]] static auto make_auto() -> ad_type;

#line 333 "source/reverse_ad.h2"
    /*
      @brief Create a void type.
      @return void type node.
     */
    public: [[nodiscard]] static auto make_void() -> ad_type;

#line 343 "source/reverse_ad.h2"
    /*
      @brief Create an int type.
      @return int type node.
     */
    public: [[nodiscard]] static auto make_int() -> ad_type;

#line 353 "source/reverse_ad.h2"
    /*
      @brief Create a size_t type.
      @return size_t type node.
     */
    public: [[nodiscard]] static auto make_size_t() -> ad_type;

#line 363 "source/reverse_ad.h2"
    /*
      @brief Create a double type.
      @return double type node.
     */
    public: [[nodiscard]] static auto make_double() -> ad_type;

#line 373 "source/reverse_ad.h2"
    /*
      @brief Create a float type.
      @return float type node.
     */
    public: [[nodiscard]] static auto make_float() -> ad_type;

#line 383 "source/reverse_ad.h2"
    /*
      @brief Create a bool type.
      @return bool type node.
     */
    public: [[nodiscard]] static auto make_bool() -> ad_type;

#line 393 "source/reverse_ad.h2"
    /*
      @brief Create a char type.
      @return char type node.
     */
    public: [[nodiscard]] static auto make_char() -> ad_type;

#line 403 "source/reverse_ad.h2"
    // ===== Factory methods for composite types =====

    /*
      @brief Create a named type (non-template).
      @param type_name Fully qualified type name.
      @return Named type node.
     */
    public: [[nodiscard]] static auto make_named(cpp2::impl::in<std::string> type_name) -> ad_type;

#line 417 "source/reverse_ad.h2"
    /*
      @brief Create a const-qualified type.
      @param inner The type being const-qualified.
      @return const T type node.
     */
    public: [[nodiscard]] static auto make_const(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 429 "source/reverse_ad.h2"
    /*
      @brief Create an lvalue reference type.
      @param inner The type being referenced.
      @return T& type node.
     */
    public: [[nodiscard]] static auto make_ref(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 441 "source/reverse_ad.h2"
    /*
      @brief Create an rvalue reference type.
      @param inner The type being referenced.
      @return T&& type node.
     */
    public: [[nodiscard]] static auto make_rvalue_ref(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 453 "source/reverse_ad.h2"
    /*
      @brief Create a pointer type.
      @param inner The pointed-to type.
      @return T type node.
     */
    public: [[nodiscard]] static auto make_pointer(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 465 "source/reverse_ad.h2"
    /*
      @brief Create an array type.
      @param inner Element type.
      @param size Array size (0 for unsized).
      @return T[N] type node.
     */
    public: [[nodiscard]] static auto make_array(cpp2::impl::in<ad_type> inner, cpp2::impl::in<int> size) -> ad_type;

#line 479 "source/reverse_ad.h2"
    /*
      @brief Create a template instantiation type.
      @param template_name Template name (e.g., "std::vector").
      @param args Template type arguments.
      @return Template type node.
     */
    public: [[nodiscard]] static auto make_template(cpp2::impl::in<std::string> template_name, cpp2::impl::in<std::vector<ad_type>> args) -> ad_type;

#line 493 "source/reverse_ad.h2"
    // ===== Convenience factory methods for common patterns =====

    /*
      @brief Create a const reference type (const T&).
      @param inner The type being const-referenced.
      @return const T& type node.
     */
    public: [[nodiscard]] static auto make_const_ref(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 504 "source/reverse_ad.h2"
    /*
      @brief Create std::vector<T> type.
      @param elem Element type.
      @return std::vector<T> type node.
     */
    public: [[nodiscard]] static auto make_std_vector(cpp2::impl::in<ad_type> elem) -> ad_type;

#line 515 "source/reverse_ad.h2"
    // ===== Type query methods =====

    /*
      @brief Check if this type is const-qualified.
      @return true if const-qualified.
     */
    public: [[nodiscard]] auto is_const() const& -> bool;

#line 525 "source/reverse_ad.h2"
    /*
      @brief Check if this type is a reference.
      @return true if lvalue or rvalue reference.
     */
    public: [[nodiscard]] auto is_reference() const& -> bool;

#line 533 "source/reverse_ad.h2"
    /*
      @brief Check if this type is a pointer.
      @return true if pointer type.
     */
    public: [[nodiscard]] auto is_pointer() const& -> bool;

#line 541 "source/reverse_ad.h2"
    /*
      @brief Get the underlying type, stripping qualifiers and modifiers.
      @return Base type (recursive unwrap).
     */
    public: [[nodiscard]] auto get_base_type() const& -> ad_type;

#line 551 "source/reverse_ad.h2"
};

/*
  @brief Convert ad_type to string representation for code emission.
  @param t Type to convert.
  @return String representation of the type.
 */
[[nodiscard]] auto ad_type_to_string(cpp2::impl::in<ad_type> t) -> std::string;

#line 616 "source/reverse_ad.h2"
//-----------------------------------------------------------------------
//  Operation kinds for AD expressions
//-----------------------------------------------------------------------

/*
  @brief Operation kinds for AD expressions.
 
  These tags identify the operation type for expression nodes in the AD IR.
  Binary operators (+, -, , /) are handled explicitly by the builder.
  Function calls (sin, cos, exp, log, etc.) use the call tag.
 */
class ad_op_kind {
private: cpp2::i8 _value; private: constexpr ad_op_kind(cpp2::impl::in<cpp2::i64> _val);

private: constexpr auto operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_op_kind& ;
public: static const ad_op_kind add;
public: static const ad_op_kind sub;
public: static const ad_op_kind mul;
public: static const ad_op_kind div;
public: static const ad_op_kind mod;
public: static const ad_op_kind neg;
public: static const ad_op_kind pos;
public: static const ad_op_kind pre_inc;
public: static const ad_op_kind pre_dec;
public: static const ad_op_kind post_inc;
public: static const ad_op_kind post_dec;
public: static const ad_op_kind eq;
public: static const ad_op_kind ne;
public: static const ad_op_kind lt;
public: static const ad_op_kind gt;
public: static const ad_op_kind le;
public: static const ad_op_kind ge;
public: static const ad_op_kind spaceship;
public: static const ad_op_kind land;
public: static const ad_op_kind lor;
public: static const ad_op_kind lnot;
public: static const ad_op_kind band;
public: static const ad_op_kind bor;
public: static const ad_op_kind bxor;
public: static const ad_op_kind bnot;
public: static const ad_op_kind shl;
public: static const ad_op_kind shr;
public: static const ad_op_kind deref;
public: static const ad_op_kind addr_of;
public: static const ad_op_kind assign;
public: static const ad_op_kind assign_add;
public: static const ad_op_kind assign_sub;
public: static const ad_op_kind assign_mul;
public: static const ad_op_kind assign_div;
public: static const ad_op_kind assign_mod;
public: static const ad_op_kind assign_band;
public: static const ad_op_kind assign_bor;
public: static const ad_op_kind assign_bxor;
public: static const ad_op_kind assign_shl;
public: static const ad_op_kind assign_shr;
public: static const ad_op_kind dot;
public: static const ad_op_kind arrow;
public: static const ad_op_kind call;
public: static const ad_op_kind literal;
public: static const ad_op_kind identifier;
public: [[nodiscard]] constexpr auto get_raw_value() const& -> cpp2::i8;
public: constexpr explicit ad_op_kind();
public: constexpr ad_op_kind(ad_op_kind const& that);
public: constexpr auto operator=(ad_op_kind const& that) -> ad_op_kind& ;
public: constexpr ad_op_kind(ad_op_kind&& that) noexcept;
public: constexpr auto operator=(ad_op_kind&& that) noexcept -> ad_op_kind& ;
public: [[nodiscard]] auto operator<=>(ad_op_kind const& that) const& -> std::strong_ordering = default;
public: [[nodiscard]] auto to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string;
public: [[nodiscard]] auto to_string() const& -> std::string;
public: [[nodiscard]] auto to_code() const& -> std::string;
public: [[nodiscard]] static auto from_string(cpp2::impl::in<std::string_view> s) -> ad_op_kind;
public: [[nodiscard]] static auto from_code(cpp2::impl::in<std::string_view> s) -> ad_op_kind;

#line 628 "source/reverse_ad.h2"
    // Arithmetic operators
                // Binary addition
                // Binary subtraction
                // Binary multiplication
                // Binary division
                // Binary modulo
                // Unary negation
                // Unary plus

    // Increment/Decrement
                // Prefix increment (++x)
                // Prefix decrement (--x)
                // Postfix increment (x++)
                // Postfix decrement (x--)

    // Comparison operators
                // Equal (==)
                // Not equal (!=)
                // Less than (<)
                // Greater than (>)
                // Less or equal (<=)
                // Greater or equal (>=)
                // Three-way comparison (<=>)

    // Logical operators
                // Logical AND (&&)
                // Logical OR (||)
                // Logical NOT (!)

    // Bitwise operators
                // Bitwise AND (&)
                // Bitwise OR (|)
                // Bitwise XOR (^)
                // Bitwise NOT (~)
                // Left shift (<<)
                // Right shift (>>)

    // Pointer/Reference operators
                // Dereference (*)
                // Address-of (&)

    // Assignment operators (for compound assignments)
                // Simple assignment (=)
                // Add-assign (+=)
                // Subtract-assign (-=)
                // Multiply-assign (*=)
                // Divide-assign (/=)
                // Modulo-assign (%=)
                // Bitwise AND-assign (&=)
                // Bitwise OR-assign (|=)
                // Bitwise XOR-assign (^=)
                // Left shift-assign (<<=)
                // Right shift-assign (>>=)

    // Member access operators
                // Member access (.)
                // Pointer member access (->)

    // Function call (unchanged from before)
                // Function call (differentiation rules looked up by name)
                // Numeric literal
                // Variable reference
#line 690 "source/reverse_ad.h2"
};

/*
  @brief Expression node kinds for AD IR.
 
  Distinguishes between different expression forms in the typed IR.
  Extended to cover all C++ expression forms needed in autodiff rules.
 */
class ad_expr_kind {
private: cpp2::i8 _value; private: constexpr ad_expr_kind(cpp2::impl::in<cpp2::i64> _val);

private: constexpr auto operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_expr_kind& ;
public: static const ad_expr_kind literal;
public: static const ad_expr_kind identifier;
public: static const ad_expr_kind unary;
public: static const ad_expr_kind binary;
public: static const ad_expr_kind ternary;
public: static const ad_expr_kind member;
public: static const ad_expr_kind subscript;
public: static const ad_expr_kind call;
public: static const ad_expr_kind method_call;
public: static const ad_expr_kind cast;
public: static const ad_expr_kind construct;
public: static const ad_expr_kind paren;
public: static const ad_expr_kind lambda;
public: static const ad_expr_kind initializer_list;
public: [[nodiscard]] constexpr auto get_raw_value() const& -> cpp2::i8;
public: constexpr explicit ad_expr_kind();
public: constexpr ad_expr_kind(ad_expr_kind const& that);
public: constexpr auto operator=(ad_expr_kind const& that) -> ad_expr_kind& ;
public: constexpr ad_expr_kind(ad_expr_kind&& that) noexcept;
public: constexpr auto operator=(ad_expr_kind&& that) noexcept -> ad_expr_kind& ;
public: [[nodiscard]] auto operator<=>(ad_expr_kind const& that) const& -> std::strong_ordering = default;
public: [[nodiscard]] auto to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string;
public: [[nodiscard]] auto to_string() const& -> std::string;
public: [[nodiscard]] auto to_code() const& -> std::string;
public: [[nodiscard]] static auto from_string(cpp2::impl::in<std::string_view> s) -> ad_expr_kind;
public: [[nodiscard]] static auto from_code(cpp2::impl::in<std::string_view> s) -> ad_expr_kind;

#line 699 "source/reverse_ad.h2"
    // Values
                    // Numeric/string literal (e.g., 3.0, "hello")
                    // Variable reference (e.g., x)

    // Operations
                    // Unary operation (e.g., -x, !x, ++x)
                    // Binary operation (e.g., x + y, x && y)
                    // Conditional expression (a ? b : c)

    // Access
                    // Member access (obj.member or obj->member)
                    // Array/container subscript (arr[i])

    // Calls
                    // Function call (e.g., sin(x), std::abs(y))
                    // Method call (obj.method(args))

    // Type operations
                    // Type cast (static_cast<T>(x))
                    // Constructor call (T(args) or T{args})

    // Special
                    // Parenthesized expression ((expr))
                    // Lambda expression ([captures](params) { body })
                      // Initializer list ({a, b, c})
#line 724 "source/reverse_ad.h2"
};

/*
  @brief Statement node kinds for AD IR.
 
  Distinguishes between different statement forms in the typed IR.
  Extended to support loops, jumps, and all compound assignment forms.
 */
class ad_stmt_kind {
private: cpp2::i8 _value; private: constexpr ad_stmt_kind(cpp2::impl::in<cpp2::i64> _val);

private: constexpr auto operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_stmt_kind& ;
public: static const ad_stmt_kind decl;
public: static const ad_stmt_kind assign;
public: static const ad_stmt_kind compound_assign;
public: static const ad_stmt_kind assign_add;
public: static const ad_stmt_kind if_stmt;
public: static const ad_stmt_kind for_stmt;
public: static const ad_stmt_kind foreach_stmt;
public: static const ad_stmt_kind while_stmt;
public: static const ad_stmt_kind do_while_stmt;
public: static const ad_stmt_kind switch_stmt;
public: static const ad_stmt_kind return_;
public: static const ad_stmt_kind break_stmt;
public: static const ad_stmt_kind continue_stmt;
public: static const ad_stmt_kind compound;
public: static const ad_stmt_kind expr_stmt;
public: static const ad_stmt_kind expr;
public: static const ad_stmt_kind raw_code;
public: static const ad_stmt_kind try_catch;
public: static const ad_stmt_kind throw_stmt;
public: [[nodiscard]] constexpr auto get_raw_value() const& -> cpp2::i8;
public: constexpr explicit ad_stmt_kind();
public: constexpr ad_stmt_kind(ad_stmt_kind const& that);
public: constexpr auto operator=(ad_stmt_kind const& that) -> ad_stmt_kind& ;
public: constexpr ad_stmt_kind(ad_stmt_kind&& that) noexcept;
public: constexpr auto operator=(ad_stmt_kind&& that) noexcept -> ad_stmt_kind& ;
public: [[nodiscard]] auto operator<=>(ad_stmt_kind const& that) const& -> std::strong_ordering = default;
public: [[nodiscard]] auto to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string;
public: [[nodiscard]] auto to_string() const& -> std::string;
public: [[nodiscard]] auto to_code() const& -> std::string;
public: [[nodiscard]] static auto from_string(cpp2::impl::in<std::string_view> s) -> ad_stmt_kind;
public: [[nodiscard]] static auto from_code(cpp2::impl::in<std::string_view> s) -> ad_stmt_kind;

#line 733 "source/reverse_ad.h2"
    // Declarations
                    // Local variable declaration (name: type = init)

    // Assignments
                    // Simple assignment (x = expr)
                    // Compound assignment (x += expr, x -= expr, etc.)
                    // Uses op field to determine the compound operator

    // Legacy compound assignments (kept for backward compatibility)
                    // Add-assignment statement (+=) - prefer compound_assign

    // Control flow
                    // If statement with optional else
                    // C-style for loop (for init; cond; incr { body })
                    // Range-based for loop (for item in range { body })
                    // While loop (while cond { body })
                    // Do-while loop (do { body } while cond)
                    // Switch statement (switch expr { cases })

    // Jumps
                    // Return statement
                    // Break statement
                    // Continue statement

    // Blocks
                    // Compound statement/block ({ stmts })
                    // Expression statement (expr;) - alias for expr

    // Legacy
                    // Expression statement (kept for backward compatibility)
                    // Raw code string - DEPRECATED, to be removed

    // Exception handling (future)
                    // Try-catch block
                    // Throw statement
#line 768 "source/reverse_ad.h2"
};

/*
  @brief Typed IR expression node.
 
  Represents an expression in the AD IR. The `kind` field determines
  how other fields are interpreted:
  - literal: `name` holds the literal value string
  - identifier: `name` holds the variable name
  - unary: `op` holds the operation, `args[0]` is the operand
  - binary: `op` holds the operation, `args[0]` and `args[1]` are operands
  - ternary: `args[0]` is condition, `args[1]` is then-expr, `args[2]` is else-expr
  - member: `args[0]` is object, `member_name` is member, `op` is dot/arrow
  - subscript: `args[0]` is array/container, `args[1]` is index
  - call: `name` is function name, `args` are arguments, `type_args` for template args
  - method_call: `args[0]` is object, `name` is method, `args[1..]` are call arguments
  - cast: `name` is cast kind (static_cast etc), `cast_type` is target type, `args[0]` is expr
  - construct: `name` is type name, `args` are constructor arguments
  - paren: `args[0]` is inner expression
  - lambda: `lambda_body` holds the body statements, `lambda_params` holds parameters
  - initializer_list: `args` holds the list elements
 */
class ad_expr {
           public: ad_expr_kind kind {ad_expr_kind::literal}; 
           public: std::string type_name {""};                    // Result type (string form)
           public: std::shared_ptr<ad_type> expr_type {};         // Result type (structured form)
           public: std::string name {""};                         // For identifiers/literals/calls
           public: ad_op_kind op {ad_op_kind::add};               // Operation kind
           public: std::vector<ad_expr> args {};                  // Operands/arguments
           public: std::string member_name {""};                  // For member access
           public: std::vector<ad_type> type_args {};             // Template type arguments
           public: std::shared_ptr<ad_type> cast_type {};         // Target type for casts
    public: std::vector<std::pair<std::string,std::string>> lambda_params {};    // Lambda params (name, type)
    public: std::shared_ptr<std::vector<ad_stmt>> lambda_body {};     // Lambda body (forward decl workaround)

    /// Default constructor
    public: explicit ad_expr();

    /// Copy constructor
    public: ad_expr(ad_expr const& that);
#line 807 "source/reverse_ad.h2"
    public: auto operator=(ad_expr const& that) -> ad_expr& ;
#line 807 "source/reverse_ad.h2"
    public: ad_expr(ad_expr&& that) noexcept;
#line 807 "source/reverse_ad.h2"
    public: auto operator=(ad_expr&& that) noexcept -> ad_expr& ;

    // ===== Factory methods for basic expressions =====

    /*
      @brief Create a literal expression.
      @param value Literal value as string.
      @param type_name_ Type of the literal.
      @return Literal expression node.
     */
    public: [[nodiscard]] static auto make_literal(cpp2::impl::in<std::string> value, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 826 "source/reverse_ad.h2"
    /*
      @brief Create a literal expression with structured type.
      @param value Literal value as string.
      @param t Structured type.
      @return Literal expression node.
     */
    public: [[nodiscard]] static auto make_literal_typed(cpp2::impl::in<std::string> value, cpp2::impl::in<ad_type> t) -> ad_expr;

#line 842 "source/reverse_ad.h2"
    /*
      @brief Create an identifier expression.
      @param name_ Variable name.
      @param type_name_ Type of the variable.
      @return Identifier expression node.
     */
    public: [[nodiscard]] static auto make_identifier(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 857 "source/reverse_ad.h2"
    /*
      @brief Create an identifier expression with structured type.
      @param name_ Variable name.
      @param t Structured type.
      @return Identifier expression node.
     */
    public: [[nodiscard]] static auto make_identifier_typed(cpp2::impl::in<std::string> name_, cpp2::impl::in<ad_type> t) -> ad_expr;

#line 873 "source/reverse_ad.h2"
    // ===== Factory methods for operations =====

    /*
      @brief Create a unary expression.
      @param op_ Operation kind (e.g., neg, lnot, pre_inc).
      @param operand Operand expression.
      @param type_name_ Result type.
      @return Unary expression node.
     */
    public: [[nodiscard]] static auto make_unary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> operand, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 891 "source/reverse_ad.h2"
    /*
      @brief Create a binary expression.
      @param op_ Operation kind (e.g., add, mul, lt, land).
      @param lhs Left operand.
      @param rhs Right operand.
      @param type_name_ Result type.
      @return Binary expression node.
     */
    public: [[nodiscard]] static auto make_binary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 909 "source/reverse_ad.h2"
    /*
      @brief Create a ternary (conditional) expression.
      @param condition Condition expression.
      @param then_expr Expression if condition is true.
      @param else_expr Expression if condition is false.
      @param type_name_ Result type.
      @return Ternary expression node.
     */
    public: [[nodiscard]] static auto make_ternary(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<ad_expr> then_expr, cpp2::impl::in<ad_expr> else_expr, 
                   cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 928 "source/reverse_ad.h2"
    // ===== Factory methods for access expressions =====

    /*
      @brief Create a member access expression (obj.member or obj->member).
      @param object Object expression.
      @param member Member name.
      @param is_arrow true for ->, false for .
      @param type_name_ Result type.
      @return Member access expression node.
     */
    public: [[nodiscard]] static auto make_member(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> member, cpp2::impl::in<bool> is_arrow, 
                  cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 950 "source/reverse_ad.h2"
    /*
      @brief Create a subscript expression (arr[index]).
      @param array Array/container expression.
      @param index Index expression.
      @param type_name_ Result type (element type).
      @return Subscript expression node.
     */
    public: [[nodiscard]] static auto make_subscript(cpp2::impl::in<ad_expr> array, cpp2::impl::in<ad_expr> index, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 966 "source/reverse_ad.h2"
    // ===== Factory methods for calls =====

    /*
      @brief Create a function call expression.
      @param func_name Function name.
      @param op_ Operation kind (call or specific like sin).
      @param call_args Arguments to the function.
      @param type_name_ Result type.
      @return Call expression node.
     */
    public: [[nodiscard]] static auto make_call(cpp2::impl::in<std::string> func_name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<std::vector<ad_expr>> call_args, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 986 "source/reverse_ad.h2"
    /*
      @brief Create a function call with template arguments.
      @param func_name Function name.
      @param call_args Arguments to the function.
      @param template_args Template type arguments.
      @param type_name_ Result type.
      @return Call expression node with template arguments.
     */
    public: [[nodiscard]] static auto make_template_call(cpp2::impl::in<std::string> func_name, cpp2::impl::in<std::vector<ad_expr>> call_args, 
                         cpp2::impl::in<std::vector<ad_type>> template_args, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 1006 "source/reverse_ad.h2"
    /*
      @brief Create a method call expression (obj.method(args)).
      @param object Object expression.
      @param method_name Method name.
      @param call_args Arguments to the method.
      @param type_name_ Result type.
      @return Method call expression node.
     */
    public: [[nodiscard]] static auto make_method_call(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> method_name, 
                       cpp2::impl::in<std::vector<ad_expr>> call_args, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 1028 "source/reverse_ad.h2"
    // ===== Factory methods for type operations =====

    /*
      @brief Create a type cast expression.
      @param cast_kind Cast kind ("static_cast", "dynamic_cast", "reinterpret_cast", "const_cast", or "").
      @param target_type Target type.
      @param expr Expression to cast.
      @param type_name_ Result type name.
      @return Cast expression node.
     */
    public: [[nodiscard]] static auto make_cast(cpp2::impl::in<std::string> cast_kind, cpp2::impl::in<ad_type> target_type, cpp2::impl::in<ad_expr> expr, 
                cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 1049 "source/reverse_ad.h2"
    /*
      @brief Create a constructor call expression (T(args) or T{args}).
      @param type_name_ Type being constructed.
      @param construct_args Constructor arguments.
      @return Constructor expression node.
     */
    public: [[nodiscard]] static auto make_construct(cpp2::impl::in<std::string> type_name_, cpp2::impl::in<std::vector<ad_expr>> construct_args) -> ad_expr;

#line 1064 "source/reverse_ad.h2"
    // ===== Factory methods for special expressions =====

    /*
      @brief Create a parenthesized expression.
      @param inner Inner expression.
      @return Parenthesized expression node.
     */
    public: [[nodiscard]] static auto make_paren(cpp2::impl::in<ad_expr> inner) -> ad_expr;

#line 1079 "source/reverse_ad.h2"
    /*
      @brief Create an initializer list expression ({a, b, c}).
      @param elements List elements.
      @param type_name_ Result type (e.g., "std::initializer_list<int>").
      @return Initializer list expression node.
     */
    public: [[nodiscard]] static auto make_initializer_list(cpp2::impl::in<std::vector<ad_expr>> elements, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 1093 "source/reverse_ad.h2"
    // ===== Convenience factory methods =====

    /*
      @brief Create an integer literal.
      @param value Integer value.
      @return Integer literal expression.
     */
    public: [[nodiscard]] static auto make_int_literal(cpp2::impl::in<int> value) -> ad_expr;

#line 1104 "source/reverse_ad.h2"
    /*
      @brief Create a double literal.
      @param value Double value.
      @return Double literal expression.
     */
    public: [[nodiscard]] static auto make_double_literal(cpp2::impl::in<double> value) -> ad_expr;

#line 1113 "source/reverse_ad.h2"
    /*
      @brief Create a boolean literal.
      @param value Boolean value.
      @return Boolean literal expression.
     */
    public: [[nodiscard]] static auto make_bool_literal(cpp2::impl::in<bool> value) -> ad_expr;

#line 1122 "source/reverse_ad.h2"
};

/*
  @brief Typed IR statement node.
 
  Represents a statement in the AD IR. The `kind` field determines
  how other fields are interpreted:
  - decl: `target` is variable name, `type_name`/`decl_type` is its type, `expr` is initializer
  - assign: `target` is variable name, `expr` is the value
  - compound_assign: `target` is variable, `op` determines operator, `expr` is value
  - expr/expr_stmt: `expr` is the expression to evaluate
  - return_: `expr` is the return value
  - compound: `stmts` contains nested statements
  - if_stmt: `expr` is condition, `stmts` is then-branch, `else_stmts` is else-branch
  - for_stmt: `init_stmt` is init, `expr` is condition, `incr_expr` is increment, `stmts` is body
  - foreach_stmt: `target` is loop var, `type_name` is var type, `range_expr` is range, `stmts` is body
  - while_stmt: `expr` is condition, `stmts` is body
  - do_while_stmt: `stmts` is body, `expr` is condition
  - break_stmt/continue_stmt: no additional fields
  - switch_stmt: `expr` is switch expression, `switch_cases` holds case/default blocks
 */
class ad_stmt {
           public: ad_stmt_kind kind {ad_stmt_kind::expr}; 
           public: std::string target {""};                    // Variable name for decl/assign
           public: std::string type_name {""};                 // Type string for declarations
           public: std::shared_ptr<ad_type> decl_type {};      // Structured type for declarations
           public: ad_op_kind op {ad_op_kind::assign};         // For compound_assign
           public: ad_expr expr {};                            // Main expression
           public: std::vector<ad_stmt> stmts {};              // Body statements
    public: std::vector<ad_stmt> else_stmts {};                // Else branch for if_stmt

    // Loop-specific fields
           public: std::shared_ptr<ad_stmt> init_stmt {};      // for(init; ...; ...)
           public: ad_expr incr_expr {};                       // for(...; ...; incr)
    public: ad_expr range_expr {};                             // foreach range expression

    // Switch-specific fields (case value expr, case body statements)
    public: std::vector<std::pair<ad_expr,std::vector<ad_stmt>>> switch_cases {}; 
    public: std::vector<ad_stmt> default_case {};              // default case body

    // Exception handling fields
           public: std::string catch_var {""};                 // catch(Type catch_var)
    public: std::string catch_type {""};                       // catch type
    public: std::vector<ad_stmt> catch_stmts {};               // catch body

    /// Default constructor
    public: explicit ad_stmt();

    /// Copy constructor
    public: ad_stmt(ad_stmt const& that);
#line 1171 "source/reverse_ad.h2"
    public: auto operator=(ad_stmt const& that) -> ad_stmt& ;
#line 1171 "source/reverse_ad.h2"
    public: ad_stmt(ad_stmt&& that) noexcept;
#line 1171 "source/reverse_ad.h2"
    public: auto operator=(ad_stmt&& that) noexcept -> ad_stmt& ;

    // ===== Factory methods for declarations and assignments =====

    /*
      @brief Create a declaration statement.
      @param name Variable name.
      @param type_name_ Variable type.
      @param init Initializer expression.
      @return Declaration statement node.
     */
    public: [[nodiscard]] static auto make_decl(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<ad_expr> init) -> ad_stmt;

#line 1191 "source/reverse_ad.h2"
    /*
      @brief Create a declaration statement with structured type.
      @param name Variable name.
      @param t Structured type.
      @param init Initializer expression.
      @return Declaration statement node.
     */
    public: [[nodiscard]] static auto make_decl_typed(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_type> t, cpp2::impl::in<ad_expr> init) -> ad_stmt;

#line 1208 "source/reverse_ad.h2"
    /*
      @brief Create an assignment statement.
      @param name Target variable name.
      @param value Value expression.
      @return Assignment statement node.
     */
    public: [[nodiscard]] static auto make_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 1222 "source/reverse_ad.h2"
    /*
      @brief Create a compound assignment statement (+=, -=, =, /=, etc.).
      @param name Target variable name.
      @param op_ Compound assignment operator (assign_add, assign_sub, etc.).
      @param value Value expression.
      @return Compound assignment statement node.
     */
    public: [[nodiscard]] static auto make_compound_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 1238 "source/reverse_ad.h2"
    /*
      @brief Create an add-assignment statement (+=).
      @param name Target variable name.
      @param value Value expression to add.
      @return Add-assignment statement node.
      @note Legacy method - prefer make_compound_assign for new code.
     */
    public: [[nodiscard]] static auto make_assign_add(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 1253 "source/reverse_ad.h2"
    /*
      @brief Create a subtract-assignment statement (-=).
      @param name Target variable name.
      @param value Value expression to subtract.
      @return Subtract-assignment statement node.
     */
    public: [[nodiscard]] static auto make_assign_sub(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 1263 "source/reverse_ad.h2"
    /*
      @brief Create a multiply-assignment statement (=).
      @param name Target variable name.
      @param value Value expression to multiply.
      @return Multiply-assignment statement node.
     */
    public: [[nodiscard]] static auto make_assign_mul(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 1273 "source/reverse_ad.h2"
    /*
      @brief Create a divide-assignment statement (/=).
      @param name Target variable name.
      @param value Value expression to divide.
      @return Divide-assignment statement node.
     */
    public: [[nodiscard]] static auto make_assign_div(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 1283 "source/reverse_ad.h2"
    // ===== Factory methods for expression and return statements =====

    /*
      @brief Create an expression statement.
      @param e Expression to evaluate.
      @return Expression statement node.
     */
    public: [[nodiscard]] static auto make_expr(cpp2::impl::in<ad_expr> e) -> ad_stmt;

#line 1297 "source/reverse_ad.h2"
    /*
      @brief Create a return statement.
      @param value Return value expression.
      @return Return statement node.
     */
    public: [[nodiscard]] static auto make_return(cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 1309 "source/reverse_ad.h2"
    // ===== Factory methods for control flow =====

    /*
      @brief Create a compound statement.
      @param nested Nested statements.
      @return Compound statement node.
     */
    public: [[nodiscard]] static auto make_compound(cpp2::impl::in<std::vector<ad_stmt>> nested) -> ad_stmt;

#line 1323 "source/reverse_ad.h2"
    /*
      @brief Create an if statement.
      @param condition Condition expression.
      @param then_body Statements for the then branch.
      @param else_body Statements for the else branch (may be empty).
      @return If statement node.
     */
    public: [[nodiscard]] static auto make_if(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> then_body, 
              cpp2::impl::in<std::vector<ad_stmt>> else_body) -> ad_stmt;

#line 1340 "source/reverse_ad.h2"
    /*
      @brief Create a C-style for loop.
      @param init Initialization statement.
      @param condition Loop condition.
      @param increment Increment expression.
      @param body Loop body statements.
      @return For loop statement node.
     */
    public: [[nodiscard]] static auto make_for(cpp2::impl::in<ad_stmt> init, cpp2::impl::in<ad_expr> condition, cpp2::impl::in<ad_expr> increment, 
               cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 1359 "source/reverse_ad.h2"
    /*
      @brief Create a range-based for loop (foreach).
      @param var_name Loop variable name.
      @param var_type Loop variable type.
      @param range Range expression.
      @param body Loop body statements.
      @return Foreach loop statement node.
     */
    public: [[nodiscard]] static auto make_foreach(cpp2::impl::in<std::string> var_name, cpp2::impl::in<std::string> var_type, 
                   cpp2::impl::in<ad_expr> range, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 1378 "source/reverse_ad.h2"
    /*
      @brief Create a while loop.
      @param condition Loop condition.
      @param body Loop body statements.
      @return While loop statement node.
     */
    public: [[nodiscard]] static auto make_while(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 1392 "source/reverse_ad.h2"
    /*
      @brief Create a do-while loop.
      @param body Loop body statements.
      @param condition Loop condition (checked after body).
      @return Do-while loop statement node.
     */
    public: [[nodiscard]] static auto make_do_while(cpp2::impl::in<std::vector<ad_stmt>> body, cpp2::impl::in<ad_expr> condition) -> ad_stmt;

#line 1406 "source/reverse_ad.h2"
    // ===== Factory methods for jump statements =====

    /*
      @brief Create a break statement.
      @return Break statement node.
     */
    public: [[nodiscard]] static auto make_break() -> ad_stmt;

#line 1418 "source/reverse_ad.h2"
    /*
      @brief Create a continue statement.
      @return Continue statement node.
     */
    public: [[nodiscard]] static auto make_continue() -> ad_stmt;

#line 1428 "source/reverse_ad.h2"
    // ===== Factory methods for switch statement =====

    /*
      @brief Create a switch statement.
      @param switch_expr Expression to switch on.
      @param cases Vector of (case_value, case_body) pairs.
      @param default_body Default case body (may be empty).
      @return Switch statement node.
     */
    public: [[nodiscard]] static auto make_switch(cpp2::impl::in<ad_expr> switch_expr, 
                  cpp2::impl::in<std::vector<std::pair<ad_expr,std::vector<ad_stmt>>>> cases, 
                  cpp2::impl::in<std::vector<ad_stmt>> default_body) -> ad_stmt;

#line 1448 "source/reverse_ad.h2"
    // ===== Factory methods for exception handling =====

    /*
      @brief Create a try-catch statement.
      @param try_body Try block statements.
      @param catch_type_ Exception type to catch.
      @param catch_var_ Variable name for caught exception.
      @param catch_body Catch block statements.
      @return Try-catch statement node.
     */
    public: [[nodiscard]] static auto make_try_catch(cpp2::impl::in<std::vector<ad_stmt>> try_body, 
                     cpp2::impl::in<std::string> catch_type_, cpp2::impl::in<std::string> catch_var_, 
                     cpp2::impl::in<std::vector<ad_stmt>> catch_body) -> ad_stmt;

#line 1470 "source/reverse_ad.h2"
    /*
      @brief Create a throw statement.
      @param throw_expr Expression to throw.
      @return Throw statement node.
     */
    public: [[nodiscard]] static auto make_throw(cpp2::impl::in<ad_expr> throw_expr) -> ad_stmt;

#line 1482 "source/reverse_ad.h2"
    // ===== Legacy factory methods =====

    /*
      @brief Create a raw code statement for inlined rule bodies.
      @param code Raw Cpp2 code string to emit.
      @return Raw code statement node.
      @deprecated Will be removed after IR-based rule substitution is complete.
     */
    public: [[nodiscard]] static auto make_raw_code(cpp2::impl::in<std::string> code) -> ad_stmt;

#line 1496 "source/reverse_ad.h2"
};

/*
  @brief Typed IR parameter declaration.
 
  Represents a function parameter or return value in the AD IR.
 */
class ad_param {
           public: std::string name {""}; 
    public: std::string type_name {""}; 
    public: passing_style pass {passing_style::in}; 
    public: bool is_active {false}; 

    /// Default constructor
    public: explicit ad_param();

    /// Copy constructor
    public: ad_param(ad_param const& that);
#line 1513 "source/reverse_ad.h2"
    public: auto operator=(ad_param const& that) -> ad_param& ;
#line 1513 "source/reverse_ad.h2"
    public: ad_param(ad_param&& that) noexcept;
#line 1513 "source/reverse_ad.h2"
    public: auto operator=(ad_param&& that) noexcept -> ad_param& ;

    /*
      @brief Create a parameter.
      @param name_ Parameter name.
      @param type_name_ Parameter type.
      @param pass_ Passing style.
      @param is_active_ Whether the parameter is active for AD.
      @return Parameter node.
     */
    public: [[nodiscard]] static auto make(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<passing_style> pass_, cpp2::impl::in<bool> is_active_) -> ad_param;

#line 1531 "source/reverse_ad.h2"
};

/*
  @brief Typed IR for a reverse-mode function.
 
  Contains the complete IR representation of a function being transformed
  for reverse-mode autodiff, including parameters, returns, and the
  forward/reverse pass statements.
 */
class ad_function_ir {
           public: std::string name {""}; 
           public: std::vector<ad_param> params {}; 
    public: std::vector<ad_param> returns {}; 
    public: std::vector<ad_stmt> forward {}; 
    public: std::vector<ad_stmt> reverse {}; 

    /// Default constructor
    public: explicit ad_function_ir();

    /// Copy constructor
    public: ad_function_ir(ad_function_ir const& that);
#line 1551 "source/reverse_ad.h2"
    public: auto operator=(ad_function_ir const& that) -> ad_function_ir& ;
#line 1551 "source/reverse_ad.h2"
    public: ad_function_ir(ad_function_ir&& that) noexcept;
#line 1551 "source/reverse_ad.h2"
    public: auto operator=(ad_function_ir&& that) noexcept -> ad_function_ir& ;
};

//-----------------------------------------------------------------------
//
//  AD IR debug dump functions
//
//-----------------------------------------------------------------------

/*
  @brief Convert ad_op_kind to string for debug output.
  @param op Operation kind.
  @return String representation.
 */
[[nodiscard]] auto ad_op_kind_to_string(cpp2::impl::in<ad_op_kind> op) -> std::string;

#line 1632 "source/reverse_ad.h2"
//-----------------------------------------------------------------------
//
//  IR-based parameter substitution for rule bodies
//
//-----------------------------------------------------------------------

/*
  @brief Substitution context maps parameter names to IR expressions.
 
  Used during rule body parsing to replace parameter names (like res_val,
  x_adj) with the actual IR expressions for those values/adjoints.
 */
class ad_substitution_context {
    public: std::vector<std::pair<std::string,ad_expr>> substitutions {}; 

    /// Default constructor
    public: explicit ad_substitution_context();

    /// Copy constructor
    public: ad_substitution_context(ad_substitution_context const& that);
#line 1651 "source/reverse_ad.h2"
    public: auto operator=(ad_substitution_context const& that) -> ad_substitution_context& ;
#line 1651 "source/reverse_ad.h2"
    public: ad_substitution_context(ad_substitution_context&& that) noexcept;
#line 1651 "source/reverse_ad.h2"
    public: auto operator=(ad_substitution_context&& that) noexcept -> ad_substitution_context& ;

    /*
      @brief Add a substitution mapping.
      @param param_name Parameter name to substitute (e.g., "res_val", "x_adj").
      @param expr IR expression to substitute in place of the parameter.
     */
    public: auto add(cpp2::impl::in<std::string> param_name, cpp2::impl::in<ad_expr> expr) & -> void;

#line 1662 "source/reverse_ad.h2"
    /*
      @brief Find a substitution for a parameter name.
      @param name Parameter name to look up.
      @param result Output parameter for the found expression.
      @return true if found, false otherwise.
     */
    public: [[nodiscard]] auto find(cpp2::impl::in<std::string> name, ad_expr& result) const& -> bool;

#line 1678 "source/reverse_ad.h2"
    /*
      @brief Check if a name has a substitution.
      @param name Parameter name to check.
      @return true if a substitution exists for this name.
     */
    public: [[nodiscard]] auto has(cpp2::impl::in<std::string> name) const& -> bool;

#line 1692 "source/reverse_ad.h2"
    /*
      @brief Get the number of substitutions.
      @return Number of substitution mappings.
     */
    public: [[nodiscard]] auto size() const& -> int;

#line 1699 "source/reverse_ad.h2"
};

/*
  @brief Substitute parameter names in an IR expression.
 
  Recursively walks the expression tree and replaces identifier nodes
  whose names match entries in the substitution context.
 
  @param expr Expression to process.
  @param ctx Substitution context mapping names to replacement expressions.
  @return New expression with substitutions applied.
 */
[[nodiscard]] auto substitute_expr_params(cpp2::impl::in<ad_expr> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_expr;

#line 1757 "source/reverse_ad.h2"
/*
  @brief Substitute parameter names in an IR statement.
 
  Recursively processes the statement and any nested expressions/statements,
  replacing identifier names according to the substitution context.
 
  @param stmt Statement to process.
  @param ctx Substitution context mapping names to replacement expressions.
  @return New statement with substitutions applied.
 */
[[nodiscard]] auto substitute_stmt_params(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_stmt;

#line 1837 "source/reverse_ad.h2"
//-----------------------------------------------------------------------
//
//  Subtask 3: ad_rule registry + discovery
//
//-----------------------------------------------------------------------

/*
  @brief Metadata for a discovered user-defined AD rule type.
 
  An ad_rule is a nested type inside a @autodiff<"reverse"> annotated type
  that declares `name`, `n_args`, `is_member`, `forward`, and `reverse` members.
  These rules override the default differentiation for specific function calls.
 */
class ad_rule_meta {
           public: std::string name {""}; 
           public: int n_args {0}; 
    public: bool is_member {false}; 
    public: std::string rule_type {""};   // Type name for debug
    public: std::string forward_body {""};   // Forward function body (for debug/emit)
    public: std::string reverse_body {""};   // Reverse function body (for debug/emit)

    // NEW: Store AST statements from the reverse() function body for IR-based parsing
    // This enables proper IR-based substitution instead of string manipulation
    public: std::vector<statement> reverse_body_stmts {}; 
    public: bool has_reverse_body_stmts {false}; 

    /// Default constructor
    public: explicit ad_rule_meta();

    // ad_rule_meta is move-only because it contains std::vector<statement>
    // and statement has deleted copy assignment (it's @polymorphic_base)

    /// Move constructor
    public: ad_rule_meta(ad_rule_meta&& that) noexcept;

#line 1881 "source/reverse_ad.h2"
    /*
      @brief Create rule metadata.
      @param name_ Rule name (matches function name).
      @param n_args_ Number of arguments.
      @param is_member_ Whether this is a member function rule.
      @param rule_type_ Name of the rule type (for debug).
      @return Rule metadata.
     */
    public: [[nodiscard]] static auto make(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, cpp2::impl::in<std::string> rule_type_) -> ad_rule_meta;

#line 1897 "source/reverse_ad.h2"
};

/*
  @brief Result of applying an AD rule's reverse body.
 
  Contains the generated IR statements.
  All data is owned by this result - no references to registry internals.
  If ir_success is false, the caller MUST fail with an error - there is no fallback.
 */
class ad_reverse_rule_result {
           public: bool found {false};                  // Whether rule exists
           public: std::vector<ad_stmt> ir_stmts {};    // Generated IR statements
           public: bool ir_success {false};             // Whether IR parsing succeeded
           public: std::string rule_type {""};          // For debug messages
           public: std::string error_message {""};      // Error description if parsing failed

    public: explicit ad_reverse_rule_result();
    public: ad_reverse_rule_result(ad_reverse_rule_result const& that);
#line 1914 "source/reverse_ad.h2"
    public: auto operator=(ad_reverse_rule_result const& that) -> ad_reverse_rule_result& ;
#line 1914 "source/reverse_ad.h2"
    public: ad_reverse_rule_result(ad_reverse_rule_result&& that) noexcept;
#line 1914 "source/reverse_ad.h2"
    public: auto operator=(ad_reverse_rule_result&& that) noexcept -> ad_reverse_rule_result& ;

    public: [[nodiscard]] static auto make_not_found() -> ad_reverse_rule_result;

#line 1921 "source/reverse_ad.h2"
    public: [[nodiscard]] static auto make_success(cpp2::impl::in<std::vector<ad_stmt>> stmts, cpp2::impl::in<std::string> rule_type_) -> ad_reverse_rule_result;

#line 1930 "source/reverse_ad.h2"
    public: [[nodiscard]] static auto make_parse_error(cpp2::impl::in<std::string> rule_type_, cpp2::impl::in<std::string> error_msg) -> ad_reverse_rule_result;

#line 1938 "source/reverse_ad.h2"
};

/*
  @brief Registry of user-defined AD rules.
 
  Rules are discovered by scanning nested types in the annotated type.
  The registry owns all rules and provides methods to apply them.
  Rules never leave the registry - callers receive results, not rule references.
 */
class ad_rule_registry {
    public: std::vector<ad_rule_meta> rules {}; 

    /// Default constructor
    public: explicit ad_rule_registry();

    /*
      @brief Register a new rule (takes ownership via move).
      @param rule Rule metadata to register.
     */
    public: auto register_rule(ad_rule_meta&& rule) & -> void;

#line 1961 "source/reverse_ad.h2"
    /*
      @brief Check if a rule exists.
     */
    public: [[nodiscard]] auto has_rule(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> bool;

#line 1973 "source/reverse_ad.h2"
    /*
      @brief Get rule type name for debug messages.
     */
    public: [[nodiscard]] auto get_rule_type(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> std::string;

#line 1985 "source/reverse_ad.h2"
    /*
      @brief Apply rule's reverse body with substitutions.
     
      Parses the rule's reverse body statements into IR with the given substitution context.
      All work is done inside the registry - no rule references escape.
      If the rule has no body or parsing fails, ir_success will be false.
     
      @param name_ Function name to match.
      @param n_args_ Number of arguments.
      @param is_member_ Whether to match member functions.
      @param ctx Substitution context for parameter replacement.
      @return Result with IR statements. Caller MUST check ir_success and fail if false.
     */
    public: [[nodiscard]] auto apply_reverse_rule(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, 
                         cpp2::impl::in<ad_substitution_context> ctx) const& -> ad_reverse_rule_result;

#line 2022 "source/reverse_ad.h2"
    /*
      @brief Get the number of registered rules.
      @return Number of rules.
     */
    public: [[nodiscard]] auto size() const& -> int;

#line 2030 "source/reverse_ad.h2"
    /*
      @brief Check if an operator has a registered rule.
     
      Operators are stored with their symbol as the name ("+", "-", "", "/").
      This provides a unified interface for both operators and functions.
     
      @param op_name Operator symbol (e.g., "+", "-", "", "/").
      @return true if a rule exists for this operator.
     */
    public: [[nodiscard]] auto has_operator_rule(cpp2::impl::in<std::string> op_name) const& -> bool;

#line 2044 "source/reverse_ad.h2"
    /*
      @brief Apply an operator's reverse rule.
     
      Operators are treated identically to functions in the rule system.
      The operator symbol is used as the rule name.
     
      @param op_name Operator symbol (e.g., "+", "-", "", "/").
      @param ctx Substitution context mapping lhs_val, rhs_val, res_adj, etc.
      @return Result with IR statements for the reverse pass.
     */
    public: [[nodiscard]] auto apply_operator_rule(cpp2::impl::in<std::string> op_name, 
                          cpp2::impl::in<ad_substitution_context> ctx) const& -> ad_reverse_rule_result;
    public: ad_rule_registry(ad_rule_registry const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_registry const&) -> void = delete;


#line 2059 "source/reverse_ad.h2"
};

/*
  @brief Debug dump for ad_rule_meta.
  @param rule Rule to dump.
 */
auto ad_rule_debug_dump(cpp2::impl::in<ad_rule_meta> rule) -> void;

#line 2072 "source/reverse_ad.h2"
/*
  @brief Debug dump for ad_rule_registry.
  @param reg Registry to dump.
 */
auto ad_rule_registry_debug_dump(cpp2::impl::in<ad_rule_registry> reg) -> void;

#line 2084 "source/reverse_ad.h2"
/*
  @brief Check if a type member looks like an ad_rule definition.
 
  A valid ad_rule type must have:
  - A `name` member object (string)
  - An `n_args` member object (int)
  - A `forward` member function
  - A `reverse` member function
 
  @param member_type Type declaration to check.
  @return True if this looks like an ad_rule.
 */
[[nodiscard]] auto is_ad_rule_type(cpp2::impl::in<meta::type_declaration> member_type) -> bool;

#line 2125 "source/reverse_ad.h2"
/*
  @brief Extract ad_rule metadata from a type declaration.
 
  Assumes is_ad_rule_type() has already returned true.
  Extracts the reverse() function body for later inlining.
 
  @param member_type Pointer to the rule type to extract from.
  @return Extracted rule metadata.
 */
[[nodiscard]] auto extract_ad_rule_meta(cpp2::impl::in<meta::type_declaration*> member_type) -> ad_rule_meta;

#line 2206 "source/reverse_ad.h2"
/*
  @brief Discover ad_rule types inside an annotated type.
 
  Scans all nested types and checks if they conform to the ad_rule pattern.
  Matching rules are registered in the output registry.
 
  @param t Type declaration to scan.
  @param out Registry to populate.
 */
auto discover_ad_rules(cpp2::impl::in<meta::type_declaration> t, ad_rule_registry& out) -> void;

#line 2261 "source/reverse_ad.h2"
//-----------------------------------------------------------------------
//
//  Subtask 3b: Rule body extraction and inlining
//
//-----------------------------------------------------------------------

/*
  @brief Result of extracting a rule's reverse() body.
 */
class ad_rule_body_result {
           public: bool ok {false}; 
    public: std::string body_str {""}; 

    public: explicit ad_rule_body_result();
    public: ad_rule_body_result(ad_rule_body_result const& that);
#line 2275 "source/reverse_ad.h2"
    public: auto operator=(ad_rule_body_result const& that) -> ad_rule_body_result& ;
#line 2275 "source/reverse_ad.h2"
    public: ad_rule_body_result(ad_rule_body_result&& that) noexcept;
#line 2275 "source/reverse_ad.h2"
    public: auto operator=(ad_rule_body_result&& that) noexcept -> ad_rule_body_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<std::string> body_) -> ad_rule_body_result;

#line 2283 "source/reverse_ad.h2"
};

//-----------------------------------------------------------------------
//
//  AST-to-IR parsing for rule bodies
//
//-----------------------------------------------------------------------

/*
  @brief Result of parsing an AST expression to IR.
 */
class ad_parse_expr_result {
           public: bool ok {false}; 
    public: ad_expr expr {}; 

    public: explicit ad_parse_expr_result();
    public: ad_parse_expr_result(ad_parse_expr_result const& that);
#line 2299 "source/reverse_ad.h2"
    public: auto operator=(ad_parse_expr_result const& that) -> ad_parse_expr_result& ;
#line 2299 "source/reverse_ad.h2"
    public: ad_parse_expr_result(ad_parse_expr_result&& that) noexcept;
#line 2299 "source/reverse_ad.h2"
    public: auto operator=(ad_parse_expr_result&& that) noexcept -> ad_parse_expr_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_expr> expr_) -> ad_parse_expr_result;

#line 2308 "source/reverse_ad.h2"
    public: [[nodiscard]] static auto make_fail() -> ad_parse_expr_result;

#line 2313 "source/reverse_ad.h2"
};

/*
  @brief Result of parsing an AST statement to IR.
 */
class ad_parse_stmt_result {
           public: bool ok {false}; 
    public: ad_stmt stmt {}; 

    public: explicit ad_parse_stmt_result();
    public: ad_parse_stmt_result(ad_parse_stmt_result const& that);
#line 2323 "source/reverse_ad.h2"
    public: auto operator=(ad_parse_stmt_result const& that) -> ad_parse_stmt_result& ;
#line 2323 "source/reverse_ad.h2"
    public: ad_parse_stmt_result(ad_parse_stmt_result&& that) noexcept;
#line 2323 "source/reverse_ad.h2"
    public: auto operator=(ad_parse_stmt_result&& that) noexcept -> ad_parse_stmt_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_stmt> stmt_) -> ad_parse_stmt_result;

#line 2332 "source/reverse_ad.h2"
    public: [[nodiscard]] static auto make_fail() -> ad_parse_stmt_result;

#line 2337 "source/reverse_ad.h2"
};

/*
  @brief Parse an AST expression into IR with parameter substitution.
 
  This function converts a meta::expression AST node into an ad_expr IR node,
  applying substitutions from the context during parsing. This is used to
  parse rule bodies like "x_adj += std::cos(x_val)  res_adj" into IR.
 
  @param expr The AST expression to parse.
  @param ctx Substitution context mapping parameter names to IR expressions.
  @return Result with ok=true and parsed expression if successful.
 */

/*
  @brief Map operator string to ad_op_kind.
 */
[[nodiscard]] auto map_op_string(cpp2::impl::in<std::string> op) -> ad_op_kind;

#line 2376 "source/reverse_ad.h2"
// Assignment expression: = += -= etc.
[[nodiscard]] auto parse_assignment_expr(cpp2::impl::in<meta::assignment_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2391 "source/reverse_ad.h2"
// Logical OR: ||
[[nodiscard]] auto parse_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2413 "source/reverse_ad.h2"
// Logical AND: &&
[[nodiscard]] auto parse_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2433 "source/reverse_ad.h2"
// Bit OR: |
[[nodiscard]] auto parse_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2453 "source/reverse_ad.h2"
// Bit XOR: ^
[[nodiscard]] auto parse_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2473 "source/reverse_ad.h2"
// Bit AND: &
[[nodiscard]] auto parse_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2493 "source/reverse_ad.h2"
// Equality: == !=
[[nodiscard]] auto parse_equality_expr(cpp2::impl::in<meta::equality_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2514 "source/reverse_ad.h2"
// Relational: < > <= >=
[[nodiscard]] auto parse_relational_expr(cpp2::impl::in<meta::relational_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2535 "source/reverse_ad.h2"
// Compare: <=>
[[nodiscard]] auto parse_compare_expr(cpp2::impl::in<meta::compare_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2555 "source/reverse_ad.h2"
// Shift: << >>
[[nodiscard]] auto parse_shift_expr(cpp2::impl::in<meta::shift_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2576 "source/reverse_ad.h2"
// Additive: + -
[[nodiscard]] auto parse_additive_expr(cpp2::impl::in<meta::additive_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2597 "source/reverse_ad.h2"
// Multiplicative: * / %
[[nodiscard]] auto parse_multiplicative_expr(cpp2::impl::in<meta::multiplicative_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2636 "source/reverse_ad.h2"
// Prefix expression: - ! etc.
[[nodiscard]] auto parse_prefix_expr(cpp2::impl::in<meta::prefix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2664 "source/reverse_ad.h2"
// Postfix expression: identifiers, literals, function calls, member access
[[nodiscard]] auto parse_postfix_expr(cpp2::impl::in<meta::postfix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2689 "source/reverse_ad.h2"
/*
  @brief Parse an expression from meta::expression into IR.
  Entry point - dispatches to assignment_expression parsing.
 */
[[nodiscard]] auto parse_rule_expr(cpp2::impl::in<meta::expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 2719 "source/reverse_ad.h2"
/*
  @brief Parse an AST statement into IR with parameter substitution.
 
  This function converts a meta::statement AST node into an ad_stmt IR node,
  applying substitutions from the context during parsing.
 
  Handles:
  - Expression statements (e.g., "x_adj += cos(x_val)  res_adj;")
  - Compound statements (blocks)
  - If statements
 
  @param stmt The AST statement to parse.
  @param ctx Substitution context mapping parameter names to IR expressions.
  @return Result with ok=true and parsed statement if successful.
 */
[[nodiscard]] auto parse_rule_stmt(cpp2::impl::in<meta::statement> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_stmt_result;

#line 2887 "source/reverse_ad.h2"
/*
  @brief Parse all AST statements from a rule body into IR.
 
  This is the main entry point for converting a rule's reverse() body
  from AST to IR with parameter substitution applied.
 
  @param stmts Vector of AST statements from the rule body.
  @param ctx Substitution context mapping parameter names to IR expressions.
  @param out Output vector for the parsed IR statements.
  @return true if all statements were successfully parsed.
 */
[[nodiscard]] auto parse_rule_body_stmts(cpp2::impl::in<std::vector<meta::statement>> stmts, cpp2::impl::in<ad_substitution_context> ctx, 
                        std::vector<ad_stmt>& out) -> bool;

#line 2913 "source/reverse_ad.h2"
/*
  @brief Standard parameter names used in ad_rule reverse() functions.
 
  These are the expected parameter names that will be substituted:
  - res_val: result value from forward pass
  - res_adj: incoming adjoint (to propagate)
  - x_val, y_val, z_val, w_val: argument values
  - x_adj, y_adj, z_adj, w_adj: argument adjoints (inout)
 */
class ad_rule_param_names {
    private: std::string result_val {"res_val"}; 
    private: std::string result_adj {"res_adj"}; 
    private: std::array<std::string,4> arg_vals {"x_val", "y_val", "z_val", "w_val"}; 
    private: std::array<std::string,4> arg_adjs {"x_adj", "y_adj", "z_adj", "w_adj"}; 
    public: ad_rule_param_names() = default;
    public: ad_rule_param_names(ad_rule_param_names const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_param_names const&) -> void = delete;

#line 2927 "source/reverse_ad.h2"
};

/*
  @brief Check if a character is an identifier character (alphanumeric or underscore).
 */
[[nodiscard]] auto is_identifier_char(cpp2::impl::in<char> c) -> bool;

#line 2936 "source/reverse_ad.h2"
/*
  @brief Replace all whole-word occurrences of a pattern in a string.
 
  Only replaces when the pattern is not part of a larger identifier.
  For example, replacing "x_val" won't affect "extra_x_val" or "x_value".
 
  @param str The input string.
  @param pattern The pattern to find (must be a whole word/identifier).
  @param replacement The replacement string.
  @return String with all whole-word occurrences replaced.
 */
[[nodiscard]] auto replace_word(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> pattern, cpp2::impl::in<std::string> replacement) -> std::string;

#line 2983 "source/reverse_ad.h2"
/*
  @brief Substitute rule parameter names with actual values in body string.
 
  Performs textual substitution to replace:
  - res_val -> target value name (e.g., "_t0_val")
  - res_adj -> target adjoint name (e.g., "_t0_adj")
  - x_val -> first argument value name
  - x_adj -> first argument adjoint name
  etc.
 
  Uses word-boundary-aware replacement to avoid corrupting identifiers like
  "extra_res_val" or "x_value".
 
  @param body_str Original body string from rule.
  @param target_val Name of the target variable's value.
  @param target_adj Name of the target variable's adjoint.
  @param arg_vals Vector of argument value names.
  @param arg_adjs Vector of argument adjoint names.
  @return Body string with substitutions applied.
 */
[[nodiscard]] auto substitute_rule_params(cpp2::impl::in<std::string> body_str, 
                         cpp2::impl::in<std::string> target_val, cpp2::impl::in<std::string> target_adj, 
                         cpp2::impl::in<std::vector<std::string>> arg_vals, 
                         cpp2::impl::in<std::vector<std::string>> arg_adjs) -> std::string;

#line 3044 "source/reverse_ad.h2"
//-----------------------------------------------------------------------
//
//  Subtask 4: Operator token mapping for + - * /
//
//-----------------------------------------------------------------------

/*
  @brief Result of mapping an operator or function name to ad_op_kind.
 */
class ad_op_mapping_result {
           public: bool ok {false}; 
    public: ad_op_kind kind {ad_op_kind::add}; 

    public: explicit ad_op_mapping_result();
    public: ad_op_mapping_result(ad_op_mapping_result const& that);
#line 3058 "source/reverse_ad.h2"
    public: auto operator=(ad_op_mapping_result const& that) -> ad_op_mapping_result& ;
#line 3058 "source/reverse_ad.h2"
    public: ad_op_mapping_result(ad_op_mapping_result&& that) noexcept;
#line 3058 "source/reverse_ad.h2"
    public: auto operator=(ad_op_mapping_result&& that) noexcept -> ad_op_mapping_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_op_kind> kind_) -> ad_op_mapping_result;

#line 3066 "source/reverse_ad.h2"
};

/*
  @brief Map an operator token string to ad_op_kind.
 
  Handles the basic arithmetic operators used in additive and multiplicative
  expressions.
 
  @param op Operator token string ("+", "-", "", "/").
  @return Result with ok=true and kind set if recognized.
 */
[[nodiscard]] auto map_operator_token(cpp2::impl::in<std::string_view> op) -> ad_op_mapping_result;

#line 3093 "source/reverse_ad.h2"
/*
  @brief Map a function name to ad_op_kind.
 
  All function calls use ad_op_kind::call - actual differentiation
  rules are looked up by function name in the ad_rule_registry.
 
  @param name Function name.
  @return Result with ad_op_kind::call.
 */
[[nodiscard]] auto map_function_to_op(cpp2::impl::in<std::string_view> name) -> ad_op_mapping_result;

#line 3108 "source/reverse_ad.h2"
/*
  @brief Debug: print operator mapping result.
  @param op Operator string.
  @param ok Whether the operator was recognized.
  @param kind The mapped kind.
 */
auto debug_operator_mapping(cpp2::impl::in<std::string_view> op, cpp2::impl::in<bool> ok, cpp2::impl::in<ad_op_kind> kind) -> void;

#line 3123 "source/reverse_ad.h2"
//-----------------------------------------------------------------------
//
//  Subtask 5: Base expression builder
//
//-----------------------------------------------------------------------

/*
  @brief IR builder context for constructing AD IR from reflection AST.
 
  The builder walks the reflection AST and constructs typed AD IR nodes.
  It maintains context for naming temporaries and tracking active variables.
 */
class ad_ir_builder {
           public: reverse_autodiff_context* ctx; 
           public: ad_rule_registry* registry; 
    public: int temp_counter {0}; 
    public: std::vector<std::string> temp_names {}; 

    /// Default constructor
    public: explicit ad_ir_builder();

#line 3147 "source/reverse_ad.h2"
    /// Initialize with context and registry
    public: ad_ir_builder(cpp2::impl::in<reverse_autodiff_context*> ctx_, cpp2::impl::in<ad_rule_registry*> registry_);

#line 3153 "source/reverse_ad.h2"
    /*
      @brief Report an error during IR building and fail immediately.
      @param msg Error message.
      @param loc Location string (optional).
      @param context Additional context (optional).
     */
    public: auto report_error(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc = "", cpp2::impl::in<std::string> context = "") & -> void;

#line 3167 "source/reverse_ad.h2"
    /*
      @brief Generate a unique temporary name.
      @param base Base name for the temporary.
      @return Unique temporary name.
     */
    public: [[nodiscard]] auto gen_temp_name(cpp2::impl::in<std::string> base) & -> std::string;

#line 3179 "source/reverse_ad.h2"
    /*
      @brief Emit an expression as a Cpp2 string.
     
      Full expression-to-string conversion supporting all expression kinds.
     
      @param expr Expression to emit.
      @return Cpp2 source string.
     */
    public: [[nodiscard]] auto emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string;

#line 3338 "source/reverse_ad.h2"
    /*
      @brief Derive a readable operation name from op and args.
     
      Creates names like "mul_x_y", "sin_x", "add_z_w" for debugging.
     
      @param op Operation kind.
      @param args Argument expressions.
      @return Derived name.
     */
    public: [[nodiscard]] auto derive_op_name(cpp2::impl::in<ad_op_kind> op, cpp2::impl::in<std::vector<ad_expr>> args) const& -> std::string;

#line 3357 "source/reverse_ad.h2"
    /*
      @brief Build IR from a primary expression.
     
      Handles identifiers, literals, and parenthesized expressions.
     
      @param primary Primary expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_primary_expr(cpp2::impl::in<meta::primary_expression> primary) & -> ad_expr;

#line 3405 "source/reverse_ad.h2"
    /*
      @brief Build IR from a postfix expression.
     
      Handles function calls, member access, and subscript operations.
     
      @param postfix Postfix expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_postfix_expr(cpp2::impl::in<meta::postfix_expression> postfix) & -> ad_expr;

#line 3461 "source/reverse_ad.h2"
    /*
      @brief Build IR from a prefix expression.
     
      Handles unary operators like -x and +x.
     
      @param prefix Prefix expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_prefix_expr(cpp2::impl::in<meta::prefix_expression> prefix) & -> ad_expr;

#line 3507 "source/reverse_ad.h2"
    /*
      @brief Build IR from an is-as expression.
     
      Handles type checks and casts, but for AD we typically just descend.
     
      @param isas Is-as expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_is_as_expr(cpp2::impl::in<meta::is_as_expression> isas) & -> ad_expr;

#line 3528 "source/reverse_ad.h2"
    /*
      @brief Build IR from a multiplicative expression.
     
      Handles x  y, x / y chains.
     
      @param binexpr Multiplicative expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_multiplicative_expr(cpp2::impl::in<meta::multiplicative_expression> binexpr) & -> ad_expr;

#line 3572 "source/reverse_ad.h2"
    /*
      @brief Build IR from an additive expression.
     
      Handles x + y, x - y chains.
     
      @param binexpr Additive expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_additive_expr(cpp2::impl::in<meta::additive_expression> binexpr) & -> ad_expr;

#line 3616 "source/reverse_ad.h2"
    //-----------------------------------------------------------------------
    // Task 7: Call builder + rule application
    //-----------------------------------------------------------------------

    /*
      @brief Parse call arguments from an expression list.
      @param expr_list Expression list from function call.
      @return Vector of IR expressions for each argument.
     */
    public: [[nodiscard]] auto parse_call_args(cpp2::impl::in<meta::expression_list> expr_list) & -> std::vector<ad_expr>;

#line 3634 "source/reverse_ad.h2"
    /*
      @brief Build IR from a general expression node.
      @param expr Expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_expression(cpp2::impl::in<meta::expression> expr) & -> ad_expr;

#line 3668 "source/reverse_ad.h2"
    /*
      @brief Build IR from an assignment expression (top-level of most expressions).
      @param assign Assignment expression from reflection AST.
      @return IR expression node.
     */
    public: [[nodiscard]] auto build_from_assignment(cpp2::impl::in<meta::assignment_expression> assign) & -> ad_expr;

#line 3688 "source/reverse_ad.h2"
    // Traverse down the binary expression chain to get to additive expression
    public: [[nodiscard]] auto build_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr) & -> ad_expr;

#line 3698 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr) & -> ad_expr;

#line 3707 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr) & -> ad_expr;

#line 3716 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr) & -> ad_expr;

#line 3725 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr) & -> ad_expr;

#line 3734 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_equality_expr(cpp2::impl::in<meta::equality_expression> expr) & -> ad_expr;

#line 3743 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_relational_expr(cpp2::impl::in<meta::relational_expression> expr) & -> ad_expr;

#line 3752 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_compare_expr(cpp2::impl::in<meta::compare_expression> expr) & -> ad_expr;

#line 3761 "source/reverse_ad.h2"
    public: [[nodiscard]] auto build_shift_expr(cpp2::impl::in<meta::shift_expression> expr) & -> ad_expr;

#line 3770 "source/reverse_ad.h2"
    /*
      @brief Apply rule override or default implementation for a call.
     
      If the registry has a rule for this function, marks has_rule=true.
      Otherwise, has_rule=false and the reverse pass will generate a call to
      ad_rule_<func>::reverse() which the C++ compiler can resolve from
      externally-defined rules (e.g., from cpp2ad_rules.h2 or user code).
     
      @param name Function name.
      @param n_args Number of arguments.
      @param is_member True for member calls.
      @param args Argument IR nodes.
      @return Rule application result with forward expression.
     */
    public: [[nodiscard]] auto apply_rule_or_default(cpp2::impl::in<std::string> name, cpp2::impl::in<int> n_args, cpp2::impl::in<bool> is_member, cpp2::impl::in<std::vector<ad_expr>> args) & -> ad_rule_application_result;

#line 3805 "source/reverse_ad.h2"
    //-----------------------------------------------------------------------
    // Task 8: Activity analysis
    //-----------------------------------------------------------------------

    /*
      @brief Check if an expression is active for AD.
      @param expr IR expression to check.
      @return True if the expression is active.
     */
    public: [[nodiscard]] auto is_active_ir_expr(cpp2::impl::in<ad_expr> expr) const& -> bool;

#line 3849 "source/reverse_ad.h2"
    //-----------------------------------------------------------------------
    // Task 9: Statement builder (decl + assignment)
    //-----------------------------------------------------------------------

    /*
      @brief Build IR statements for a local object declaration.
      @param decl Declaration to process.
      @param body_stmts Output vector for forward statements.
      @param reverse_stmts Output vector for reverse statements.
     */
    public: auto build_object_decl(cpp2::impl::in<meta::declaration> decl, 
                        std::vector<ad_stmt>& body_stmts, 
                        std::vector<ad_stmt>& reverse_stmts) & -> void;

#line 3909 "source/reverse_ad.h2"
    /*
      @brief Build IR statements for an assignment.
      @param target Target variable name.
      @param value_expr RHS expression IR.
      @param body_stmts Output vector for forward statements.
      @param reverse_stmts Output vector for reverse statements.
     */
    public: auto build_assignment(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value_expr, 
                       std::vector<ad_stmt>& body_stmts, 
                       std::vector<ad_stmt>& reverse_stmts) & -> void;

#line 3942 "source/reverse_ad.h2"
    /*
      @brief Transform expression to use _val suffixes for identifiers.
      @param expr Expression to transform.
      @return Transformed expression with _val suffixes.
     */
    public: [[nodiscard]] auto transform_expr_to_val(cpp2::impl::in<ad_expr> expr) & -> ad_expr;

#line 3988 "source/reverse_ad.h2"
    /*
      @brief Get rule suffix from operator symbol.
     
      Converts operator symbols to rule naming convention:
      "+" -> "add", "-" -> "sub", "" -> "mul", "/" -> "div", "%" -> "mod"
     
      @param op_name Operator symbol.
      @return Rule suffix for error messages.
     */
    public: [[nodiscard]] auto get_operator_rule_suffix(cpp2::impl::in<std::string> op_name) const& -> std::string;

#line 4006 "source/reverse_ad.h2"
    /*
      @brief Get LHS derivative contribution expression for an operator.
     
      Implements the derivative rules from ad_rule_ types in cpp2ad_rules.h2:
      - add: x_adj += res_adj           -> contrib = res_adj
      - sub: x_adj += res_adj           -> contrib = res_adj
      - mul: x_adj += y_val  res_adj   -> contrib = y_val  res_adj
      - div: x_adj += res_adj / y_val   -> contrib = res_adj / y_val
     
      @param op_name Operator symbol.
      @param lhs_val LHS value expression.
      @param rhs_val RHS value expression.
      @param adj_ref Result adjoint expression.
      @return Contribution expression for LHS adjoint accumulation.
     */
    public: [[nodiscard]] auto get_lhs_derivative_contrib(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val, cpp2::impl::in<ad_expr> adj_ref) const& -> ad_expr;

#line 4038 "source/reverse_ad.h2"
    /*
      @brief Get RHS derivative contribution expression for an operator.
     
      Implements the derivative rules from ad_rule_ types in cpp2ad_rules.h2:
      - add: y_adj += res_adj           -> contrib = res_adj
      - sub: y_adj -= res_adj           -> contrib = -res_adj
      - mul: y_adj += x_val  res_adj   -> contrib = x_val  res_adj
      - div: y_adj -= x_val / (y_val  y_val)  res_adj
     
      @param op_name Operator symbol.
      @param lhs_val LHS value expression.
      @param rhs_val RHS value expression.
      @param adj_ref Result adjoint expression.
      @return Contribution expression for RHS adjoint accumulation.
     */
    public: [[nodiscard]] auto get_rhs_derivative_contrib(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val, cpp2::impl::in<ad_expr> adj_ref) const& -> ad_expr;

#line 4077 "source/reverse_ad.h2"
    /*
      @brief Get LHS derivative scale factor for chain rule.
     
      When LHS is a function call, we need the scale factor to apply chain rule.
      For x  f(y), d/df = x, so scale = x_val (but for LHS, we use the other operand).
     
      @param op_name Operator symbol.
      @param lhs_val LHS value expression.
      @param rhs_val RHS value expression.
      @return Scale factor expression for chain rule application.
     */
    public: [[nodiscard]] auto get_lhs_derivative_scale(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val) const& -> ad_expr;

#line 4105 "source/reverse_ad.h2"
    /*
      @brief Get RHS derivative scale factor for chain rule.
     
      When RHS is a function call, we need the scale factor to apply chain rule.
      For x  f(y), d/dy = x  f'(y), so scale = x_val.
     
      @param op_name Operator symbol.
      @param lhs_val LHS value expression.
      @param rhs_val RHS value expression.
      @return Scale factor expression for chain rule application.
     */
    public: [[nodiscard]] auto get_rhs_derivative_scale(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val) const& -> ad_expr;

#line 4139 "source/reverse_ad.h2"
    /*
      @brief Generate reverse (adjoint) statement for an expression.
      @param target Target variable name (whose adjoint receives contribution).
      @param expr Expression IR.
      @return Reverse statement.
     */
    public: [[nodiscard]] auto generate_reverse_for_expr(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> expr) & -> ad_stmt;

#line 4272 "source/reverse_ad.h2"
    /*
      @brief Generate reverse statement for a function call with scaling factor.
     
      Used when a call is part of a larger expression like x  f(y).
      The derivative is: d(x  f(y))/dy = x  f'(y)
     
      @param call_expr Call expression IR.
      @param scale_expr Expression to multiply the derivative by (e.g., lhs value).
      @param adj_ref The adjoint of the outer expression.
      @return Reverse statement.
     */
    public: [[nodiscard]] auto generate_reverse_for_call_with_scale(cpp2::impl::in<ad_expr> call_expr, cpp2::impl::in<ad_expr> scale_expr, cpp2::impl::in<ad_expr> adj_ref) & -> ad_stmt;

#line 4364 "source/reverse_ad.h2"
    /*
      @brief Generate reverse statement for a function call.
      @param target Target variable name.
      @param call_expr Call expression IR.
      @return Reverse statement.
     */
    public: [[nodiscard]] auto generate_reverse_for_call(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> call_expr) & -> ad_stmt;

#line 4441 "source/reverse_ad.h2"
    //-----------------------------------------------------------------------
    // Task 10: Return statement lowering
    //-----------------------------------------------------------------------

    /*
      @brief Build IR for a return statement and seed adjoint.
      @param return_expr Expression being returned.
      @param return_name Name of the return variable.
      @param body_stmts Output vector for forward statements.
      @param reverse_stmts Output vector for reverse statements.
     */
    public: auto build_return(cpp2::impl::in<ad_expr> return_expr, cpp2::impl::in<std::string> return_name, 
                   std::vector<ad_stmt>& body_stmts, 
                   std::vector<ad_stmt>& reverse_stmts) & -> void;

#line 4468 "source/reverse_ad.h2"
    //-----------------------------------------------------------------------
    // Full function building
    //-----------------------------------------------------------------------

    /*
      @brief Build complete IR for a function.
      @param mf Function declaration.
      @return Complete function IR.
     */
    public: [[nodiscard]] auto build_function_ir(cpp2::impl::in<meta::function_declaration> mf) & -> ad_function_ir;

#line 4532 "source/reverse_ad.h2"
    /*
      @brief Process a single statement and add to forward/reverse lists.
      @param stmt Statement to process.
      @param forward_stmts Output vector for forward statements.
      @param reverse_stmts Output vector for reverse statements (collected in forward order).
     */
    public: auto process_statement(cpp2::impl::in<meta::statement> stmt, 
                        std::vector<ad_stmt>& forward_stmts, 
                        std::vector<ad_stmt>& reverse_stmts) & -> void;
    public: ad_ir_builder(ad_ir_builder const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_ir_builder const&) -> void = delete;


#line 4587 "source/reverse_ad.h2"
};

/*
  @brief Result of applying a rule or default for a function call.
 */
class ad_rule_application_result {
    public: bool has_rule {false}; 
    public: ad_expr forward {}; 

    public: explicit ad_rule_application_result();
    public: ad_rule_application_result(ad_rule_application_result const& that);
#line 4597 "source/reverse_ad.h2"
    public: auto operator=(ad_rule_application_result const& that) -> ad_rule_application_result& ;
#line 4597 "source/reverse_ad.h2"
    public: ad_rule_application_result(ad_rule_application_result&& that) noexcept;
#line 4597 "source/reverse_ad.h2"
    public: auto operator=(ad_rule_application_result&& that) noexcept -> ad_rule_application_result& ;
};

//-----------------------------------------------------------------------
// Task 11 & 12: IR Emitter for forward and reverse passes
//-----------------------------------------------------------------------

/*
  @brief Map ad_op_kind to its binary operator string representation.
  @param op Operation kind.
  @return Operator string with spaces (e.g., " + "), or empty if not a binary op.
 */
[[nodiscard]] auto ad_op_kind_to_binary_str(cpp2::impl::in<ad_op_kind> op) -> std::string;

#line 4648 "source/reverse_ad.h2"
/*
  @brief Map ad_op_kind to rule lookup name (operator symbol without spaces).
 
  This is used to look up operator rules in the ad_rule_registry.
  Operators are stored with their symbol as the name ("+", "-", "", "/").
 
  @param op Operation kind.
  @return Operator symbol for rule lookup, or empty if not a differentiable binary op.
 */
[[nodiscard]] auto ad_op_kind_to_rule_name(cpp2::impl::in<ad_op_kind> op) -> std::string;

#line 4666 "source/reverse_ad.h2"
/*
  @brief Emitter for converting AD IR to Cpp2 source code.
 */
class ad_ir_emitter {
    public: reverse_autodiff_context* ctx; 

    public: explicit ad_ir_emitter();

#line 4676 "source/reverse_ad.h2"
    public: ad_ir_emitter(cpp2::impl::in<reverse_autodiff_context*> ctx_);
#line 4676 "source/reverse_ad.h2"
    public: auto operator=(cpp2::impl::in<reverse_autodiff_context*> ctx_) -> ad_ir_emitter& ;

#line 4680 "source/reverse_ad.h2"
    /*
      @brief Emit Cpp2 code for an IR expression.
      @param expr Expression IR.
      @return Cpp2 source string.
     */
    public: [[nodiscard]] auto emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string;

#line 4834 "source/reverse_ad.h2"
    /*
      @brief Emit Cpp2 code for a single IR statement.
      @param stmt Statement IR.
      @param indent Indentation level.
      @return Cpp2 source string.
     */
    public: [[nodiscard]] auto emit_stmt(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<int> indent = 0) const& -> std::string;

#line 4980 "source/reverse_ad.h2"
    /*
      @brief Emit the forward pass Cpp2 code.
      @param ir Function IR.
      @return Cpp2 source for forward pass.
     */
    public: [[nodiscard]] auto emit_forward(cpp2::impl::in<ad_function_ir> ir) const& -> std::string;

#line 4993 "source/reverse_ad.h2"
    /*
      @brief Emit the reverse pass Cpp2 code in reverse order.
      @param ir Function IR.
      @return Cpp2 source for reverse pass.
     */
    public: [[nodiscard]] auto emit_reverse(cpp2::impl::in<ad_function_ir> ir) const& -> std::string;

#line 5021 "source/reverse_ad.h2"
    /*
      @brief Emit the complete reverse-mode function.
      @param ir Function IR.
      @return Cpp2 source for the _b function.
     */
    public: [[nodiscard]] auto emit_function(cpp2::impl::in<ad_function_ir> ir) const& -> std::string;
    public: ad_ir_emitter(ad_ir_emitter const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_ir_emitter const&) -> void = delete;


#line 5081 "source/reverse_ad.h2"
};

/*
  @brief Debug dump for ad_ir_builder state.
  @param builder Builder to dump.
 */
auto ad_ir_builder_debug_dump(cpp2::impl::in<ad_ir_builder> builder) -> void;

#line 5101 "source/reverse_ad.h2"
/*
  @brief Internal reverse-mode AD processing - transforms a type using IR pipeline.
 
  ═══════════════════════════════════════════════════════════════════════════════
                       REVERSE-MODE IR PROCESSING PIPELINE
  ═══════════════════════════════════════════════════════════════════════════════
 
  This function implements the core reverse-mode AD transformation:
 
    ┌─────────────────────────────────────────────────────────────────────────┐
    │                         PROCESSING FLOW                                 │
    └─────────────────────────────────────────────────────────────────────────┘
 
    Input: @autodiff<"reverse"> annotated type
           │
           ▼
    ┌──────────────────────────────────────────────────────────────────────────┐
    │  STAGE 1: RULE DISCOVERY                                                 │
    │  ─────────────────────────────────────────────────────────────────────── │
    │  - Scan type for nested ad_rule_ types                                  │
    │  - Extract: name, n_args, is_member, reverse() body                      │
    │  - Store AST nodes of reverse() body for IR parsing                      │
    │  - Build ad_rule_registry with all discovered rules                      │
    └──────────────────────────────────────────────────────────────────────────┘
           │
           ▼
    ┌──────────────────────────────────────────────────────────────────────────┐
    │  STAGE 2: FOR EACH MEMBER FUNCTION                                       │
    │  ─────────────────────────────────────────────────────────────────────── │
    │                                                                          │
    │  ┌────────────────────────────────────────────────────────────────────┐  │
    │  │  2a. CREATE CONTEXTS                                               │  │
    │  │  - reverse_autodiff_context: naming conventions, suffixes          │  │
    │  │  - ad_ir_builder: IR construction with registry access             │  │
    │  └────────────────────────────────────────────────────────────────────┘  │
    │                         │                                                │
    │                         ▼                                                │
    │  ┌────────────────────────────────────────────────────────────────────┐  │
    │  │  2b. BUILD FUNCTION IR (ad_ir_builder::build_function_ir)          │  │
    │  │  - Walk function's reflection AST                                  │  │
    │  │  - Build ad_expr nodes for each expression                         │  │
    │  │  - Build ad_stmt nodes for each statement                          │  │
    │  │  - Generate forward pass: x_val = x, compute intermediates         │  │
    │  │  - Generate reverse pass: apply chain rule, accumulate adjoints    │  │
    │  │  - Result: ad_func_ir with body_stmts and reverse_stmts            │  │
    │  └────────────────────────────────────────────────────────────────────┘  │
    │                         │                                                │
    │                         ▼                                                │
    │  ┌────────────────────────────────────────────────────────────────────┐  │
    │  │  2c. EMIT CODE (ad_ir_emitter)                                     │  │
    │  │  - emit_forward(): Convert body_stmts to Cpp1 string               │  │
    │  │  - emit_reverse(): Convert reverse_stmts to Cpp1 string            │  │
    │  │  - emit_function(): Combine into complete backward function        │  │
    │  └────────────────────────────────────────────────────────────────────┘  │
    │                         │                                                │
    │                         ▼                                                │
    │  ┌────────────────────────────────────────────────────────────────────┐  │
    │  │  2d. INJECT CODE                                                   │  │
    │  │  - t.add_member(func_code): Add backward function to type          │  │
    │  └────────────────────────────────────────────────────────────────────┘  │
    └──────────────────────────────────────────────────────────────────────────┘
           │
           ▼
    Output: Type with generated f_backward functions for each f
 
    ┌─────────────────────────────────────────────────────────────────────────┐
    │                         KEY COMPONENTS                                  │
    └─────────────────────────────────────────────────────────────────────────┘
 
    ad_rule_registry
    ├── rules: vector<ad_rule_meta>     All discovered rules
    ├── has_rule(name, n_args, is_member) -> bool
    ├── get_rule_type(name, ...) -> string
    └── apply_reverse_rule(name, ..., ctx) -> ad_reverse_rule_result
                                              └── ir_stmts: vector<ad_stmt>
 
    ad_ir_builder
    ├── ctx: reverse_autodiff_context  Naming conventions
    ├── registry: ad_rule_registry     Rule lookup
    ├── build_function_ir(mf) -> ad_func_ir
    ├── build_expression(expr) -> ad_expr
    ├── generate_reverse_for_expr(target, expr) -> ad_stmt
    └── report_error(msg, loc, context)  Hard failure on errors
 
    ad_ir_emitter
    ├── ctx: reverse_autodiff_context  Naming conventions
    ├── emit_expr(expr) -> string       Expression to code
    ├── emit_stmt(stmt) -> string       Statement to code
    ├── emit_forward(func_ir) -> string Forward pass code
    └── emit_reverse(func_ir) -> string Reverse pass code
 
    ┌─────────────────────────────────────────────────────────────────────────┐
    │                      REVERSE PASS GENERATION                            │
    └─────────────────────────────────────────────────────────────────────────┘
 
    For each statement in the forward pass, generate corresponding adjoint code:
 
    Forward Statement              Reverse Statement(s)
    ─────────────────              ────────────────────
    t = x + y                      x_adj += t_adj; y_adj += t_adj
    t = x - y                      x_adj += t_adj; y_adj -= t_adj
    t = x  y                      x_adj += y_val  t_adj; y_adj += x_val  t_adj
    t = x / y                      x_adj += t_adj / y_val; y_adj -= x_val  t_adj / (y_val  y_val)
    t = sin(x)                     x_adj += cos(x_val)  t_adj
    t = f(x, y)                    [lookup ad_rule_f::reverse and apply]
 
    Statements are collected during forward pass, then reversed for backward pass.
 
  @param t Type declaration to transform (modified in place).
  @param ctx Autodiff context with configuration (suffixes, order, mode).
 
  @see autodiff                 Main entry point (parses arguments)
  @see ad_rule_registry         Rule storage and application
  @see ad_ir_builder           IR construction from reflection AST
  @see ad_ir_emitter           Code generation from IR
 */
auto autodiff_reverse_ir(meta::type_declaration& t, cpp2::impl::in<bool> debug) -> void;

#line 5293 "source/reverse_ad.h2"
auto autodiff_impl(meta::type_declaration& t) -> void;

#line 5406 "source/reverse_ad.h2"
}  // namespace meta

}  // namespace cpp2


//=== Cpp2 function definitions =================================================

#line 1 "source/reverse_ad.h2"

#line 16 "source/reverse_ad.h2"
namespace cpp2 {

namespace meta {

#line 49 "source/reverse_ad.h2"
    reverse_autodiff_context::reverse_autodiff_context(cpp2::impl::in<meta::function_declaration> mf_)
        : reverse_autodiff_base{  }
        , mf{ mf_ }{

#line 51 "source/reverse_ad.h2"
    }

#line 58 "source/reverse_ad.h2"
    [[nodiscard]] auto reverse_autodiff_context::make_value_name(cpp2::impl::in<std::string> base) const& -> std::string{
        if (base == "_") {
            return base; 
        }
        return base + value_suffix; 
    }

#line 70 "source/reverse_ad.h2"
    [[nodiscard]] auto reverse_autodiff_context::make_adj_name(cpp2::impl::in<std::string> base) const& -> std::string{
        if (base == "_") {
            return base; 
        }
        return base + adj_suffix; 
    }

#line 92 "source/reverse_ad.h2"
[[nodiscard]] auto make_value_name(cpp2::impl::in<std::string> original) -> std::string{
    if (original == "_") {
        return original; 
    }
    return original + "_val"; 
}

#line 104 "source/reverse_ad.h2"
[[nodiscard]] auto make_adjoint_name(cpp2::impl::in<std::string> original) -> std::string{
    if (original == "_") {
        return original; 
    }
    return original + "_adj"; 
}

#line 125 "source/reverse_ad.h2"
    template <typename MetaType, typename Metadata> ad_dual<MetaType,Metadata>::ad_dual(MetaType const& m, Metadata const& d)
        : meta{ m }
        , data{ d }{

#line 128 "source/reverse_ad.h2"
    }

#line 135 "source/reverse_ad.h2"
    template <typename MetaType, typename Metadata> [[nodiscard]] auto ad_dual<MetaType,Metadata>::wrap(cpp2::impl::in<MetaType> m) -> ad_dual<MetaType,Metadata>{
        return ad_dual<MetaType,Metadata>(m, Metadata()); 
    }

#line 143 "source/reverse_ad.h2"
    template <typename MetaType, typename Metadata> [[nodiscard]] auto ad_dual<MetaType,Metadata>::to_string() const& -> std::string{
        return CPP2_UFCS(to_string)(meta); 
    }

#line 157 "source/reverse_ad.h2"
    ad_expr_metadata::ad_expr_metadata(){}

#line 160 "source/reverse_ad.h2"
    ad_expr_metadata::ad_expr_metadata(ad_expr_metadata const& that)
                                   : is_active{ that.is_active }{}
#line 160 "source/reverse_ad.h2"
    auto ad_expr_metadata::operator=(ad_expr_metadata const& that) -> ad_expr_metadata& {
                                   is_active = that.is_active;
                                   return *this; }
#line 160 "source/reverse_ad.h2"
    ad_expr_metadata::ad_expr_metadata(ad_expr_metadata&& that) noexcept
                                   : is_active{ std::move(that).is_active }{}
#line 160 "source/reverse_ad.h2"
    auto ad_expr_metadata::operator=(ad_expr_metadata&& that) noexcept -> ad_expr_metadata& {
                                   is_active = std::move(that).is_active;
                                   return *this; }

#line 172 "source/reverse_ad.h2"
    ad_stmt_metadata::ad_stmt_metadata(){}

#line 175 "source/reverse_ad.h2"
    ad_stmt_metadata::ad_stmt_metadata(ad_stmt_metadata const& that)
                                   : is_accumulation{ that.is_accumulation }{}
#line 175 "source/reverse_ad.h2"
    auto ad_stmt_metadata::operator=(ad_stmt_metadata const& that) -> ad_stmt_metadata& {
                                   is_accumulation = that.is_accumulation;
                                   return *this; }
#line 175 "source/reverse_ad.h2"
    ad_stmt_metadata::ad_stmt_metadata(ad_stmt_metadata&& that) noexcept
                                   : is_accumulation{ std::move(that).is_accumulation }{}
#line 175 "source/reverse_ad.h2"
    auto ad_stmt_metadata::operator=(ad_stmt_metadata&& that) noexcept -> ad_stmt_metadata& {
                                   is_accumulation = std::move(that).is_accumulation;
                                   return *this; }

#line 188 "source/reverse_ad.h2"
    ad_string_substitution_context::ad_string_substitution_context(){}

#line 191 "source/reverse_ad.h2"
    ad_string_substitution_context::ad_string_substitution_context(ad_string_substitution_context const& that)
                                   : substitutions{ that.substitutions }{}
#line 191 "source/reverse_ad.h2"
    auto ad_string_substitution_context::operator=(ad_string_substitution_context const& that) -> ad_string_substitution_context& {
                                   substitutions = that.substitutions;
                                   return *this; }
#line 191 "source/reverse_ad.h2"
    ad_string_substitution_context::ad_string_substitution_context(ad_string_substitution_context&& that) noexcept
                                   : substitutions{ std::move(that).substitutions }{}
#line 191 "source/reverse_ad.h2"
    auto ad_string_substitution_context::operator=(ad_string_substitution_context&& that) noexcept -> ad_string_substitution_context& {
                                   substitutions = std::move(that).substitutions;
                                   return *this; }

#line 198 "source/reverse_ad.h2"
    auto ad_string_substitution_context::add(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> replacement) & -> void{
        CPP2_ASSERT_IN_BOUNDS(substitutions, name) = replacement;
    }

#line 211 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_string_substitution_context::apply(cpp2::impl::in<std::string> text) const& -> std::string{
        std::string result {text}; 
        for ( auto const& sub : substitutions ) {
            auto name {sub.first}; 
            auto replacement {sub.second}; 
            // Simple word-boundary replacement
            size_t pos {0}; 
            while( true ) {
                pos = CPP2_UFCS(find)(result, name, pos);
                if (pos == std::string::npos) {
                    break;
                }
                // Check word boundaries
                auto before_ok {pos == 0 || !(std::isalnum(CPP2_ASSERT_IN_BOUNDS(result, pos - 1))) && CPP2_ASSERT_IN_BOUNDS(result, pos - 1) != '_'}; 
                auto end_pos {pos + CPP2_UFCS(size)(name)}; 
                auto after_ok {cpp2::impl::cmp_greater_eq(end_pos,CPP2_UFCS(size)(result)) || !(std::isalnum(CPP2_ASSERT_IN_BOUNDS(result, end_pos))) && CPP2_ASSERT_IN_BOUNDS(result, end_pos) != '_'}; 
                if (cpp2::move(before_ok) && cpp2::move(after_ok)) {
                    result = CPP2_UFCS(substr)(result, 0, pos) + replacement + CPP2_UFCS(substr)(result, cpp2::move(end_pos));
                    pos += CPP2_UFCS(size)(replacement);
                }else {
                    ++pos;
                }
            }
        }
        return result; 
    }

#line 243 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_string_substitution_context::has(cpp2::impl::in<std::string> name) const& -> bool{
        return CPP2_UFCS(find)(substitutions, name) != CPP2_UFCS(end)(substitutions); 
    }

#line 252 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_string_substitution_context::get(cpp2::impl::in<std::string> name) const& -> std::string{
        auto it {CPP2_UFCS(find)(substitutions, name)}; 
        if (it != CPP2_UFCS(end)(substitutions)) {
            return (*cpp2::impl::assert_not_null(cpp2::move(it))).second; 
        }
        return ""; 
    }


    constexpr ad_type_kind::ad_type_kind(cpp2::impl::in<cpp2::i64> _val)
                                                          : _value{ cpp2::unchecked_narrow<cpp2::i8>(_val) } {  }

constexpr auto ad_type_kind::operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_type_kind&  { 
                                                          _value = cpp2::unchecked_narrow<cpp2::i8>(_val);
                                                          return *this; }
inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::auto_{ 0 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::void_{ 1 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::int_{ 2 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::size_t_{ 3 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::double_{ 4 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::float_{ 5 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::bool_{ 6 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::char_{ 7 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::named{ 8 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::const_{ 9 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::ref{ 10 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::rvalue_ref{ 11 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::pointer{ 12 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::array{ 13 };

inline CPP2_CONSTEXPR ad_type_kind ad_type_kind::template_{ 14 };

[[nodiscard]] constexpr auto ad_type_kind::get_raw_value() const& -> cpp2::i8 { return _value; }
constexpr ad_type_kind::ad_type_kind()
                                        : _value{ auto_._value }{}
constexpr ad_type_kind::ad_type_kind(ad_type_kind const& that)
                                              : _value{ that._value }{}
constexpr auto ad_type_kind::operator=(ad_type_kind const& that) -> ad_type_kind& {
                                              _value = that._value;
                                              return *this;}
constexpr ad_type_kind::ad_type_kind(ad_type_kind&& that) noexcept
                                              : _value{ std::move(that)._value }{}
constexpr auto ad_type_kind::operator=(ad_type_kind&& that) noexcept -> ad_type_kind& {
                                              _value = std::move(that)._value;
                                              return *this;}
[[nodiscard]] auto ad_type_kind::to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string{

    auto pref {cpp2::to_string(prefix)}; 
    if ((*this) == ad_type_kind::auto_) {return pref + "auto_"; }
    if ((*this) == ad_type_kind::void_) {return pref + "void_"; }
    if ((*this) == ad_type_kind::int_) {return pref + "int_"; }
    if ((*this) == ad_type_kind::size_t_) {return pref + "size_t_"; }
    if ((*this) == ad_type_kind::double_) {return pref + "double_"; }
    if ((*this) == ad_type_kind::float_) {return pref + "float_"; }
    if ((*this) == ad_type_kind::bool_) {return pref + "bool_"; }
    if ((*this) == ad_type_kind::char_) {return pref + "char_"; }
    if ((*this) == ad_type_kind::named) {return pref + "named"; }
    if ((*this) == ad_type_kind::const_) {return pref + "const_"; }
    if ((*this) == ad_type_kind::ref) {return pref + "ref"; }
    if ((*this) == ad_type_kind::rvalue_ref) {return pref + "rvalue_ref"; }
    if ((*this) == ad_type_kind::pointer) {return pref + "pointer"; }
    if ((*this) == ad_type_kind::array) {return pref + "array"; }
    if ((*this) == ad_type_kind::template_) {return cpp2::move(pref) + "template_"; }
    return "invalid ad_type_kind value"; 
    }

    [[nodiscard]] auto ad_type_kind::to_string() const& -> std::string { return to_string_impl(""); }
[[nodiscard]] auto ad_type_kind::to_code() const& -> std::string { return to_string_impl("ad_type_kind::"); }
[[nodiscard]] auto ad_type_kind::from_string(cpp2::impl::in<std::string_view> s) -> ad_type_kind{

    auto x {s}; 
    if ("auto_" == x) {return ad_type_kind::auto_; }
    else {if ("void_" == x) {return ad_type_kind::void_; }
    else {if ("int_" == x) {return ad_type_kind::int_; }
    else {if ("size_t_" == x) {return ad_type_kind::size_t_; }
    else {if ("double_" == x) {return ad_type_kind::double_; }
    else {if ("float_" == x) {return ad_type_kind::float_; }
    else {if ("bool_" == x) {return ad_type_kind::bool_; }
    else {if ("char_" == x) {return ad_type_kind::char_; }
    else {if ("named" == x) {return ad_type_kind::named; }
    else {if ("const_" == x) {return ad_type_kind::const_; }
    else {if ("ref" == x) {return ad_type_kind::ref; }
    else {if ("rvalue_ref" == x) {return ad_type_kind::rvalue_ref; }
    else {if ("pointer" == x) {return ad_type_kind::pointer; }
    else {if ("array" == x) {return ad_type_kind::array; }
    else {if ("template_" == cpp2::move(x)) {return ad_type_kind::template_; }
#line 1 "source/reverse_ad.h2"
}}}}}}}}}}}}}}
CPP2_UFCS(report_violation)(cpp2::type_safety, CPP2_UFCS(c_str)(("can't convert string '" + cpp2::to_string(s) + "' to enum of type ad_type_kind")));
return ad_type_kind::auto_; 
}

[[nodiscard]] auto ad_type_kind::from_code(cpp2::impl::in<std::string_view> s) -> ad_type_kind{
std::string str {s}; return from_string(cpp2::string_util::replace_all(cpp2::move(str), "ad_type_kind::", "")); }

#line 316 "source/reverse_ad.h2"
    ad_type::ad_type(){}

#line 319 "source/reverse_ad.h2"
    ad_type::ad_type(ad_type const& that)
                                   : kind{ that.kind }
                                   , name{ that.name }
                                   , inner_type{ that.inner_type }
                                   , type_args{ that.type_args }
                                   , array_size{ that.array_size }{}
#line 319 "source/reverse_ad.h2"
    auto ad_type::operator=(ad_type const& that) -> ad_type& {
                                   kind = that.kind;
                                   name = that.name;
                                   inner_type = that.inner_type;
                                   type_args = that.type_args;
                                   array_size = that.array_size;
                                   return *this; }
#line 319 "source/reverse_ad.h2"
    ad_type::ad_type(ad_type&& that) noexcept
                                   : kind{ std::move(that).kind }
                                   , name{ std::move(that).name }
                                   , inner_type{ std::move(that).inner_type }
                                   , type_args{ std::move(that).type_args }
                                   , array_size{ std::move(that).array_size }{}
#line 319 "source/reverse_ad.h2"
    auto ad_type::operator=(ad_type&& that) noexcept -> ad_type& {
                                   kind = std::move(that).kind;
                                   name = std::move(that).name;
                                   inner_type = std::move(that).inner_type;
                                   type_args = std::move(that).type_args;
                                   array_size = std::move(that).array_size;
                                   return *this; }

#line 327 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_auto() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::auto_;
        return t; 
    }

#line 337 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_void() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::void_;
        return t; 
    }

#line 347 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_int() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::int_;
        return t; 
    }

#line 357 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_size_t() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::size_t_;
        return t; 
    }

#line 367 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_double() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::double_;
        return t; 
    }

#line 377 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_float() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::float_;
        return t; 
    }

#line 387 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_bool() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::bool_;
        return t; 
    }

#line 397 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_char() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::char_;
        return t; 
    }

#line 410 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_named(cpp2::impl::in<std::string> type_name) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::named;
        t.name = type_name;
        return t; 
    }

#line 422 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_const(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::const_;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

#line 434 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_ref(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::ref;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

#line 446 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_rvalue_ref(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::rvalue_ref;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

#line 458 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_pointer(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::pointer;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

#line 471 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_array(cpp2::impl::in<ad_type> inner, cpp2::impl::in<int> size) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::array;
        t.inner_type = std::make_shared<ad_type>(inner);
        t.array_size = size;
        return t; 
    }

#line 485 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_template(cpp2::impl::in<std::string> template_name, cpp2::impl::in<std::vector<ad_type>> args) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::template_;
        t.name = template_name;
        t.type_args = args;
        return t; 
    }

#line 500 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_const_ref(cpp2::impl::in<ad_type> inner) -> ad_type{
        return make_const(make_ref(inner)); 
    }

#line 509 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::make_std_vector(cpp2::impl::in<ad_type> elem) -> ad_type{
        std::vector<ad_type> args {}; 
        CPP2_UFCS(push_back)(args, elem);
        return make_template("std::vector", cpp2::move(args)); 
    }

#line 521 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::is_const() const& -> bool{
        return kind == ad_type_kind::const_; 
    }

#line 529 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::is_reference() const& -> bool{
        return kind == ad_type_kind::ref || kind == ad_type_kind::rvalue_ref; 
    }

#line 537 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::is_pointer() const& -> bool{
        return kind == ad_type_kind::pointer; 
    }

#line 545 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_type::get_base_type() const& -> ad_type{
        if (inner_type != nullptr) {
            return CPP2_UFCS(get_base_type)((*cpp2::impl::assert_not_null(inner_type))); 
        }
        return (*this); 
    }

#line 558 "source/reverse_ad.h2"
[[nodiscard]] auto ad_type_to_string(cpp2::impl::in<ad_type> t) -> std::string{
    if (t.kind == ad_type_kind::auto_)    { return "auto"; }
    if (t.kind == ad_type_kind::void_)    { return "void"; }
    if (t.kind == ad_type_kind::int_)     { return "int"; }
    if (t.kind == ad_type_kind::size_t_)  { return "size_t"; }
    if (t.kind == ad_type_kind::double_)  { return "double"; }
    if (t.kind == ad_type_kind::float_)   { return "float"; }
    if (t.kind == ad_type_kind::bool_)    { return "bool"; }
    if (t.kind == ad_type_kind::char_)    { return "char"; }
    if (t.kind == ad_type_kind::named)    { return t.name; }

    if (t.kind == ad_type_kind::const_) {
        if (t.inner_type != nullptr) {
            return "const " + ad_type_to_string(*cpp2::impl::assert_not_null(t.inner_type)); 
        }
        return "const"; 
    }
    if (t.kind == ad_type_kind::ref) {
        if (t.inner_type != nullptr) {
            return ad_type_to_string(*cpp2::impl::assert_not_null(t.inner_type)) + "&"; 
        }
        return "&"; 
    }
    if (t.kind == ad_type_kind::rvalue_ref) {
        if (t.inner_type != nullptr) {
            return ad_type_to_string(*cpp2::impl::assert_not_null(t.inner_type)) + "&&"; 
        }
        return "&&"; 
    }
    if (t.kind == ad_type_kind::pointer) {
        if (t.inner_type != nullptr) {
            return ad_type_to_string(*cpp2::impl::assert_not_null(t.inner_type)) + "*"; 
        }
        return "*"; 
    }
    if (t.kind == ad_type_kind::array) {
        if (t.inner_type != nullptr) {
            if (cpp2::impl::cmp_greater(t.array_size,0)) {
                return ad_type_to_string(*cpp2::impl::assert_not_null(t.inner_type)) + "[" + std::to_string(t.array_size) + "]"; 
            }
            return ad_type_to_string(*cpp2::impl::assert_not_null(t.inner_type)) + "[]"; 
        }
        return "[]"; 
    }
    if (t.kind == ad_type_kind::template_) {
        std::string result {t.name + "<"}; 
{
bool first{true};

#line 605 "source/reverse_ad.h2"
        for ( auto const& arg : t.type_args ) {
            if (!(first)) {result += ", "; }
            first = false;
            result += ad_type_to_string(arg);
        }
}
#line 610 "source/reverse_ad.h2"
        result += ">";
        return result; 
    }
    return "unknown_type"; 
}


constexpr ad_op_kind::ad_op_kind(cpp2::impl::in<cpp2::i64> _val)
                                                          : _value{ cpp2::unchecked_narrow<cpp2::i8>(_val) } {  }

constexpr auto ad_op_kind::operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_op_kind&  { 
                                                          _value = cpp2::unchecked_narrow<cpp2::i8>(_val);
                                                          return *this; }
inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::add{ 0 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::sub{ 1 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::mul{ 2 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::div{ 3 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::mod{ 4 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::neg{ 5 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::pos{ 6 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::pre_inc{ 7 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::pre_dec{ 8 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::post_inc{ 9 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::post_dec{ 10 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::eq{ 11 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::ne{ 12 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::lt{ 13 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::gt{ 14 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::le{ 15 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::ge{ 16 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::spaceship{ 17 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::land{ 18 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::lor{ 19 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::lnot{ 20 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::band{ 21 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::bor{ 22 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::bxor{ 23 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::bnot{ 24 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::shl{ 25 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::shr{ 26 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::deref{ 27 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::addr_of{ 28 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign{ 29 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_add{ 30 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_sub{ 31 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_mul{ 32 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_div{ 33 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_mod{ 34 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_band{ 35 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_bor{ 36 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_bxor{ 37 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_shl{ 38 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::assign_shr{ 39 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::dot{ 40 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::arrow{ 41 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::call{ 42 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::literal{ 43 };

inline CPP2_CONSTEXPR ad_op_kind ad_op_kind::identifier{ 44 };

[[nodiscard]] constexpr auto ad_op_kind::get_raw_value() const& -> cpp2::i8 { return _value; }
constexpr ad_op_kind::ad_op_kind()
                                        : _value{ add._value }{}
constexpr ad_op_kind::ad_op_kind(ad_op_kind const& that)
                                              : _value{ that._value }{}
constexpr auto ad_op_kind::operator=(ad_op_kind const& that) -> ad_op_kind& {
                                              _value = that._value;
                                              return *this;}
constexpr ad_op_kind::ad_op_kind(ad_op_kind&& that) noexcept
                                              : _value{ std::move(that)._value }{}
constexpr auto ad_op_kind::operator=(ad_op_kind&& that) noexcept -> ad_op_kind& {
                                              _value = std::move(that)._value;
                                              return *this;}
[[nodiscard]] auto ad_op_kind::to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string{

auto pref {cpp2::to_string(prefix)}; 
if ((*this) == ad_op_kind::add) {return pref + "add"; }
if ((*this) == ad_op_kind::sub) {return pref + "sub"; }
if ((*this) == ad_op_kind::mul) {return pref + "mul"; }
if ((*this) == ad_op_kind::div) {return pref + "div"; }
if ((*this) == ad_op_kind::mod) {return pref + "mod"; }
if ((*this) == ad_op_kind::neg) {return pref + "neg"; }
if ((*this) == ad_op_kind::pos) {return pref + "pos"; }
if ((*this) == ad_op_kind::pre_inc) {return pref + "pre_inc"; }
if ((*this) == ad_op_kind::pre_dec) {return pref + "pre_dec"; }
if ((*this) == ad_op_kind::post_inc) {return pref + "post_inc"; }
if ((*this) == ad_op_kind::post_dec) {return pref + "post_dec"; }
if ((*this) == ad_op_kind::eq) {return pref + "eq"; }
if ((*this) == ad_op_kind::ne) {return pref + "ne"; }
if ((*this) == ad_op_kind::lt) {return pref + "lt"; }
if ((*this) == ad_op_kind::gt) {return pref + "gt"; }
if ((*this) == ad_op_kind::le) {return pref + "le"; }
if ((*this) == ad_op_kind::ge) {return pref + "ge"; }
if ((*this) == ad_op_kind::spaceship) {return pref + "spaceship"; }
if ((*this) == ad_op_kind::land) {return pref + "land"; }
if ((*this) == ad_op_kind::lor) {return pref + "lor"; }
if ((*this) == ad_op_kind::lnot) {return pref + "lnot"; }
if ((*this) == ad_op_kind::band) {return pref + "band"; }
if ((*this) == ad_op_kind::bor) {return pref + "bor"; }
if ((*this) == ad_op_kind::bxor) {return pref + "bxor"; }
if ((*this) == ad_op_kind::bnot) {return pref + "bnot"; }
if ((*this) == ad_op_kind::shl) {return pref + "shl"; }
if ((*this) == ad_op_kind::shr) {return pref + "shr"; }
if ((*this) == ad_op_kind::deref) {return pref + "deref"; }
if ((*this) == ad_op_kind::addr_of) {return pref + "addr_of"; }
if ((*this) == ad_op_kind::assign) {return pref + "assign"; }
if ((*this) == ad_op_kind::assign_add) {return pref + "assign_add"; }
if ((*this) == ad_op_kind::assign_sub) {return pref + "assign_sub"; }
if ((*this) == ad_op_kind::assign_mul) {return pref + "assign_mul"; }
if ((*this) == ad_op_kind::assign_div) {return pref + "assign_div"; }
if ((*this) == ad_op_kind::assign_mod) {return pref + "assign_mod"; }
if ((*this) == ad_op_kind::assign_band) {return pref + "assign_band"; }
if ((*this) == ad_op_kind::assign_bor) {return pref + "assign_bor"; }
if ((*this) == ad_op_kind::assign_bxor) {return pref + "assign_bxor"; }
if ((*this) == ad_op_kind::assign_shl) {return pref + "assign_shl"; }
if ((*this) == ad_op_kind::assign_shr) {return pref + "assign_shr"; }
if ((*this) == ad_op_kind::dot) {return pref + "dot"; }
if ((*this) == ad_op_kind::arrow) {return pref + "arrow"; }
if ((*this) == ad_op_kind::call) {return pref + "call"; }
if ((*this) == ad_op_kind::literal) {return pref + "literal"; }
if ((*this) == ad_op_kind::identifier) {return cpp2::move(pref) + "identifier"; }
return "invalid ad_op_kind value"; 
}

[[nodiscard]] auto ad_op_kind::to_string() const& -> std::string { return to_string_impl(""); }
[[nodiscard]] auto ad_op_kind::to_code() const& -> std::string { return to_string_impl("ad_op_kind::"); }
[[nodiscard]] auto ad_op_kind::from_string(cpp2::impl::in<std::string_view> s) -> ad_op_kind{

auto x {s}; 
if ("add" == x) {return ad_op_kind::add; }
else {if ("sub" == x) {return ad_op_kind::sub; }
else {if ("mul" == x) {return ad_op_kind::mul; }
else {if ("div" == x) {return ad_op_kind::div; }
else {if ("mod" == x) {return ad_op_kind::mod; }
else {if ("neg" == x) {return ad_op_kind::neg; }
else {if ("pos" == x) {return ad_op_kind::pos; }
else {if ("pre_inc" == x) {return ad_op_kind::pre_inc; }
else {if ("pre_dec" == x) {return ad_op_kind::pre_dec; }
else {if ("post_inc" == x) {return ad_op_kind::post_inc; }
else {if ("post_dec" == x) {return ad_op_kind::post_dec; }
else {if ("eq" == x) {return ad_op_kind::eq; }
else {if ("ne" == x) {return ad_op_kind::ne; }
else {if ("lt" == x) {return ad_op_kind::lt; }
else {if ("gt" == x) {return ad_op_kind::gt; }
else {if ("le" == x) {return ad_op_kind::le; }
else {if ("ge" == x) {return ad_op_kind::ge; }
else {if ("spaceship" == x) {return ad_op_kind::spaceship; }
else {if ("land" == x) {return ad_op_kind::land; }
else {if ("lor" == x) {return ad_op_kind::lor; }
else {if ("lnot" == x) {return ad_op_kind::lnot; }
else {if ("band" == x) {return ad_op_kind::band; }
else {if ("bor" == x) {return ad_op_kind::bor; }
else {if ("bxor" == x) {return ad_op_kind::bxor; }
else {if ("bnot" == x) {return ad_op_kind::bnot; }
else {if ("shl" == x) {return ad_op_kind::shl; }
else {if ("shr" == x) {return ad_op_kind::shr; }
else {if ("deref" == x) {return ad_op_kind::deref; }
else {if ("addr_of" == x) {return ad_op_kind::addr_of; }
else {if ("assign" == x) {return ad_op_kind::assign; }
else {if ("assign_add" == x) {return ad_op_kind::assign_add; }
else {if ("assign_sub" == x) {return ad_op_kind::assign_sub; }
else {if ("assign_mul" == x) {return ad_op_kind::assign_mul; }
else {if ("assign_div" == x) {return ad_op_kind::assign_div; }
else {if ("assign_mod" == x) {return ad_op_kind::assign_mod; }
else {if ("assign_band" == x) {return ad_op_kind::assign_band; }
else {if ("assign_bor" == x) {return ad_op_kind::assign_bor; }
else {if ("assign_bxor" == x) {return ad_op_kind::assign_bxor; }
else {if ("assign_shl" == x) {return ad_op_kind::assign_shl; }
else {if ("assign_shr" == x) {return ad_op_kind::assign_shr; }
else {if ("dot" == x) {return ad_op_kind::dot; }
else {if ("arrow" == x) {return ad_op_kind::arrow; }
else {if ("call" == x) {return ad_op_kind::call; }
else {if ("literal" == x) {return ad_op_kind::literal; }
else {if ("identifier" == cpp2::move(x)) {return ad_op_kind::identifier; }
#line 1 "source/reverse_ad.h2"
}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
CPP2_UFCS(report_violation)(cpp2::type_safety, CPP2_UFCS(c_str)(("can't convert string '" + cpp2::to_string(s) + "' to enum of type ad_op_kind")));
return ad_op_kind::add; 
}

[[nodiscard]] auto ad_op_kind::from_code(cpp2::impl::in<std::string_view> s) -> ad_op_kind{
std::string str {s}; return from_string(cpp2::string_util::replace_all(cpp2::move(str), "ad_op_kind::", "")); }

constexpr ad_expr_kind::ad_expr_kind(cpp2::impl::in<cpp2::i64> _val)
                                                          : _value{ cpp2::unchecked_narrow<cpp2::i8>(_val) } {  }

constexpr auto ad_expr_kind::operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_expr_kind&  { 
                                                          _value = cpp2::unchecked_narrow<cpp2::i8>(_val);
                                                          return *this; }
inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::literal{ 0 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::identifier{ 1 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::unary{ 2 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::binary{ 3 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::ternary{ 4 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::member{ 5 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::subscript{ 6 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::call{ 7 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::method_call{ 8 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::cast{ 9 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::construct{ 10 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::paren{ 11 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::lambda{ 12 };

inline CPP2_CONSTEXPR ad_expr_kind ad_expr_kind::initializer_list{ 13 };

[[nodiscard]] constexpr auto ad_expr_kind::get_raw_value() const& -> cpp2::i8 { return _value; }
constexpr ad_expr_kind::ad_expr_kind()
                                        : _value{ literal._value }{}
constexpr ad_expr_kind::ad_expr_kind(ad_expr_kind const& that)
                                              : _value{ that._value }{}
constexpr auto ad_expr_kind::operator=(ad_expr_kind const& that) -> ad_expr_kind& {
                                              _value = that._value;
                                              return *this;}
constexpr ad_expr_kind::ad_expr_kind(ad_expr_kind&& that) noexcept
                                              : _value{ std::move(that)._value }{}
constexpr auto ad_expr_kind::operator=(ad_expr_kind&& that) noexcept -> ad_expr_kind& {
                                              _value = std::move(that)._value;
                                              return *this;}
[[nodiscard]] auto ad_expr_kind::to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string{

auto pref {cpp2::to_string(prefix)}; 
if ((*this) == ad_expr_kind::literal) {return pref + "literal"; }
if ((*this) == ad_expr_kind::identifier) {return pref + "identifier"; }
if ((*this) == ad_expr_kind::unary) {return pref + "unary"; }
if ((*this) == ad_expr_kind::binary) {return pref + "binary"; }
if ((*this) == ad_expr_kind::ternary) {return pref + "ternary"; }
if ((*this) == ad_expr_kind::member) {return pref + "member"; }
if ((*this) == ad_expr_kind::subscript) {return pref + "subscript"; }
if ((*this) == ad_expr_kind::call) {return pref + "call"; }
if ((*this) == ad_expr_kind::method_call) {return pref + "method_call"; }
if ((*this) == ad_expr_kind::cast) {return pref + "cast"; }
if ((*this) == ad_expr_kind::construct) {return pref + "construct"; }
if ((*this) == ad_expr_kind::paren) {return pref + "paren"; }
if ((*this) == ad_expr_kind::lambda) {return pref + "lambda"; }
if ((*this) == ad_expr_kind::initializer_list) {return cpp2::move(pref) + "initializer_list"; }
return "invalid ad_expr_kind value"; 
}

[[nodiscard]] auto ad_expr_kind::to_string() const& -> std::string { return to_string_impl(""); }
[[nodiscard]] auto ad_expr_kind::to_code() const& -> std::string { return to_string_impl("ad_expr_kind::"); }
[[nodiscard]] auto ad_expr_kind::from_string(cpp2::impl::in<std::string_view> s) -> ad_expr_kind{

auto x {s}; 
if ("literal" == x) {return ad_expr_kind::literal; }
else {if ("identifier" == x) {return ad_expr_kind::identifier; }
else {if ("unary" == x) {return ad_expr_kind::unary; }
else {if ("binary" == x) {return ad_expr_kind::binary; }
else {if ("ternary" == x) {return ad_expr_kind::ternary; }
else {if ("member" == x) {return ad_expr_kind::member; }
else {if ("subscript" == x) {return ad_expr_kind::subscript; }
else {if ("call" == x) {return ad_expr_kind::call; }
else {if ("method_call" == x) {return ad_expr_kind::method_call; }
else {if ("cast" == x) {return ad_expr_kind::cast; }
else {if ("construct" == x) {return ad_expr_kind::construct; }
else {if ("paren" == x) {return ad_expr_kind::paren; }
else {if ("lambda" == x) {return ad_expr_kind::lambda; }
else {if ("initializer_list" == cpp2::move(x)) {return ad_expr_kind::initializer_list; }
#line 1 "source/reverse_ad.h2"
}}}}}}}}}}}}}
CPP2_UFCS(report_violation)(cpp2::type_safety, CPP2_UFCS(c_str)(("can't convert string '" + cpp2::to_string(s) + "' to enum of type ad_expr_kind")));
return ad_expr_kind::literal; 
}

[[nodiscard]] auto ad_expr_kind::from_code(cpp2::impl::in<std::string_view> s) -> ad_expr_kind{
std::string str {s}; return from_string(cpp2::string_util::replace_all(cpp2::move(str), "ad_expr_kind::", "")); }

constexpr ad_stmt_kind::ad_stmt_kind(cpp2::impl::in<cpp2::i64> _val)
                                                          : _value{ cpp2::unchecked_narrow<cpp2::i8>(_val) } {  }

constexpr auto ad_stmt_kind::operator=(cpp2::impl::in<cpp2::i64> _val) -> ad_stmt_kind&  { 
                                                          _value = cpp2::unchecked_narrow<cpp2::i8>(_val);
                                                          return *this; }
inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::decl{ 0 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::assign{ 1 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::compound_assign{ 2 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::assign_add{ 3 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::if_stmt{ 4 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::for_stmt{ 5 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::foreach_stmt{ 6 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::while_stmt{ 7 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::do_while_stmt{ 8 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::switch_stmt{ 9 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::return_{ 10 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::break_stmt{ 11 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::continue_stmt{ 12 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::compound{ 13 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::expr_stmt{ 14 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::expr{ 15 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::raw_code{ 16 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::try_catch{ 17 };

inline CPP2_CONSTEXPR ad_stmt_kind ad_stmt_kind::throw_stmt{ 18 };

[[nodiscard]] constexpr auto ad_stmt_kind::get_raw_value() const& -> cpp2::i8 { return _value; }
constexpr ad_stmt_kind::ad_stmt_kind()
                                        : _value{ decl._value }{}
constexpr ad_stmt_kind::ad_stmt_kind(ad_stmt_kind const& that)
                                              : _value{ that._value }{}
constexpr auto ad_stmt_kind::operator=(ad_stmt_kind const& that) -> ad_stmt_kind& {
                                              _value = that._value;
                                              return *this;}
constexpr ad_stmt_kind::ad_stmt_kind(ad_stmt_kind&& that) noexcept
                                              : _value{ std::move(that)._value }{}
constexpr auto ad_stmt_kind::operator=(ad_stmt_kind&& that) noexcept -> ad_stmt_kind& {
                                              _value = std::move(that)._value;
                                              return *this;}
[[nodiscard]] auto ad_stmt_kind::to_string_impl(cpp2::impl::in<std::string_view> prefix) const& -> std::string{

auto pref {cpp2::to_string(prefix)}; 
if ((*this) == ad_stmt_kind::decl) {return pref + "decl"; }
if ((*this) == ad_stmt_kind::assign) {return pref + "assign"; }
if ((*this) == ad_stmt_kind::compound_assign) {return pref + "compound_assign"; }
if ((*this) == ad_stmt_kind::assign_add) {return pref + "assign_add"; }
if ((*this) == ad_stmt_kind::if_stmt) {return pref + "if_stmt"; }
if ((*this) == ad_stmt_kind::for_stmt) {return pref + "for_stmt"; }
if ((*this) == ad_stmt_kind::foreach_stmt) {return pref + "foreach_stmt"; }
if ((*this) == ad_stmt_kind::while_stmt) {return pref + "while_stmt"; }
if ((*this) == ad_stmt_kind::do_while_stmt) {return pref + "do_while_stmt"; }
if ((*this) == ad_stmt_kind::switch_stmt) {return pref + "switch_stmt"; }
if ((*this) == ad_stmt_kind::return_) {return pref + "return_"; }
if ((*this) == ad_stmt_kind::break_stmt) {return pref + "break_stmt"; }
if ((*this) == ad_stmt_kind::continue_stmt) {return pref + "continue_stmt"; }
if ((*this) == ad_stmt_kind::compound) {return pref + "compound"; }
if ((*this) == ad_stmt_kind::expr_stmt) {return pref + "expr_stmt"; }
if ((*this) == ad_stmt_kind::expr) {return pref + "expr"; }
if ((*this) == ad_stmt_kind::raw_code) {return pref + "raw_code"; }
if ((*this) == ad_stmt_kind::try_catch) {return pref + "try_catch"; }
if ((*this) == ad_stmt_kind::throw_stmt) {return cpp2::move(pref) + "throw_stmt"; }
return "invalid ad_stmt_kind value"; 
}

[[nodiscard]] auto ad_stmt_kind::to_string() const& -> std::string { return to_string_impl(""); }
[[nodiscard]] auto ad_stmt_kind::to_code() const& -> std::string { return to_string_impl("ad_stmt_kind::"); }
[[nodiscard]] auto ad_stmt_kind::from_string(cpp2::impl::in<std::string_view> s) -> ad_stmt_kind{

auto x {s}; 
if ("decl" == x) {return ad_stmt_kind::decl; }
else {if ("assign" == x) {return ad_stmt_kind::assign; }
else {if ("compound_assign" == x) {return ad_stmt_kind::compound_assign; }
else {if ("assign_add" == x) {return ad_stmt_kind::assign_add; }
else {if ("if_stmt" == x) {return ad_stmt_kind::if_stmt; }
else {if ("for_stmt" == x) {return ad_stmt_kind::for_stmt; }
else {if ("foreach_stmt" == x) {return ad_stmt_kind::foreach_stmt; }
else {if ("while_stmt" == x) {return ad_stmt_kind::while_stmt; }
else {if ("do_while_stmt" == x) {return ad_stmt_kind::do_while_stmt; }
else {if ("switch_stmt" == x) {return ad_stmt_kind::switch_stmt; }
else {if ("return_" == x) {return ad_stmt_kind::return_; }
else {if ("break_stmt" == x) {return ad_stmt_kind::break_stmt; }
else {if ("continue_stmt" == x) {return ad_stmt_kind::continue_stmt; }
else {if ("compound" == x) {return ad_stmt_kind::compound; }
else {if ("expr_stmt" == x) {return ad_stmt_kind::expr_stmt; }
else {if ("expr" == x) {return ad_stmt_kind::expr; }
else {if ("raw_code" == x) {return ad_stmt_kind::raw_code; }
else {if ("try_catch" == x) {return ad_stmt_kind::try_catch; }
else {if ("throw_stmt" == cpp2::move(x)) {return ad_stmt_kind::throw_stmt; }
#line 1 "source/reverse_ad.h2"
}}}}}}}}}}}}}}}}}}
CPP2_UFCS(report_violation)(cpp2::type_safety, CPP2_UFCS(c_str)(("can't convert string '" + cpp2::to_string(s) + "' to enum of type ad_stmt_kind")));
return ad_stmt_kind::decl; 
}

[[nodiscard]] auto ad_stmt_kind::from_code(cpp2::impl::in<std::string_view> s) -> ad_stmt_kind{
std::string str {s}; return from_string(cpp2::string_util::replace_all(cpp2::move(str), "ad_stmt_kind::", "")); }

#line 804 "source/reverse_ad.h2"
    ad_expr::ad_expr(){}

#line 807 "source/reverse_ad.h2"
    ad_expr::ad_expr(ad_expr const& that)
                                   : kind{ that.kind }
                                   , type_name{ that.type_name }
                                   , expr_type{ that.expr_type }
                                   , name{ that.name }
                                   , op{ that.op }
                                   , args{ that.args }
                                   , member_name{ that.member_name }
                                   , type_args{ that.type_args }
                                   , cast_type{ that.cast_type }
                                   , lambda_params{ that.lambda_params }
                                   , lambda_body{ that.lambda_body }{}
#line 807 "source/reverse_ad.h2"
    auto ad_expr::operator=(ad_expr const& that) -> ad_expr& {
                                   kind = that.kind;
                                   type_name = that.type_name;
                                   expr_type = that.expr_type;
                                   name = that.name;
                                   op = that.op;
                                   args = that.args;
                                   member_name = that.member_name;
                                   type_args = that.type_args;
                                   cast_type = that.cast_type;
                                   lambda_params = that.lambda_params;
                                   lambda_body = that.lambda_body;
                                   return *this; }
#line 807 "source/reverse_ad.h2"
    ad_expr::ad_expr(ad_expr&& that) noexcept
                                   : kind{ std::move(that).kind }
                                   , type_name{ std::move(that).type_name }
                                   , expr_type{ std::move(that).expr_type }
                                   , name{ std::move(that).name }
                                   , op{ std::move(that).op }
                                   , args{ std::move(that).args }
                                   , member_name{ std::move(that).member_name }
                                   , type_args{ std::move(that).type_args }
                                   , cast_type{ std::move(that).cast_type }
                                   , lambda_params{ std::move(that).lambda_params }
                                   , lambda_body{ std::move(that).lambda_body }{}
#line 807 "source/reverse_ad.h2"
    auto ad_expr::operator=(ad_expr&& that) noexcept -> ad_expr& {
                                   kind = std::move(that).kind;
                                   type_name = std::move(that).type_name;
                                   expr_type = std::move(that).expr_type;
                                   name = std::move(that).name;
                                   op = std::move(that).op;
                                   args = std::move(that).args;
                                   member_name = std::move(that).member_name;
                                   type_args = std::move(that).type_args;
                                   cast_type = std::move(that).cast_type;
                                   lambda_params = std::move(that).lambda_params;
                                   lambda_body = std::move(that).lambda_body;
                                   return *this; }

#line 817 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_literal(cpp2::impl::in<std::string> value, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::literal;
        e.name = value;
        e.type_name = type_name_;
        e.op = ad_op_kind::literal;
        return e; 
    }

#line 832 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_literal_typed(cpp2::impl::in<std::string> value, cpp2::impl::in<ad_type> t) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::literal;
        e.name = value;
        e.type_name = ad_type_to_string(t);
        e.expr_type = std::make_shared<ad_type>(t);
        e.op = ad_op_kind::literal;
        return e; 
    }

#line 848 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_identifier(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::identifier;
        e.name = name_;
        e.type_name = type_name_;
        e.op = ad_op_kind::identifier;
        return e; 
    }

#line 863 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_identifier_typed(cpp2::impl::in<std::string> name_, cpp2::impl::in<ad_type> t) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::identifier;
        e.name = name_;
        e.type_name = ad_type_to_string(t);
        e.expr_type = std::make_shared<ad_type>(t);
        e.op = ad_op_kind::identifier;
        return e; 
    }

#line 882 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_unary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> operand, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::unary;
        e.op = op_;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, operand);
        return e; 
    }

#line 899 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_binary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::binary;
        e.op = op_;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, lhs);
        CPP2_UFCS(push_back)(e.args, rhs);
        return e; 
    }

#line 917 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_ternary(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<ad_expr> then_expr, cpp2::impl::in<ad_expr> else_expr, 
                   cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::ternary;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, condition);
        CPP2_UFCS(push_back)(e.args, then_expr);
        CPP2_UFCS(push_back)(e.args, else_expr);
        return e; 
    }

#line 938 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_member(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> member, cpp2::impl::in<bool> is_arrow, 
                  cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::member;
        if (is_arrow) {e.op = ad_op_kind::arrow; }
        else        { e.op = ad_op_kind::dot; }
        e.member_name = member;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, object);
        return e; 
    }

#line 957 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_subscript(cpp2::impl::in<ad_expr> array, cpp2::impl::in<ad_expr> index, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::subscript;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, array);
        CPP2_UFCS(push_back)(e.args, index);
        return e; 
    }

#line 976 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_call(cpp2::impl::in<std::string> func_name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<std::vector<ad_expr>> call_args, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::call;
        e.name = func_name;
        e.op = op_;
        e.type_name = type_name_;
        e.args = call_args;
        return e; 
    }

#line 994 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_template_call(cpp2::impl::in<std::string> func_name, cpp2::impl::in<std::vector<ad_expr>> call_args, 
                         cpp2::impl::in<std::vector<ad_type>> template_args, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::call;
        e.name = func_name;
        e.op = ad_op_kind::call;
        e.type_name = type_name_;
        e.args = call_args;
        e.type_args = template_args;
        return e; 
    }

#line 1014 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_method_call(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> method_name, 
                       cpp2::impl::in<std::vector<ad_expr>> call_args, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::method_call;
        e.name = method_name;
        e.op = ad_op_kind::call;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, object);
        for ( auto const& arg : call_args ) {
            CPP2_UFCS(push_back)(e.args, arg);
        }
        return e; 
    }

#line 1038 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_cast(cpp2::impl::in<std::string> cast_kind, cpp2::impl::in<ad_type> target_type, cpp2::impl::in<ad_expr> expr, 
                cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::cast;
        e.name = cast_kind;  // "static_cast", etc.
        e.type_name = type_name_;
        e.cast_type = std::make_shared<ad_type>(target_type);
        CPP2_UFCS(push_back)(e.args, expr);
        return e; 
    }

#line 1055 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_construct(cpp2::impl::in<std::string> type_name_, cpp2::impl::in<std::vector<ad_expr>> construct_args) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::construct;
        e.name = type_name_;
        e.type_name = type_name_;
        e.args = construct_args;
        return e; 
    }

#line 1071 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_paren(cpp2::impl::in<ad_expr> inner) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::paren;
        e.type_name = inner.type_name;
        CPP2_UFCS(push_back)(e.args, inner);
        return e; 
    }

#line 1085 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_initializer_list(cpp2::impl::in<std::vector<ad_expr>> elements, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::initializer_list;
        e.type_name = type_name_;
        e.args = elements;
        return e; 
    }

#line 1100 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_int_literal(cpp2::impl::in<int> value) -> ad_expr{
        return make_literal(std::to_string(value), "int"); 
    }

#line 1109 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_double_literal(cpp2::impl::in<double> value) -> ad_expr{
        return make_literal(std::to_string(value), "double"); 
    }

#line 1118 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_expr::make_bool_literal(cpp2::impl::in<bool> value) -> ad_expr{
        if (value) {return make_literal("true", "bool"); }
        return make_literal("false", "bool"); 
    }

#line 1168 "source/reverse_ad.h2"
    ad_stmt::ad_stmt(){}

#line 1171 "source/reverse_ad.h2"
    ad_stmt::ad_stmt(ad_stmt const& that)
                                   : kind{ that.kind }
                                   , target{ that.target }
                                   , type_name{ that.type_name }
                                   , decl_type{ that.decl_type }
                                   , op{ that.op }
                                   , expr{ that.expr }
                                   , stmts{ that.stmts }
                                   , else_stmts{ that.else_stmts }
                                   , init_stmt{ that.init_stmt }
                                   , incr_expr{ that.incr_expr }
                                   , range_expr{ that.range_expr }
                                   , switch_cases{ that.switch_cases }
                                   , default_case{ that.default_case }
                                   , catch_var{ that.catch_var }
                                   , catch_type{ that.catch_type }
                                   , catch_stmts{ that.catch_stmts }{}
#line 1171 "source/reverse_ad.h2"
    auto ad_stmt::operator=(ad_stmt const& that) -> ad_stmt& {
                                   kind = that.kind;
                                   target = that.target;
                                   type_name = that.type_name;
                                   decl_type = that.decl_type;
                                   op = that.op;
                                   expr = that.expr;
                                   stmts = that.stmts;
                                   else_stmts = that.else_stmts;
                                   init_stmt = that.init_stmt;
                                   incr_expr = that.incr_expr;
                                   range_expr = that.range_expr;
                                   switch_cases = that.switch_cases;
                                   default_case = that.default_case;
                                   catch_var = that.catch_var;
                                   catch_type = that.catch_type;
                                   catch_stmts = that.catch_stmts;
                                   return *this; }
#line 1171 "source/reverse_ad.h2"
    ad_stmt::ad_stmt(ad_stmt&& that) noexcept
                                   : kind{ std::move(that).kind }
                                   , target{ std::move(that).target }
                                   , type_name{ std::move(that).type_name }
                                   , decl_type{ std::move(that).decl_type }
                                   , op{ std::move(that).op }
                                   , expr{ std::move(that).expr }
                                   , stmts{ std::move(that).stmts }
                                   , else_stmts{ std::move(that).else_stmts }
                                   , init_stmt{ std::move(that).init_stmt }
                                   , incr_expr{ std::move(that).incr_expr }
                                   , range_expr{ std::move(that).range_expr }
                                   , switch_cases{ std::move(that).switch_cases }
                                   , default_case{ std::move(that).default_case }
                                   , catch_var{ std::move(that).catch_var }
                                   , catch_type{ std::move(that).catch_type }
                                   , catch_stmts{ std::move(that).catch_stmts }{}
#line 1171 "source/reverse_ad.h2"
    auto ad_stmt::operator=(ad_stmt&& that) noexcept -> ad_stmt& {
                                   kind = std::move(that).kind;
                                   target = std::move(that).target;
                                   type_name = std::move(that).type_name;
                                   decl_type = std::move(that).decl_type;
                                   op = std::move(that).op;
                                   expr = std::move(that).expr;
                                   stmts = std::move(that).stmts;
                                   else_stmts = std::move(that).else_stmts;
                                   init_stmt = std::move(that).init_stmt;
                                   incr_expr = std::move(that).incr_expr;
                                   range_expr = std::move(that).range_expr;
                                   switch_cases = std::move(that).switch_cases;
                                   default_case = std::move(that).default_case;
                                   catch_var = std::move(that).catch_var;
                                   catch_type = std::move(that).catch_type;
                                   catch_stmts = std::move(that).catch_stmts;
                                   return *this; }

#line 1182 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_decl(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<ad_expr> init) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::decl;
        s.target = name;
        s.type_name = type_name_;
        s.expr = init;
        return s; 
    }

#line 1198 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_decl_typed(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_type> t, cpp2::impl::in<ad_expr> init) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::decl;
        s.target = name;
        s.type_name = ad_type_to_string(t);
        s.decl_type = std::make_shared<ad_type>(t);
        s.expr = init;
        return s; 
    }

#line 1214 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::assign;
        s.target = name;
        s.expr = value;
        return s; 
    }

#line 1229 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_compound_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::compound_assign;
        s.target = name;
        s.op = op_;
        s.expr = value;
        return s; 
    }

#line 1245 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_assign_add(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::assign_add;
        s.target = name;
        s.expr = value;
        return s; 
    }

#line 1259 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_assign_sub(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return make_compound_assign(name, ad_op_kind::assign_sub, value); 
    }

#line 1269 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_assign_mul(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return make_compound_assign(name, ad_op_kind::assign_mul, value); 
    }

#line 1279 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_assign_div(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return make_compound_assign(name, ad_op_kind::assign_div, value); 
    }

#line 1290 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_expr(cpp2::impl::in<ad_expr> e) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::expr;
        s.expr = e;
        return s; 
    }

#line 1302 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_return(cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::return_;
        s.expr = value;
        return s; 
    }

#line 1316 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_compound(cpp2::impl::in<std::vector<ad_stmt>> nested) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::compound;
        s.stmts = nested;
        return s; 
    }

#line 1330 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_if(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> then_body, 
              cpp2::impl::in<std::vector<ad_stmt>> else_body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::if_stmt;
        s.expr = condition;
        s.stmts = then_body;
        s.else_stmts = else_body;
        return s; 
    }

#line 1348 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_for(cpp2::impl::in<ad_stmt> init, cpp2::impl::in<ad_expr> condition, cpp2::impl::in<ad_expr> increment, 
               cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::for_stmt;
        s.init_stmt = std::make_shared<ad_stmt>(init);
        s.expr = condition;
        s.incr_expr = increment;
        s.stmts = body;
        return s; 
    }

#line 1367 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_foreach(cpp2::impl::in<std::string> var_name, cpp2::impl::in<std::string> var_type, 
                   cpp2::impl::in<ad_expr> range, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::foreach_stmt;
        s.target = var_name;
        s.type_name = var_type;
        s.range_expr = range;
        s.stmts = body;
        return s; 
    }

#line 1384 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_while(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::while_stmt;
        s.expr = condition;
        s.stmts = body;
        return s; 
    }

#line 1398 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_do_while(cpp2::impl::in<std::vector<ad_stmt>> body, cpp2::impl::in<ad_expr> condition) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::do_while_stmt;
        s.stmts = body;
        s.expr = condition;
        return s; 
    }

#line 1412 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_break() -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::break_stmt;
        return s; 
    }

#line 1422 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_continue() -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::continue_stmt;
        return s; 
    }

#line 1437 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_switch(cpp2::impl::in<ad_expr> switch_expr, 
                  cpp2::impl::in<std::vector<std::pair<ad_expr,std::vector<ad_stmt>>>> cases, 
                  cpp2::impl::in<std::vector<ad_stmt>> default_body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::switch_stmt;
        s.expr = switch_expr;
        s.switch_cases = cases;
        s.default_case = default_body;
        return s; 
    }

#line 1458 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_try_catch(cpp2::impl::in<std::vector<ad_stmt>> try_body, 
                     cpp2::impl::in<std::string> catch_type_, cpp2::impl::in<std::string> catch_var_, 
                     cpp2::impl::in<std::vector<ad_stmt>> catch_body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::try_catch;
        s.stmts = try_body;
        s.catch_type = catch_type_;
        s.catch_var = catch_var_;
        s.catch_stmts = catch_body;
        return s; 
    }

#line 1475 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_throw(cpp2::impl::in<ad_expr> throw_expr) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::throw_stmt;
        s.expr = throw_expr;
        return s; 
    }

#line 1490 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_stmt::make_raw_code(cpp2::impl::in<std::string> code) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::raw_code;
        s.target = code;  // Store raw code in target field
        return s; 
    }

#line 1510 "source/reverse_ad.h2"
    ad_param::ad_param(){}

#line 1513 "source/reverse_ad.h2"
    ad_param::ad_param(ad_param const& that)
                                   : name{ that.name }
                                   , type_name{ that.type_name }
                                   , pass{ that.pass }
                                   , is_active{ that.is_active }{}
#line 1513 "source/reverse_ad.h2"
    auto ad_param::operator=(ad_param const& that) -> ad_param& {
                                   name = that.name;
                                   type_name = that.type_name;
                                   pass = that.pass;
                                   is_active = that.is_active;
                                   return *this; }
#line 1513 "source/reverse_ad.h2"
    ad_param::ad_param(ad_param&& that) noexcept
                                   : name{ std::move(that).name }
                                   , type_name{ std::move(that).type_name }
                                   , pass{ std::move(that).pass }
                                   , is_active{ std::move(that).is_active }{}
#line 1513 "source/reverse_ad.h2"
    auto ad_param::operator=(ad_param&& that) noexcept -> ad_param& {
                                   name = std::move(that).name;
                                   type_name = std::move(that).type_name;
                                   pass = std::move(that).pass;
                                   is_active = std::move(that).is_active;
                                   return *this; }

#line 1523 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_param::make(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<passing_style> pass_, cpp2::impl::in<bool> is_active_) -> ad_param{
        ad_param p {}; 
        p.name = name_;
        p.type_name = type_name_;
        p.pass = pass_;
        p.is_active = is_active_;
        return p; 
    }

#line 1548 "source/reverse_ad.h2"
    ad_function_ir::ad_function_ir(){}

#line 1551 "source/reverse_ad.h2"
    ad_function_ir::ad_function_ir(ad_function_ir const& that)
                                   : name{ that.name }
                                   , params{ that.params }
                                   , returns{ that.returns }
                                   , forward{ that.forward }
                                   , reverse{ that.reverse }{}
#line 1551 "source/reverse_ad.h2"
    auto ad_function_ir::operator=(ad_function_ir const& that) -> ad_function_ir& {
                                   name = that.name;
                                   params = that.params;
                                   returns = that.returns;
                                   forward = that.forward;
                                   reverse = that.reverse;
                                   return *this; }
#line 1551 "source/reverse_ad.h2"
    ad_function_ir::ad_function_ir(ad_function_ir&& that) noexcept
                                   : name{ std::move(that).name }
                                   , params{ std::move(that).params }
                                   , returns{ std::move(that).returns }
                                   , forward{ std::move(that).forward }
                                   , reverse{ std::move(that).reverse }{}
#line 1551 "source/reverse_ad.h2"
    auto ad_function_ir::operator=(ad_function_ir&& that) noexcept -> ad_function_ir& {
                                   name = std::move(that).name;
                                   params = std::move(that).params;
                                   returns = std::move(that).returns;
                                   forward = std::move(that).forward;
                                   reverse = std::move(that).reverse;
                                   return *this; }

#line 1565 "source/reverse_ad.h2"
[[nodiscard]] auto ad_op_kind_to_string(cpp2::impl::in<ad_op_kind> op) -> std::string{
    // Arithmetic
    if (op == ad_op_kind::add)        { return "add"; }
    if (op == ad_op_kind::sub)        { return "sub"; }
    if (op == ad_op_kind::mul)        { return "mul"; }
    if (op == ad_op_kind::div)        { return "div"; }
    if (op == ad_op_kind::mod)        { return "mod"; }
    if (op == ad_op_kind::neg)        { return "neg"; }
    if (op == ad_op_kind::pos)        { return "pos"; }

    // Increment/Decrement
    if (op == ad_op_kind::pre_inc)    { return "pre_inc"; }
    if (op == ad_op_kind::pre_dec)    { return "pre_dec"; }
    if (op == ad_op_kind::post_inc)   { return "post_inc"; }
    if (op == ad_op_kind::post_dec)   { return "post_dec"; }

    // Comparison
    if (op == ad_op_kind::eq)         { return "eq"; }
    if (op == ad_op_kind::ne)         { return "ne"; }
    if (op == ad_op_kind::lt)         { return "lt"; }
    if (op == ad_op_kind::gt)         { return "gt"; }
    if (op == ad_op_kind::le)         { return "le"; }
    if (op == ad_op_kind::ge)         { return "ge"; }
    if (op == ad_op_kind::spaceship)  { return "spaceship"; }

    // Logical
    if (op == ad_op_kind::land)       { return "land"; }
    if (op == ad_op_kind::lor)        { return "lor"; }
    if (op == ad_op_kind::lnot)       { return "lnot"; }

    // Bitwise
    if (op == ad_op_kind::band)       { return "band"; }
    if (op == ad_op_kind::bor)        { return "bor"; }
    if (op == ad_op_kind::bxor)       { return "bxor"; }
    if (op == ad_op_kind::bnot)       { return "bnot"; }
    if (op == ad_op_kind::shl)        { return "shl"; }
    if (op == ad_op_kind::shr)        { return "shr"; }

    // Pointer/Reference
    if (op == ad_op_kind::deref)      { return "deref"; }
    if (op == ad_op_kind::addr_of)    { return "addr_of"; }

    // Assignment
    if (op == ad_op_kind::assign)     { return "assign"; }
    if (op == ad_op_kind::assign_add) {return "assign_add"; }
    if (op == ad_op_kind::assign_sub) {return "assign_sub"; }
    if (op == ad_op_kind::assign_mul) {return "assign_mul"; }
    if (op == ad_op_kind::assign_div) {return "assign_div"; }
    if (op == ad_op_kind::assign_mod) {return "assign_mod"; }
    if (op == ad_op_kind::assign_band) {return "assign_band"; }
    if (op == ad_op_kind::assign_bor) {return "assign_bor"; }
    if (op == ad_op_kind::assign_bxor) {return "assign_bxor"; }
    if (op == ad_op_kind::assign_shl) {return "assign_shl"; }
    if (op == ad_op_kind::assign_shr) {return "assign_shr"; }

    // Member access
    if (op == ad_op_kind::dot)        { return "dot"; }
    if (op == ad_op_kind::arrow)      { return "arrow"; }

    // Other
    if (op == ad_op_kind::call)       { return "call"; }
    if (op == ad_op_kind::literal)    { return "literal"; }
    if (op == ad_op_kind::identifier) {return "identifier"; }

    return "unknown"; 
}

#line 1648 "source/reverse_ad.h2"
    ad_substitution_context::ad_substitution_context(){}

#line 1651 "source/reverse_ad.h2"
    ad_substitution_context::ad_substitution_context(ad_substitution_context const& that)
                                   : substitutions{ that.substitutions }{}
#line 1651 "source/reverse_ad.h2"
    auto ad_substitution_context::operator=(ad_substitution_context const& that) -> ad_substitution_context& {
                                   substitutions = that.substitutions;
                                   return *this; }
#line 1651 "source/reverse_ad.h2"
    ad_substitution_context::ad_substitution_context(ad_substitution_context&& that) noexcept
                                   : substitutions{ std::move(that).substitutions }{}
#line 1651 "source/reverse_ad.h2"
    auto ad_substitution_context::operator=(ad_substitution_context&& that) noexcept -> ad_substitution_context& {
                                   substitutions = std::move(that).substitutions;
                                   return *this; }

#line 1658 "source/reverse_ad.h2"
    auto ad_substitution_context::add(cpp2::impl::in<std::string> param_name, cpp2::impl::in<ad_expr> expr) & -> void{
        CPP2_UFCS(push_back)(substitutions, std::make_pair(param_name, expr));
    }

#line 1668 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_substitution_context::find(cpp2::impl::in<std::string> name, ad_expr& result) const& -> bool{
        for ( auto const& sub : substitutions ) {
            if (sub.first == name) {
                result = sub.second;
                return true; 
            }
        }
        return false; 
    }

#line 1683 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_substitution_context::has(cpp2::impl::in<std::string> name) const& -> bool{
        for ( auto const& sub : substitutions ) {
            if (sub.first == name) {
                return true; 
            }
        }
        return false; 
    }

#line 1696 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_substitution_context::size() const& -> int{
        return CPP2_UFCS(ssize)(substitutions); 
    }

#line 1711 "source/reverse_ad.h2"
[[nodiscard]] auto substitute_expr_params(cpp2::impl::in<ad_expr> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_expr{
    // Check if this is an identifier that should be substituted
    if (expr.kind == ad_expr_kind::identifier) {
        ad_expr substituted {}; 
        if (CPP2_UFCS(find)(ctx, expr.name, substituted)) {
            return substituted; 
        }
        return expr; 
    }

    // For literals, return as-is
    if (expr.kind == ad_expr_kind::literal) {
        return expr; 
    }

    // For unary expressions, substitute in the operand
    if (expr.kind == ad_expr_kind::unary) {
        if (!(CPP2_UFCS(empty)(expr.args))) {
            ad_expr new_operand {substitute_expr_params(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0), ctx)}; 
            return ad_expr::make_unary(expr.op, cpp2::move(new_operand), expr.type_name); 
        }
        return expr; 
    }

    // For binary expressions, substitute in both operands
    if (expr.kind == ad_expr_kind::binary) {
        if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
            ad_expr new_lhs {substitute_expr_params(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0), ctx)}; 
            ad_expr new_rhs {substitute_expr_params(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1), ctx)}; 
            return ad_expr::make_binary(expr.op, cpp2::move(new_lhs), cpp2::move(new_rhs), expr.type_name); 
        }
        return expr; 
    }

    // For function calls, substitute in the arguments
    if (expr.kind == ad_expr_kind::call) {
        std::vector<ad_expr> new_args {}; 
        for ( auto const& arg : expr.args ) {
            CPP2_UFCS(push_back)(new_args, substitute_expr_params(arg, ctx));
        }
        return ad_expr::make_call(expr.name, expr.op, cpp2::move(new_args), expr.type_name); 
    }

    return expr; 
}

#line 1767 "source/reverse_ad.h2"
[[nodiscard]] auto substitute_stmt_params(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_stmt{
    if (stmt.kind == ad_stmt_kind::decl) {
        // Substitute in the initializer expression
        ad_expr new_init {substitute_expr_params(stmt.expr, ctx)}; 
        // Also check if the target name should be substituted
        std::string new_target {stmt.target}; 
        ad_expr target_expr {}; 
        if (CPP2_UFCS(find)(ctx, stmt.target, target_expr) && target_expr.kind == ad_expr_kind::identifier) {
            new_target = cpp2::move(target_expr).name;
        }
        return ad_stmt::make_decl(cpp2::move(new_target), stmt.type_name, cpp2::move(new_init)); 
    }

    if (stmt.kind == ad_stmt_kind::assign) {
        ad_expr new_value {substitute_expr_params(stmt.expr, ctx)}; 
        // Check if target should be substituted
        std::string new_target {stmt.target}; 
        ad_expr target_expr {}; 
        if (CPP2_UFCS(find)(ctx, stmt.target, target_expr) && target_expr.kind == ad_expr_kind::identifier) {
            new_target = cpp2::move(target_expr).name;
        }
        return ad_stmt::make_assign(cpp2::move(new_target), cpp2::move(new_value)); 
    }

    if (stmt.kind == ad_stmt_kind::assign_add) {
        ad_expr new_value {substitute_expr_params(stmt.expr, ctx)}; 
        // Check if target should be substituted
        std::string new_target {stmt.target}; 
        ad_expr target_expr {}; 
        if (CPP2_UFCS(find)(ctx, stmt.target, target_expr) && target_expr.kind == ad_expr_kind::identifier) {
            new_target = cpp2::move(target_expr).name;
        }
        return ad_stmt::make_assign_add(cpp2::move(new_target), cpp2::move(new_value)); 
    }

    if (stmt.kind == ad_stmt_kind::expr) {
        ad_expr new_expr {substitute_expr_params(stmt.expr, ctx)}; 
        return ad_stmt::make_expr(cpp2::move(new_expr)); 
    }

    if (stmt.kind == ad_stmt_kind::return_) {
        ad_expr new_value {substitute_expr_params(stmt.expr, ctx)}; 
        return ad_stmt::make_return(cpp2::move(new_value)); 
    }

    if (stmt.kind == ad_stmt_kind::compound) {
        std::vector<ad_stmt> new_stmts {}; 
        for ( auto const& s : stmt.stmts ) {
            CPP2_UFCS(push_back)(new_stmts, substitute_stmt_params(s, ctx));
        }
        return ad_stmt::make_compound(cpp2::move(new_stmts)); 
    }

    if (stmt.kind == ad_stmt_kind::if_stmt) {
        ad_expr new_cond {substitute_expr_params(stmt.expr, ctx)}; 
        std::vector<ad_stmt> new_then {}; 
        for ( auto const& s : stmt.stmts ) {
            CPP2_UFCS(push_back)(new_then, substitute_stmt_params(s, ctx));
        }
        std::vector<ad_stmt> new_else {}; 
        for ( auto const& s : stmt.else_stmts ) {
            CPP2_UFCS(push_back)(new_else, substitute_stmt_params(s, ctx));
        }
        return ad_stmt::make_if(cpp2::move(new_cond), cpp2::move(new_then), cpp2::move(new_else)); 
    }

    // For raw_code, we can't substitute (it's a string), return as-is
    return stmt; 
}

#line 1864 "source/reverse_ad.h2"
    ad_rule_meta::ad_rule_meta(){}

#line 1870 "source/reverse_ad.h2"
    ad_rule_meta::ad_rule_meta(ad_rule_meta&& that) noexcept
        : name{ cpp2::move(that).name }
        , n_args{ cpp2::move(that).n_args }
        , is_member{ cpp2::move(that).is_member }
        , rule_type{ cpp2::move(that).rule_type }
        , forward_body{ cpp2::move(that).forward_body }
        , reverse_body{ cpp2::move(that).reverse_body }
        , reverse_body_stmts{ cpp2::move(that).reverse_body_stmts }
        , has_reverse_body_stmts{ cpp2::move(that).has_reverse_body_stmts }{

#line 1879 "source/reverse_ad.h2"
    }

#line 1889 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_meta::make(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, cpp2::impl::in<std::string> rule_type_) -> ad_rule_meta{
        ad_rule_meta r {}; 
        r.name = name_;
        r.n_args = n_args_;
        r.is_member = is_member_;
        r.rule_type = rule_type_;
        return r; 
    }

#line 1913 "source/reverse_ad.h2"
    ad_reverse_rule_result::ad_reverse_rule_result(){}
#line 1914 "source/reverse_ad.h2"
    ad_reverse_rule_result::ad_reverse_rule_result(ad_reverse_rule_result const& that)
                                   : found{ that.found }
                                   , ir_stmts{ that.ir_stmts }
                                   , ir_success{ that.ir_success }
                                   , rule_type{ that.rule_type }
                                   , error_message{ that.error_message }{}
#line 1914 "source/reverse_ad.h2"
    auto ad_reverse_rule_result::operator=(ad_reverse_rule_result const& that) -> ad_reverse_rule_result& {
                                   found = that.found;
                                   ir_stmts = that.ir_stmts;
                                   ir_success = that.ir_success;
                                   rule_type = that.rule_type;
                                   error_message = that.error_message;
                                   return *this; }
#line 1914 "source/reverse_ad.h2"
    ad_reverse_rule_result::ad_reverse_rule_result(ad_reverse_rule_result&& that) noexcept
                                   : found{ std::move(that).found }
                                   , ir_stmts{ std::move(that).ir_stmts }
                                   , ir_success{ std::move(that).ir_success }
                                   , rule_type{ std::move(that).rule_type }
                                   , error_message{ std::move(that).error_message }{}
#line 1914 "source/reverse_ad.h2"
    auto ad_reverse_rule_result::operator=(ad_reverse_rule_result&& that) noexcept -> ad_reverse_rule_result& {
                                   found = std::move(that).found;
                                   ir_stmts = std::move(that).ir_stmts;
                                   ir_success = std::move(that).ir_success;
                                   rule_type = std::move(that).rule_type;
                                   error_message = std::move(that).error_message;
                                   return *this; }

#line 1916 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_reverse_rule_result::make_not_found() -> ad_reverse_rule_result{
        ad_reverse_rule_result r {}; 
        return r; 
    }

#line 1921 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_reverse_rule_result::make_success(cpp2::impl::in<std::vector<ad_stmt>> stmts, cpp2::impl::in<std::string> rule_type_) -> ad_reverse_rule_result{
        ad_reverse_rule_result r {}; 
        r.found = true;
        r.ir_stmts = stmts;
        r.ir_success = true;
        r.rule_type = rule_type_;
        return r; 
    }

#line 1930 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_reverse_rule_result::make_parse_error(cpp2::impl::in<std::string> rule_type_, cpp2::impl::in<std::string> error_msg) -> ad_reverse_rule_result{
        ad_reverse_rule_result r {}; 
        r.found = true;           // Rule was found
        r.ir_success = false;     // But parsing failed
        r.rule_type = rule_type_;
        r.error_message = error_msg;
        return r; 
    }

#line 1951 "source/reverse_ad.h2"
    ad_rule_registry::ad_rule_registry(){}

#line 1957 "source/reverse_ad.h2"
    auto ad_rule_registry::register_rule(ad_rule_meta&& rule) & -> void{
        CPP2_UFCS(push_back)(rules, cpp2::move(rule));
    }

#line 1964 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_registry::has_rule(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> bool{
        for ( auto const& r : rules ) {
            if (r.name == name_ && r.n_args == n_args_ && r.is_member == is_member_) {
                return true; 
            }
        }
        return false; 
    }

#line 1976 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_registry::get_rule_type(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> std::string{
        for ( auto const& r : rules ) {
            if (r.name == name_ && r.n_args == n_args_ && r.is_member == is_member_) {
                return r.rule_type; 
            }
        }
        return ""; 
    }

#line 1998 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_registry::apply_reverse_rule(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, 
                         cpp2::impl::in<ad_substitution_context> ctx) const& -> ad_reverse_rule_result{
        for ( auto const& r : rules ) {
            if (r.name == name_ && r.n_args == n_args_ && r.is_member == is_member_) {
                // Found the rule - it MUST have a parseable body
                if (!(r.has_reverse_body_stmts)) {
                    // Rule exists but has no body - this is a user error
                    return ad_reverse_rule_result::make_parse_error(r.rule_type, 
                        "Rule '" + name_ + "' has no reverse() body statements"); 
                }

                std::vector<ad_stmt> ir_stmts {}; 
                if (!(parse_rule_body_stmts(r.reverse_body_stmts, ctx, ir_stmts))) {
                    // Parsing failed - this is an error, not a fallback case
                    return ad_reverse_rule_result::make_parse_error(r.rule_type, 
                        "Failed to parse reverse() body for rule '" + name_ + "'"); 
                }

                return ad_reverse_rule_result::make_success(cpp2::move(ir_stmts), r.rule_type); 
            }
        }
        return ad_reverse_rule_result::make_not_found(); 
    }

#line 2026 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_registry::size() const& -> int{
        return CPP2_UFCS(ssize)(rules); 
    }

#line 2039 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_registry::has_operator_rule(cpp2::impl::in<std::string> op_name) const& -> bool{
        // Operators are binary (n_args=2) and not member functions
        return has_rule(op_name, 2, false); 
    }

#line 2054 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_registry::apply_operator_rule(cpp2::impl::in<std::string> op_name, 
                          cpp2::impl::in<ad_substitution_context> ctx) const& -> ad_reverse_rule_result{
        // Operators are binary (n_args=2) and not member functions
        return apply_reverse_rule(op_name, 2, false, ctx); 
    }

#line 2065 "source/reverse_ad.h2"
auto ad_rule_debug_dump(cpp2::impl::in<ad_rule_meta> rule) -> void{
    std::cout << "  rule: name=" << rule.name 
              << " n_args=" << rule.n_args 
              << " is_member=" << rule.is_member 
              << " type=" << rule.rule_type << "\n";
}

#line 2076 "source/reverse_ad.h2"
auto ad_rule_registry_debug_dump(cpp2::impl::in<ad_rule_registry> reg) -> void{
    std::cout << "=== AD Rule Registry (" << CPP2_UFCS(size)(reg) << " rules) ===\n";
    for ( auto const& r : reg.rules ) {
        ad_rule_debug_dump(r);
    }
    std::cout << "=== End AD Rule Registry ===\n";
}

#line 2096 "source/reverse_ad.h2"
[[nodiscard]] auto is_ad_rule_type(cpp2::impl::in<meta::type_declaration> member_type) -> bool{
    bool has_name {false}; 
    bool has_n_args {false}; 
    bool has_forward {false}; 
    bool has_reverse {false}; 

    // Check member objects for name and n_args
    for ( auto const& obj : CPP2_UFCS(get_member_objects)(member_type) ) {
        if (CPP2_UFCS(name)(obj) == "name") {
            has_name = true;
        }
        if (CPP2_UFCS(name)(obj) == "n_args") {
            has_n_args = true;
        }
    }

    // Check member functions for forward and reverse
    for ( auto const& func : CPP2_UFCS(get_member_functions)(member_type) ) {
        if (CPP2_UFCS(name)(func) == "forward") {
            has_forward = true;
        }
        if (CPP2_UFCS(name)(func) == "reverse") {
            has_reverse = true;
        }
    }

    return cpp2::move(has_name) && cpp2::move(has_n_args) && cpp2::move(has_forward) && cpp2::move(has_reverse); 
}

#line 2134 "source/reverse_ad.h2"
[[nodiscard]] auto extract_ad_rule_meta(cpp2::impl::in<meta::type_declaration*> member_type) -> ad_rule_meta{
    ad_rule_meta rule {}; 
    rule.rule_type = cpp2::impl::as_<std::string>(CPP2_UFCS(name)((*cpp2::impl::assert_not_null(member_type))));

    // Extract name, n_args, is_member from member objects
    for ( auto const& obj : CPP2_UFCS(get_member_objects)((*cpp2::impl::assert_not_null(member_type))) ) {
        if (CPP2_UFCS(name)(obj) == "name") {
            // Try to get the initializer value
            if (CPP2_UFCS(has_initializer)(obj)) {
                rule.name = CPP2_UFCS(to_string)(CPP2_UFCS(initializer)(obj));
                // Strip quotes if present
                if (CPP2_UFCS(starts_with)(rule.name, "\"") && CPP2_UFCS(ends_with)(rule.name, "\"")) {
                    rule.name = CPP2_UFCS(substr)(rule.name, 1, CPP2_UFCS(ssize)(rule.name) - 2);
                }
            }
        }
        if (CPP2_UFCS(name)(obj) == "n_args") {
            if (CPP2_UFCS(has_initializer)(obj)) {
                std::string init_str {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(CPP2_UFCS(initializer)(obj)))}; 
                int val {0}; 
                if (string_util::string_to_int(cpp2::move(init_str), val)) {
                    rule.n_args = cpp2::move(val);
                }
            }
        }
        if (CPP2_UFCS(name)(obj) == "is_member") {
            if (CPP2_UFCS(has_initializer)(obj)) {
                std::string_view init_str {CPP2_UFCS(to_string)(CPP2_UFCS(initializer)(obj))}; 
                rule.is_member = { cpp2::move(init_str) == "true" };
            }
        }
    }

    // Extract the reverse() function body for later inlining
    // Extract the reverse() function body for later inlining
    for ( auto const& func : CPP2_UFCS(get_member_functions)((*cpp2::impl::assert_not_null(member_type))) ) {
        if (CPP2_UFCS(name)(func) == "reverse" && CPP2_UFCS(has_compound_body)(func)) {
            meta::compound_statement body {CPP2_UFCS(get_compound_body)(func)}; 

            // NEW: Store the AST statements for IR-based parsing
            for ( auto&& stmt : CPP2_UFCS(get_statements)(body) ) {
                CPP2_UFCS(push_back)(rule.reverse_body_stmts, cpp2::move(stmt));
            }
            rule.has_reverse_body_stmts = true;
            std::cout << "AD: Extracted " << CPP2_UFCS(ssize)(rule.reverse_body_stmts) 
                      << " AST statements for '" << rule.name << "'\n";

            // DEPRECATED: Also build the string representation for backward compatibility
            std::string body_stmts {""}; 
            for ( auto const& stmt : CPP2_UFCS(get_statements)(cpp2::move(body)) ) {
                std::string stmt_str {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(stmt))}; 

                // BUG FIX: Trim trailing whitespace before checking last character
                std::string trimmed {cpp2::move(stmt_str)}; 
                while( !(CPP2_UFCS(empty)(trimmed)) && std::isspace(cpp2::impl::as_<int>(CPP2_UFCS(back)(trimmed))) != 0 ) {
                    CPP2_UFCS(pop_back)(trimmed);
                }

                // Add semicolon if not present (statement may or may not have it)
                if (!(CPP2_UFCS(empty)(trimmed)) && CPP2_UFCS(back)(trimmed) != ';' && CPP2_UFCS(back)(trimmed) != '}') {
                    body_stmts += cpp2::move(trimmed) + ";\n";
                }else {if (!(CPP2_UFCS(empty)(trimmed))) {
                    body_stmts += cpp2::move(trimmed) + "\n";
                }}
            }
            static_cast<void>(cpp2::move(body_stmts));// TODO: Remove after IR-based rule inlining is complete
        }
    }

    return rule; 
}

#line 2215 "source/reverse_ad.h2"
auto discover_ad_rules(cpp2::impl::in<meta::type_declaration> t, ad_rule_registry& out) -> void{
    std::cout << "AD: Discovering rules in type " << CPP2_UFCS(name)(t) << "\n";

    // 1. Nested types inside the @autodiff type (highest priority)
    for ( auto& member_type : CPP2_UFCS(get_member_types)(t) ) {
        std::string_view type_name {CPP2_UFCS(name)(member_type)}; 
        std::cout << "AD: Checking nested type: " << cpp2::move(type_name) << "\n";

        if (is_ad_rule_type(member_type)) {
            ad_rule_meta rule {extract_ad_rule_meta(&member_type)}; 
            std::cout << "AD: Found nested rule: " << rule.name << " (n_args=" << rule.n_args << ")\n";
            CPP2_UFCS(register_rule)(out, cpp2::move(rule));
        }
    }

    // 2. Sibling types in the parent namespace (same file only)
    //    NOTE: #include doesn't merge ASTs, so rules from included files are NOT visible.
    //    Users must define all rules in the same file as their @autodiff type.
    if (CPP2_UFCS(parent_is_nonglobal_namespace)(t)) {
        auto ns {CPP2_UFCS(as_nonglobal_namespace)(CPP2_UFCS(get_parent)(t))}; 
        std::cout << "AD: Checking siblings in namespace '" << CPP2_UFCS(name)(ns) << "'\n";

        // DEBUG: List ALL members returned by get_members()
        auto members {CPP2_UFCS(get_members)(cpp2::move(ns))}; 
        std::cout << "AD DEBUG: ns.get_members() returned " << CPP2_UFCS(size)(members) << " members:\n";
        for ( auto const& m : members ) {
            std::cout << "AD DEBUG:   - '" << CPP2_UFCS(name)(m) << "' is_type=" << CPP2_UFCS(is_type)(m) 
                      << " is_func=" << CPP2_UFCS(is_function)(m) << " is_ns=" << CPP2_UFCS(is_namespace)(m) << "\n";
        }

        for ( auto const& m : cpp2::move(members) ) {
            if (CPP2_UFCS(is_type)(m) && !(CPP2_UFCS(is_same)(m, t))) {
                std::string type_name {cpp2::impl::as_<std::string>(CPP2_UFCS(name)(m))}; 
                if (CPP2_UFCS(starts_with)(cpp2::move(type_name), "ad_rule_")) {
                    meta::type_declaration sibling_type {CPP2_UFCS(as_type)(m)}; 
                    if (is_ad_rule_type(sibling_type)) {
                        ad_rule_meta rule {extract_ad_rule_meta(&sibling_type)}; 
                        std::cout << "AD: Found sibling rule: " << rule.name << " (n_args=" << rule.n_args << ")\n";
                        CPP2_UFCS(register_rule)(out, cpp2::move(rule));
                    }
                }
            }
        }
    }
}

#line 2274 "source/reverse_ad.h2"
    ad_rule_body_result::ad_rule_body_result(){}
#line 2275 "source/reverse_ad.h2"
    ad_rule_body_result::ad_rule_body_result(ad_rule_body_result const& that)
                                   : ok{ that.ok }
                                   , body_str{ that.body_str }{}
#line 2275 "source/reverse_ad.h2"
    auto ad_rule_body_result::operator=(ad_rule_body_result const& that) -> ad_rule_body_result& {
                                   ok = that.ok;
                                   body_str = that.body_str;
                                   return *this; }
#line 2275 "source/reverse_ad.h2"
    ad_rule_body_result::ad_rule_body_result(ad_rule_body_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , body_str{ std::move(that).body_str }{}
#line 2275 "source/reverse_ad.h2"
    auto ad_rule_body_result::operator=(ad_rule_body_result&& that) noexcept -> ad_rule_body_result& {
                                   ok = std::move(that).ok;
                                   body_str = std::move(that).body_str;
                                   return *this; }

#line 2277 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_rule_body_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<std::string> body_) -> ad_rule_body_result{
        ad_rule_body_result r {}; 
        r.ok = ok_;
        r.body_str = body_;
        return r; 
    }

#line 2298 "source/reverse_ad.h2"
    ad_parse_expr_result::ad_parse_expr_result(){}
#line 2299 "source/reverse_ad.h2"
    ad_parse_expr_result::ad_parse_expr_result(ad_parse_expr_result const& that)
                                   : ok{ that.ok }
                                   , expr{ that.expr }{}
#line 2299 "source/reverse_ad.h2"
    auto ad_parse_expr_result::operator=(ad_parse_expr_result const& that) -> ad_parse_expr_result& {
                                   ok = that.ok;
                                   expr = that.expr;
                                   return *this; }
#line 2299 "source/reverse_ad.h2"
    ad_parse_expr_result::ad_parse_expr_result(ad_parse_expr_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , expr{ std::move(that).expr }{}
#line 2299 "source/reverse_ad.h2"
    auto ad_parse_expr_result::operator=(ad_parse_expr_result&& that) noexcept -> ad_parse_expr_result& {
                                   ok = std::move(that).ok;
                                   expr = std::move(that).expr;
                                   return *this; }

#line 2301 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_parse_expr_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_expr> expr_) -> ad_parse_expr_result{
        ad_parse_expr_result r {}; 
        r.ok = ok_;
        r.expr = expr_;
        return r; 
    }

#line 2308 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_parse_expr_result::make_fail() -> ad_parse_expr_result{
        ad_parse_expr_result r {}; 
        r.ok = false;
        return r; 
    }

#line 2322 "source/reverse_ad.h2"
    ad_parse_stmt_result::ad_parse_stmt_result(){}
#line 2323 "source/reverse_ad.h2"
    ad_parse_stmt_result::ad_parse_stmt_result(ad_parse_stmt_result const& that)
                                   : ok{ that.ok }
                                   , stmt{ that.stmt }{}
#line 2323 "source/reverse_ad.h2"
    auto ad_parse_stmt_result::operator=(ad_parse_stmt_result const& that) -> ad_parse_stmt_result& {
                                   ok = that.ok;
                                   stmt = that.stmt;
                                   return *this; }
#line 2323 "source/reverse_ad.h2"
    ad_parse_stmt_result::ad_parse_stmt_result(ad_parse_stmt_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , stmt{ std::move(that).stmt }{}
#line 2323 "source/reverse_ad.h2"
    auto ad_parse_stmt_result::operator=(ad_parse_stmt_result&& that) noexcept -> ad_parse_stmt_result& {
                                   ok = std::move(that).ok;
                                   stmt = std::move(that).stmt;
                                   return *this; }

#line 2325 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_parse_stmt_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_stmt> stmt_) -> ad_parse_stmt_result{
        ad_parse_stmt_result r {}; 
        r.ok = ok_;
        r.stmt = stmt_;
        return r; 
    }

#line 2332 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_parse_stmt_result::make_fail() -> ad_parse_stmt_result{
        ad_parse_stmt_result r {}; 
        r.ok = false;
        return r; 
    }

#line 2354 "source/reverse_ad.h2"
[[nodiscard]] auto map_op_string(cpp2::impl::in<std::string> op) -> ad_op_kind{
    if (op == "+") {return ad_op_kind::add; }
    if (op == "-") {return ad_op_kind::sub; }
    if (op == "*") {return ad_op_kind::mul; }
    if (op == "/") {return ad_op_kind::div; }
    if (op == "%") {return ad_op_kind::mod; }
    if (op == "==") {return ad_op_kind::eq; }
    if (op == "!=") {return ad_op_kind::ne; }
    if (op == "<") {return ad_op_kind::lt; }
    if (op == ">") {return ad_op_kind::gt; }
    if (op == "<=") {return ad_op_kind::le; }
    if (op == ">=") {return ad_op_kind::ge; }
    if (op == "&&") {return ad_op_kind::land; }
    if (op == "||") {return ad_op_kind::lor; }
    if (op == "&") {return ad_op_kind::band; }
    if (op == "|") {return ad_op_kind::bor; }
    if (op == "^") {return ad_op_kind::bxor; }
    if (op == "<<") {return ad_op_kind::shl; }
    if (op == ">>") {return ad_op_kind::shr; }
    return ad_op_kind::add; // Default
}

#line 2377 "source/reverse_ad.h2"
[[nodiscard]] auto parse_assignment_expr(cpp2::impl::in<meta::assignment_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {
        return ad_parse_expr_result::make_fail(); 
    }
    // If only one term, no assignment - drill down
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_logical_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    // Actual assignment - for now just parse the RHS
    // (assignments in rule bodies are handled at statement level)
    return parse_logical_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(back)(cpp2::move(terms))), ctx); 
}

#line 2392 "source/reverse_ad.h2"
[[nodiscard]] auto parse_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    // LHS is first term (with empty operator)
    ad_parse_expr_result lhs_result {parse_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    // Process remaining terms (which have actual operators)
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_logical_and_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::lor, result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2414 "source/reverse_ad.h2"
[[nodiscard]] auto parse_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_bit_or_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::land, result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2434 "source/reverse_ad.h2"
[[nodiscard]] auto parse_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::bor, result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2454 "source/reverse_ad.h2"
[[nodiscard]] auto parse_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_bit_and_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::bxor, result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2474 "source/reverse_ad.h2"
[[nodiscard]] auto parse_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_equality_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::band, result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2494 "source/reverse_ad.h2"
[[nodiscard]] auto parse_equality_expr(cpp2::impl::in<meta::equality_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_relational_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        ad_op_kind op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2515 "source/reverse_ad.h2"
[[nodiscard]] auto parse_relational_expr(cpp2::impl::in<meta::relational_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_compare_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        ad_op_kind op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2536 "source/reverse_ad.h2"
[[nodiscard]] auto parse_compare_expr(cpp2::impl::in<meta::compare_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_shift_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::spaceship, result, cpp2::move(rhs_result).expr, "auto");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2556 "source/reverse_ad.h2"
[[nodiscard]] auto parse_shift_expr(cpp2::impl::in<meta::shift_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_additive_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        ad_op_kind op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2577 "source/reverse_ad.h2"
[[nodiscard]] auto parse_additive_expr(cpp2::impl::in<meta::additive_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    ad_parse_expr_result lhs_result {parse_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        ad_parse_expr_result rhs_result {parse_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        ad_op_kind op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "double");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2598 "source/reverse_ad.h2"
[[nodiscard]] auto parse_multiplicative_expr(cpp2::impl::in<meta::multiplicative_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    std::cout << "AD: multiplicative terms.ssize() = " << CPP2_UFCS(ssize)(terms) << "\n";
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        // No actual multiplication - drill down to is_as_expression -> prefix -> postfix
        // First term has empty operator, so we get the is_as_expression and drill down
        auto is_as {CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))}; 
        auto pf_expr {CPP2_UFCS(get_expression)(cpp2::move(is_as))}; // prefix_expression
        auto pf {CPP2_UFCS(get_postfix_expression)(cpp2::move(pf_expr))}; 
        return parse_postfix_expr(cpp2::move(pf), ctx); 
    }
    // Actual multiplication/division
    // Get the LHS via the first term (which has empty operator)
    auto lhs_is_as {CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))}; 
    auto lhs_pf_expr {CPP2_UFCS(get_expression)(cpp2::move(lhs_is_as))}; 
    auto lhs_pf {CPP2_UFCS(get_postfix_expression)(cpp2::move(lhs_pf_expr))}; 
    ad_parse_expr_result lhs_result {parse_postfix_expr(cpp2::move(lhs_pf), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    ad_expr result {cpp2::move(lhs_result).expr}; 
    // Process remaining terms (which have actual operators)
    cpp2::i64 i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto term {CPP2_ASSERT_IN_BOUNDS(terms, i)}; 
        auto rhs_is_as {CPP2_UFCS(get_term)(term)}; 
        auto rhs_pf_expr {CPP2_UFCS(get_expression)(cpp2::move(rhs_is_as))}; 
        auto rhs_pf {CPP2_UFCS(get_postfix_expression)(cpp2::move(rhs_pf_expr))}; 
        ad_parse_expr_result rhs_result {parse_postfix_expr(cpp2::move(rhs_pf), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        auto op_str {CPP2_UFCS(get_op)(cpp2::move(term))}; 
        std::cout << "AD: multiplicative op = '" << op_str << "'\n";
        ad_op_kind op_kind {map_op_string(cpp2::move(op_str))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "double");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2637 "source/reverse_ad.h2"
[[nodiscard]] auto parse_prefix_expr(cpp2::impl::in<meta::prefix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    std::vector<std::string> ops {CPP2_UFCS(get_ops)(expr)}; 
    meta::postfix_expression pf {CPP2_UFCS(get_postfix_expression)(expr)}; 
    ad_parse_expr_result inner_result {parse_postfix_expr(cpp2::move(pf), ctx)}; 
    if (!(inner_result.ok)) {return inner_result; }

    // Apply prefix operators from right to left
    ad_expr result {cpp2::move(inner_result).expr}; 
    cpp2::i64 i {CPP2_UFCS(ssize)(ops) - 1}; 
    while( cpp2::impl::cmp_greater_eq(i,0) ) {
        std::string op_str {CPP2_ASSERT_IN_BOUNDS(ops, i)}; 
        if (op_str == "-") {
            result = ad_expr::make_unary(ad_op_kind::neg, result, "double");
        }else {if (op_str == "!") {
            result = ad_expr::make_unary(ad_op_kind::lnot, result, "bool");
        }else {if (op_str == "~") {
            result = ad_expr::make_unary(ad_op_kind::bnot, result, "int");
        }else {if (op_str == "*") {
            result = ad_expr::make_unary(ad_op_kind::deref, result, "double");
        }else {if (cpp2::move(op_str) == "&") {
            result = ad_expr::make_unary(ad_op_kind::addr_of, result, "double*");
        }}}}}
        --i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

#line 2665 "source/reverse_ad.h2"
[[nodiscard]] auto parse_postfix_expr(cpp2::impl::in<meta::postfix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    std::cout << "AD: parse_postfix_expr: '" << CPP2_UFCS(to_string)(expr) << "'\n";

    // Check if it's a simple identifier
    if (CPP2_UFCS(is_identifier)(expr)) {
        std::string id_name {CPP2_UFCS(as_identifier)(expr)}; 
        ad_expr substituted {}; 
        if (CPP2_UFCS(find)(ctx, id_name, substituted)) {
            return ad_parse_expr_result::make(true, cpp2::move(substituted)); 
        }
        return ad_parse_expr_result::make(true, ad_expr::make_identifier(cpp2::move(id_name), "double")); 
    }

    // Check if it's a literal
    if (CPP2_UFCS(is_literal)(expr)) {
        return ad_parse_expr_result::make(true, ad_expr::make_literal(CPP2_UFCS(as_literal)(expr), "double")); 
    }

    // For function calls and other postfix operations, use the string representation for now
    // TODO: Properly handle function calls via get_terms()
    std::string expr_str {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(expr))}; 
    return ad_parse_expr_result::make(true, ad_expr::make_identifier(cpp2::move(expr_str), "double")); 
}

#line 2693 "source/reverse_ad.h2"
[[nodiscard]] auto parse_rule_expr(cpp2::impl::in<meta::expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    std::cout << "AD: parse_rule_expr: '" << CPP2_UFCS(to_string)(expr) << "'\n";

    // Check for simple cases first
    if (CPP2_UFCS(is_identifier)(expr)) {
        std::string id_name {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(expr))}; 
        ad_expr substituted {}; 
        if (CPP2_UFCS(find)(ctx, id_name, substituted)) {
            return ad_parse_expr_result::make(true, cpp2::move(substituted)); 
        }
        return ad_parse_expr_result::make(true, ad_expr::make_identifier(cpp2::move(id_name), "double")); 
    }

    if (CPP2_UFCS(is_literal)(expr)) {
        return ad_parse_expr_result::make(true, ad_expr::make_literal(CPP2_UFCS(to_string)(expr), "double")); 
    }

    // Traverse the expression hierarchy starting with assignment_expression
    if (CPP2_UFCS(is_assignment_expression)(expr)) {
        return parse_assignment_expr(CPP2_UFCS(as_assignment_expression)(expr), ctx); 
    }

    std::cout << "AD: Failed to parse expression: '" << CPP2_UFCS(to_string)(expr) << "'\n";
    return ad_parse_expr_result::make_fail(); 
}

#line 2734 "source/reverse_ad.h2"
[[nodiscard]] auto parse_rule_stmt(cpp2::impl::in<meta::statement> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_stmt_result{
    std::string stmt_str {string_util::trim_copy(CPP2_UFCS(to_string)(stmt))}; 

    std::cout << "AD: parse_rule_stmt: '" << stmt_str << "'\n";

    // Check for compound statement
    if (CPP2_UFCS(is_compound_statement)(stmt)) {
        meta::compound_statement compound {CPP2_UFCS(as_compound_statement)(stmt)}; 
        std::vector<ad_stmt> nested_stmts {}; 
        for ( auto const& s : CPP2_UFCS(get_statements)(cpp2::move(compound)) ) {
            ad_parse_stmt_result nested_result {parse_rule_stmt(s, ctx)}; 
            if (!(nested_result.ok)) {
                std::cout << "AD: Failed to parse nested statement in compound\n";
                return ad_parse_stmt_result::make_fail(); 
            }
            CPP2_UFCS(push_back)(nested_stmts, cpp2::move(nested_result).stmt);
        }
        return ad_parse_stmt_result::make(true, ad_stmt::make_compound(cpp2::move(nested_stmts))); 
    }

    // Check for selection (if) statement
    if (CPP2_UFCS(is_selection_statement)(stmt)) {
        meta::selection_statement sel {CPP2_UFCS(as_selection_statement)(stmt)}; 
        // Parse condition - need to convert logical_or_expression to expression
        // For now, use the string representation
        std::string cond_str {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(CPP2_UFCS(get_expression)(sel)))}; 
        std::cout << "AD: If condition string: '" << cond_str << "'\n";

        // Create a simple condition expression (for now just use the string)
        ad_expr cond_expr {ad_expr::make_identifier(cpp2::move(cond_str), "bool")}; 

        // Parse then branch
        meta::compound_statement then_compound {CPP2_UFCS(get_true_branch)(sel)}; 
        std::vector<ad_stmt> then_stmts {}; 
        for ( auto const& s : CPP2_UFCS(get_statements)(cpp2::move(then_compound)) ) {
            ad_parse_stmt_result then_result {parse_rule_stmt(s, ctx)}; 
            if (!(then_result.ok)) {
                std::cout << "AD: Failed to parse if then-branch\n";
                return ad_parse_stmt_result::make_fail(); 
            }
            CPP2_UFCS(push_back)(then_stmts, cpp2::move(then_result).stmt);
        }

        // Parse else branch if present
        std::vector<ad_stmt> else_stmts {}; 
        if (CPP2_UFCS(has_false_branch)(sel)) {
            meta::compound_statement else_compound {CPP2_UFCS(get_false_branch)(cpp2::move(sel))}; 
            for ( auto const& s : CPP2_UFCS(get_statements)(cpp2::move(else_compound)) ) {
                ad_parse_stmt_result else_result {parse_rule_stmt(s, ctx)}; 
                if (else_result.ok) {
                    CPP2_UFCS(push_back)(else_stmts, cpp2::move(else_result).stmt);
                }
            }
        }

        return ad_parse_stmt_result::make(true, 
            ad_stmt::make_if(cpp2::move(cond_expr), cpp2::move(then_stmts), cpp2::move(else_stmts))); 
    }

    // Check for expression statement - this is the common case for AD rules
    // Statements like "x_adj += cos(x_val) * res_adj;"
    if (CPP2_UFCS(is_expression_statement)(stmt)) {
        auto expr_stmt {CPP2_UFCS(as_expression_statement)(stmt)}; 
        auto expr {CPP2_UFCS(get_expression)(cpp2::move(expr_stmt))}; 

        std::cout << "AD: Expression statement: '" << CPP2_UFCS(to_string)(expr) << "'\n";

        // Use structural analysis via meta type methods
        // Assignment expressions have terms: [LHS (empty op), RHS (with operator)]
        if (CPP2_UFCS(is_assignment_expression)(expr)) {
            auto assign_expr {CPP2_UFCS(as_assignment_expression)(expr)}; 
            auto terms {CPP2_UFCS(get_terms)(cpp2::move(assign_expr))}; 
            std::cout << "AD DEBUG: assignment_expression has " << CPP2_UFCS(ssize)(terms) << " terms\n";

            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(terms),2)) {
                // Extract LHS target structurally
                auto lhs_term {CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS_LITERAL(terms, 0))}; 
                std::string target_str {string_util::trim_copy(cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(cpp2::move(lhs_term))))}; 

                // Get the operator structurally
                auto op_str {CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS_LITERAL(terms, 1))}; 
                std::cout << "AD DEBUG: operator is '" << op_str << "'\n";

                // Substitute the target if needed
                std::string new_target {target_str}; 
                ad_expr target_expr {}; 
                if (CPP2_UFCS(find)(ctx, cpp2::move(target_str), target_expr) && target_expr.kind == ad_expr_kind::identifier) {
                    new_target = cpp2::move(target_expr).name;
                }

                // Get the RHS term structurally
                auto rhs_term {CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(terms), 1))}; 
                std::cout << "AD DEBUG: RHS term is '" << CPP2_UFCS(to_string)(rhs_term) << "'\n";

                // Handle compound assignments (+=, -=, *=, /=)
                if (op_str == "+=") {
                    ad_parse_expr_result rhs_result {parse_logical_or_expr(cpp2::move(rhs_term), ctx)}; 
                    if (rhs_result.ok) {
                        return ad_parse_stmt_result::make(true, 
                            ad_stmt::make_assign_add(cpp2::move(new_target), cpp2::move(rhs_result).expr)); 
                    }
                    std::cout << "AD DEBUG: Failed to parse += RHS expression\n";
                }
                else {if (op_str == "-=") {
                    ad_parse_expr_result rhs_result {parse_logical_or_expr(cpp2::move(rhs_term), ctx)}; 
                    if (rhs_result.ok) {
                        return ad_parse_stmt_result::make(true, 
                            ad_stmt::make_compound_assign(cpp2::move(new_target), ad_op_kind::assign_sub, cpp2::move(rhs_result).expr)); 
                    }
                }
                else {if (op_str == "*=") {
                    ad_parse_expr_result rhs_result {parse_logical_or_expr(cpp2::move(rhs_term), ctx)}; 
                    if (rhs_result.ok) {
                        return ad_parse_stmt_result::make(true, 
                            ad_stmt::make_compound_assign(cpp2::move(new_target), ad_op_kind::assign_mul, cpp2::move(rhs_result).expr)); 
                    }
                }
                else {if (op_str == "/=") {
                    ad_parse_expr_result rhs_result {parse_logical_or_expr(cpp2::move(rhs_term), ctx)}; 
                    if (rhs_result.ok) {
                        return ad_parse_stmt_result::make(true, 
                            ad_stmt::make_compound_assign(cpp2::move(new_target), ad_op_kind::assign_div, cpp2::move(rhs_result).expr)); 
                    }
                }
                else {if (op_str == "=") {
                    // Simple assignment
                    ad_parse_expr_result rhs_result {parse_logical_or_expr(cpp2::move(rhs_term), ctx)}; 
                    if (rhs_result.ok) {
                        return ad_parse_stmt_result::make(true, 
                            ad_stmt::make_assign(cpp2::move(new_target), cpp2::move(rhs_result).expr)); 
                    }
                }
                else {
                    std::cout << "AD: Unknown assignment operator: '" << cpp2::move(op_str) << "'\n";
                }}}}}
            }

            // Assignment expression parsing failed
            std::cout << "AD: ERROR - Could not parse assignment expression structurally\n";
            return ad_parse_stmt_result::make_fail(); 
        }

        // General expression statement - just wrap the parsed expression
        ad_parse_expr_result expr_result {parse_rule_expr(cpp2::move(expr), ctx)}; 
        if (expr_result.ok) {
            return ad_parse_stmt_result::make(true, ad_stmt::make_expr(cpp2::move(expr_result).expr)); 
        }
    }

    std::cout << "AD: Failed to parse statement: '" << cpp2::move(stmt_str) << "'\n";
    return ad_parse_stmt_result::make_fail(); 
}

#line 2898 "source/reverse_ad.h2"
[[nodiscard]] auto parse_rule_body_stmts(cpp2::impl::in<std::vector<meta::statement>> stmts, cpp2::impl::in<ad_substitution_context> ctx, 
                        std::vector<ad_stmt>& out) -> bool{
    std::cout << "AD DEBUG: parse_rule_body_stmts called with " << CPP2_UFCS(ssize)(stmts) << " statements\n";
    for ( auto const& stmt : stmts ) {
        std::cout << "AD DEBUG: About to call parse_rule_stmt\n";
        ad_parse_stmt_result result {parse_rule_stmt(stmt, ctx)}; 
        std::cout << "AD DEBUG: parse_rule_stmt returned ok=" << result.ok << "\n";
        if (!(result.ok)) {
            return false; 
        }
        CPP2_UFCS(push_back)(out, cpp2::move(result).stmt);
    }
    return true; 
}

#line 2932 "source/reverse_ad.h2"
[[nodiscard]] auto is_identifier_char(cpp2::impl::in<char> c) -> bool{
    return std::isalnum(cpp2::impl::as_<int>(c)) != 0 || c == '_'; 
}

#line 2947 "source/reverse_ad.h2"
[[nodiscard]] auto replace_word(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> pattern, cpp2::impl::in<std::string> replacement) -> std::string{
    if (CPP2_UFCS(empty)(pattern)) {
        return str; 
    }

    std::string result {""}; 
    size_t pos {0}; 
    size_t pattern_len {CPP2_UFCS(size)(pattern)}; 

    while( cpp2::impl::cmp_less(pos,CPP2_UFCS(size)(str)) ) {
        size_t found {CPP2_UFCS(find)(str, pattern, pos)}; 
        if (found == std::string::npos) {
            // No more matches, append rest of string
            result += CPP2_UFCS(substr)(str, pos);
            break;
        }

        // Check word boundaries
        bool is_word_start {(found == 0) || !(is_identifier_char(CPP2_ASSERT_IN_BOUNDS(str, found - 1)))}; 
        bool is_word_end {(cpp2::impl::cmp_greater_eq(found + pattern_len,CPP2_UFCS(size)(str))) || !(is_identifier_char(CPP2_ASSERT_IN_BOUNDS(str, found + pattern_len)))}; 

        if (cpp2::move(is_word_start) && cpp2::move(is_word_end)) {
            // It's a whole word match - do the replacement
            result += CPP2_UFCS(substr)(str, pos, found - pos);
            result += replacement;
            pos = cpp2::move(found) + pattern_len;
        }else {
            // Not a whole word - copy including the first char and continue
            result += CPP2_UFCS(substr)(str, pos, found - pos + 1);
            pos = cpp2::move(found) + 1;
        }
    }

    return result; 
}

#line 3003 "source/reverse_ad.h2"
[[nodiscard]] auto substitute_rule_params(cpp2::impl::in<std::string> body_str, 
                         cpp2::impl::in<std::string> target_val, cpp2::impl::in<std::string> target_adj, 
                         cpp2::impl::in<std::vector<std::string>> arg_vals, 
                         cpp2::impl::in<std::vector<std::string>> arg_adjs) -> std::string{
    std::string result {body_str}; 

    // Substitute result value and adjoint using word-boundary-aware replacement
    result = replace_word(result, "res_val", target_val);
    result = replace_word(result, "res_adj", target_adj);

    // Substitute argument values and adjoints
    // BUG FIX: Check both arg_vals and arg_adjs sizes
    std::array<std::string,4> param_names {"x", "y", "z", "w"}; 
    cpp2::i64 i {0}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(param_names)) && cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(arg_vals)) && cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(arg_adjs)) ) {
        std::string val_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_val"}; 
        std::string adj_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_adj"}; 

        // Always substitute value params
        result = replace_word(result, cpp2::move(val_param), CPP2_ASSERT_IN_BOUNDS(arg_vals, i));

        // BUG FIX: Only substitute adjoint if it's not empty
        // Empty adjoints occur when argument is not an identifier (e.g., literal)
        if (!(CPP2_UFCS(empty)(CPP2_ASSERT_IN_BOUNDS(arg_adjs, i)))) {
            result = replace_word(result, cpp2::move(adj_param), CPP2_ASSERT_IN_BOUNDS(arg_adjs, i));
        }else {
            // Check if the rule body references this adjoint - if so, it's an error
            if (CPP2_UFCS(find)(result, adj_param) != std::string::npos) {
                std::cout << "AD: WARNING - rule body references '" << adj_param 
                          << "' but argument is not a variable (cannot accumulate adjoint)\n";
                // Replace with an error marker to make the issue visible
                result = replace_word(result, cpp2::move(adj_param), "/*ERROR:no_adj_for_" + CPP2_ASSERT_IN_BOUNDS(param_names, i) + "*/0.0");
            }
        }
        ++i;
    }

    std::cout << "AD: Substituted body: " << result << "\n";
    return result; 
}

#line 3057 "source/reverse_ad.h2"
    ad_op_mapping_result::ad_op_mapping_result(){}
#line 3058 "source/reverse_ad.h2"
    ad_op_mapping_result::ad_op_mapping_result(ad_op_mapping_result const& that)
                                   : ok{ that.ok }
                                   , kind{ that.kind }{}
#line 3058 "source/reverse_ad.h2"
    auto ad_op_mapping_result::operator=(ad_op_mapping_result const& that) -> ad_op_mapping_result& {
                                   ok = that.ok;
                                   kind = that.kind;
                                   return *this; }
#line 3058 "source/reverse_ad.h2"
    ad_op_mapping_result::ad_op_mapping_result(ad_op_mapping_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , kind{ std::move(that).kind }{}
#line 3058 "source/reverse_ad.h2"
    auto ad_op_mapping_result::operator=(ad_op_mapping_result&& that) noexcept -> ad_op_mapping_result& {
                                   ok = std::move(that).ok;
                                   kind = std::move(that).kind;
                                   return *this; }

#line 3060 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_op_mapping_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_op_kind> kind_) -> ad_op_mapping_result{
        ad_op_mapping_result r {}; 
        r.ok = ok_;
        r.kind = kind_;
        return r; 
    }

#line 3077 "source/reverse_ad.h2"
[[nodiscard]] auto map_operator_token(cpp2::impl::in<std::string_view> op) -> ad_op_mapping_result{
    if (op == "+") {
        return ad_op_mapping_result::make(true, ad_op_kind::add); 
    }
    if (op == "-") {
        return ad_op_mapping_result::make(true, ad_op_kind::sub); 
    }
    if (op == "*") {
        return ad_op_mapping_result::make(true, ad_op_kind::mul); 
    }
    if (op == "/") {
        return ad_op_mapping_result::make(true, ad_op_kind::div); 
    }
    return ad_op_mapping_result::make(false, ad_op_kind::add); 
}

#line 3102 "source/reverse_ad.h2"
[[nodiscard]] auto map_function_to_op(cpp2::impl::in<std::string_view> name) -> ad_op_mapping_result{
    // All functions use ad_op_kind::call - differentiation is handled by
    // looking up ad_rule_* definitions in the rule registry by name
    return ad_op_mapping_result::make(true, ad_op_kind::call); 
}

#line 3114 "source/reverse_ad.h2"
auto debug_operator_mapping(cpp2::impl::in<std::string_view> op, cpp2::impl::in<bool> ok, cpp2::impl::in<ad_op_kind> kind) -> void{
    std::cout << "AD: map_operator_token(\"" << op << "\") -> ";
    if (ok) {
        std::cout << "ok, " << ad_op_kind_to_string(kind) << "\n";
    }else {
        std::cout << "not recognized\n";
    }
}

#line 3142 "source/reverse_ad.h2"
    ad_ir_builder::ad_ir_builder()
        : ctx{ nullptr }
        , registry{ nullptr }{

#line 3145 "source/reverse_ad.h2"
    }

#line 3148 "source/reverse_ad.h2"
    ad_ir_builder::ad_ir_builder(cpp2::impl::in<reverse_autodiff_context*> ctx_, cpp2::impl::in<ad_rule_registry*> registry_)
        : ctx{ ctx_ }
        , registry{ registry_ }{

#line 3151 "source/reverse_ad.h2"
    }

#line 3159 "source/reverse_ad.h2"
    auto ad_ir_builder::report_error(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc, cpp2::impl::in<std::string> context) & -> void{
        std::cerr << "AD IR Builder Error: " << msg;
        if (!(CPP2_UFCS(empty)(loc))) {std::cerr << " at " << loc; }
        if (!(CPP2_UFCS(empty)(context))) {std::cerr << " (" << context << ")"; }
        std::cerr << "\n";
        if (cpp2::cpp2_default.is_active() && !(false && "AD IR Builder encountered a fatal error") ) { cpp2::cpp2_default.report_violation(""); }
    }

#line 3172 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::gen_temp_name(cpp2::impl::in<std::string> base) & -> std::string{
        std::string name {"" + cpp2::to_string(base) + "_t" + cpp2::to_string(temp_counter) + ""}; 
        ++temp_counter;
        CPP2_UFCS(push_back)(temp_names, name);
        return name; 
    }

#line 3187 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string{
        if (expr.kind == ad_expr_kind::literal) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::identifier) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::unary) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string operand {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                // Handle different unary operators
                if (expr.op == ad_op_kind::neg) {return "(-" + operand + ")"; }
                if (expr.op == ad_op_kind::pos) {return "(+" + operand + ")"; }
                if (expr.op == ad_op_kind::lnot) {return "(!" + operand + ")"; }
                if (expr.op == ad_op_kind::bnot) {return "(~" + operand + ")"; }
                if (expr.op == ad_op_kind::deref) {return "(*" + operand + ")"; }
                if (expr.op == ad_op_kind::addr_of) {return "(&" + operand + ")"; }
                if (expr.op == ad_op_kind::pre_inc) {return "(++" + operand + ")"; }
                if (expr.op == ad_op_kind::pre_dec) {return "(--" + operand + ")"; }
                if (expr.op == ad_op_kind::post_inc) {return "(" + operand + "++)"; }
                if (expr.op == ad_op_kind::post_dec) {return "(" + cpp2::move(operand) + "--)"; }
            }
            return "(unary " + ad_op_kind_to_string(expr.op) + ")"; 
        }
        else {if (expr.kind == ad_expr_kind::binary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                std::string lhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string rhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                std::string op_str {ad_op_kind_to_binary_str(expr.op)}; 
                if (CPP2_UFCS(empty)(op_str)) {op_str = " ?? "; }
                return "(" + cpp2::move(lhs) + cpp2::move(op_str) + cpp2::move(rhs) + ")"; 
            }
            return "(binary)"; 
        }
        else {if (expr.kind == ad_expr_kind::ternary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),3)) {
                std::string cond {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string then_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                std::string else_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 2))}; 
                return "(" + cpp2::move(cond) + " ? " + cpp2::move(then_expr) + " : " + cpp2::move(else_expr) + ")"; 
            }
            return "(ternary)"; 
        }
        else {if (expr.kind == ad_expr_kind::member) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string op_str {"->"}; 
                if (expr.op != ad_op_kind::arrow) {op_str = "."; }
                return cpp2::move(obj) + cpp2::move(op_str) + expr.member_name; 
            }
            return "(member)"; 
        }
        else {if (expr.kind == ad_expr_kind::subscript) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                std::string arr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string idx {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                return cpp2::move(arr) + "[" + cpp2::move(idx) + "]"; 
            }
            return "(subscript)"; 
        }
        else {if (expr.kind == ad_expr_kind::call) {
            std::string result {expr.name}; 
            // Add template args if present
            if (!(CPP2_UFCS(empty)(expr.type_args))) {
                result += "<";
{
bool first{true};

#line 3253 "source/reverse_ad.h2"
                for ( auto const& targ : expr.type_args ) {
                    if (!(first)) {result += ", "; }
                    first = false;
                    result += ad_type_to_string(targ);
                }
}
#line 3258 "source/reverse_ad.h2"
                result += ">";
            }
            result += "(";
{
bool first{true};

#line 3262 "source/reverse_ad.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 3267 "source/reverse_ad.h2"
            result += ")";
            return result; 
        }
        else {if (expr.kind == ad_expr_kind::method_call) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string result {cpp2::move(obj) + "." + expr.name + "("}; 
                // Skip first arg (the object), emit remaining args
                if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(expr.args),1)) {
                    result += emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1));
                    cpp2::i64 i {2}; 
                    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(expr.args)) ) {
                        result += ", ";
                        result += emit_expr(CPP2_ASSERT_IN_BOUNDS(expr.args, i));
                        ++i;
                    }
                }
                result += ")";
                return result; 
            }
            return "(method_call)"; 
        }
        else {if (expr.kind == ad_expr_kind::cast) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string target_type {""}; 
                if (expr.cast_type != nullptr) {
                    target_type = ad_type_to_string(*cpp2::impl::assert_not_null(expr.cast_type));
                }else {
                    target_type = expr.type_name;
                }
                std::string inner {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                // C++ style cast
                if (expr.name != "") {
                    return expr.name + "<" + target_type + ">(" + inner + ")"; 
                }
                // C-style cast
                return "(" + cpp2::move(target_type) + ")" + cpp2::move(inner); 
            }
            return "(cast)"; 
        }
        else {if (expr.kind == ad_expr_kind::construct) {
            std::string result {expr.name + "("}; 
{
bool first{true};

#line 3310 "source/reverse_ad.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 3315 "source/reverse_ad.h2"
            result += ")";
            return result; 
        }
        else {if (expr.kind == ad_expr_kind::paren) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                return "(" + emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0)) + ")"; 
            }
            return "()"; 
        }
        else {if (expr.kind == ad_expr_kind::initializer_list) {
            std::string result {"{"}; 
{
bool first{true};

#line 3327 "source/reverse_ad.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 3332 "source/reverse_ad.h2"
            result += "}";
            return result; 
        }}}}}}}}}}}}}
        return "(??)"; 
    }

#line 3347 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::derive_op_name(cpp2::impl::in<ad_op_kind> op, cpp2::impl::in<std::vector<ad_expr>> args) const& -> std::string{
        auto result {ad_op_kind_to_string(op)}; 
        for ( auto const& arg : args ) {
            if (arg.kind == ad_expr_kind::identifier || arg.kind == ad_expr_kind::literal) {
                result += "_" + arg.name;
            }
        }
        return result; 
    }

#line 3365 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_primary_expr(cpp2::impl::in<meta::primary_expression> primary) & -> ad_expr{
        if (CPP2_UFCS(is_identifier)(primary)) {
            auto name {CPP2_UFCS(as_identifier)(primary)}; 
            std::cout << "AD IR Builder: primary identifier '" << name << "'\n";
            return ad_expr::make_identifier(cpp2::impl::as_<std::string>(cpp2::move(name)), "double"); 
        }
        else {if (CPP2_UFCS(is_literal)(primary)) {
            auto value {CPP2_UFCS(as_literal)(primary)}; 
            std::cout << "AD IR Builder: primary literal '" << value << "'\n";
            return ad_expr::make_literal(cpp2::impl::as_<std::string>(cpp2::move(value)), "double"); 
        }
        else {if (CPP2_UFCS(is_expression_list)(primary)) {
            // Parenthesized expression - recursively parse
            std::cout << "AD IR Builder: primary expression_list (parenthesized)\n";
            auto expr_list {CPP2_UFCS(as_expression_list)(primary)}; 
            auto exprs {CPP2_UFCS(get_expressions)(cpp2::move(expr_list))}; 
            if (CPP2_UFCS(ssize)(exprs) == 1) {
                // Single expression in parentheses - unwrap it
                return build_expression(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(exprs), 0)); 
            }
            // Multiple expressions - error
            report_error(
                "Unsupported: multiple expressions in parentheses", 
                cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(primary)), 
                "Expected a single expression"
            );
            return ad_expr::make_literal("__ERROR__", "error"); 
        }
        else {
            // Unknown primary expression type - hard fail
            auto str {CPP2_UFCS(to_string)(primary)}; 
            report_error(
                "Unknown primary expression type", 
                cpp2::impl::as_<std::string>(cpp2::move(str)), 
                "Could not parse primary expression into AD IR"
            );
            return ad_expr::make_literal("__ERROR__", "error"); 
        }}}
    }

#line 3413 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_postfix_expr(cpp2::impl::in<meta::postfix_expression> postfix) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(postfix)}; 

        // If no terms, just build the primary expression
        if (CPP2_UFCS(empty)(terms)) {
            return build_primary_expr(CPP2_UFCS(get_primary_expression)(postfix)); 
        }

        // Start with the primary expression
        auto result {build_primary_expr(CPP2_UFCS(get_primary_expression)(postfix))}; 

        // Process each postfix term
        for ( auto const& term : cpp2::move(terms) ) {
            auto op_str {CPP2_UFCS(to_string)(CPP2_UFCS(get_op)(term))}; 
            std::cout << "AD IR Builder: postfix term op='" << cpp2::move(op_str) << "'\n";

            if (CPP2_UFCS(is_expression_list)(term)) {
                // Function call: f(args)
                auto func_name {result.name}; 
                std::cout << "AD IR Builder: function call '" << func_name << "'\n";

                // Parse argument list
                std::vector<ad_expr> call_args {}; 
                auto expr_list {CPP2_UFCS(get_expression_list)(term)}; 
                for ( auto const& arg_expr : CPP2_UFCS(get_expressions)(cpp2::move(expr_list)) ) {
                    auto arg_ir {build_expression(arg_expr)}; 
                    CPP2_UFCS(push_back)(call_args, arg_ir);
                    std::cout << "AD IR Builder:   arg: " << cpp2::move(arg_ir).name << "\n";
                }

                auto fn_op {map_function_to_op(func_name)}; 
                if (fn_op.ok) {
                    result = ad_expr::make_call(cpp2::move(func_name), cpp2::move(fn_op).kind, cpp2::move(call_args), "double");
                }else {
                    result = ad_expr::make_call(cpp2::move(func_name), ad_op_kind::call, cpp2::move(call_args), "double");
                }
            }
            else {if (CPP2_UFCS(is_id_expression)(term)) {
                // Member access: obj.member
                auto field {CPP2_UFCS(to_string)(CPP2_UFCS(get_id_expression)(term))}; 
                std::cout << "AD IR Builder: member access '." << field << "'\n";
                result = ad_expr::make_member(result, cpp2::impl::as_<std::string>(cpp2::move(field)), false, "double");
            }}
        }

        return result; 
    }

#line 3469 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_prefix_expr(cpp2::impl::in<meta::prefix_expression> prefix) & -> ad_expr{
        auto ops {CPP2_UFCS(get_ops)(prefix)}; 

        // If no ops, just build the postfix expression
        if (CPP2_UFCS(empty)(ops)) {
            return build_postfix_expr(CPP2_UFCS(get_postfix_expression)(prefix)); 
        }

        // Build the inner expression first
        auto inner {build_postfix_expr(CPP2_UFCS(get_postfix_expression)(prefix))}; 

        // Apply prefix operators from right to left (innermost first)
        auto result {cpp2::move(inner)}; 
        // Iterate in reverse order
        auto i {CPP2_UFCS(ssize)(ops) - 1}; 
        while( cpp2::impl::cmp_greater_eq(i,0) ) {
            auto op_str {CPP2_UFCS(to_string)(CPP2_ASSERT_IN_BOUNDS(ops, i))}; 
            std::cout << "AD IR Builder: prefix op '" << op_str << "'\n";

            if (op_str == "-") {
                result = ad_expr::make_unary(ad_op_kind::neg, result, result.type_name);
            }
            else {if (op_str == "+") {
                // Unary plus is a no-op
            }
            else {
                report_error(
                    "unsupported prefix operator: '" + (cpp2::impl::as_<std::string>(cpp2::move(op_str))) + "'", 
                    cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(prefix)), 
                    "prefix expression"
                );
            }}
            --i;
        }

        return result; 
    }

#line 3515 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_is_as_expr(cpp2::impl::in<meta::is_as_expression> isas) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(isas)}; 

        // If no is/as terms, descend to prefix expression
        if (CPP2_UFCS(empty)(cpp2::move(terms))) {
            return build_prefix_expr(CPP2_UFCS(get_expression)(isas)); 
        }

        // For now, just build the base expression (ignoring is/as)
        std::cout << "AD IR Builder: is-as expression (ignoring is/as terms)\n";
        return build_prefix_expr(CPP2_UFCS(get_expression)(isas)); 
    }

#line 3536 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_multiplicative_expr(cpp2::impl::in<meta::multiplicative_expression> binexpr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        // If only one term, descend to is-as
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_is_as_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }

        // Build left-to-right chain of binary ops
        auto result {build_is_as_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)))}; 

        auto i {1}; 
        while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
            auto term {CPP2_ASSERT_IN_BOUNDS(terms, i)}; 
            auto op_str {CPP2_UFCS(to_string)(CPP2_UFCS(get_op)(term))}; 
            auto rhs {build_is_as_expr(CPP2_UFCS(get_term)(cpp2::move(term)))}; 

            auto op_result {map_operator_token(op_str)}; 
            debug_operator_mapping(op_str, op_result.ok, op_result.kind);

            if (op_result.ok) {
                result = ad_expr::make_binary(cpp2::move(op_result).kind, result, cpp2::move(rhs), "double");
            }else {
                report_error(
                    "unsupported multiplicative operator: '" + (cpp2::impl::as_<std::string>(cpp2::move(op_str))) + "'", 
                    cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(binexpr)), 
                    "multiplicative expression"
                );
            }
            ++i;
        }

        return result; 
    }

#line 3580 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_additive_expr(cpp2::impl::in<meta::additive_expression> binexpr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        // If only one term, descend to multiplicative
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }

        // Build left-to-right chain of binary ops
        auto result {build_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)))}; 

        auto i {1}; 
        while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
            auto term {CPP2_ASSERT_IN_BOUNDS(terms, i)}; 
            auto op_str {CPP2_UFCS(to_string)(CPP2_UFCS(get_op)(term))}; 
            auto rhs {build_multiplicative_expr(CPP2_UFCS(get_term)(cpp2::move(term)))}; 

            auto op_result {map_operator_token(op_str)}; 
            debug_operator_mapping(op_str, op_result.ok, op_result.kind);

            if (op_result.ok) {
                result = ad_expr::make_binary(cpp2::move(op_result).kind, result, cpp2::move(rhs), "double");
            }else {
                report_error(
                    "unsupported additive operator: '" + (cpp2::impl::as_<std::string>(cpp2::move(op_str))) + "'", 
                    cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(binexpr)), 
                    "additive expression"
                );
            }
            ++i;
        }

        return result; 
    }

#line 3625 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::parse_call_args(cpp2::impl::in<meta::expression_list> expr_list) & -> std::vector<ad_expr>{
        std::vector<ad_expr> args {}; 
        for ( auto const& expr : CPP2_UFCS(get_expressions)(expr_list) ) {
            auto arg_ir {build_expression(expr)}; 
            CPP2_UFCS(push_back)(args, cpp2::move(arg_ir));
        }
        return args; 
    }

#line 3639 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_expression(cpp2::impl::in<meta::expression> expr) & -> ad_expr{
        // For now, use string representation and try to identify patterns
        auto str {CPP2_UFCS(to_string)(expr)}; 
        std::cout << "AD IR Builder: expression '" << str << "'\n";

        // Check for simple identifier
        if (CPP2_UFCS(is_identifier)(expr)) {
            return ad_expr::make_identifier(cpp2::impl::as_<std::string>(str), "double"); 
        }
        // Check for literal
        if (CPP2_UFCS(is_literal)(expr)) {
            return ad_expr::make_literal(cpp2::impl::as_<std::string>(str), "double"); 
        }

        // For complex expressions, parse from the assignment structure
        if (CPP2_UFCS(is_assignment_expression)(expr)) {
            auto assign {CPP2_UFCS(as_assignment_expression)(expr)}; 
            return build_from_assignment(cpp2::move(assign)); 
        }

        // Unknown expression type - hard fail
        report_error(
            "Unknown expression type", 
            cpp2::impl::as_<std::string>(cpp2::move(str)), 
            "Could not parse expression into AD IR. Expression is neither identifier, literal, nor assignment."
        );
        return ad_expr::make_literal("__ERROR__", "error"); 
    }

#line 3673 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_from_assignment(cpp2::impl::in<meta::assignment_expression> assign) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(assign)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            // Single term - just descend
            return build_logical_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
        }
        // Multiple terms means actual assignment - error for now
        report_error(
            "Unsupported: assignment expression with multiple terms", 
            "", 
            "AD IR builder does not support chained assignments"
        );
        return ad_expr::make_literal("__ERROR__", "error"); 
    }

#line 3689 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle || operators
        return build_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3698 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle && operators
        return build_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3707 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle | operators
        return build_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3716 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle ^ operators
        return build_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3725 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle & operators
        return build_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3734 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_equality_expr(cpp2::impl::in<meta::equality_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle == != operators
        return build_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3743 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_relational_expr(cpp2::impl::in<meta::relational_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle < > <= >= operators
        return build_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3752 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_compare_expr(cpp2::impl::in<meta::compare_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle <=> operators
        return build_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3761 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_shift_expr(cpp2::impl::in<meta::shift_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle << >> operators
        return build_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 3784 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::apply_rule_or_default(cpp2::impl::in<std::string> name, cpp2::impl::in<int> n_args, cpp2::impl::in<bool> is_member, cpp2::impl::in<std::vector<ad_expr>> args) & -> ad_rule_application_result

    {
        ad_rule_application_result result {}; 

        // Check registry for rule with IR body
        if (registry != nullptr && CPP2_UFCS(has_rule)((*cpp2::impl::assert_not_null(registry)), name, n_args, is_member)) {
            std::cout << "AD IR Builder: found rule '" << name << "' in registry\n";
            result.has_rule = true;
        }else {
            // No rule in registry - reverse pass will generate call to ad_rule_<func>::reverse()
            // The C++ compiler will resolve this from externally-defined ad_rule_* types
            std::cout << "AD IR Builder: no registry rule for '" << name << "', will use ad_rule_" << name << "::reverse()\n";
            result.has_rule = false;
        }

        // Forward expression is always the function call itself
        result.forward = ad_expr::make_call(name, ad_op_kind::call, args, "double");
        return result; 
    }

#line 3814 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::is_active_ir_expr(cpp2::impl::in<ad_expr> expr) const& -> bool{
        // Literals are not active
        if (expr.kind == ad_expr_kind::literal) {
            return false; 
        }
        // Identifiers: check if it's a known active variable
        if (expr.kind == ad_expr_kind::identifier) {
            // For now, assume all identifiers are active (parameters)
            // A more sophisticated check would track active variables
            return true; 
        }
        // Unary: active if operand is active
        if (expr.kind == ad_expr_kind::unary) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                return is_active_ir_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0)); 
            }
            return false; 
        }
        // Binary: active if either operand is active
        if (expr.kind == ad_expr_kind::binary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                return is_active_ir_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0)) || is_active_ir_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1)); 
            }
            return false; 
        }
        // Call: active if any argument is active
        if (expr.kind == ad_expr_kind::call) {
            for ( auto const& arg : expr.args ) {
                if (is_active_ir_expr(arg)) {return true; }
            }
            return false; 
        }
        return false; 
    }

#line 3859 "source/reverse_ad.h2"
    auto ad_ir_builder::build_object_decl(cpp2::impl::in<meta::declaration> decl, 
                        std::vector<ad_stmt>& body_stmts, 
                        std::vector<ad_stmt>& reverse_stmts) & -> void{
        if (!(CPP2_UFCS(is_object)(decl))) {
            return ; 
        }
        auto obj {CPP2_UFCS(as_object)(decl)}; 
        auto name {cpp2::impl::as_<std::string>(obj.name())}; 
        auto type_str {cpp2::impl::as_<std::string>(CPP2_UFCS(type)(obj))}; 

        std::cout << "AD IR Builder: object decl '" << name << "': " << type_str << "\n";

        // Check if it has an initializer
        if (CPP2_UFCS(has_initializer)(obj)) {
            auto init_stmt {CPP2_UFCS(get_initializer)(cpp2::move(obj))}; 
            ad_expr init_ir {}; 
            if (CPP2_UFCS(is_expression_statement)(init_stmt)) {
                auto init_expr {CPP2_UFCS(get_expression)(CPP2_UFCS(as_expression_statement)(cpp2::move(init_stmt)))}; 
                init_ir = build_expression(cpp2::move(init_expr));
            }else {
                // Non-expression initializer - error
                report_error(
                    "Unsupported initializer type in AD", 
                    cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(cpp2::move(init_stmt))), 
                    "Expected an expression statement for variable initializer"
                );
                init_ir = ad_expr::make_literal("__ERROR__", "error");
            }

            // Create value declaration with _val suffix
            // Transform expression to use _val suffixes for identifiers
            auto val_name {CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), name)}; 
            auto transformed_init {transform_expr_to_val(init_ir)}; 
            auto val_decl {ad_stmt::make_decl(cpp2::move(val_name), type_str, cpp2::move(transformed_init))}; 
            CPP2_UFCS(push_back)(body_stmts, cpp2::move(val_decl));

            // Create adjoint declaration: name_adj := 0.0
            auto adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), name)}; 
            auto zero {ad_expr::make_literal("0.0", type_str)}; 
            auto adj_decl {ad_stmt::make_decl(cpp2::move(adj_name), cpp2::move(type_str), cpp2::move(zero))}; 
            CPP2_UFCS(push_back)(body_stmts, cpp2::move(adj_decl));

            // Generate reverse statement if active
            if (is_active_ir_expr(init_ir)) {
                auto reverse_stmt {generate_reverse_for_expr(cpp2::move(name), cpp2::move(init_ir))}; 
                CPP2_UFCS(push_back)(reverse_stmts, cpp2::move(reverse_stmt));
            }
        }
    }

#line 3916 "source/reverse_ad.h2"
    auto ad_ir_builder::build_assignment(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value_expr, 
                       std::vector<ad_stmt>& body_stmts, 
                       std::vector<ad_stmt>& reverse_stmts) & -> void{
        // Forward pass: Store the result in target_val (with _val suffix)
        // This is needed because the reverse pass uses target_val for the chain rule
        //
        // Transform the value expression to use _val suffixes for identifiers
        auto transformed_expr {transform_expr_to_val(value_expr)}; 

        // Create declaration: target_val := transformed_expr
        auto val_name {CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), target)}; 
        auto decl_stmt {ad_stmt::make_decl(val_name, "double", cpp2::move(transformed_expr))}; 
        CPP2_UFCS(push_back)(body_stmts, cpp2::move(decl_stmt));

        // Also assign to the raw target (for the return value)
        auto val_ref {ad_expr::make_identifier(cpp2::move(val_name), "double")}; 
        auto assign_stmt {ad_stmt::make_assign(target, cpp2::move(val_ref))}; 
        CPP2_UFCS(push_back)(body_stmts, cpp2::move(assign_stmt));

        // Reverse: propagate adjoint if active
        if (is_active_ir_expr(value_expr)) {
            auto reverse_stmt {generate_reverse_for_expr(target, value_expr)}; 
            CPP2_UFCS(push_back)(reverse_stmts, cpp2::move(reverse_stmt));
        }
    }

#line 3947 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::transform_expr_to_val(cpp2::impl::in<ad_expr> expr) & -> ad_expr{
        if (expr.kind == ad_expr_kind::identifier) {
            // Transform identifier to use _val suffix
            return ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), expr.name), expr.type_name); 
        }
        else {if (expr.kind == ad_expr_kind::literal) {
            // Literals stay as-is
            return expr; 
        }
        else {if (expr.kind == ad_expr_kind::unary) {
            // Transform operand
            if (!(CPP2_UFCS(empty)(expr.args))) {
                auto result {expr}; 
                CPP2_ASSERT_IN_BOUNDS_LITERAL(result.args, 0) = transform_expr_to_val(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0));
                return result; 
            }
            return expr; 
        }
        else {if (expr.kind == ad_expr_kind::binary) {
            // Transform both operands
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                auto result {expr}; 
                CPP2_ASSERT_IN_BOUNDS_LITERAL(result.args, 0) = transform_expr_to_val(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0));
                CPP2_ASSERT_IN_BOUNDS_LITERAL(result.args, 1) = transform_expr_to_val(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1));
                return result; 
            }
            return expr; 
        }
        else {if (expr.kind == ad_expr_kind::call) {
            // Transform all arguments
            auto result {expr}; 
            auto i {0}; 
            while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(result.args)) ) {
                CPP2_ASSERT_IN_BOUNDS(result.args, i) = transform_expr_to_val(CPP2_ASSERT_IN_BOUNDS(result.args, i));
                ++i;
            }
            return result; 
        }}}}}
        return expr; 
    }

#line 3997 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::get_operator_rule_suffix(cpp2::impl::in<std::string> op_name) const& -> std::string{
        if (op_name == "+") {return "add"; }
        if (op_name == "-") {return "sub"; }
        if (op_name == "*") {return "mul"; }
        if (op_name == "/") {return "div"; }
        if (op_name == "%") {return "mod"; }
        return "unknown"; 
    }

#line 4021 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::get_lhs_derivative_contrib(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val, cpp2::impl::in<ad_expr> adj_ref) const& -> ad_expr{
        if (op_name == "+" || op_name == "-") {
            // d(x+y)/dx = 1, d(x-y)/dx = 1 -> contrib = res_adj
            return adj_ref; 
        }
        if (op_name == "*") {
            // d(x*y)/dx = y -> contrib = y_val * res_adj
            return ad_expr::make_binary(ad_op_kind::mul, rhs_val, adj_ref, "double"); 
        }
        if (op_name == "/") {
            // d(x/y)/dx = 1/y -> contrib = res_adj / y_val
            return ad_expr::make_binary(ad_op_kind::div, adj_ref, rhs_val, "double"); 
        }
        // Default: just pass through adj_ref (treat like identity)
        return adj_ref; 
    }

#line 4053 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::get_rhs_derivative_contrib(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val, cpp2::impl::in<ad_expr> adj_ref) const& -> ad_expr{
        if (op_name == "+") {
            // d(x+y)/dy = 1 -> contrib = res_adj
            return adj_ref; 
        }
        if (op_name == "-") {
            // d(x-y)/dy = -1 -> contrib = -res_adj
            return ad_expr::make_unary(ad_op_kind::neg, adj_ref, "double"); 
        }
        if (op_name == "*") {
            // d(x*y)/dy = x -> contrib = x_val * res_adj
            return ad_expr::make_binary(ad_op_kind::mul, lhs_val, adj_ref, "double"); 
        }
        if (op_name == "/") {
            // d(x/y)/dy = -x/y^2 -> contrib = -(x_val / (y_val * y_val)) * res_adj
            auto rhs_sq {ad_expr::make_binary(ad_op_kind::mul, rhs_val, rhs_val, "double")}; 
            auto quot {ad_expr::make_binary(ad_op_kind::div, lhs_val, cpp2::move(rhs_sq), "double")}; 
            auto neg_quot {ad_expr::make_unary(ad_op_kind::neg, cpp2::move(quot), "double")}; 
            return ad_expr::make_binary(ad_op_kind::mul, cpp2::move(neg_quot), adj_ref, "double"); 
        }
        // Default: just pass through adj_ref
        return adj_ref; 
    }

#line 4088 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::get_lhs_derivative_scale(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val) const& -> ad_expr{
        if (op_name == "+" || op_name == "-") {
            // d(x+y)/dx = 1 -> scale = 1 (use literal)
            return ad_expr::make_literal("1.0", "double"); 
        }
        if (op_name == "*") {
            // d(x*y)/dx = y -> scale = y_val
            return rhs_val; 
        }
        if (op_name == "/") {
            // d(x/y)/dx = 1/y -> scale = 1/y_val
            auto one {ad_expr::make_literal("1.0", "double")}; 
            return ad_expr::make_binary(ad_op_kind::div, cpp2::move(one), rhs_val, "double"); 
        }
        return ad_expr::make_literal("1.0", "double"); 
    }

#line 4116 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::get_rhs_derivative_scale(cpp2::impl::in<std::string> op_name, cpp2::impl::in<ad_expr> lhs_val, cpp2::impl::in<ad_expr> rhs_val) const& -> ad_expr{
        if (op_name == "+") {
            // d(x+y)/dy = 1 -> scale = 1
            return ad_expr::make_literal("1.0", "double"); 
        }
        if (op_name == "-") {
            // d(x-y)/dy = -1 -> scale = -1
            auto one {ad_expr::make_literal("1.0", "double")}; 
            return ad_expr::make_unary(ad_op_kind::neg, cpp2::move(one), "double"); 
        }
        if (op_name == "*") {
            // d(x*y)/dy = x -> scale = x_val
            return lhs_val; 
        }
        if (op_name == "/") {
            // d(x/y)/dy = -x/y^2 -> scale = -x_val / (y_val * y_val)
            auto rhs_sq {ad_expr::make_binary(ad_op_kind::mul, rhs_val, rhs_val, "double")}; 
            auto quot {ad_expr::make_binary(ad_op_kind::div, lhs_val, cpp2::move(rhs_sq), "double")}; 
            return ad_expr::make_unary(ad_op_kind::neg, cpp2::move(quot), "double"); 
        }
        return ad_expr::make_literal("1.0", "double"); 
    }

#line 4145 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::generate_reverse_for_expr(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> expr) & -> ad_stmt{
        auto target_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), target)}; 

        // For binary ops, look up the operator rule and apply partial derivatives
        if (expr.kind == ad_expr_kind::binary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                auto lhs {CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0)}; 
                auto rhs {CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1)}; 

                // Get the operator symbol for rule lookup
                auto op_name {ad_op_kind_to_rule_name(expr.op)}; 

                // Priority 1: Check for user-defined operator rules
                // Users can override built-in operator differentiation by defining
                // ad_rule_add, ad_rule_mul, etc. in their @autodiff type
                if (!(CPP2_UFCS(empty)(op_name)) && registry != nullptr && CPP2_UFCS(has_operator_rule)((*cpp2::impl::assert_not_null(registry)), op_name)) {
                    // For simple cases (both operands are identifiers), use rule lookup directly
                    if (lhs.kind == ad_expr_kind::identifier && rhs.kind == ad_expr_kind::identifier) {
                        // Build substitution context for the rule body
                        ad_substitution_context sub_ctx {}; 

                        // Map rule parameters to actual expressions
                        CPP2_UFCS(add)(sub_ctx, "x_val", ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), lhs.name), "double"));
                        CPP2_UFCS(add)(sub_ctx, "y_val", ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), rhs.name), "double"));
                        CPP2_UFCS(add)(sub_ctx, "x_adj", ad_expr::make_identifier(CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), lhs.name), "double"));
                        CPP2_UFCS(add)(sub_ctx, "y_adj", ad_expr::make_identifier(CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), rhs.name), "double"));
                        CPP2_UFCS(add)(sub_ctx, "res_adj", ad_expr::make_identifier(target_adj, "double"));
                        CPP2_UFCS(add)(sub_ctx, "res_val", ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), target), "double"));

                        // Apply the operator rule
                        auto rule_result {CPP2_UFCS(apply_operator_rule)((*cpp2::impl::assert_not_null(registry)), op_name, cpp2::move(sub_ctx))}; 
                        if (rule_result.ir_success) {
                            return ad_stmt::make_compound(rule_result.ir_stmts); 
                        }
                        // Rule parsing failed - hard fail with compiler error
                        if (!(CPP2_UFCS(empty)(rule_result.error_message))) {
                            CPP2_UFCS(error)((*cpp2::impl::assert_not_null(ctx)).mf, "AD rule parsing failed: " + cpp2::move(rule_result).error_message);
                        }
                    }
                }

                // Priority 2: Use built-in operator differentiation
                // These formulas match the ad_rule_* types defined in include/cpp2ad_rules.h2:
                // - ad_rule_add: x_adj += res_adj; y_adj += res_adj
                // - ad_rule_sub: x_adj += res_adj; y_adj -= res_adj
                // - ad_rule_mul: x_adj += y_val * res_adj; y_adj += x_val * res_adj
                // - ad_rule_div: x_adj += res_adj / y_val; y_adj -= x_val / (y_val * y_val) * res_adj
                if (!(CPP2_UFCS(empty)(op_name))) {
                    std::vector<ad_stmt> compound {}; 
                    auto adj_ref {ad_expr::make_identifier(cpp2::move(target_adj), "double")}; 

                    // Get lhs and rhs values for derivative computation
                    ad_expr lhs_val {}; 
                    ad_expr rhs_val {}; 
                    if (lhs.kind == ad_expr_kind::identifier) {
                        lhs_val = ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), lhs.name), "double");
                    }else {
                        lhs_val = lhs;
                    }
                    if (rhs.kind == ad_expr_kind::identifier) {
                        rhs_val = ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), rhs.name), "double");
                    }else {
                        rhs_val = rhs;
                    }

                    // Apply derivative formulas from ad_rule_* types:
                    // These partial derivative formulas are defined in ad_rule_add, ad_rule_sub, etc.
                    // in include/cpp2ad_rules.h2 - we use them here via chain rule

                    // Handle LHS contribution (d/d_lhs)
                    if (lhs.kind == ad_expr_kind::identifier) {
                        auto lhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(lhs).name)}; 
                        // Get contribution expression based on operator rule
                        auto contrib {get_lhs_derivative_contrib(op_name, lhs_val, rhs_val, adj_ref)}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(lhs_adj), cpp2::move(contrib)));
                    }
                    else {if (lhs.kind == ad_expr_kind::call) {
                        // LHS is a call - need chain rule through it
                        // Scale factor comes from the derivative rule
                        auto scale {get_lhs_derivative_scale(op_name, lhs_val, rhs_val)}; 
                        auto call_reverse {generate_reverse_for_call_with_scale(cpp2::move(lhs), cpp2::move(scale), adj_ref)}; 
                        CPP2_UFCS(push_back)(compound, cpp2::move(call_reverse));
                    }}

                    // Handle RHS contribution (d/d_rhs)
                    if (rhs.kind == ad_expr_kind::identifier) {
                        auto rhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(rhs).name)}; 
                        // Get contribution expression based on operator rule
                        auto contrib {get_rhs_derivative_contrib(cpp2::move(op_name), cpp2::move(lhs_val), cpp2::move(rhs_val), cpp2::move(adj_ref))}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(rhs_adj), cpp2::move(contrib)));
                    }
                    else {if (rhs.kind == ad_expr_kind::call) {
                        // RHS is a call - need chain rule through it
                        auto scale {get_rhs_derivative_scale(cpp2::move(op_name), cpp2::move(lhs_val), cpp2::move(rhs_val))}; 
                        auto call_reverse {generate_reverse_for_call_with_scale(cpp2::move(rhs), cpp2::move(scale), cpp2::move(adj_ref))}; 
                        CPP2_UFCS(push_back)(compound, cpp2::move(call_reverse));
                    }}

                    return ad_stmt::make_compound(cpp2::move(compound)); 
                }
            }
        }
        else {if (expr.kind == ad_expr_kind::unary && expr.op == ad_op_kind::neg) {
            // d(-a)/da = -1
            if (!(CPP2_UFCS(empty)(expr.args)) && CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0).kind == ad_expr_kind::identifier) {
                auto arg_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0).name)}; 
                auto adj_ref {ad_expr::make_identifier(cpp2::move(target_adj), "double")}; 
                auto neg_adj {ad_expr::make_unary(ad_op_kind::neg, cpp2::move(adj_ref), "double")}; 
                return ad_stmt::make_assign_add(cpp2::move(arg_adj), cpp2::move(neg_adj)); 
            }
        }
        else {if (expr.kind == ad_expr_kind::call) {
            // For function calls, need to apply chain rule with function derivative
            return generate_reverse_for_call(target, expr); 
        }
        else {if (expr.kind == ad_expr_kind::identifier) {
            // Simple assignment: target = x => x_adj += target_adj
            auto arg_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), expr.name)}; 
            auto adj_ref {ad_expr::make_identifier(cpp2::move(target_adj), "double")}; 
            return ad_stmt::make_assign_add(cpp2::move(arg_adj), cpp2::move(adj_ref)); 
        }}}}

        // Default: no-op (placeholder)
        std::vector<ad_stmt> empty {}; 
        return ad_stmt::make_compound(cpp2::move(empty)); 
    }

#line 4283 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::generate_reverse_for_call_with_scale(cpp2::impl::in<ad_expr> call_expr, cpp2::impl::in<ad_expr> scale_expr, cpp2::impl::in<ad_expr> adj_ref) & -> ad_stmt{
        std::vector<ad_stmt> compound {}; 
        auto func_name {call_expr.name}; 
        int n_args {cpp2::unchecked_narrow<int>(CPP2_UFCS(ssize)(call_expr.args))}; 

        // The scaled adjoint contribution: scale_expr * adj_ref
        auto scaled_adj {ad_expr::make_binary(ad_op_kind::mul, scale_expr, adj_ref, "double")}; 

        // Priority 1: Check registry for user-defined rules FIRST
        // User rules from the registry take priority
        if (registry != nullptr && !(CPP2_UFCS(empty)(call_expr.args))) {
            // Build substitution context for IR-based parsing
            ad_substitution_context sub_ctx {}; 

            // For res_val: build function call expression with argument values
            std::vector<ad_expr> call_args {}; 
            for ( auto const& arg : call_expr.args ) {
                if (arg.kind == ad_expr_kind::identifier) {
                    CPP2_UFCS(push_back)(call_args, ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), arg.name), "double"));
                }else {
                    CPP2_UFCS(push_back)(call_args, arg);
                }
            }
            auto res_val_call {ad_expr::make_call(func_name, ad_op_kind::call, cpp2::move(call_args), "double")}; 
            CPP2_UFCS(add)(sub_ctx, "res_val", cpp2::move(res_val_call));

            // For res_adj: use the scaled adjoint (scale_expr * adj_ref)
            CPP2_UFCS(add)(sub_ctx, "res_adj", cpp2::move(scaled_adj));

            // Add argument value and adjoint substitutions
            std::array<std::string,4> param_names {"x", "y", "z", "w"}; 
            auto i {0}; 
            for ( auto const& arg : call_expr.args ) {
                if (cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(param_names))) {
                    auto val_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_val"}; 
                    auto adj_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_adj"}; 

                    if (arg.kind == ad_expr_kind::identifier) {
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(val_param), ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), arg.name), "double"));
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(adj_param), ad_expr::make_identifier(CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), arg.name), "double"));
                    }else {
                        // For non-identifier args (literals), use expression directly
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(val_param), arg);
                        // Can't accumulate to non-identifier - use dummy
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(adj_param), ad_expr::make_identifier("__unused_adj__", "double"));
                    }
                    ++i;
                }
            }

            // Apply the rule - registry handles IR parsing internally
            auto rule_result {CPP2_UFCS(apply_reverse_rule)((*cpp2::impl::assert_not_null(registry)), func_name, cpp2::move(n_args), false, cpp2::move(sub_ctx))}; 

            if (rule_result.found) {
                if (rule_result.ir_success) {
                    // Success - return the parsed IR
                    return ad_stmt::make_compound(rule_result.ir_stmts); 
                }

                // Rule found but parsing failed - report the specific error
                report_error(
                    "Failed to parse rule for function '" + func_name + "'", 
                    "", 
                    cpp2::move(rule_result).error_message
                );
            }  // end if rule_result.found
        }  // end if registry != nullptr

        // HARD FAIL: No rule found for this function
        // All differentiable functions must have an ad_rule_* definition
        report_error(
            "No differentiation rule found for function '" + func_name + "'", 
            "", 
            "To differentiate this function, define an ad_rule_" + func_name + " type with a reverse() function. " 
            + "See include/cpp2ad_rules.h2 for examples."
        );
        CPP2_UFCS(error)((*cpp2::impl::assert_not_null(ctx)).mf, "@autodiff: No rule found for function '" + func_name + "'. " 
                      + "Define ad_rule_" + func_name + " with a reverse() function.");
        return ad_stmt::make_compound({});  // Return empty compound (will never be reached due to error)
    }

#line 4370 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::generate_reverse_for_call(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> call_expr) & -> ad_stmt{
        std::vector<ad_stmt> compound {}; 
        auto target_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), target)}; 
        auto adj_ref {ad_expr::make_identifier(target_adj, "double")}; 

        auto func_name {call_expr.name}; 
        int n_args {cpp2::unchecked_narrow<int>(CPP2_UFCS(ssize)(call_expr.args))}; 

        // Priority 1: Check registry for user-defined rules FIRST
        // User rules from the registry take priority
        if (registry != nullptr) {
            auto target_val {CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), target)}; 

            // Build substitution context for IR-based parsing
            ad_substitution_context sub_ctx {}; 

            // Add result value and adjoint substitutions
            CPP2_UFCS(add)(sub_ctx, "res_val", ad_expr::make_identifier(cpp2::move(target_val), "double"));
            CPP2_UFCS(add)(sub_ctx, "res_adj", ad_expr::make_identifier(cpp2::move(target_adj), "double"));

            // Add argument value and adjoint substitutions
            std::array<std::string,4> param_names {"x", "y", "z", "w"}; 
            auto i {0}; 
            for ( auto const& arg : call_expr.args ) {
                if (cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(param_names))) {
                    auto val_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_val"}; 
                    auto adj_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_adj"}; 

                    if (arg.kind == ad_expr_kind::identifier) {
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(val_param), ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), arg.name), "double"));
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(adj_param), ad_expr::make_identifier(CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), arg.name), "double"));
                    }else {
                        // For non-identifier args (literals), use expression directly
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(val_param), arg);
                        // Can't accumulate to non-identifier - use dummy
                        CPP2_UFCS(add)(sub_ctx, cpp2::move(adj_param), ad_expr::make_identifier("__unused_adj__", "double"));
                    }
                    ++i;
                }
            }

            // Apply the rule - registry handles IR parsing internally
            auto rule_result {CPP2_UFCS(apply_reverse_rule)((*cpp2::impl::assert_not_null(registry)), func_name, cpp2::move(n_args), false, cpp2::move(sub_ctx))}; 

            if (rule_result.found) {
                if (rule_result.ir_success) {
                    // Success - return the parsed IR
                    return ad_stmt::make_compound(rule_result.ir_stmts); 
                }

                // Rule found but parsing failed - report the specific error
                report_error(
                    "Failed to parse rule for function '" + func_name + "'", 
                    "", 
                    cpp2::move(rule_result).error_message
                );
            }
        }

        // No rule found for this function
        report_error(
            "No differentiation rule found for function '" + func_name + "'", 
            "", 
            "To differentiate this function, define an ad_rule_" + func_name + " type with a reverse() function. " 
            + "See include/cpp2ad_rules.h2 for examples."
        );
        CPP2_UFCS(error)((*cpp2::impl::assert_not_null(ctx)).mf, "@autodiff: No rule found for function '" + func_name + "'. " 
                      + "Define ad_rule_" + func_name + " with a reverse() function.");
        return ad_stmt::make_compound({});  // Return empty compound (will never be reached due to error)
    }

#line 4452 "source/reverse_ad.h2"
    auto ad_ir_builder::build_return(cpp2::impl::in<ad_expr> return_expr, cpp2::impl::in<std::string> return_name, 
                   std::vector<ad_stmt>& body_stmts, 
                   std::vector<ad_stmt>& reverse_stmts) & -> void{
        // Forward: r_val = return_expr
        auto val_name {CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), return_name)}; 
        auto assign_stmt {ad_stmt::make_assign(cpp2::move(val_name), return_expr)}; 
        CPP2_UFCS(push_back)(body_stmts, cpp2::move(assign_stmt));

        // Reverse: seed r_adj (done at beginning of reverse pass, handled by emitter)
        // Then propagate adjoint back through the return expression
        if (is_active_ir_expr(return_expr)) {
            auto reverse_stmt {generate_reverse_for_expr(return_name, return_expr)}; 
            CPP2_UFCS(push_back)(reverse_stmts, cpp2::move(reverse_stmt));
        }
    }

#line 4477 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_builder::build_function_ir(cpp2::impl::in<meta::function_declaration> mf) & -> ad_function_ir{
        ad_function_ir ir {}; 
        ir.name = cpp2::impl::as_<std::string>(CPP2_UFCS(name)(mf));
        std::cout << "AD IR Builder: building function IR for '" << ir.name << "'\n";

        // Add parameters
        for ( auto const& param : CPP2_UFCS(get_parameters)(mf) ) {
            auto decl {CPP2_UFCS(get_declaration)(param)}; 
            auto p {ad_param::make(
                cpp2::impl::as_<std::string>(CPP2_UFCS(name)(decl)), 
                cpp2::impl::as_<std::string>(CPP2_UFCS(type)(decl)), 
                CPP2_UFCS(get_passing_style)(param), 
                true  // Assume active for now
            )}; 
            CPP2_UFCS(push_back)(ir.params, p);
            std::cout << "AD IR Builder:   param: " << p.name << ": " << p.type_name << "\n";
        }

        // Add returns
        for ( auto const& ret : CPP2_UFCS(get_returns)(mf) ) {
            auto decl {CPP2_UFCS(get_declaration)(ret)}; 
            auto r {ad_param::make(
                cpp2::impl::as_<std::string>(CPP2_UFCS(name)(decl)), 
                cpp2::impl::as_<std::string>(CPP2_UFCS(type)(decl)), 
                CPP2_UFCS(get_passing_style)(ret), 
                true
            )}; 
            CPP2_UFCS(push_back)(ir.returns, r);
            std::cout << "AD IR Builder:   return: " << r.name << ": " << r.type_name << "\n";
        }

        // Process function body (statements)
        if (CPP2_UFCS(has_compound_body)(mf)) {
            auto body {CPP2_UFCS(get_compound_body)(mf)}; 
            auto statements {CPP2_UFCS(get_statements)(cpp2::move(body))}; 
            std::cout << "AD IR Builder:   processing " << CPP2_UFCS(ssize)(statements) << " statements\n";

            // Collect reverse statements in reverse order
            std::vector<ad_stmt> reverse_stmts {}; 

            for ( auto const& stmt : cpp2::move(statements) ) {
                process_statement(stmt, ir.forward, reverse_stmts);
            }

            // Reverse the reverse statements (they were collected in forward order)
            auto i {CPP2_UFCS(ssize)(reverse_stmts) - 1}; 
            while( cpp2::impl::cmp_greater_eq(i,0) ) {
                CPP2_UFCS(push_back)(ir.reverse, CPP2_ASSERT_IN_BOUNDS(reverse_stmts, i));
                --i;
            }
        }

        return ir; 
    }

#line 4538 "source/reverse_ad.h2"
    auto ad_ir_builder::process_statement(cpp2::impl::in<meta::statement> stmt, 
                        std::vector<ad_stmt>& forward_stmts, 
                        std::vector<ad_stmt>& reverse_stmts) & -> void{
        auto str {CPP2_UFCS(to_string)(stmt)}; 
        std::cout << "AD IR Builder:     stmt: " << cpp2::move(str) << "\n";

        if (CPP2_UFCS(is_declaration)(stmt)) {
            // Local variable declaration
            auto decl {CPP2_UFCS(as_declaration)(stmt)}; 
            build_object_decl(cpp2::move(decl), forward_stmts, reverse_stmts);
        }
        else {if (CPP2_UFCS(is_expression_statement)(stmt)) {
            // Expression statement (typically an assignment)
            auto expr_stmt {CPP2_UFCS(as_expression_statement)(stmt)}; 
            auto expr {CPP2_UFCS(get_expression)(cpp2::move(expr_stmt))}; 

            if (CPP2_UFCS(is_simple_assignment)(expr)) {
                // Assignment: lhs = rhs
                auto lhs_rhs {CPP2_UFCS(get_lhs_rhs_if_simple_assignment)(cpp2::move(expr))}; 
                auto lhs_str {CPP2_UFCS(to_string)(lhs_rhs.lhs)}; 
                std::cout << "AD IR Builder:       assignment to '" << lhs_str << "'\n";

                // Build the RHS expression
                auto rhs_ir {build_logical_or_expr(cpp2::move(lhs_rhs).rhs)}; 

                // Build assignment IR
                build_assignment(cpp2::impl::as_<std::string>(cpp2::move(lhs_str)), cpp2::move(rhs_ir), forward_stmts, reverse_stmts);
            }
            else {
                std::cout << "AD IR Builder:       non-assignment expression (skipped)\n";
            }
        }
        else {if (CPP2_UFCS(is_return_statement)(stmt)) {
            // Return statement
            auto ret_stmt {CPP2_UFCS(as_return_statement)(stmt)}; 
            if (CPP2_UFCS(has_expression)(ret_stmt)) {
                auto ret_expr {CPP2_UFCS(get_expression)(cpp2::move(ret_stmt))}; 
                auto ret_ir {build_expression(cpp2::move(ret_expr))}; 

                // Use the first return variable name if available
                auto ret_name {"r"}; 
                // Note: return statement handling would be more sophisticated
                std::cout << "AD IR Builder:       return statement\n";
            }
        }
        else {
            std::cout << "AD IR Builder:       unknown statement type (skipped)\n";
        }}}
    }

#line 4596 "source/reverse_ad.h2"
    ad_rule_application_result::ad_rule_application_result(){}
#line 4597 "source/reverse_ad.h2"
    ad_rule_application_result::ad_rule_application_result(ad_rule_application_result const& that)
                                   : has_rule{ that.has_rule }
                                   , forward{ that.forward }{}
#line 4597 "source/reverse_ad.h2"
    auto ad_rule_application_result::operator=(ad_rule_application_result const& that) -> ad_rule_application_result& {
                                   has_rule = that.has_rule;
                                   forward = that.forward;
                                   return *this; }
#line 4597 "source/reverse_ad.h2"
    ad_rule_application_result::ad_rule_application_result(ad_rule_application_result&& that) noexcept
                                   : has_rule{ std::move(that).has_rule }
                                   , forward{ std::move(that).forward }{}
#line 4597 "source/reverse_ad.h2"
    auto ad_rule_application_result::operator=(ad_rule_application_result&& that) noexcept -> ad_rule_application_result& {
                                   has_rule = std::move(that).has_rule;
                                   forward = std::move(that).forward;
                                   return *this; }

#line 4609 "source/reverse_ad.h2"
[[nodiscard]] auto ad_op_kind_to_binary_str(cpp2::impl::in<ad_op_kind> op) -> std::string{
    // Arithmetic
    if (op == ad_op_kind::add) {return " + "; }
    if (op == ad_op_kind::sub) {return " - "; }
    if (op == ad_op_kind::mul) {return " * "; }
    if (op == ad_op_kind::div) {return " / "; }
    if (op == ad_op_kind::mod) {return " % "; }
    // Comparison
    if (op == ad_op_kind::eq) {return " == "; }
    if (op == ad_op_kind::ne) {return " != "; }
    if (op == ad_op_kind::lt) {return " < "; }
    if (op == ad_op_kind::gt) {return " > "; }
    if (op == ad_op_kind::le) {return " <= "; }
    if (op == ad_op_kind::ge) {return " >= "; }
    if (op == ad_op_kind::spaceship) {return " <=> "; }
    // Logical
    if (op == ad_op_kind::land) {return " && "; }
    if (op == ad_op_kind::lor) {return " || "; }
    // Bitwise
    if (op == ad_op_kind::band) {return " & "; }
    if (op == ad_op_kind::bor) {return " | "; }
    if (op == ad_op_kind::bxor) {return " ^ "; }
    if (op == ad_op_kind::shl) {return " << "; }
    if (op == ad_op_kind::shr) {return " >> "; }
    // Assignment
    if (op == ad_op_kind::assign) {return " = "; }
    if (op == ad_op_kind::assign_add) {return " += "; }
    if (op == ad_op_kind::assign_sub) {return " -= "; }
    if (op == ad_op_kind::assign_mul) {return " *= "; }
    if (op == ad_op_kind::assign_div) {return " /= "; }
    if (op == ad_op_kind::assign_mod) {return " %= "; }
    if (op == ad_op_kind::assign_band) {return " &= "; }
    if (op == ad_op_kind::assign_bor) {return " |= "; }
    if (op == ad_op_kind::assign_bxor) {return " ^= "; }
    if (op == ad_op_kind::assign_shl) {return " <<= "; }
    if (op == ad_op_kind::assign_shr) {return " >>= "; }
    return ""; 
}

#line 4657 "source/reverse_ad.h2"
[[nodiscard]] auto ad_op_kind_to_rule_name(cpp2::impl::in<ad_op_kind> op) -> std::string{
    if (op == ad_op_kind::add) {return "+"; }
    if (op == ad_op_kind::sub) {return "-"; }
    if (op == ad_op_kind::mul) {return "*"; }
    if (op == ad_op_kind::div) {return "/"; }
    if (op == ad_op_kind::mod) {return "%"; }
    return "";  // Other operators don't have AD rules
}

#line 4672 "source/reverse_ad.h2"
    ad_ir_emitter::ad_ir_emitter()
        : ctx{ nullptr }{

#line 4674 "source/reverse_ad.h2"
    }

#line 4676 "source/reverse_ad.h2"
    ad_ir_emitter::ad_ir_emitter(cpp2::impl::in<reverse_autodiff_context*> ctx_)
        : ctx{ ctx_ }{

#line 4678 "source/reverse_ad.h2"
    }
#line 4676 "source/reverse_ad.h2"
    auto ad_ir_emitter::operator=(cpp2::impl::in<reverse_autodiff_context*> ctx_) -> ad_ir_emitter& {
        ctx = ctx_;
        return *this;

#line 4678 "source/reverse_ad.h2"
    }

#line 4685 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string{
        if (expr.kind == ad_expr_kind::literal) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::identifier) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::unary) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string operand {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                // Handle different unary operators
                if (expr.op == ad_op_kind::neg) {return "(-" + operand + ")"; }
                if (expr.op == ad_op_kind::pos) {return "(+" + operand + ")"; }
                if (expr.op == ad_op_kind::lnot) {return "(!" + operand + ")"; }
                if (expr.op == ad_op_kind::bnot) {return "(~" + operand + ")"; }
                if (expr.op == ad_op_kind::deref) {return "(*" + operand + ")"; }
                if (expr.op == ad_op_kind::addr_of) {return "(&" + operand + ")"; }
                if (expr.op == ad_op_kind::pre_inc) {return "(++" + operand + ")"; }
                if (expr.op == ad_op_kind::pre_dec) {return "(--" + operand + ")"; }
                if (expr.op == ad_op_kind::post_inc) {return "(" + operand + "++)"; }
                if (expr.op == ad_op_kind::post_dec) {return "(" + cpp2::move(operand) + "--)"; }
            }
            return "(unary " + ad_op_kind_to_string(expr.op) + ")"; 
        }
        else {if (expr.kind == ad_expr_kind::binary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                std::string lhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string rhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                std::string op_str {ad_op_kind_to_binary_str(expr.op)}; 
                if (CPP2_UFCS(empty)(op_str)) {op_str = " ?? "; }
                return "(" + cpp2::move(lhs) + cpp2::move(op_str) + cpp2::move(rhs) + ")"; 
            }
            return "(binary)"; 
        }
        else {if (expr.kind == ad_expr_kind::ternary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),3)) {
                std::string cond {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string then_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                std::string else_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 2))}; 
                return "(" + cpp2::move(cond) + " ? " + cpp2::move(then_expr) + " : " + cpp2::move(else_expr) + ")"; 
            }
            return "(ternary)"; 
        }
        else {if (expr.kind == ad_expr_kind::member) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string op_str {"->"}; 
                if (expr.op != ad_op_kind::arrow) {op_str = "."; }
                return cpp2::move(obj) + cpp2::move(op_str) + expr.member_name; 
            }
            return "(member)"; 
        }
        else {if (expr.kind == ad_expr_kind::subscript) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                std::string arr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string idx {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                return cpp2::move(arr) + "[" + cpp2::move(idx) + "]"; 
            }
            return "(subscript)"; 
        }
        else {if (expr.kind == ad_expr_kind::call) {
            std::string result {expr.name}; 
            // Add template args if present
            if (!(CPP2_UFCS(empty)(expr.type_args))) {
                result += "<";
{
bool first{true};

#line 4751 "source/reverse_ad.h2"
                for ( auto const& targ : expr.type_args ) {
                    if (!(first)) {result += ", "; }
                    first = false;
                    result += ad_type_to_string(targ);
                }
}
#line 4756 "source/reverse_ad.h2"
                result += ">";
            }
            result += "(";
{
bool first{true};

#line 4760 "source/reverse_ad.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 4765 "source/reverse_ad.h2"
            result += ")";
            return result; 
        }
        else {if (expr.kind == ad_expr_kind::method_call) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                std::string result {cpp2::move(obj) + "." + expr.name + "("}; 
                // Skip first arg (the object), emit remaining args
                if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(expr.args),1)) {
                    result += emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1));
                    cpp2::i64 i {2}; 
                    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(expr.args)) ) {
                        result += ", ";
                        result += emit_expr(CPP2_ASSERT_IN_BOUNDS(expr.args, i));
                        ++i;
                    }
                }
                result += ")";
                return result; 
            }
            return "(method_call)"; 
        }
        else {if (expr.kind == ad_expr_kind::cast) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                std::string target_type {""}; 
                if (expr.cast_type != nullptr) {
                    target_type = ad_type_to_string(*cpp2::impl::assert_not_null(expr.cast_type));
                }else {
                    target_type = expr.type_name;
                }
                auto inner {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                if (expr.name != "") {
                    return expr.name + "<" + target_type + ">(" + inner + ")"; 
                }
                return "(" + cpp2::move(target_type) + ")" + cpp2::move(inner); 
            }
            return "(cast)"; 
        }
        else {if (expr.kind == ad_expr_kind::construct) {
            std::string result {expr.name + "("}; 
{
bool first{true};

#line 4806 "source/reverse_ad.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 4811 "source/reverse_ad.h2"
            result += ")";
            return result; 
        }
        else {if (expr.kind == ad_expr_kind::paren) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                return "(" + emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0)) + ")"; 
            }
            return "()"; 
        }
        else {if (expr.kind == ad_expr_kind::initializer_list) {
            std::string result {"{"}; 
{
bool first{true};

#line 4823 "source/reverse_ad.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 4828 "source/reverse_ad.h2"
            result += "}";
            return result; 
        }}}}}}}}}}}}}
        return "(unknown)"; 
    }

#line 4840 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_stmt(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<int> indent) const& -> std::string{
        std::string ind {std::string(indent * 4, ' ')}; 

        if (stmt.kind == ad_stmt_kind::decl) {
            // Declaration: name : type = expr;
            return ind + stmt.target + " : " + stmt.type_name + " = " + emit_expr(stmt.expr) + ";\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::assign) {
            // Assignment: name = expr;
            return ind + stmt.target + " = " + emit_expr(stmt.expr) + ";\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::compound_assign) {
            // Compound assignment: name op= expr;
            std::string op_str {ad_op_kind_to_binary_str(stmt.op)}; 
            if (CPP2_UFCS(empty)(op_str)) {op_str = " ??= "; }
            return ind + stmt.target + cpp2::move(op_str) + emit_expr(stmt.expr) + ";\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::assign_add) {
            // Add-assignment: name += expr;
            return ind + stmt.target + " += " + emit_expr(stmt.expr) + ";\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::expr || stmt.kind == ad_stmt_kind::expr_stmt) {
            // Expression statement
            return ind + emit_expr(stmt.expr) + ";\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::return_) {
            // Return statement
            return ind + "return " + emit_expr(stmt.expr) + ";\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::break_stmt) {
            return ind + "break;\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::continue_stmt) {
            return ind + "continue;\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::compound) {
            // Compound statement
            std::string result {""}; 
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent);
            }
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::if_stmt) {
            // If statement
            std::string result {ind + "if " + emit_expr(stmt.expr) + " {\n"}; 
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            if (!(CPP2_UFCS(empty)(stmt.else_stmts))) {
                result += ind + "} else {\n";
                for ( auto const& s : stmt.else_stmts ) {
                    result += emit_stmt(s, indent + 1);
                }
            }
            result += ind + "}\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::for_stmt) {
            // For loop - emit as Cpp2 style
            std::string result {ind + "for "}; 
            // Init statement
            if (stmt.init_stmt != nullptr) {
                std::string init_code {emit_stmt(*cpp2::impl::assert_not_null(stmt.init_stmt), 0)}; 
                // Remove trailing newline and semicolon for init
                if (CPP2_UFCS(ends_with)(init_code, ";\n")) {
                    init_code = CPP2_UFCS(substr)(init_code, 0, CPP2_UFCS(size)(init_code) - 2);
                }
                result += cpp2::move(init_code);
            }
            result += "; " + emit_expr(stmt.expr) + " next ";
            // Increment - emit without semicolon
            std::string incr_code {emit_expr(stmt.incr_expr)}; 
            result += cpp2::move(incr_code) + " {\n";
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "}\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::foreach_stmt) {
            // Range-based for loop
            std::string result {ind + "for " + stmt.target}; 
            if (stmt.type_name != "" && stmt.type_name != "auto") {
                result += " : " + stmt.type_name;
            }
            result += " in " + emit_expr(stmt.range_expr) + " {\n";
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "}\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::while_stmt) {
            // While loop
            std::string result {ind + "while " + emit_expr(stmt.expr) + " {\n"}; 
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "}\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::do_while_stmt) {
            // Do-while loop
            std::string result {ind + "do {\n"}; 
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "} while " + emit_expr(stmt.expr) + ";\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::try_catch) {
            // Try-catch block
            std::string result {ind + "try {\n"}; 
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "} catch (" + stmt.catch_type;
            if (stmt.catch_var != "") {
                result += " " + stmt.catch_var;
            }
            result += ") {\n";
            for ( auto const& s : stmt.catch_stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "}\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::throw_stmt) {
            return ind + "throw " + emit_expr(stmt.expr) + ";\n"; 
        }
        else {if (stmt.kind == ad_stmt_kind::raw_code) {
            // Raw code - emit directly (already substituted)
            // The code is stored in stmt.target and may contain multiple lines
            // DEPRECATED: Will be removed after IR-based rule substitution is complete
            return ind + stmt.target + "\n"; 
        }}}}}}}}}}}}}}}}}
        return cpp2::move(ind) + "// unknown statement\n"; 
    }

#line 4985 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_forward(cpp2::impl::in<ad_function_ir> ir) const& -> std::string{
        std::string result {"// Forward pass\n"}; 
        for ( auto const& stmt : ir.forward ) {
            result += emit_stmt(stmt, 1);
        }
        return result; 
    }

#line 4998 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_reverse(cpp2::impl::in<ad_function_ir> ir) const& -> std::string{
        std::string result {"// Reverse pass\n"}; 

        // Seed the output adjoint(s)
        for ( auto const& ret : ir.returns ) {
            std::string adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), ret.name)}; 
            // Don't emit seed here - it's passed in as parameter
        }

        // Emit statements (already in correct reverse order from build_function_ir)
        for ( auto const& stmt : ir.reverse ) {
            result += emit_stmt(stmt, 1);
        }

        // Reset adjoints to zero after use
        for ( auto const& ret : ir.returns ) {
            std::string adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), ret.name)}; 
            result += std::string("    ") + cpp2::move(adj_name) + " = 0.0;\n";
        }

        return result; 
    }

#line 5026 "source/reverse_ad.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_function(cpp2::impl::in<ad_function_ir> ir) const& -> std::string{
        // Build signature
        std::string result {ir.name + "_d: (\n"}; 

        // Input parameters with adjoints
        for ( auto const& p : ir.params ) {
            std::string pass_str {"in"}; 
            if (p.pass == passing_style::in) {pass_str = "in"; }
            else {if (p.pass == passing_style::inout) {pass_str = "inout"; }
            else {if (p.pass == passing_style::out) {pass_str = "out"; }
            else {if (p.pass == passing_style::copy) {pass_str = "copy"; }
            else {if (p.pass == passing_style::move) {pass_str = "move"; }
            else {if (p.pass == passing_style::forward) {pass_str = "forward"; }}}}}}

            result += std::string("    ") + cpp2::move(pass_str) + " " + p.name + ": " + p.type_name + ",\n";
            // Add adjoint parameter
            std::string adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), p.name)}; 
            result += std::string("    inout ") + cpp2::move(adj_name) + ": " + p.type_name + ",\n";
        }

        // Return adjoint parameter
        for ( auto const& r : ir.returns ) {
            std::string adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), r.name)}; 
            result += std::string("    inout ") + cpp2::move(adj_name) + ": " + r.type_name + ",\n";
        }

        // Return type
        result += ") -> (";
{
bool first{true};

#line 5055 "source/reverse_ad.h2"
        for ( auto const& r : ir.returns ) {
            if (!(first)) {result += ", "; }
            first = false;
            result += std::string("out ") + r.name + ": " + r.type_name + " = 0.0";
        }
}
#line 5060 "source/reverse_ad.h2"
        result += ") = {\n";

        // Create _val variables for input parameters
        result += "// Setup value variables\n";
        for ( auto const& p : ir.params ) {
            std::string val_name {CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), p.name)}; 
            result += std::string("    ") + cpp2::move(val_name) + " := " + p.name + ";\n";
        }

        // Emit forward pass
        result += emit_forward(ir);

        // Emit reverse pass
        result += emit_reverse(ir);

        // Return
        result += "    return;\n";
        result += "}\n";

        return result; 
    }

#line 5087 "source/reverse_ad.h2"
auto ad_ir_builder_debug_dump(cpp2::impl::in<ad_ir_builder> builder) -> void{
    std::cout << "=== AD IR Builder State ===\n";
    std::cout << "  temp_counter: " << builder.temp_counter << "\n";
    std::cout << "  temp_names: [";
{
bool first{true};

#line 5092 "source/reverse_ad.h2"
    for ( auto const& name : builder.temp_names ) {
        if (!(first)) {std::cout << ", "; }
        first = false;
        std::cout << name;
    }
}
#line 5097 "source/reverse_ad.h2"
    std::cout << "]\n";
    std::cout << "=== End AD IR Builder State ===\n";
}

#line 5217 "source/reverse_ad.h2"
auto autodiff_reverse_ir(meta::type_declaration& t, cpp2::impl::in<bool> debug) -> void{
    if (debug) {
        std::cout << "\n";
        std::cout << "╔══════════════════════════════════════════════════════════════════╗\n";
        std::cout << "║  AD REVERSE IR STAGE: " << CPP2_UFCS(name)(t) << "\n";
        std::cout << "╚══════════════════════════════════════════════════════════════════╝\n";

        // Print the original AST
        std::cout << "\n┌─── Original AST ───┐\n";
        print(t);
        std::cout << "└────────────────────┘\n";
    }

    //-------------------------------------------------------------------
    // Discover ad_rules in the type
    //-------------------------------------------------------------------
    ad_rule_registry rule_registry {}; 
    discover_ad_rules(t, rule_registry);
    if (debug) {
        std::cout << "\n┌─── Rule Discovery ───┐\n";
        ad_rule_registry_debug_dump(rule_registry);
        std::cout << "└──────────────────────────────────┘\n";
    }

    //-------------------------------------------------------------------
    // Build IR for each function
    //-------------------------------------------------------------------
    for ( auto const& mf : CPP2_UFCS(get_member_functions)(t) ) {
        // Skip rule types (they have special structure)
        if (CPP2_UFCS(starts_with)(CPP2_UFCS(name)(mf), "ad_rule")) {
            continue;
        }

        reverse_autodiff_context rc {mf}; 
        if (debug) {
            std::cout << "\n┌─── Building IR for " << CPP2_UFCS(name)(mf) << " ───┐\n";
            std::cout << "Function: " << CPP2_UFCS(get_signature)(mf) << "\n";
            std::cout << "Suffixes: value=" << rc.value_suffix << " adj=" << rc.adj_suffix << "\n";
        }

        // Create builder with context and registry
        ad_ir_builder builder {&rc, &rule_registry}; 

        // Build the complete function IR using the builder
        if (debug) {
            std::cout << "\n--- Building Function IR ---\n";
        }
        auto func_ir {CPP2_UFCS(build_function_ir)(builder, mf)}; 
        static_cast<void>(cpp2::move(builder));// Explicitly discard modified builder

        // Emit complete function
        ad_ir_emitter emitter {&rc}; 
        auto func_code {CPP2_UFCS(emit_function)(cpp2::move(emitter), cpp2::move(func_ir))}; 

        if (debug) {
            std::cout << "\nGenerated function:\n";
            std::cout << func_code;
        }

        // Add the backward function to the type
        if (!(CPP2_UFCS(empty)(func_code))) {
            CPP2_UFCS(add_member)(t, cpp2::move(func_code));
            if (debug) {
                std::cout << "  -> Added backward function to type\n";
                std::cout << "└──────────────────────────────────────────────────┘\n";
            }
        }
    }

    if (debug) {
        std::cout << "\n╔══════════════════════════════════════════════════════════════════╗\n";
        std::cout << "║  AD REVERSE IR STAGE COMPLETE\n";
        std::cout << "╚══════════════════════════════════════════════════════════════════╝\n\n";
    }
}

#line 5293 "source/reverse_ad.h2"
auto autodiff_impl(meta::type_declaration& t) -> void
{

    std::string_view constexpr suffix_token{ "suffix=" };
    std::string_view constexpr rws_suffix_token{ "rws_suffix=" };
    std::string_view constexpr order_token{ "order=" };
    std::string_view constexpr reverse_token{ "reverse" };
    std::string_view constexpr debug_token{ "debug" };

    auto args {CPP2_UFCS(get_arguments)(t)}; 

    std::string suffix {"_d"}; 
    std::string rws_suffix {"_b"}; 
    int order {1}; 
    bool reverse {false}; 
    bool debug {false}; 
    for ( auto const& arg_str : cpp2::move(args) ) {
        if (CPP2_UFCS(starts_with)(arg_str, "\"") && CPP2_UFCS(ends_with)(arg_str, "\"")) {
            auto arg {CPP2_UFCS(substr)(arg_str, 1, CPP2_UFCS(ssize)(arg_str) - 2)}; 

            if (CPP2_UFCS(starts_with)(arg, suffix_token)) {
                suffix = CPP2_UFCS(substr)(cpp2::move(arg), CPP2_UFCS(size)(suffix_token));
                continue;
            }
            else {if (CPP2_UFCS(starts_with)(arg, rws_suffix_token)) {
                suffix = CPP2_UFCS(substr)(cpp2::move(arg), CPP2_UFCS(size)(rws_suffix_token));
                continue;
            }
            else {if (CPP2_UFCS(starts_with)(arg, order_token)) {
                if (!(string_util::string_to_int(CPP2_UFCS(substr)(arg, CPP2_UFCS(size)(order_token)), order))) {
                    CPP2_UFCS(error)(t, "AD: Could not parse derivative order: " + cpp2::to_string(CPP2_UFCS(substr)(cpp2::move(arg), CPP2_UFCS(size)(order_token))) + "");
                    return ; 
                }
                continue;
            }
            else {if (arg == reverse_token) {
                reverse = true;
                continue;
            }
            else {if (cpp2::move(arg) == debug_token) {
                debug = true;
                continue;
            }}}}}
        }

        CPP2_UFCS(error)(t, "AD: Unknown argument: " + cpp2::to_string(arg_str) + "");
        return ; 
    }

    if (cpp2::move(reverse)) {
        std::cout << "AD: Warning - reverse mode differentiation is very experimental\n";

        // Higher-order reverse mode not yet supported
        if (order != 1) {
            CPP2_UFCS(error)(t, "@autodiff: Higher-order reverse mode (order > 1 with reverse) is not yet supported");
            return ; 
        }

        // Call reverse mode IR builder (completely independent path)
        autodiff_reverse_ir(t, cpp2::move(debug));
        CPP2_UFCS(add_runtime_support_include)(t, "cpp2ad_stack.h");
        return ; // Skip old forward mode code entirely
    }

    // Forward mode path continues below
    autodiff_context ad_ctx {order, false}; 
    ad_ctx.fwd_suffix = cpp2::move(suffix);
    ad_ctx.rws_suffix = cpp2::move(rws_suffix);

    // Skip old string-based code generation for types starting with "test_"
    // This allows IR-only debugging during development
    auto type_name {cpp2::impl::as_<std::string>(CPP2_UFCS(name)(t))}; 
    if (CPP2_UFCS(starts_with)(type_name, "test_")) {
        std::cout << "AD: Skipping old code generation for test type '" << cpp2::move(type_name) << "'\n";
        return ; 
    }

    if (CPP2_UFCS(parent_is_nonglobal_namespace)(t)) {
        auto p {CPP2_UFCS(as_nonglobal_namespace)(CPP2_UFCS(get_parent)(t))}; 
        CPP2_UFCS(create_namespace_stack)(ad_ctx, p);
        autodiff_declaration_handler ad {&ad_ctx, cpp2::move(p)}; 
        CPP2_UFCS(pre_traverse)(cpp2::move(ad), t);

    }
    else {if (CPP2_UFCS(parent_is_type)(t)) {
        auto p {CPP2_UFCS(as_type)(CPP2_UFCS(get_parent)(t))}; 
        CPP2_UFCS(create_namespace_stack)(ad_ctx, p);
        autodiff_declaration_handler ad {&ad_ctx, cpp2::move(p)}; 
        CPP2_UFCS(pre_traverse)(cpp2::move(ad), t);
    }
    else {
        // TODO: Remove when global namespace is available.
        // Traverse without parent context
        CPP2_UFCS(push_stack)(ad_ctx, t);
        autodiff_declaration_handler ad {&ad_ctx, t}; 

        for ( 
             auto const& m : CPP2_UFCS(get_members)(t) ) 
        if ( CPP2_UFCS(is_function)(m)) 
        {
            CPP2_UFCS(pre_traverse)(ad, m);
        }
        CPP2_UFCS(pop_stack)(ad_ctx);
    }}

    if (1 != cpp2::move(order)) {
        CPP2_UFCS(add_runtime_support_include)(t, "cpp2taylor.h");
    }

    CPP2_UFCS(finish)(ad_ctx);
    static_cast<void>(cpp2::move(ad_ctx));
}

}

}

#endif
