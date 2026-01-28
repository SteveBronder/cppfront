#line 13 "source/reflect.h2"
#include "parse.h"
#include "cpp2regex.h"

#ifndef SOURCE_REFLECT_H_CPP2
#define SOURCE_REFLECT_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "source/reflect.h2"

#line 17 "source/reflect.h2"
namespace cpp2 {

namespace meta {

#line 29 "source/reflect.h2"
class compiler_services;

#line 212 "source/reflect.h2"
template<typename T> class reflection_base;

#line 248 "source/reflect.h2"
class declaration;

#line 333 "source/reflect.h2"
class function_declaration;

#line 438 "source/reflect.h2"
class object_declaration;

#line 474 "source/reflect.h2"
class type_or_namespace_declaration;

#line 585 "source/reflect.h2"
class type_declaration;

#line 629 "source/reflect.h2"
class namespace_declaration;

#line 648 "source/reflect.h2"
class alias_declaration;

#line 667 "source/reflect.h2"
class parameter_declaration;

#line 713 "source/reflect.h2"
template<String Name, typename Term> class binary_expression;

#line 840 "source/reflect.h2"
class expression_list;

#line 873 "source/reflect.h2"
class prefix_expression;

#line 915 "source/reflect.h2"
class postfix_expression;

#line 986 "source/reflect.h2"
class template_arg;

#line 1012 "source/reflect.h2"
class unqualified_id;

#line 1044 "source/reflect.h2"
class qualified_id;

#line 1088 "source/reflect.h2"
class type_id;

#line 1131 "source/reflect.h2"
class primary_expression;

#line 1170 "source/reflect.h2"
class id_expression;

#line 1206 "source/reflect.h2"
class expression;

#line 1257 "source/reflect.h2"
class is_as_expression;

#line 1318 "source/reflect.h2"
class statement;

#line 1370 "source/reflect.h2"
class expression_statement;

#line 1392 "source/reflect.h2"
class compound_statement;

#line 1431 "source/reflect.h2"
class selection_statement;

#line 1457 "source/reflect.h2"
class return_statement;

#line 1479 "source/reflect.h2"
class iteration_statement;

#line 1976 "source/reflect.h2"
class value_member_info;

#line 2689 "source/reflect.h2"
class simple_traverser;

#line 4310 "source/reflect.h2"
class autodiff_special_func;
    

#line 4387 "source/reflect.h2"
class autodiff_declared_variable;
    

#line 4427 "source/reflect.h2"
class autodiff_declaration_stack_item;
    

#line 4495 "source/reflect.h2"
class autodiff_context;
    

#line 5037 "source/reflect.h2"
class reverse_autodiff_context;
    

#line 5100 "source/reflect.h2"
class ad_type_kind;
    

#line 5131 "source/reflect.h2"
class ad_type;

#line 5474 "source/reflect.h2"
class ad_op_kind;
    

#line 5545 "source/reflect.h2"
class ad_expr_kind;
    

#line 5579 "source/reflect.h2"
class ad_stmt_kind;
    

#line 5637 "source/reflect.h2"
class ad_expr;

#line 5990 "source/reflect.h2"
class ad_stmt;

#line 6350 "source/reflect.h2"
class ad_param;

#line 6387 "source/reflect.h2"
class ad_function_ir;

#line 6413 "source/reflect.h2"
namespace ad_types {

#line 6545 "source/reflect.h2"
}

#line 6552 "source/reflect.h2"
namespace ad_exprs {

#line 6884 "source/reflect.h2"
}

#line 6891 "source/reflect.h2"
namespace ad_stmts {

#line 7043 "source/reflect.h2"
}

#line 7468 "source/reflect.h2"
class ad_substitution_context;
    

#line 7674 "source/reflect.h2"
class ad_rule_meta;

#line 7737 "source/reflect.h2"
class ad_reverse_rule_result;

#line 7778 "source/reflect.h2"
class ad_rule_registry;
    

#line 8073 "source/reflect.h2"
class ad_rule_body_result;

#line 8112 "source/reflect.h2"
class ad_parse_expr_result;

#line 8136 "source/reflect.h2"
class ad_parse_stmt_result;

#line 8781 "source/reflect.h2"
class ad_rule_param_names;
    

#line 8912 "source/reflect.h2"
class ad_op_mapping_result;

#line 8991 "source/reflect.h2"
class ad_ir_error;

#line 9027 "source/reflect.h2"
class ad_ir_error_list;
    

#line 9090 "source/reflect.h2"
class ad_ir_builder;

#line 10483 "source/reflect.h2"
class ad_rule_application_result;
    

#line 10542 "source/reflect.h2"
class ad_ir_emitter;
    

#line 11252 "source/reflect.h2"
class autodiff_diff_code;
    

#line 11352 "source/reflect.h2"
class autodiff_activity_check;
    

#line 11480 "source/reflect.h2"
class autodiff_handler_base;
    

#line 11512 "source/reflect.h2"
class autodiff_expression_handler;
    

#line 12362 "source/reflect.h2"
class autodiff_stmt_handler;

#line 12991 "source/reflect.h2"
class autodiff_declaration_handler;

#line 13604 "source/reflect.h2"
class expression_flags;

#line 13620 "source/reflect.h2"
class regex_token;

#line 13647 "source/reflect.h2"
class regex_token_check;

#line 13668 "source/reflect.h2"
class regex_token_code;

#line 13689 "source/reflect.h2"
class regex_token_empty;

#line 13707 "source/reflect.h2"
class regex_token_list;

#line 13759 "source/reflect.h2"
class parse_context_group_state;

#line 13820 "source/reflect.h2"
class parse_context_branch_reset_state;

#line 13863 "source/reflect.h2"
class parse_context;

#line 14264 "source/reflect.h2"
class generation_function_context;
    

#line 14282 "source/reflect.h2"
class generation_context;

#line 14481 "source/reflect.h2"
class alternative_token;

#line 14496 "source/reflect.h2"
class alternative_token_gen;

#line 14561 "source/reflect.h2"
class any_token;

#line 14578 "source/reflect.h2"
class atomic_group_token;

#line 14608 "source/reflect.h2"
class char_token;

#line 14723 "source/reflect.h2"
class class_token;

#line 14947 "source/reflect.h2"
class group_ref_token;

#line 15084 "source/reflect.h2"
class group_token;

#line 15431 "source/reflect.h2"
class lookahead_lookbehind_token;

#line 15526 "source/reflect.h2"
class range_token;

#line 15683 "source/reflect.h2"
class special_range_token;

#line 15769 "source/reflect.h2"
template<typename Error_out> class regex_generator;

#line 16041 "source/reflect.h2"
}

}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "source/reflect.h2"

//  Copyright 2022-2026 Herb Sutter
//  SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//  Part of the Cppfront Project, under the Apache License v2.0 with LLVM Exceptions.
//  See https://github.com/hsutter/cppfront/blob/main/LICENSE for license information.


//===========================================================================
//  Reflection and meta
//===========================================================================

#line 15 "source/reflect.h2"
using namespace cpp2::regex;

#line 17 "source/reflect.h2"
namespace cpp2 {

namespace meta {

#line 29 "source/reflect.h2"
class compiler_services
 {

#line 33 "source/reflect.h2"
    private: std::vector<error_entry>* errors; 
    private: std::set<std::string>* includes; 
    private: std::vector<std::string>* extra_cpp1; 
    private: std::vector<std::string>* extra_build; 
    private: std::string file_name; 
    private: int errors_original_size; 
    private: stable_vector<token>* generated_tokens; 
    private: cpp2::parser parser; 
    private: std::string metafunction_name {}; 
    private: std::vector<std::string> metafunction_args {}; 
    private: bool metafunctions_used {false}; 

#line 47 "source/reflect.h2"
    public: compiler_services(

        cpp2::impl::in<std::vector<error_entry>*> errors_, 
        cpp2::impl::in<std::set<std::string>*> includes_, 
        cpp2::impl::in<std::vector<std::string>*> extra_cpp1_, 
        cpp2::impl::in<std::vector<std::string>*> extra_build_, 
        cpp2::impl::in<std::string> filename, 
        cpp2::impl::in<stable_vector<token>*> generated_tokens_
    );

#line 69 "source/reflect.h2"
    public: [[nodiscard]] auto filename() const& -> std::string_view;

    public: auto set_metafunction_name(cpp2::impl::in<std::string_view> name, cpp2::impl::in<std::vector<std::string>> args) & -> void;

#line 77 "source/reflect.h2"
    public: [[nodiscard]] auto get_metafunction_name() const& -> std::string_view;

    public: [[nodiscard]] auto get_argument(cpp2::impl::in<int> index) & -> std::string;

#line 87 "source/reflect.h2"
    public: [[nodiscard]] auto get_arguments() & -> std::vector<std::string>;

#line 92 "source/reflect.h2"
    public: [[nodiscard]] auto arguments_were_used() const& -> bool;
using parse_statement_ret = std::unique_ptr<statement_node>;


#line 94 "source/reflect.h2"
    protected: [[nodiscard]] auto parse_statement(

        std::string_view source
    ) & -> parse_statement_ret;

#line 147 "source/reflect.h2"
    public: auto add_runtime_support_include(cpp2::impl::in<std::string_view> s, cpp2::impl::in<bool> angles = false) & -> void;

#line 158 "source/reflect.h2"
    public: [[nodiscard]] auto add_extra_cpp1_code(cpp2::impl::in<std::string> s) & -> decltype(auto);
    public: [[nodiscard]] auto add_extra_build_step(cpp2::impl::in<std::string> s) & -> decltype(auto);

    public: [[nodiscard]] virtual auto position() const -> source_position;

#line 170 "source/reflect.h2"
    public: auto require(

        cpp2::impl::in<bool> b, 
        cpp2::impl::in<std::string_view> msg
    ) const& -> void;

#line 181 "source/reflect.h2"
    public: auto error(cpp2::impl::in<std::string_view> msg) const& -> void;

#line 193 "source/reflect.h2"
    public: auto report_violation(auto const& msg) const& -> void;

#line 201 "source/reflect.h2"
    public: [[nodiscard]] auto is_active() const& -> decltype(auto);
    public: virtual ~compiler_services() noexcept;
public: compiler_services(compiler_services const& that);
public: compiler_services(compiler_services&& that) noexcept;

#line 202 "source/reflect.h2"
};

#line 212 "source/reflect.h2"
template<typename T> class reflection_base
: public compiler_services {

#line 216 "source/reflect.h2"
    protected: T* n; 

    protected: reflection_base(

        cpp2::impl::in<T*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 229 "source/reflect.h2"
    public: [[nodiscard]] auto position() const -> source_position override;

    public: [[nodiscard]] auto print() const& -> std::string;

    public: [[nodiscard]] auto is_same(cpp2::impl::in<reflection_base> o) const& -> bool;
    public: template<typename TO> [[nodiscard]] auto is_same([[maybe_unused]] reflection_base<TO> const& unnamed_param_2) const& -> bool;
    public: virtual ~reflection_base() noexcept;
public: reflection_base(reflection_base const& that);
public: reflection_base(reflection_base&& that) noexcept;

#line 235 "source/reflect.h2"
};

#line 248 "source/reflect.h2"
class declaration
: public reflection_base<declaration_node> {

#line 252 "source/reflect.h2"
    public: declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 261 "source/reflect.h2"
    public: [[nodiscard]] auto is_public() const& -> bool;
    public: [[nodiscard]] auto is_protected() const& -> bool;
    public: [[nodiscard]] auto is_private() const& -> bool;
    public: [[nodiscard]] auto is_default_access() const& -> bool;

    public: [[nodiscard]] auto default_to_public() & -> decltype(auto);
    public: [[nodiscard]] auto default_to_protected() & -> decltype(auto);
    public: [[nodiscard]] auto default_to_private() & -> decltype(auto);

    public: [[nodiscard]] auto make_public() & -> bool;
    public: [[nodiscard]] auto make_protected() & -> bool;
    public: [[nodiscard]] auto make_private() & -> bool;

    public: [[nodiscard]] auto has_name() const& -> bool;
    public: [[nodiscard]] auto has_name(cpp2::impl::in<std::string_view> s) const& -> bool;

    public: [[nodiscard]] auto name() const& -> std::string_view;

#line 282 "source/reflect.h2"
    public: [[nodiscard]] auto has_initializer() const& -> bool;

    public: [[nodiscard]] auto get_initializer() const& -> statement;

    public: [[nodiscard]] auto is_global() const& -> bool;
    public: [[nodiscard]] auto is_function() const& -> bool;
    public: [[nodiscard]] auto is_object() const& -> bool;
    public: [[nodiscard]] auto is_base_object() const& -> bool;
    public: [[nodiscard]] auto is_member_object() const& -> bool;
    public: [[nodiscard]] auto is_type() const& -> bool;
    public: [[nodiscard]] auto is_namespace() const& -> bool;
    public: [[nodiscard]] auto is_alias() const& -> bool;

    public: [[nodiscard]] auto is_type_alias() const& -> bool;
    public: [[nodiscard]] auto is_namespace_alias() const& -> bool;
    public: [[nodiscard]] auto is_object_alias() const& -> bool;

    public: [[nodiscard]] auto is_function_expression() const& -> bool;

    public: [[nodiscard]] auto as_function() const& -> function_declaration;
    public: [[nodiscard]] auto as_object() const& -> object_declaration;
    public: [[nodiscard]] auto as_type() const& -> type_declaration;
    public: [[nodiscard]] auto as_nonglobal_namespace() const& -> namespace_declaration;
    public: [[nodiscard]] auto as_alias() const& -> alias_declaration;

    public: [[nodiscard]] auto get_parent() const& -> declaration;

    public: [[nodiscard]] auto parent_is_function() const& -> bool;
    public: [[nodiscard]] auto parent_is_object() const& -> bool;
    public: [[nodiscard]] auto parent_is_type() const& -> bool;
    public: [[nodiscard]] auto parent_is_nonglobal_namespace() const& -> bool;
    public: [[nodiscard]] auto parent_is_alias() const& -> bool;

    public: [[nodiscard]] auto parent_is_type_alias() const& -> bool;
    public: [[nodiscard]] auto parent_is_namespace_alias() const& -> bool;
    public: [[nodiscard]] auto parent_is_object_alias() const& -> bool;

    public: [[nodiscard]] auto parent_is_polymorphic() const& -> bool;

    public: auto mark_for_removal_from_enclosing_type() & -> void;
    public: virtual ~declaration() noexcept;
public: declaration(declaration const& that);
public: declaration(declaration&& that) noexcept;


#line 327 "source/reflect.h2"
};

#line 333 "source/reflect.h2"
class function_declaration
: public declaration {

#line 337 "source/reflect.h2"
    public: function_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 347 "source/reflect.h2"
    public: [[nodiscard]] auto index_of_parameter_named(cpp2::impl::in<std::string_view> s) const& -> int;
    public: [[nodiscard]] auto has_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_return_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_parameter_or_return_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_in_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_in_ref_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_copy_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_inout_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_out_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_move_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto has_forward_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool;
    public: [[nodiscard]] auto first_parameter_name() const& -> std::string;

    public: [[nodiscard]] auto has_parameter_with_name_and_pass(cpp2::impl::in<std::string_view> s, cpp2::impl::in<passing_style> pass) const& -> bool;

    public: [[nodiscard]] auto is_function_with_this() const& -> bool;
    public: [[nodiscard]] auto is_virtual() const& -> bool;
    public: [[nodiscard]] auto is_defaultable() const& -> bool;
    public: [[nodiscard]] auto is_constructor() const& -> bool;
    public: [[nodiscard]] auto is_default_constructor() const& -> bool;
    public: [[nodiscard]] auto is_move() const& -> bool;
    public: [[nodiscard]] auto is_swap() const& -> bool;
    public: [[nodiscard]] auto is_constructor_with_that() const& -> bool;
    public: [[nodiscard]] auto is_constructor_with_in_that() const& -> bool;
    public: [[nodiscard]] auto is_constructor_with_move_that() const& -> bool;
    public: [[nodiscard]] auto is_assignment() const& -> bool;
    public: [[nodiscard]] auto is_assignment_with_that() const& -> bool;
    public: [[nodiscard]] auto is_assignment_with_in_that() const& -> bool;
    public: [[nodiscard]] auto is_assignment_with_move_that() const& -> bool;
    public: [[nodiscard]] auto is_destructor() const& -> bool;

    public: [[nodiscard]] auto is_copy_or_move() const& -> bool;

    public: [[nodiscard]] auto has_declared_return_type() const& -> bool;
    public: [[nodiscard]] auto has_deduced_return_type() const& -> bool;
    public: [[nodiscard]] auto has_bool_return_type() const& -> bool;
    public: [[nodiscard]] auto has_non_void_return_type() const& -> bool;

    public: [[nodiscard]] auto has_compound_body() const& -> bool;

    public: [[nodiscard]] auto get_body() const& -> statement;
    public: [[nodiscard]] auto get_compound_body() const& -> compound_statement;
    public: [[nodiscard]] auto get_unnamed_return_type() const& -> std::string;
    public: [[nodiscard]] auto get_signature() const& -> std::string;

    public: [[nodiscard]] auto is_binary_comparison_function() const& -> bool;

    public: [[nodiscard]] auto get_parameters() const& -> std::vector<parameter_declaration>;

#line 404 "source/reflect.h2"
    public: [[nodiscard]] auto get_returns() const& -> std::vector<parameter_declaration>;

#line 416 "source/reflect.h2"
    public: [[nodiscard]] auto default_to_virtual() & -> decltype(auto);

    public: [[nodiscard]] auto make_virtual() & -> bool;

    public: auto add_initializer(cpp2::impl::in<std::string_view> source) & -> void;
    public: function_declaration(function_declaration const& that);
public: function_declaration(function_declaration&& that) noexcept;


#line 432 "source/reflect.h2"
};

#line 438 "source/reflect.h2"
class object_declaration
: public declaration {

#line 442 "source/reflect.h2"
    public: object_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 452 "source/reflect.h2"
    public: [[nodiscard]] auto is_const() const& -> bool;
    public: [[nodiscard]] auto has_wildcard_type() const& -> bool;

    public: [[nodiscard]] auto type() const& -> std::string;

#line 462 "source/reflect.h2"
    public: [[nodiscard]] auto initializer() const& -> std::string;
    public: object_declaration(object_declaration const& that);
public: object_declaration(object_declaration&& that) noexcept;


#line 468 "source/reflect.h2"
};

#line 474 "source/reflect.h2"
class type_or_namespace_declaration
: public declaration {

#line 478 "source/reflect.h2"
    public: type_or_namespace_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 488 "source/reflect.h2"
    public: auto reserve_names(cpp2::impl::in<std::string_view> name, auto&& ...etc) const& -> void;

#line 502 "source/reflect.h2"
    public: [[nodiscard]] auto get_member_functions() const& -> std::vector<function_declaration>;

#line 513 "source/reflect.h2"
    public: [[nodiscard]] auto get_member_functions_needing_initializer() const& -> std::vector<function_declaration>;

#line 528 "source/reflect.h2"
    public: [[nodiscard]] auto get_member_objects() const& -> std::vector<object_declaration>;

#line 538 "source/reflect.h2"
    public: [[nodiscard]] auto get_member_types() const& -> std::vector<type_declaration>;

#line 548 "source/reflect.h2"
    public: [[nodiscard]] auto get_member_aliases() const& -> std::vector<alias_declaration>;

#line 558 "source/reflect.h2"
    public: [[nodiscard]] auto get_members() const& -> std::vector<declaration>;

#line 568 "source/reflect.h2"
    public: auto add_member(cpp2::impl::in<std::string_view> source) & -> void;
    public: type_or_namespace_declaration(type_or_namespace_declaration const& that);
public: type_or_namespace_declaration(type_or_namespace_declaration&& that) noexcept;


#line 582 "source/reflect.h2"
};

#line 585 "source/reflect.h2"
class type_declaration
: public type_or_namespace_declaration {

#line 589 "source/reflect.h2"
    public: type_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 600 "source/reflect.h2"
    public: [[nodiscard]] auto is_polymorphic() const& -> bool;
    public: [[nodiscard]] auto is_final() const& -> bool;
    public: [[nodiscard]] auto make_final() & -> bool;
struct query_declared_value_set_functions_ret { bool out_this_in_that; bool out_this_move_that; bool inout_this_in_that; bool inout_this_move_that; };



#line 604 "source/reflect.h2"
    public: [[nodiscard]] auto query_declared_value_set_functions() const& -> query_declared_value_set_functions_ret;

#line 620 "source/reflect.h2"
    public: [[nodiscard]] auto disable_member_function_generation() & -> decltype(auto);
    public: [[nodiscard]] auto disable_ref_qualifier_generation() & -> decltype(auto);

#line 624 "source/reflect.h2"
    public: [[nodiscard]] auto remove_marked_members() & -> decltype(auto);
    public: [[nodiscard]] auto remove_all_members() & -> decltype(auto);
    public: type_declaration(type_declaration const& that);
public: type_declaration(type_declaration&& that) noexcept;

#line 626 "source/reflect.h2"
};

#line 629 "source/reflect.h2"
class namespace_declaration
: public type_or_namespace_declaration {

#line 633 "source/reflect.h2"
    public: namespace_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );
    public: namespace_declaration(namespace_declaration const& that);
public: namespace_declaration(namespace_declaration&& that) noexcept;


#line 642 "source/reflect.h2"
};

#line 648 "source/reflect.h2"
class alias_declaration
: public declaration {

#line 652 "source/reflect.h2"
    public: alias_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );
    public: alias_declaration(alias_declaration const& that);
public: alias_declaration(alias_declaration&& that) noexcept;


#line 661 "source/reflect.h2"
};

#line 667 "source/reflect.h2"
class parameter_declaration
: public reflection_base<parameter_declaration_node> {

#line 671 "source/reflect.h2"
    public: parameter_declaration(

        cpp2::impl::in<parameter_declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 680 "source/reflect.h2"
    public: [[nodiscard]] auto get_declaration() const& -> object_declaration;
    public: [[nodiscard]] auto get_passing_style() const& -> passing_style;

    public: [[nodiscard]] auto is_implicit() const& -> bool;
    public: [[nodiscard]] auto is_virtual() const& -> bool;
    public: [[nodiscard]] auto is_override() const& -> bool;
    public: [[nodiscard]] auto is_final() const& -> bool;
    public: parameter_declaration(parameter_declaration const& that);
public: parameter_declaration(parameter_declaration&& that) noexcept;

#line 687 "source/reflect.h2"
};

#line 700 "source/reflect.h2"
using multiplicative_expression = binary_expression<"multiplicative",is_as_expression_node>;
using additive_expression = binary_expression<"additive",multiplicative_expression_node>;
using shift_expression = binary_expression<"shift",additive_expression_node>;
using compare_expression = binary_expression<"compare",shift_expression_node>;
using relational_expression = binary_expression<"relational",compare_expression_node>;
using equality_expression = binary_expression<"equality",relational_expression_node>;
using bit_and_expression = binary_expression<"bit-and",equality_expression_node>;
using bit_xor_expression = binary_expression<"bit-xor",bit_and_expression_node>;
using bit_or_expression = binary_expression<"bit-or",bit_xor_expression_node>;
using logical_and_expression = binary_expression<"logical-and",bit_or_expression_node>;
using logical_or_expression = binary_expression<"logical-or",logical_and_expression_node>;
using assignment_expression = binary_expression<"assignment",logical_or_expression_node>;

template<String Name, typename Term> class binary_expression
: public reflection_base<binary_expression_node<Name,Term>> {

#line 717 "source/reflect.h2"
    public: binary_expression(

        binary_expression_node<Name,Term>* const& n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 726 "source/reflect.h2"
    public: [[nodiscard]] auto is_fold_expression() const& -> bool;
    public: [[nodiscard]] auto lhs_is_id_expression() const& -> bool;
    public: [[nodiscard]] auto is_standalone_expression() const& -> bool;
    public: [[nodiscard]] auto terms_size() const& -> int;
    public: [[nodiscard]] auto is_identifier() const& -> bool;
    public: [[nodiscard]] auto is_id_expression() const& -> bool;
    public: [[nodiscard]] auto is_unqualified_id() const& -> bool;
    public: [[nodiscard]] auto is_expression_list() const& -> bool;
    public: [[nodiscard]] auto is_literal() const& -> bool;

    public: template<typename T> class term_t {
        private: std::string op; 
        private: T term; 

        public: term_t(auto&& o, auto&& ptr, auto&& cs);

        public: [[nodiscard]] auto get_op() const& -> std::string;
        public: [[nodiscard]] auto get_term() const& -> T;
        public: term_t(term_t const& that);

public: auto operator=(term_t const& that) -> term_t& ;
public: term_t(term_t&& that) noexcept;
public: auto operator=(term_t&& that) noexcept -> term_t& ;

#line 744 "source/reflect.h2"
    };

    public: [[nodiscard]] auto get_terms() const& -> auto;

#line 821 "source/reflect.h2"
    public: [[nodiscard]] auto as_expression_list() const& -> expression_list;
    public: [[nodiscard]] auto as_literal() const& -> std::string;

#line 825 "source/reflect.h2"
    public: [[nodiscard]] auto get_if_only_a_postfix_expression() const& -> postfix_expression;

    public: [[nodiscard]] auto get_lhs_postfix_expression() const& -> postfix_expression;

    public: [[nodiscard]] auto get_second_postfix_expression() const& -> postfix_expression;

    public: [[nodiscard]] auto is_result_a_temporary_variable() const& -> bool;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: binary_expression(binary_expression const& that);
public: binary_expression(binary_expression&& that) noexcept;

#line 834 "source/reflect.h2"
};

#line 840 "source/reflect.h2"
class expression_list
: public reflection_base<expression_list_node> {

#line 844 "source/reflect.h2"
    public: expression_list(

        cpp2::impl::in<expression_list_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 853 "source/reflect.h2"
    public: [[nodiscard]] auto is_empty() const& -> bool;
    public: [[nodiscard]] auto is_fold_expression() const& -> bool;

    public: [[nodiscard]] auto get_expressions() const& -> std::vector<expression>;

#line 866 "source/reflect.h2"
    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: expression_list(expression_list const& that);
public: expression_list(expression_list&& that) noexcept;

#line 867 "source/reflect.h2"
};

#line 873 "source/reflect.h2"
class prefix_expression
: public reflection_base<prefix_expression_node> {

#line 877 "source/reflect.h2"
    public: prefix_expression(

        cpp2::impl::in<prefix_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 886 "source/reflect.h2"
    public: [[nodiscard]] auto get_ops() const& -> std::vector<std::string>;

#line 894 "source/reflect.h2"
    public: [[nodiscard]] auto get_postfix_expression() const& -> postfix_expression;

    public: [[nodiscard]] auto is_fold_expression() const& -> bool;
    public: [[nodiscard]] auto is_identifier() const& -> bool;
    public: [[nodiscard]] auto is_id_expression() const& -> bool;
    public: [[nodiscard]] auto is_unqualified_id() const& -> bool;
    public: [[nodiscard]] auto is_expression_list() const& -> bool;
    public: [[nodiscard]] auto is_literal() const& -> bool;
    public: [[nodiscard]] auto is_result_a_temporary_variable() const& -> bool;

    public: [[nodiscard]] auto as_expression_list() const& -> expression_list;
    public: [[nodiscard]] auto as_literal() const& -> std::string;
    public: [[nodiscard]] auto as_identifier() const& -> std::string;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: virtual ~prefix_expression() noexcept;
public: prefix_expression(prefix_expression const& that);
public: prefix_expression(prefix_expression&& that) noexcept;

#line 909 "source/reflect.h2"
};

#line 915 "source/reflect.h2"
class postfix_expression
: public reflection_base<postfix_expression_node> {

#line 919 "source/reflect.h2"
    public: postfix_expression(

        cpp2::impl::in<postfix_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 928 "source/reflect.h2"
    public: [[nodiscard]] auto get_primary_expression() const& -> primary_expression;

    public: class term_t {
        private: postfix_expression_node::term const* term_; 
        private: compiler_services const* cs_; 

        public: term_t(auto&& term, auto&& cs);

        public: [[nodiscard]] auto get_op() const& -> std::string_view;

#line 944 "source/reflect.h2"
        public: [[nodiscard]] auto is_id_expression() const& -> bool;
        public: [[nodiscard]] auto is_expression_list() const& -> bool;
        public: [[nodiscard]] auto is_expression() const& -> bool;

        public: [[nodiscard]] auto get_id_expression() const& -> id_expression;
        public: [[nodiscard]] auto get_expression_list() const& -> expression_list;
        public: [[nodiscard]] auto get_expression() const& -> expression;
        public: term_t(term_t const& that);
public: term_t(term_t&& that) noexcept;

#line 951 "source/reflect.h2"
    };

    public: [[nodiscard]] auto get_terms() const& -> auto;

#line 959 "source/reflect.h2"
    public: [[nodiscard]] auto is_fold_expression() const& -> bool;
    public: [[nodiscard]] auto is_identifier() const& -> bool;
    public: [[nodiscard]] auto is_id_expression() const& -> bool;
    public: [[nodiscard]] auto is_unqualified_id() const& -> bool;
    public: [[nodiscard]] auto is_expression_list() const& -> bool;
    public: [[nodiscard]] auto is_literal() const& -> bool;

    public: [[nodiscard]] auto as_identifier() const& -> std::string;
    public: [[nodiscard]] auto as_expression_list() const& -> expression_list;
    public: [[nodiscard]] auto as_literal() const& -> std::string;

    public: [[nodiscard]] auto get_first_token_ignoring_this() const& -> std::string_view;

#line 976 "source/reflect.h2"
    public: [[nodiscard]] auto starts_with_function_call_with_num_parameters(cpp2::impl::in<int> num) const& -> bool;
    public: [[nodiscard]] auto is_result_a_temporary_variable() const& -> bool;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: postfix_expression(postfix_expression const& that);
public: postfix_expression(postfix_expression&& that) noexcept;

#line 980 "source/reflect.h2"
};

#line 986 "source/reflect.h2"
class template_arg
: public reflection_base<template_argument> {

#line 990 "source/reflect.h2"
    public: template_arg(

        cpp2::impl::in<template_argument*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 999 "source/reflect.h2"
    public: [[nodiscard]] auto is_expression() const& -> bool;
    public: [[nodiscard]] auto is_type_id() const& -> bool;

    public: [[nodiscard]] auto as_expression() const& -> expression;
    public: [[nodiscard]] auto as_type_id() const& -> type_id;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: template_arg(template_arg const& that);
public: template_arg(template_arg&& that) noexcept;

#line 1006 "source/reflect.h2"
};

#line 1012 "source/reflect.h2"
class unqualified_id
: public reflection_base<unqualified_id_node> {

#line 1016 "source/reflect.h2"
    public: unqualified_id(

        cpp2::impl::in<unqualified_id_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1025 "source/reflect.h2"
    public: [[nodiscard]] auto is_identifier() const& -> bool;

    public: [[nodiscard]] auto get_identifier() const& -> std::string;

#line 1035 "source/reflect.h2"
    public: [[nodiscard]] auto as_token() const& -> std::string;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: unqualified_id(unqualified_id const& that);
public: unqualified_id(unqualified_id&& that) noexcept;

#line 1038 "source/reflect.h2"
};

#line 1044 "source/reflect.h2"
class qualified_id
: public reflection_base<qualified_id_node> {

#line 1048 "source/reflect.h2"
    public: qualified_id(

        cpp2::impl::in<qualified_id_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1057 "source/reflect.h2"
    public: class term_t {
        private: std::string op; 
        private: unqualified_id unqualified; 

        public: term_t(auto&& o, auto&& ptr, auto&& cs);

        public: [[nodiscard]] auto get_op() const& -> std::string;
        public: [[nodiscard]] auto get_unqualified() const& -> unqualified_id;
        public: term_t(term_t const& that);
public: term_t(term_t&& that) noexcept;

#line 1065 "source/reflect.h2"
    };

    public: [[nodiscard]] auto get_terms() const& -> auto;

#line 1079 "source/reflect.h2"
    public: [[nodiscard]] auto as_token() const& -> std::string;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: qualified_id(qualified_id const& that);
public: qualified_id(qualified_id&& that) noexcept;

#line 1082 "source/reflect.h2"
};

#line 1088 "source/reflect.h2"
class type_id
: public reflection_base<type_id_node> {

#line 1092 "source/reflect.h2"
    public: type_id(

        cpp2::impl::in<type_id_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1107 "source/reflect.h2"
    public: [[nodiscard]] auto is_postfix_expression() const& -> bool;
    public: [[nodiscard]] auto is_qualified_id() const& -> bool;
    public: [[nodiscard]] auto is_unqualified_id() const& -> bool;
    public: [[nodiscard]] auto is_function_typeid() const& -> bool;
    public: [[nodiscard]] auto is_keyword() const& -> bool;
    public: [[nodiscard]] auto is_wildcard() const& -> bool;
    public: [[nodiscard]] auto is_pointer_qualified() const& -> bool;
    public: [[nodiscard]] auto is_concept() const& -> bool;

    public: [[nodiscard]] auto as_postfix_expression() const& -> postfix_expression;
    public: [[nodiscard]] auto as_qualified_id() const& -> qualified_id;
    public: [[nodiscard]] auto as_unqualified_id() const& -> unqualified_id;

#line 1121 "source/reflect.h2"
    public: [[nodiscard]] auto as_keyword() const& -> std::string;
    public: [[nodiscard]] auto as_token() const& -> std::string;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: type_id(type_id const& that);
public: type_id(type_id&& that) noexcept;

#line 1125 "source/reflect.h2"
};

#line 1131 "source/reflect.h2"
class primary_expression
: public reflection_base<primary_expression_node> {

#line 1135 "source/reflect.h2"
    public: primary_expression(

        cpp2::impl::in<primary_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1150 "source/reflect.h2"
    public: [[nodiscard]] auto is_fold_expression() const& -> bool;
    public: [[nodiscard]] auto is_identifier() const& -> bool;
    public: [[nodiscard]] auto is_id_expression() const& -> bool;
    public: [[nodiscard]] auto is_unqualified_id() const& -> bool;
    public: [[nodiscard]] auto is_expression_list() const& -> bool;
    public: [[nodiscard]] auto is_literal() const& -> bool;
    public: [[nodiscard]] auto is_declaration() const& -> bool;

    public: [[nodiscard]] auto as_identifier() const& -> std::string;
    public: [[nodiscard]] auto as_expression_list() const& -> expression_list;
    public: [[nodiscard]] auto as_literal() const& -> std::string;
    public: [[nodiscard]] auto as_declaration() const& -> declaration;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: primary_expression(primary_expression const& that);
public: primary_expression(primary_expression&& that) noexcept;

#line 1164 "source/reflect.h2"
};

#line 1170 "source/reflect.h2"
class id_expression
: public reflection_base<id_expression_node> {

#line 1174 "source/reflect.h2"
    public: id_expression(

        cpp2::impl::in<id_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1189 "source/reflect.h2"
    public: [[nodiscard]] auto is_fold_expression() const& -> bool;
    public: [[nodiscard]] auto is_empty() const& -> bool;
    public: [[nodiscard]] auto is_identifier() const& -> bool;
    public: [[nodiscard]] auto is_qualified() const& -> bool;
    public: [[nodiscard]] auto is_unqualified() const& -> bool;

    public: [[nodiscard]] auto as_identifier() const& -> std::string;
    public: [[nodiscard]] auto as_qualified() const& -> qualified_id;
    public: [[nodiscard]] auto as_unqualified() const& -> unqualified_id;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: virtual ~id_expression() noexcept;
public: id_expression(id_expression const& that);
public: id_expression(id_expression&& that) noexcept;

#line 1200 "source/reflect.h2"
};

#line 1206 "source/reflect.h2"
class expression
: public reflection_base<expression_node> {

#line 1210 "source/reflect.h2"
    public: expression(

        cpp2::impl::in<expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1219 "source/reflect.h2"
    public: [[nodiscard]] auto is_fold_expression() const& -> bool;
    public: [[nodiscard]] auto is_standalone_expression() const& -> bool;
    public: [[nodiscard]] auto subexpression_count() const& -> int;
    public: [[nodiscard]] auto is_identifier() const& -> bool;
    public: [[nodiscard]] auto is_id_expression() const& -> bool;
    public: [[nodiscard]] auto is_unqualified_id() const& -> bool;
    public: [[nodiscard]] auto is_expression_list() const& -> bool;
    public: [[nodiscard]] auto is_empty_expression_list() const& -> bool;
    public: [[nodiscard]] auto is_literal() const& -> bool;
    public: [[nodiscard]] auto is_assignment_expression() const& -> bool;

    public: [[nodiscard]] auto is_simple_assignment() const& -> bool;
struct get_lhs_rhs_if_simple_assignment_ret { postfix_expression lhs; logical_or_expression rhs; };



#line 1235 "source/reflect.h2"
    public: [[nodiscard]] auto get_lhs_rhs_if_simple_assignment() const& -> get_lhs_rhs_if_simple_assignment_ret;

#line 1246 "source/reflect.h2"
    public: [[nodiscard]] auto as_assignment_expression() const& -> assignment_expression;
    public: [[nodiscard]] auto as_expression_list() const& -> expression_list;
    public: [[nodiscard]] auto as_literal() const& -> std::string;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: virtual ~expression() noexcept;
public: expression(expression const& that);
public: expression(expression&& that) noexcept;

#line 1251 "source/reflect.h2"
};

#line 1257 "source/reflect.h2"
class is_as_expression
: public reflection_base<is_as_expression_node> {

#line 1261 "source/reflect.h2"
    public: is_as_expression(

        cpp2::impl::in<is_as_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1270 "source/reflect.h2"
    public: class term_t {
        private: std::string op; 
        private: expression expr; 

        public: term_t(auto&& o, auto&& ptr, auto&& cs);

        public: [[nodiscard]] auto get_op() const& -> std::string;
        public: [[nodiscard]] auto get_expr() const& -> expression;
        public: term_t(term_t const& that);
public: term_t(term_t&& that) noexcept;

#line 1278 "source/reflect.h2"
    };

    public: [[nodiscard]] auto get_expression() const& -> prefix_expression;

    public: [[nodiscard]] auto get_terms() const& -> auto;

#line 1288 "source/reflect.h2"
    public: [[nodiscard]] auto is_fold_expression() const& -> bool;
    public: [[nodiscard]] auto is_identifier() const& -> bool;
    public: [[nodiscard]] auto is_id_expression() const& -> bool;
    public: [[nodiscard]] auto is_unqualified_id() const& -> bool;
    public: [[nodiscard]] auto is_expression_list() const& -> bool;
    public: [[nodiscard]] auto is_literal() const& -> bool;

    public: [[nodiscard]] auto as_expression_list() const& -> expression_list;
    public: [[nodiscard]] auto as_literal() const& -> std::string;

    public: [[nodiscard]] auto get_identifier() const& -> std::string_view;

#line 1304 "source/reflect.h2"
    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: virtual ~is_as_expression() noexcept;
public: is_as_expression(is_as_expression const& that);
public: is_as_expression(is_as_expression&& that) noexcept;

#line 1305 "source/reflect.h2"
};

#line 1318 "source/reflect.h2"
class statement
: public reflection_base<statement_node> {

#line 1322 "source/reflect.h2"
    public: statement(

        cpp2::impl::in<statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1331 "source/reflect.h2"
    public: [[nodiscard]] auto get_parameters() const& -> std::vector<parameter_declaration>;

#line 1341 "source/reflect.h2"
    public: [[nodiscard]] auto is_expression_statement() const& -> bool;
    public: [[nodiscard]] auto is_compound_statement() const& -> bool;
    public: [[nodiscard]] auto is_selection_statement() const& -> bool;
    public: [[nodiscard]] auto is_declaration() const& -> bool;
    public: [[nodiscard]] auto is_return_statement() const& -> bool;
    public: [[nodiscard]] auto is_iteration_statement() const& -> bool;
    public: [[nodiscard]] auto is_using_statement() const& -> bool;
    public: [[nodiscard]] auto is_contract() const& -> bool;
    public: [[nodiscard]] auto is_inspect_expression() const& -> bool;
    public: [[nodiscard]] auto is_jump_statement() const& -> bool;

    public: [[nodiscard]] auto as_expression_statement() const& -> expression_statement;
    public: [[nodiscard]] auto as_compound_statement() const& -> compound_statement;
    public: [[nodiscard]] auto as_selection_statement() const& -> selection_statement;
    public: [[nodiscard]] auto as_declaration() const& -> declaration;
    public: [[nodiscard]] auto as_return_statement() const& -> return_statement;
    public: [[nodiscard]] auto as_iteration_statement() const& -> iteration_statement;

#line 1363 "source/reflect.h2"
    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: virtual ~statement() noexcept;
public: statement(statement const& that);
public: statement(statement&& that) noexcept;

#line 1364 "source/reflect.h2"
};

#line 1370 "source/reflect.h2"
class expression_statement
: public reflection_base<expression_statement_node> {

#line 1374 "source/reflect.h2"
    public: expression_statement(

        cpp2::impl::in<expression_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1383 "source/reflect.h2"
    public: [[nodiscard]] auto get_expression() const& -> expression;

    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: expression_statement(expression_statement const& that);
public: expression_statement(expression_statement&& that) noexcept;

#line 1386 "source/reflect.h2"
};

#line 1392 "source/reflect.h2"
class compound_statement
: public reflection_base<compound_statement_node> {

#line 1396 "source/reflect.h2"
    public: compound_statement(

        cpp2::impl::in<compound_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1405 "source/reflect.h2"
    public: [[nodiscard]] auto get_statements() const& -> std::vector<statement>;

#line 1415 "source/reflect.h2"
    public: auto add_statement(cpp2::impl::in<std::string_view> source, cpp2::impl::in<int> before_position = 0) & -> void;
    public: compound_statement(compound_statement const& that);
public: compound_statement(compound_statement&& that) noexcept;


#line 1425 "source/reflect.h2"
};

#line 1431 "source/reflect.h2"
class selection_statement
: public reflection_base<selection_statement_node> {

#line 1435 "source/reflect.h2"
    public: selection_statement(

        cpp2::impl::in<selection_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1444 "source/reflect.h2"
    public: [[nodiscard]] auto has_false_branch_in_source_code() const& -> bool;
    public: [[nodiscard]] auto has_false_branch() const& -> bool;

    public: [[nodiscard]] auto get_identifier() const& -> std::string_view;
    public: [[nodiscard]] auto get_expression() const& -> logical_or_expression;
    public: [[nodiscard]] auto get_true_branch() const& -> compound_statement;
    public: [[nodiscard]] auto get_false_branch() const& -> compound_statement;
    public: selection_statement(selection_statement const& that);
public: selection_statement(selection_statement&& that) noexcept;

#line 1451 "source/reflect.h2"
};

#line 1457 "source/reflect.h2"
class return_statement
: public reflection_base<return_statement_node> {

#line 1461 "source/reflect.h2"
    public: return_statement(

        cpp2::impl::in<return_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1470 "source/reflect.h2"
    public: [[nodiscard]] auto has_expression() const& -> bool;

    public: [[nodiscard]] auto get_expression() const& -> expression;
    public: return_statement(return_statement const& that);
public: return_statement(return_statement&& that) noexcept;

#line 1473 "source/reflect.h2"
};

#line 1479 "source/reflect.h2"
class iteration_statement
: public reflection_base<iteration_statement_node> {

#line 1483 "source/reflect.h2"
    public: iteration_statement(

        cpp2::impl::in<iteration_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    );

#line 1492 "source/reflect.h2"
    public: [[nodiscard]] auto is_do() const& -> bool;
    public: [[nodiscard]] auto is_while() const& -> bool;
    public: [[nodiscard]] auto is_for() const& -> bool;
    public: [[nodiscard]] auto has_next() const& -> bool;

    public: [[nodiscard]] auto get_label() const& -> std::string;
    public: [[nodiscard]] auto get_next_expression() const& -> assignment_expression;
    public: [[nodiscard]] auto get_do_while_condition() const& -> logical_or_expression;
    public: [[nodiscard]] auto get_do_while_body() const& -> compound_statement;
    public: [[nodiscard]] auto get_for_range() const& -> expression;
    public: [[nodiscard]] auto get_for_parameter() const& -> parameter_declaration;
    public: [[nodiscard]] auto get_for_body() const& -> statement;
    public: iteration_statement(iteration_statement const& that);
public: iteration_statement(iteration_statement&& that) noexcept;

#line 1504 "source/reflect.h2"
};

#line 1519 "source/reflect.h2"
auto add_virtual_destructor(meta::type_declaration& t) -> void;

#line 1539 "source/reflect.h2"
auto interface(meta::type_declaration& t) -> void;

#line 1587 "source/reflect.h2"
auto polymorphic_base(meta::type_declaration& t) -> void;

#line 1632 "source/reflect.h2"
auto ordered_impl(
    meta::type_declaration& t, 
    cpp2::impl::in<std::string_view> ordering
) -> void;

#line 1661 "source/reflect.h2"
auto ordered(meta::type_declaration& t) -> void;

#line 1669 "source/reflect.h2"
auto weakly_ordered(meta::type_declaration& t) -> void;

#line 1677 "source/reflect.h2"
auto partially_ordered(meta::type_declaration& t) -> void;

#line 1699 "source/reflect.h2"
auto copyable(meta::type_declaration& t) -> void;

#line 1731 "source/reflect.h2"
auto copy_constructible(meta::type_declaration& t) -> void;

#line 1763 "source/reflect.h2"
auto hashable(meta::type_declaration& t) -> void;

#line 1796 "source/reflect.h2"
auto basic_value(meta::type_declaration& t) -> void;

#line 1824 "source/reflect.h2"
auto value(meta::type_declaration& t) -> void;

#line 1830 "source/reflect.h2"
auto weakly_ordered_value(meta::type_declaration& t) -> void;

#line 1836 "source/reflect.h2"
auto partially_ordered_value(meta::type_declaration& t) -> void;

#line 1865 "source/reflect.h2"
auto cpp1_rule_of_zero(meta::type_declaration& t) -> void;

#line 1907 "source/reflect.h2"
auto cpp2_struct(meta::type_declaration& t) -> void;

#line 1976 "source/reflect.h2"
class value_member_info {
    public: std::string name; 
    public: std::string type; 
    public: std::string value; 
    public: value_member_info(auto const& name_, auto const& type_, auto const& value_);

#line 1980 "source/reflect.h2"
};

auto basic_enum(
    meta::type_declaration& t, 
    auto const& nextval, 
    cpp2::impl::in<bool> bitwise
    ) -> void;

#line 2246 "source/reflect.h2"
auto cpp2_enum(meta::type_declaration& t) -> void;

#line 2273 "source/reflect.h2"
auto flag_enum(meta::type_declaration& t) -> void;

#line 2319 "source/reflect.h2"
auto cpp2_union(meta::type_declaration& t) -> void;

#line 2472 "source/reflect.h2"
auto encapsulated(meta::type_declaration& t) -> void;

#line 2491 "source/reflect.h2"
auto noncopyable(meta::type_declaration& t) -> void;

#line 2513 "source/reflect.h2"
auto singleton(meta::type_declaration& t) -> void;

#line 2540 "source/reflect.h2"
auto print(cpp2::impl::in<meta::type_declaration> t) -> void;

#line 2551 "source/reflect.h2"
auto noisy(cpp2::impl::in<meta::type_declaration> t) -> void;
struct python_param_names_and_types_ret { std::string names; std::string types; };



#line 2575 "source/reflect.h2"
[[nodiscard]] auto python_param_names_and_types(cpp2::impl::in<meta::function_declaration> mf) -> python_param_names_and_types_ret;

#line 2597 "source/reflect.h2"
auto python(meta::type_declaration& t) -> void;

#line 2640 "source/reflect.h2"
auto javascript(meta::type_declaration& t) -> void;

#line 2681 "source/reflect.h2"
auto sample_print(cpp2::impl::in<std::string_view> s, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 2689 "source/reflect.h2"
class simple_traverser {

    public: virtual auto pre_traverse(cpp2::impl::in<meta::declaration> decl) -> void;

#line 2695 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::declaration> decl) -> void;

#line 2715 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::function_declaration> f) -> void;

#line 2719 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::function_declaration> f) -> void;

#line 2740 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::object_declaration> o) -> void;

#line 2744 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::object_declaration> o) -> void;

#line 2752 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::type_declaration> t) -> void;

#line 2756 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::type_declaration> t) -> void;

#line 2764 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void;

#line 2768 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void;

#line 2773 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::statement> stmt) -> void;

#line 2777 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::statement> stmt) -> void;

#line 2812 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::compound_statement> stmt) -> void;

#line 2816 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::compound_statement> stmt) -> void;

#line 2826 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::return_statement> stmt) -> void;

#line 2830 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::return_statement> stmt) -> void;

#line 2838 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::iteration_statement> stmt) -> void;

#line 2842 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::iteration_statement> stmt) -> void;

#line 2861 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::selection_statement> stmt) -> void;

#line 2865 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::selection_statement> stmt) -> void;

#line 2876 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::expression> expr) -> void;

#line 2882 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::expression> expr) -> void;

#line 2896 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void;

#line 2913 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void;

#line 2924 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void;

#line 2941 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void;

#line 2953 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void;

#line 2970 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void;

#line 2981 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void;

#line 2998 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void;

#line 3009 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void;

#line 3026 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void;

#line 3038 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void;

#line 3055 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void;

#line 3067 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void;

#line 3084 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void;

#line 3095 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void;

#line 3112 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void;

#line 3123 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void;

#line 3140 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void;

#line 3151 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void;

#line 3168 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void;

#line 3179 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void;

#line 3196 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void;

#line 3208 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void;

#line 3225 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void;

#line 3236 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void;

#line 3252 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void;

#line 3263 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::expression_list> exprs) -> void;

#line 3270 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void;

#line 3286 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void;

#line 3291 "source/reflect.h2"
    public: virtual auto pre_traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void;

#line 3307 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void;

#line 3326 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::unqualified_id> uid) -> void;

#line 3332 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::qualified_id> qid) -> void;

#line 3342 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::type_id> tid) -> void;

#line 3359 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::primary_expression> primary) -> void;

#line 3379 "source/reflect.h2"
    public: virtual auto traverse(cpp2::impl::in<meta::id_expression> idexpr) -> void;
    public: simple_traverser() = default;
    public: simple_traverser(simple_traverser const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(simple_traverser const&) -> void = delete;


#line 3394 "source/reflect.h2"
};

#line 3407 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::declaration> decl, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3429 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::function_declaration> f, cpp2::impl::in<cpp2::i32> indent = 0) -> void;

#line 3459 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::object_declaration> o, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3469 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::type_declaration> t, cpp2::impl::in<cpp2::i32> indent = 0) -> void;

#line 3490 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::parameter_declaration> t, cpp2::impl::in<cpp2::i32> indent = 0) -> void;

#line 3509 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3564 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::compound_statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3581 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::return_statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3591 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::iteration_statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3623 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::expression> expr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3637 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::assignment_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3667 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::logical_or_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3697 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::logical_and_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3727 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::bit_or_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3757 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::bit_xor_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3787 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::bit_and_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3817 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::equality_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3847 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::relational_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3877 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::compare_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3907 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::shift_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3937 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::additive_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3967 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::multiplicative_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 3997 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::is_as_expression> isas, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4023 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::expression_list> exprs, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4038 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::prefix_expression> prefix, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4062 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::postfix_expression> postfix, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4095 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::unqualified_id> uid, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4106 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::qualified_id> qid, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4122 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::type_id> tid, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4139 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::primary_expression> primary, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4159 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::id_expression> idexpr, cpp2::impl::in<cpp2::i32> indent) -> void;

#line 4310 "source/reflect.h2"
class autodiff_special_func {

           public: std::string name; 

           public: int n_args; 

    public: bool is_member; 

#line 4319 "source/reflect.h2"
           public: std::string code_primal; 

           public: std::string code_fwd; 

           public: std::string code_rws; 

    public: std::string code_primal_higher_order; 

           public: std::string code_fwd_higher_order; 

           public: std::string code_rws_higher_order; 

#line 4344 "source/reflect.h2"
    public: autodiff_special_func(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, cpp2::impl::in<std::string> code_primal_ = "", cpp2::impl::in<std::string> code_fwd_ = "", 
                          cpp2::impl::in<std::string> code_rws_ = "", cpp2::impl::in<std::string> code_primal_higher_order_ = "", cpp2::impl::in<std::string> code_fwd_higher_order_ = "", 
                          cpp2::impl::in<std::string> code_rws_higher_order_ = "");

#line 4374 "source/reflect.h2"
    public: autodiff_special_func(autodiff_special_func const& that);
#line 4374 "source/reflect.h2"
    public: auto operator=(autodiff_special_func const& that) -> autodiff_special_func& ;
#line 4374 "source/reflect.h2"
    public: autodiff_special_func(autodiff_special_func&& that) noexcept;
#line 4374 "source/reflect.h2"
    public: auto operator=(autodiff_special_func&& that) noexcept -> autodiff_special_func& ;

#line 4381 "source/reflect.h2"
    public: [[nodiscard]] auto is_match(cpp2::impl::in<autodiff_special_func> o) const& -> bool;

#line 4384 "source/reflect.h2"
};

#line 4387 "source/reflect.h2"
class autodiff_declared_variable {

           public: std::string name {""}; 

           public: std::string decl {""}; 

           public: bool is_active {false}; 

           public: bool is_member {false}; 

#line 4401 "source/reflect.h2"
    public: explicit autodiff_declared_variable();

#line 4411 "source/reflect.h2"
    public: autodiff_declared_variable(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> decl_, cpp2::impl::in<bool> is_active_, cpp2::impl::in<bool> is_member_);

#line 4423 "source/reflect.h2"
    public: autodiff_declared_variable(autodiff_declared_variable const& that);
#line 4423 "source/reflect.h2"
    public: auto operator=(autodiff_declared_variable const& that) -> autodiff_declared_variable& ;
#line 4423 "source/reflect.h2"
    public: autodiff_declared_variable(autodiff_declared_variable&& that) noexcept;
#line 4423 "source/reflect.h2"
    public: auto operator=(autodiff_declared_variable&& that) noexcept -> autodiff_declared_variable& ;
};

#line 4427 "source/reflect.h2"
class autodiff_declaration_stack_item {

           public: std::string full_name; 

    public: meta::type_or_namespace_declaration decl; 

#line 4434 "source/reflect.h2"
    public: std::vector<meta::declaration> diff_request {}; 

           public: std::vector<meta::declaration> diff_done {}; 

#line 4439 "source/reflect.h2"
    public: std::vector<std::vector<autodiff_declared_variable>> declared_variables_stack {1}; 

#line 4447 "source/reflect.h2"
    public: autodiff_declaration_stack_item(cpp2::impl::in<std::string> full_name_, cpp2::impl::in<meta::type_or_namespace_declaration> decl_);
using lookup_declaration_ret = std::vector<meta::declaration>;


#line 4457 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_declaration(cpp2::impl::in<std::string> decl_name) const& -> lookup_declaration_ret;
struct lookup_variable_declaration_ret { bool found; autodiff_declared_variable r; };



#line 4472 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_variable_declaration(cpp2::impl::in<std::string> decl_name) const& -> lookup_variable_declaration_ret;
    public: autodiff_declaration_stack_item(autodiff_declaration_stack_item const& that);
public: autodiff_declaration_stack_item(autodiff_declaration_stack_item&& that) noexcept;


#line 4490 "source/reflect.h2"
};

#line 4495 "source/reflect.h2"
class autodiff_context {

    private: int temporary_count {0}; 

#line 4502 "source/reflect.h2"
    public: std::vector<autodiff_special_func> special_funcs {
        autodiff_special_func("sin", 1,                   false, 
            "sin(_a1_)", 
            "cos(_a1_) * _ad1_", 
            "_ab1_ += cos(_a1_) * _rb_;\n", 
            "sin(_a1_)", 
            "_ad1_.sin(_a1_)", 
            "TODO"

        ), 
        autodiff_special_func("cos", 1,                   false, 
            "cos(_a1_)", 
            "-sin(_a1_) * _ad1_", 
            "_ab1_ += -sin(_a1_) * _rb_;\n", 
            "cos(_a1_)", 
            "_ad1_.cos(_a1_)", 
            "TODO"
        ), 
        autodiff_special_func("exp", 1,                   false, 
            "exp(_a1_)", 
            "exp(_a1_) * _ad1_", 
            "_ab1_ += exp(_a1_) * _rb_;\n", 
            "exp(_a1_)", 
            "_ad1_.exp(_a1_)", 
            "TODO"
        ), 
        autodiff_special_func("sqrt", 1,                   false, 
            "sqrt(_a1_)", 
            "0.5 * _ad1_ / sqrt(_a1_)", 
            "_ab1_ += 0.5 * _rb_ / sqrt(_a1_);\n", 
            "sqrt(_a1_)", 
            "_ad1_.sqrt(_a1_)", 
            "TODO"
        ), 
        autodiff_special_func("push_back", 1,                   true, 
            "_o_.push_back(_a1_);", 
            "_od_.push_back(_ad1_);", 
            "TODO")}; 

#line 4543 "source/reflect.h2"
            public: std::string fwd_suffix {"_d"}; 

            public: std::string rws_suffix {"_b"}; 

            private: int order {1}; 

            public: bool reverse {false}; 

            public: bool debug {false}; 

#line 4554 "source/reflect.h2"
    public: std::string fwd_ad_type {"double"}; 

    public: std::string rws_ad_type {"double"}; 

#line 4559 "source/reflect.h2"
           public: std::map<std::string,std::vector<meta::declaration>> declaration_map {}; 

    public: std::vector<autodiff_declaration_stack_item> declaration_stack {}; 

#line 4567 "source/reflect.h2"
    public: explicit autodiff_context();

#line 4574 "source/reflect.h2"
    public: autodiff_context(cpp2::impl::in<int> order_, cpp2::impl::in<bool> reverse_);

#line 4598 "source/reflect.h2"
    public: auto add_variable_declaration(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type, cpp2::impl::in<bool> is_active, cpp2::impl::in<bool> is_member = false) & -> void;

#line 4607 "source/reflect.h2"
    public: [[nodiscard]] auto is_variable_active(cpp2::impl::in<std::string> name) & -> bool;

#line 4616 "source/reflect.h2"
    public: auto create_namespace_stack(cpp2::impl::in<meta::type_or_namespace_declaration> t) & -> void;

#line 4637 "source/reflect.h2"
    public: [[nodiscard]] auto is_forward() const& -> decltype(auto);

#line 4642 "source/reflect.h2"
    public: [[nodiscard]] auto is_reverse() const& -> decltype(auto);

#line 4647 "source/reflect.h2"
    public: [[nodiscard]] auto is_taylor() const& -> decltype(auto);

#line 4653 "source/reflect.h2"
    public: [[nodiscard]] auto gen_temporary() & -> std::string;

#line 4663 "source/reflect.h2"
    public: [[nodiscard]] auto is_type_active(cpp2::impl::in<std::string> type) & -> bool;

#line 4689 "source/reflect.h2"
    public: [[nodiscard]] auto get_fwd_ad_type(cpp2::impl::in<std::string> type) & -> std::string;

#line 4712 "source/reflect.h2"
    public: [[nodiscard]] auto get_rws_ad_type(cpp2::impl::in<std::string> type) & -> std::string;

#line 4735 "source/reflect.h2"
    public: [[nodiscard]] auto get_reverse_passing_style(cpp2::impl::in<passing_style> p) const& -> passing_style;
using lookup_declaration_ret = std::vector<meta::declaration>;


#line 4768 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_declaration(cpp2::impl::in<std::string> decl_name) & -> lookup_declaration_ret;

#line 4800 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_variable_declaration(cpp2::impl::in<std::string> name) & -> autodiff_declared_variable;
using lookup_function_declaration_ret = std::vector<meta::function_declaration>;


#line 4827 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_function_declaration(cpp2::impl::in<std::string> decl_name) & -> lookup_function_declaration_ret;
using lookup_member_function_declaration_ret = std::vector<meta::function_declaration>;


#line 4843 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_member_function_declaration(cpp2::impl::in<meta::type_declaration> obj_type, cpp2::impl::in<std::string> decl_name) & -> lookup_member_function_declaration_ret;
using lookup_type_declaration_ret = std::vector<meta::type_declaration>;


#line 4858 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_type_declaration(cpp2::impl::in<std::string> decl_name) & -> lookup_type_declaration_ret;
struct lookup_special_function_handling_ret { bool m; std::string code_primal; std::string code_fwd; std::string code_rws; };



#line 4875 "source/reflect.h2"
    public: [[nodiscard]] auto lookup_special_function_handling(cpp2::impl::in<std::string> func_name, cpp2::impl::in<int> n_args, cpp2::impl::in<bool> is_member) const& -> lookup_special_function_handling_ret;

#line 4905 "source/reflect.h2"
    public: auto add_as_differentiated(cpp2::impl::in<meta::declaration> t) & -> void;

#line 4918 "source/reflect.h2"
    public: auto add_for_differentiation(cpp2::impl::in<meta::declaration> t) & -> void;

#line 4950 "source/reflect.h2"
    public: [[nodiscard]] static auto is_in_list(cpp2::impl::in<meta::declaration> v, cpp2::impl::in<std::vector<meta::declaration>> list) -> bool;

#line 4964 "source/reflect.h2"
    public: auto enter_function() & -> void;

#line 4973 "source/reflect.h2"
    public: auto leave_function() & -> void;

#line 4982 "source/reflect.h2"
    public: auto push_stack(cpp2::impl::in<meta::type_or_namespace_declaration> decl) & -> void;

#line 4999 "source/reflect.h2"
    public: auto pop_stack() & -> void;

#line 5018 "source/reflect.h2"
    public: auto finish() & -> void;

#line 5028 "source/reflect.h2"
    public: [[nodiscard]] auto get_self() & -> autodiff_context*;
    public: autodiff_context(autodiff_context const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(autodiff_context const&) -> void = delete;


#line 5032 "source/reflect.h2"
};

#line 5037 "source/reflect.h2"
class reverse_autodiff_context {

    public: autodiff_context* ctx; 

           public: meta::function_declaration mf; 

#line 5044 "source/reflect.h2"
    public: std::string value_suffix {"_val"}; 

           public: std::string adj_suffix {"_adj"}; 

#line 5054 "source/reflect.h2"
    public: reverse_autodiff_context(cpp2::impl::in<autodiff_context*> ctx_, cpp2::impl::in<meta::function_declaration> mf_);

#line 5064 "source/reflect.h2"
    public: [[nodiscard]] auto make_value_name(cpp2::impl::in<std::string> base) const& -> std::string;

#line 5076 "source/reflect.h2"
    public: [[nodiscard]] auto make_adj_name(cpp2::impl::in<std::string> base) const& -> std::string;
    public: reverse_autodiff_context(reverse_autodiff_context const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(reverse_autodiff_context const&) -> void = delete;


#line 5082 "source/reflect.h2"
};

#line 5100 "source/reflect.h2"
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

#line 5116 "source/reflect.h2"
};

#line 5131 "source/reflect.h2"
class ad_type {
           public: ad_type_kind kind {ad_type_kind::double_}; 
           public: std::string name {""}; 
    public: std::shared_ptr<ad_type> inner_type {}; 
    public: std::vector<ad_type> type_args {}; 
    public: int array_size {0}; 

#line 5139 "source/reflect.h2"
    public: explicit ad_type();

#line 5142 "source/reflect.h2"
    public: ad_type(ad_type const& that);
#line 5142 "source/reflect.h2"
    public: auto operator=(ad_type const& that) -> ad_type& ;
#line 5142 "source/reflect.h2"
    public: ad_type(ad_type&& that) noexcept;
#line 5142 "source/reflect.h2"
    public: auto operator=(ad_type&& that) noexcept -> ad_type& ;

#line 5150 "source/reflect.h2"
    public: [[nodiscard]] static auto make_auto() -> ad_type;

#line 5160 "source/reflect.h2"
    public: [[nodiscard]] static auto make_void() -> ad_type;

#line 5170 "source/reflect.h2"
    public: [[nodiscard]] static auto make_int() -> ad_type;

#line 5180 "source/reflect.h2"
    public: [[nodiscard]] static auto make_size_t() -> ad_type;

#line 5190 "source/reflect.h2"
    public: [[nodiscard]] static auto make_double() -> ad_type;

#line 5200 "source/reflect.h2"
    public: [[nodiscard]] static auto make_float() -> ad_type;

#line 5210 "source/reflect.h2"
    public: [[nodiscard]] static auto make_bool() -> ad_type;

#line 5220 "source/reflect.h2"
    public: [[nodiscard]] static auto make_char() -> ad_type;

#line 5233 "source/reflect.h2"
    public: [[nodiscard]] static auto make_named(cpp2::impl::in<std::string> type_name) -> ad_type;

#line 5245 "source/reflect.h2"
    public: [[nodiscard]] static auto make_const(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 5257 "source/reflect.h2"
    public: [[nodiscard]] static auto make_ref(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 5269 "source/reflect.h2"
    public: [[nodiscard]] static auto make_rvalue_ref(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 5281 "source/reflect.h2"
    public: [[nodiscard]] static auto make_pointer(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 5294 "source/reflect.h2"
    public: [[nodiscard]] static auto make_array(cpp2::impl::in<ad_type> inner, cpp2::impl::in<int> size) -> ad_type;

#line 5308 "source/reflect.h2"
    public: [[nodiscard]] static auto make_template(cpp2::impl::in<std::string> template_name, cpp2::impl::in<std::vector<ad_type>> args) -> ad_type;

#line 5323 "source/reflect.h2"
    public: [[nodiscard]] static auto make_const_ref(cpp2::impl::in<ad_type> inner) -> ad_type;

#line 5332 "source/reflect.h2"
    public: [[nodiscard]] static auto make_std_vector(cpp2::impl::in<ad_type> elem) -> ad_type;

#line 5344 "source/reflect.h2"
    public: [[nodiscard]] auto is_const() const& -> bool;

#line 5352 "source/reflect.h2"
    public: [[nodiscard]] auto is_reference() const& -> bool;

#line 5360 "source/reflect.h2"
    public: [[nodiscard]] auto is_pointer() const& -> bool;

#line 5368 "source/reflect.h2"
    public: [[nodiscard]] auto get_base_type() const& -> ad_type;

#line 5374 "source/reflect.h2"
};

#line 5381 "source/reflect.h2"
[[nodiscard]] auto ad_type_to_string(cpp2::impl::in<ad_type> t) -> std::string;

#line 5444 "source/reflect.h2"
[[nodiscard]] auto ad_type_kind_to_string(cpp2::impl::in<ad_type_kind> kind) -> std::string;

#line 5474 "source/reflect.h2"
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

#line 5537 "source/reflect.h2"
};

#line 5545 "source/reflect.h2"
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

#line 5571 "source/reflect.h2"
};

#line 5579 "source/reflect.h2"
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

#line 5615 "source/reflect.h2"
};

#line 5637 "source/reflect.h2"
class ad_expr {
           public: ad_expr_kind kind {ad_expr_kind::literal}; 
           public: std::string type_name {""}; 
           public: std::shared_ptr<ad_type> expr_type {}; 
           public: std::string name {""}; 
           public: ad_op_kind op {ad_op_kind::add}; 
           public: std::vector<ad_expr> args {}; 
           public: std::string member_name {""}; 
           public: std::vector<ad_type> type_args {}; 
           public: std::shared_ptr<ad_type> cast_type {}; 
    public: std::vector<std::pair<std::string,std::string>> lambda_params {}; 
    public: std::shared_ptr<std::vector<ad_stmt>> lambda_body {}; 

#line 5651 "source/reflect.h2"
    public: explicit ad_expr();

#line 5654 "source/reflect.h2"
    public: ad_expr(ad_expr const& that);
#line 5654 "source/reflect.h2"
    public: auto operator=(ad_expr const& that) -> ad_expr& ;
#line 5654 "source/reflect.h2"
    public: ad_expr(ad_expr&& that) noexcept;
#line 5654 "source/reflect.h2"
    public: auto operator=(ad_expr&& that) noexcept -> ad_expr& ;

#line 5664 "source/reflect.h2"
    public: [[nodiscard]] static auto make_literal(cpp2::impl::in<std::string> value, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5679 "source/reflect.h2"
    public: [[nodiscard]] static auto make_literal_typed(cpp2::impl::in<std::string> value, cpp2::impl::in<ad_type> t) -> ad_expr;

#line 5695 "source/reflect.h2"
    public: [[nodiscard]] static auto make_identifier(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5710 "source/reflect.h2"
    public: [[nodiscard]] static auto make_identifier_typed(cpp2::impl::in<std::string> name_, cpp2::impl::in<ad_type> t) -> ad_expr;

#line 5729 "source/reflect.h2"
    public: [[nodiscard]] static auto make_unary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> operand, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5746 "source/reflect.h2"
    public: [[nodiscard]] static auto make_binary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5764 "source/reflect.h2"
    public: [[nodiscard]] static auto make_ternary(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<ad_expr> then_expr, cpp2::impl::in<ad_expr> else_expr, 
                   cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5785 "source/reflect.h2"
    public: [[nodiscard]] static auto make_member(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> member, cpp2::impl::in<bool> is_arrow, 
                  cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5804 "source/reflect.h2"
    public: [[nodiscard]] static auto make_subscript(cpp2::impl::in<ad_expr> array, cpp2::impl::in<ad_expr> index, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5823 "source/reflect.h2"
    public: [[nodiscard]] static auto make_call(cpp2::impl::in<std::string> func_name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<std::vector<ad_expr>> call_args, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5841 "source/reflect.h2"
    public: [[nodiscard]] static auto make_template_call(cpp2::impl::in<std::string> func_name, cpp2::impl::in<std::vector<ad_expr>> call_args, 
                         cpp2::impl::in<std::vector<ad_type>> template_args, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5861 "source/reflect.h2"
    public: [[nodiscard]] static auto make_method_call(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> method_name, 
                       cpp2::impl::in<std::vector<ad_expr>> call_args, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5885 "source/reflect.h2"
    public: [[nodiscard]] static auto make_cast(cpp2::impl::in<std::string> cast_kind, cpp2::impl::in<ad_type> target_type, cpp2::impl::in<ad_expr> expr, 
                cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5902 "source/reflect.h2"
    public: [[nodiscard]] static auto make_construct(cpp2::impl::in<std::string> type_name_, cpp2::impl::in<std::vector<ad_expr>> construct_args) -> ad_expr;

#line 5918 "source/reflect.h2"
    public: [[nodiscard]] static auto make_paren(cpp2::impl::in<ad_expr> inner) -> ad_expr;

#line 5932 "source/reflect.h2"
    public: [[nodiscard]] static auto make_initializer_list(cpp2::impl::in<std::vector<ad_expr>> elements, cpp2::impl::in<std::string> type_name_) -> ad_expr;

#line 5947 "source/reflect.h2"
    public: [[nodiscard]] static auto make_int_literal(cpp2::impl::in<int> value) -> ad_expr;

#line 5956 "source/reflect.h2"
    public: [[nodiscard]] static auto make_double_literal(cpp2::impl::in<double> value) -> ad_expr;

#line 5965 "source/reflect.h2"
    public: [[nodiscard]] static auto make_bool_literal(cpp2::impl::in<bool> value) -> ad_expr;

#line 5969 "source/reflect.h2"
};

#line 5990 "source/reflect.h2"
class ad_stmt {
           public: ad_stmt_kind kind {ad_stmt_kind::expr}; 
           public: std::string target {""}; 
           public: std::string type_name {""}; 
           public: std::shared_ptr<ad_type> decl_type {}; 
           public: ad_op_kind op {ad_op_kind::assign}; 
           public: ad_expr expr {}; 
           public: std::vector<ad_stmt> stmts {}; 
    public: std::vector<ad_stmt> else_stmts {}; 

#line 6001 "source/reflect.h2"
           public: std::shared_ptr<ad_stmt> init_stmt {}; 
           public: ad_expr incr_expr {}; 
    public: ad_expr range_expr {}; 

#line 6006 "source/reflect.h2"
    public: std::vector<std::pair<ad_expr,std::vector<ad_stmt>>> switch_cases {}; 
    public: std::vector<ad_stmt> default_case {}; 

#line 6010 "source/reflect.h2"
           public: std::string catch_var {""}; 
    public: std::string catch_type {""}; 
    public: std::vector<ad_stmt> catch_stmts {}; 

#line 6015 "source/reflect.h2"
    public: explicit ad_stmt();

#line 6018 "source/reflect.h2"
    public: ad_stmt(ad_stmt const& that);
#line 6018 "source/reflect.h2"
    public: auto operator=(ad_stmt const& that) -> ad_stmt& ;
#line 6018 "source/reflect.h2"
    public: ad_stmt(ad_stmt&& that) noexcept;
#line 6018 "source/reflect.h2"
    public: auto operator=(ad_stmt&& that) noexcept -> ad_stmt& ;

#line 6029 "source/reflect.h2"
    public: [[nodiscard]] static auto make_decl(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<ad_expr> init) -> ad_stmt;

#line 6045 "source/reflect.h2"
    public: [[nodiscard]] static auto make_decl_typed(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_type> t, cpp2::impl::in<ad_expr> init) -> ad_stmt;

#line 6061 "source/reflect.h2"
    public: [[nodiscard]] static auto make_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6076 "source/reflect.h2"
    public: [[nodiscard]] static auto make_compound_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6092 "source/reflect.h2"
    public: [[nodiscard]] static auto make_assign_add(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6106 "source/reflect.h2"
    public: [[nodiscard]] static auto make_assign_sub(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6116 "source/reflect.h2"
    public: [[nodiscard]] static auto make_assign_mul(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6126 "source/reflect.h2"
    public: [[nodiscard]] static auto make_assign_div(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6137 "source/reflect.h2"
    public: [[nodiscard]] static auto make_expr(cpp2::impl::in<ad_expr> e) -> ad_stmt;

#line 6149 "source/reflect.h2"
    public: [[nodiscard]] static auto make_return(cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6163 "source/reflect.h2"
    public: [[nodiscard]] static auto make_compound(cpp2::impl::in<std::vector<ad_stmt>> nested) -> ad_stmt;

#line 6177 "source/reflect.h2"
    public: [[nodiscard]] static auto make_if(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> then_body, 
              cpp2::impl::in<std::vector<ad_stmt>> else_body) -> ad_stmt;

#line 6195 "source/reflect.h2"
    public: [[nodiscard]] static auto make_for(cpp2::impl::in<ad_stmt> init, cpp2::impl::in<ad_expr> condition, cpp2::impl::in<ad_expr> increment, 
               cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 6214 "source/reflect.h2"
    public: [[nodiscard]] static auto make_foreach(cpp2::impl::in<std::string> var_name, cpp2::impl::in<std::string> var_type, 
                   cpp2::impl::in<ad_expr> range, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 6231 "source/reflect.h2"
    public: [[nodiscard]] static auto make_while(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 6245 "source/reflect.h2"
    public: [[nodiscard]] static auto make_do_while(cpp2::impl::in<std::vector<ad_stmt>> body, cpp2::impl::in<ad_expr> condition) -> ad_stmt;

#line 6259 "source/reflect.h2"
    public: [[nodiscard]] static auto make_break() -> ad_stmt;

#line 6269 "source/reflect.h2"
    public: [[nodiscard]] static auto make_continue() -> ad_stmt;

#line 6284 "source/reflect.h2"
    public: [[nodiscard]] static auto make_switch(cpp2::impl::in<ad_expr> switch_expr, 
                  cpp2::impl::in<std::vector<std::pair<ad_expr,std::vector<ad_stmt>>>> cases, 
                  cpp2::impl::in<std::vector<ad_stmt>> default_body) -> ad_stmt;

#line 6305 "source/reflect.h2"
    public: [[nodiscard]] static auto make_try_catch(cpp2::impl::in<std::vector<ad_stmt>> try_body, 
                     cpp2::impl::in<std::string> catch_type_, cpp2::impl::in<std::string> catch_var_, 
                     cpp2::impl::in<std::vector<ad_stmt>> catch_body) -> ad_stmt;

#line 6322 "source/reflect.h2"
    public: [[nodiscard]] static auto make_throw(cpp2::impl::in<ad_expr> throw_expr) -> ad_stmt;

#line 6337 "source/reflect.h2"
    public: [[nodiscard]] static auto make_raw_code(cpp2::impl::in<std::string> code) -> ad_stmt;

#line 6343 "source/reflect.h2"
};

#line 6350 "source/reflect.h2"
class ad_param {
           public: std::string name {""}; 
    public: std::string type_name {""}; 
    public: passing_style pass {passing_style::in}; 
    public: bool is_active {false}; 

#line 6357 "source/reflect.h2"
    public: explicit ad_param();

#line 6360 "source/reflect.h2"
    public: ad_param(ad_param const& that);
#line 6360 "source/reflect.h2"
    public: auto operator=(ad_param const& that) -> ad_param& ;
#line 6360 "source/reflect.h2"
    public: ad_param(ad_param&& that) noexcept;
#line 6360 "source/reflect.h2"
    public: auto operator=(ad_param&& that) noexcept -> ad_param& ;

#line 6370 "source/reflect.h2"
    public: [[nodiscard]] static auto make(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<passing_style> pass_, cpp2::impl::in<bool> is_active_) -> ad_param;

#line 6378 "source/reflect.h2"
};

#line 6387 "source/reflect.h2"
class ad_function_ir {
           public: std::string name {""}; 
           public: std::vector<ad_param> params {}; 
    public: std::vector<ad_param> returns {}; 
    public: std::vector<ad_stmt> forward {}; 
    public: std::vector<ad_stmt> reverse {}; 

#line 6395 "source/reflect.h2"
    public: explicit ad_function_ir();

#line 6398 "source/reflect.h2"
    public: ad_function_ir(ad_function_ir const& that);
#line 6398 "source/reflect.h2"
    public: auto operator=(ad_function_ir const& that) -> ad_function_ir& ;
#line 6398 "source/reflect.h2"
    public: ad_function_ir(ad_function_ir&& that) noexcept;
#line 6398 "source/reflect.h2"
    public: auto operator=(ad_function_ir&& that) noexcept -> ad_function_ir& ;
};

#line 6413 "source/reflect.h2"
namespace ad_types {

#line 6420 "source/reflect.h2"
    [[nodiscard]] auto double_() -> ad_type;

#line 6427 "source/reflect.h2"
    [[nodiscard]] auto int_() -> ad_type;

#line 6434 "source/reflect.h2"
    [[nodiscard]] auto size_t_() -> ad_type;

#line 6441 "source/reflect.h2"
    [[nodiscard]] auto bool_() -> ad_type;

#line 6448 "source/reflect.h2"
    [[nodiscard]] auto void_() -> ad_type;

#line 6455 "source/reflect.h2"
    [[nodiscard]] auto auto_() -> ad_type;

#line 6464 "source/reflect.h2"
    [[nodiscard]] auto const_double() -> ad_type;

#line 6471 "source/reflect.h2"
    [[nodiscard]] auto double_ref() -> ad_type;

#line 6478 "source/reflect.h2"
    [[nodiscard]] auto const_double_ref() -> ad_type;

#line 6485 "source/reflect.h2"
    [[nodiscard]] auto int_ref() -> ad_type;

#line 6492 "source/reflect.h2"
    [[nodiscard]] auto const_int_ref() -> ad_type;

#line 6502 "source/reflect.h2"
    [[nodiscard]] auto std_vector(cpp2::impl::in<ad_type> elem) -> ad_type;

#line 6509 "source/reflect.h2"
    [[nodiscard]] auto vector_double() -> ad_type;

#line 6516 "source/reflect.h2"
    [[nodiscard]] auto vector_int() -> ad_type;

#line 6523 "source/reflect.h2"
    [[nodiscard]] auto const_vector_double_ref() -> ad_type;

#line 6533 "source/reflect.h2"
    [[nodiscard]] auto named(cpp2::impl::in<std::string> name) -> ad_type;

#line 6542 "source/reflect.h2"
    [[nodiscard]] auto template_(cpp2::impl::in<std::string> name, cpp2::impl::in<std::vector<ad_type>> args) -> ad_type;

#line 6545 "source/reflect.h2"
}

#line 6552 "source/reflect.h2"
namespace ad_exprs {

#line 6560 "source/reflect.h2"
    [[nodiscard]] auto var(cpp2::impl::in<std::string> name) -> ad_expr;

#line 6569 "source/reflect.h2"
    [[nodiscard]] auto var_typed(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name) -> ad_expr;

#line 6577 "source/reflect.h2"
    [[nodiscard]] auto lit(cpp2::impl::in<double> value) -> ad_expr;

#line 6585 "source/reflect.h2"
    [[nodiscard]] auto lit_str(cpp2::impl::in<std::string> value) -> ad_expr;

#line 6593 "source/reflect.h2"
    [[nodiscard]] auto lit_int(cpp2::impl::in<int> value) -> ad_expr;

#line 6601 "source/reflect.h2"
    [[nodiscard]] auto lit_bool(cpp2::impl::in<bool> value) -> ad_expr;

#line 6608 "source/reflect.h2"
    [[nodiscard]] auto zero() -> ad_expr;

#line 6615 "source/reflect.h2"
    [[nodiscard]] auto one() -> ad_expr;

#line 6624 "source/reflect.h2"
    [[nodiscard]] auto add(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6631 "source/reflect.h2"
    [[nodiscard]] auto sub(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6638 "source/reflect.h2"
    [[nodiscard]] auto mul(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6645 "source/reflect.h2"
    [[nodiscard]] auto div(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6652 "source/reflect.h2"
    [[nodiscard]] auto neg(cpp2::impl::in<ad_expr> operand) -> ad_expr;

#line 6661 "source/reflect.h2"
    [[nodiscard]] auto lt(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6668 "source/reflect.h2"
    [[nodiscard]] auto gt(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6675 "source/reflect.h2"
    [[nodiscard]] auto le(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6682 "source/reflect.h2"
    [[nodiscard]] auto ge(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6689 "source/reflect.h2"
    [[nodiscard]] auto eq(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6696 "source/reflect.h2"
    [[nodiscard]] auto ne(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6705 "source/reflect.h2"
    [[nodiscard]] auto land(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6712 "source/reflect.h2"
    [[nodiscard]] auto lor(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr;

#line 6719 "source/reflect.h2"
    [[nodiscard]] auto lnot(cpp2::impl::in<ad_expr> operand) -> ad_expr;

#line 6728 "source/reflect.h2"
    [[nodiscard]] auto pre_inc(cpp2::impl::in<ad_expr> operand) -> ad_expr;

#line 6735 "source/reflect.h2"
    [[nodiscard]] auto pre_dec(cpp2::impl::in<ad_expr> operand) -> ad_expr;

#line 6742 "source/reflect.h2"
    [[nodiscard]] auto post_inc(cpp2::impl::in<ad_expr> operand) -> ad_expr;

#line 6749 "source/reflect.h2"
    [[nodiscard]] auto post_dec(cpp2::impl::in<ad_expr> operand) -> ad_expr;

#line 6758 "source/reflect.h2"
    [[nodiscard]] auto member(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> member_name) -> ad_expr;

#line 6765 "source/reflect.h2"
    [[nodiscard]] auto arrow(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> member_name) -> ad_expr;

#line 6772 "source/reflect.h2"
    [[nodiscard]] auto subscript(cpp2::impl::in<ad_expr> arr, cpp2::impl::in<ad_expr> index) -> ad_expr;

#line 6779 "source/reflect.h2"
    [[nodiscard]] auto at(cpp2::impl::in<ad_expr> arr, cpp2::impl::in<int> index) -> ad_expr;

#line 6790 "source/reflect.h2"
    [[nodiscard]] auto call(cpp2::impl::in<std::string> fn, cpp2::impl::in<std::vector<ad_expr>> args) -> ad_expr;

#line 6800 "source/reflect.h2"
    [[nodiscard]] auto method(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> method_name, cpp2::impl::in<std::vector<ad_expr>> args) -> ad_expr;

#line 6807 "source/reflect.h2"
    [[nodiscard]] auto method0(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> method_name) -> ad_expr;

#line 6817 "source/reflect.h2"
    [[nodiscard]] auto sin(cpp2::impl::in<ad_expr> x) -> ad_expr;

#line 6826 "source/reflect.h2"
    [[nodiscard]] auto cos(cpp2::impl::in<ad_expr> x) -> ad_expr;

#line 6835 "source/reflect.h2"
    [[nodiscard]] auto exp(cpp2::impl::in<ad_expr> x) -> ad_expr;

#line 6844 "source/reflect.h2"
    [[nodiscard]] auto log(cpp2::impl::in<ad_expr> x) -> ad_expr;

#line 6853 "source/reflect.h2"
    [[nodiscard]] auto sqrt(cpp2::impl::in<ad_expr> x) -> ad_expr;

#line 6862 "source/reflect.h2"
    [[nodiscard]] auto pow(cpp2::impl::in<ad_expr> x, cpp2::impl::in<ad_expr> y) -> ad_expr;

#line 6874 "source/reflect.h2"
    [[nodiscard]] auto ternary(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<ad_expr> then_expr, cpp2::impl::in<ad_expr> else_expr) -> ad_expr;

#line 6881 "source/reflect.h2"
    [[nodiscard]] auto paren(cpp2::impl::in<ad_expr> inner) -> ad_expr;

#line 6884 "source/reflect.h2"
}

#line 6891 "source/reflect.h2"
namespace ad_stmts {

#line 6898 "source/reflect.h2"
    [[nodiscard]] auto decl_init(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> init) -> ad_stmt;

#line 6905 "source/reflect.h2"
    [[nodiscard]] auto decl_double(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> init) -> ad_stmt;

#line 6912 "source/reflect.h2"
    [[nodiscard]] auto decl_int(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> init) -> ad_stmt;

#line 6919 "source/reflect.h2"
    [[nodiscard]] auto decl_zero(cpp2::impl::in<std::string> name) -> ad_stmt;

#line 6928 "source/reflect.h2"
    [[nodiscard]] auto assign(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6935 "source/reflect.h2"
    [[nodiscard]] auto assign_add(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6942 "source/reflect.h2"
    [[nodiscard]] auto assign_sub(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6949 "source/reflect.h2"
    [[nodiscard]] auto assign_mul(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6956 "source/reflect.h2"
    [[nodiscard]] auto assign_div(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 6965 "source/reflect.h2"
    [[nodiscard]] auto if_then(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 6973 "source/reflect.h2"
    [[nodiscard]] auto if_else(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<std::vector<ad_stmt>> then_body, cpp2::impl::in<std::vector<ad_stmt>> else_body) -> ad_stmt;

#line 6984 "source/reflect.h2"
    [[nodiscard]] auto for_range(cpp2::impl::in<std::string> var, cpp2::impl::in<int> start, cpp2::impl::in<ad_expr> end_exclusive, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 6994 "source/reflect.h2"
    [[nodiscard]] auto while_(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 7001 "source/reflect.h2"
    [[nodiscard]] auto foreach(cpp2::impl::in<std::string> var, cpp2::impl::in<ad_expr> range, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt;

#line 7010 "source/reflect.h2"
    [[nodiscard]] auto return_(cpp2::impl::in<ad_expr> value) -> ad_stmt;

#line 7017 "source/reflect.h2"
    [[nodiscard]] auto break_() -> ad_stmt;

#line 7024 "source/reflect.h2"
    [[nodiscard]] auto continue_() -> ad_stmt;

#line 7033 "source/reflect.h2"
    [[nodiscard]] auto expr(cpp2::impl::in<ad_expr> e) -> ad_stmt;

#line 7040 "source/reflect.h2"
    [[nodiscard]] auto block(cpp2::impl::in<std::vector<ad_stmt>> stmts) -> ad_stmt;

#line 7043 "source/reflect.h2"
}

#line 7056 "source/reflect.h2"
[[nodiscard]] auto ad_op_kind_to_string(cpp2::impl::in<ad_op_kind> op) -> std::string;

#line 7128 "source/reflect.h2"
[[nodiscard]] auto ad_expr_kind_to_string(cpp2::impl::in<ad_expr_kind> kind) -> std::string;

#line 7151 "source/reflect.h2"
[[nodiscard]] auto ad_stmt_kind_to_string(cpp2::impl::in<ad_stmt_kind> kind) -> std::string;

#line 7178 "source/reflect.h2"
auto ad_ir_print_indent(cpp2::impl::in<cpp2::i32> indent) -> void;

#line 7190 "source/reflect.h2"
auto ad_ir_debug_dump_expr(cpp2::impl::in<ad_expr> e, cpp2::impl::in<cpp2::i32> indent = 0) -> void;

#line 7289 "source/reflect.h2"
auto ad_ir_debug_dump_stmt(cpp2::impl::in<ad_stmt> s, cpp2::impl::in<cpp2::i32> indent = 0) -> void;

#line 7428 "source/reflect.h2"
auto ad_ir_debug_dump(cpp2::impl::in<ad_function_ir> ir) -> void;

#line 7468 "source/reflect.h2"
class ad_substitution_context {
    public: std::vector<std::pair<std::string,ad_expr>> substitutions {}; 

#line 7472 "source/reflect.h2"
    public: explicit ad_substitution_context();

#line 7475 "source/reflect.h2"
    public: ad_substitution_context(ad_substitution_context const& that);
#line 7475 "source/reflect.h2"
    public: auto operator=(ad_substitution_context const& that) -> ad_substitution_context& ;
#line 7475 "source/reflect.h2"
    public: ad_substitution_context(ad_substitution_context&& that) noexcept;
#line 7475 "source/reflect.h2"
    public: auto operator=(ad_substitution_context&& that) noexcept -> ad_substitution_context& ;

#line 7482 "source/reflect.h2"
    public: auto add(cpp2::impl::in<std::string> param_name, cpp2::impl::in<ad_expr> expr) & -> void;

#line 7492 "source/reflect.h2"
    public: [[nodiscard]] auto find(cpp2::impl::in<std::string> name, ad_expr& result) const& -> bool;

#line 7507 "source/reflect.h2"
    public: [[nodiscard]] auto has(cpp2::impl::in<std::string> name) const& -> bool;

#line 7520 "source/reflect.h2"
    public: [[nodiscard]] auto size() const& -> int;

#line 7523 "source/reflect.h2"
};

#line 7535 "source/reflect.h2"
[[nodiscard]] auto substitute_expr_params(cpp2::impl::in<ad_expr> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_expr;

#line 7591 "source/reflect.h2"
[[nodiscard]] auto substitute_stmt_params(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_stmt;

#line 7674 "source/reflect.h2"
class ad_rule_meta {
           public: std::string name {""}; 
           public: int n_args {0}; 
    public: bool is_member {false}; 
    public: std::string rule_type {""}; 
    public: std::string forward_body {""}; 
    public: std::string reverse_body {""}; 

#line 7684 "source/reflect.h2"
    public: std::vector<statement> reverse_body_stmts {}; 
    public: bool has_reverse_body_stmts {false}; 

#line 7689 "source/reflect.h2"
    public: std::string reverse_body_str {""}; 
    public: bool has_reverse_body {false}; 

#line 7693 "source/reflect.h2"
    public: explicit ad_rule_meta();

#line 7699 "source/reflect.h2"
    public: ad_rule_meta(ad_rule_meta&& that) noexcept;

#line 7720 "source/reflect.h2"
    public: [[nodiscard]] static auto make(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, cpp2::impl::in<std::string> rule_type_) -> ad_rule_meta;

#line 7728 "source/reflect.h2"
};

#line 7737 "source/reflect.h2"
class ad_reverse_rule_result {
           public: bool found {false}; 
           public: std::vector<ad_stmt> ir_stmts {}; 
           public: bool ir_success {false}; 
           public: std::string rule_type {""}; 
           public: std::string error_message {""}; 

    public: explicit ad_reverse_rule_result();
    public: ad_reverse_rule_result(ad_reverse_rule_result const& that);
#line 7745 "source/reflect.h2"
    public: auto operator=(ad_reverse_rule_result const& that) -> ad_reverse_rule_result& ;
#line 7745 "source/reflect.h2"
    public: ad_reverse_rule_result(ad_reverse_rule_result&& that) noexcept;
#line 7745 "source/reflect.h2"
    public: auto operator=(ad_reverse_rule_result&& that) noexcept -> ad_reverse_rule_result& ;

    public: [[nodiscard]] static auto make_not_found() -> ad_reverse_rule_result;

#line 7752 "source/reflect.h2"
    public: [[nodiscard]] static auto make_success(cpp2::impl::in<std::vector<ad_stmt>> stmts, cpp2::impl::in<std::string> rule_type_) -> ad_reverse_rule_result;

#line 7761 "source/reflect.h2"
    public: [[nodiscard]] static auto make_parse_error(cpp2::impl::in<std::string> rule_type_, cpp2::impl::in<std::string> error_msg) -> ad_reverse_rule_result;

#line 7769 "source/reflect.h2"
};

#line 7778 "source/reflect.h2"
class ad_rule_registry {
    public: std::vector<ad_rule_meta> rules {}; 

#line 7782 "source/reflect.h2"
    public: explicit ad_rule_registry();

#line 7788 "source/reflect.h2"
    public: auto register_rule(ad_rule_meta&& rule) & -> void;

#line 7795 "source/reflect.h2"
    public: [[nodiscard]] auto has_rule(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> bool;

#line 7807 "source/reflect.h2"
    public: [[nodiscard]] auto get_rule_type(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> std::string;

#line 7829 "source/reflect.h2"
    public: [[nodiscard]] auto apply_reverse_rule(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, 
                         cpp2::impl::in<ad_substitution_context> ctx) const& -> ad_reverse_rule_result;

#line 7857 "source/reflect.h2"
    public: [[nodiscard]] auto size() const& -> int;
    public: ad_rule_registry(ad_rule_registry const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_registry const&) -> void = delete;


#line 7860 "source/reflect.h2"
};

#line 7866 "source/reflect.h2"
auto ad_rule_debug_dump(cpp2::impl::in<ad_rule_meta> rule) -> void;

#line 7877 "source/reflect.h2"
auto ad_rule_registry_debug_dump(cpp2::impl::in<ad_rule_registry> reg) -> void;

#line 7897 "source/reflect.h2"
[[nodiscard]] auto is_ad_rule_type(cpp2::impl::in<meta::type_declaration> member_type) -> bool;

#line 7935 "source/reflect.h2"
[[nodiscard]] auto extract_ad_rule_meta(cpp2::impl::in<meta::type_declaration*> member_type) -> ad_rule_meta;

#line 8018 "source/reflect.h2"
auto discover_ad_rules(cpp2::impl::in<meta::type_declaration> t, ad_rule_registry& out) -> void;

#line 8073 "source/reflect.h2"
class ad_rule_body_result {
           public: bool ok {false}; 
    public: std::string body_str {""}; 

    public: explicit ad_rule_body_result();
    public: ad_rule_body_result(ad_rule_body_result const& that);
#line 8078 "source/reflect.h2"
    public: auto operator=(ad_rule_body_result const& that) -> ad_rule_body_result& ;
#line 8078 "source/reflect.h2"
    public: ad_rule_body_result(ad_rule_body_result&& that) noexcept;
#line 8078 "source/reflect.h2"
    public: auto operator=(ad_rule_body_result&& that) noexcept -> ad_rule_body_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<std::string> body_) -> ad_rule_body_result;

#line 8086 "source/reflect.h2"
};

#line 8096 "source/reflect.h2"
[[nodiscard]] auto extract_rule_reverse_body(cpp2::impl::in<ad_rule_meta> rule) -> ad_rule_body_result;

#line 8112 "source/reflect.h2"
class ad_parse_expr_result {
           public: bool ok {false}; 
    public: ad_expr expr {}; 

    public: explicit ad_parse_expr_result();
    public: ad_parse_expr_result(ad_parse_expr_result const& that);
#line 8117 "source/reflect.h2"
    public: auto operator=(ad_parse_expr_result const& that) -> ad_parse_expr_result& ;
#line 8117 "source/reflect.h2"
    public: ad_parse_expr_result(ad_parse_expr_result&& that) noexcept;
#line 8117 "source/reflect.h2"
    public: auto operator=(ad_parse_expr_result&& that) noexcept -> ad_parse_expr_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_expr> expr_) -> ad_parse_expr_result;

#line 8126 "source/reflect.h2"
    public: [[nodiscard]] static auto make_fail() -> ad_parse_expr_result;

#line 8131 "source/reflect.h2"
};

#line 8136 "source/reflect.h2"
class ad_parse_stmt_result {
           public: bool ok {false}; 
    public: ad_stmt stmt {}; 

    public: explicit ad_parse_stmt_result();
    public: ad_parse_stmt_result(ad_parse_stmt_result const& that);
#line 8141 "source/reflect.h2"
    public: auto operator=(ad_parse_stmt_result const& that) -> ad_parse_stmt_result& ;
#line 8141 "source/reflect.h2"
    public: ad_parse_stmt_result(ad_parse_stmt_result&& that) noexcept;
#line 8141 "source/reflect.h2"
    public: auto operator=(ad_parse_stmt_result&& that) noexcept -> ad_parse_stmt_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_stmt> stmt_) -> ad_parse_stmt_result;

#line 8150 "source/reflect.h2"
    public: [[nodiscard]] static auto make_fail() -> ad_parse_stmt_result;

#line 8155 "source/reflect.h2"
};

#line 8172 "source/reflect.h2"
[[nodiscard]] auto map_op_string(cpp2::impl::in<std::string> op) -> ad_op_kind;

#line 8195 "source/reflect.h2"
[[nodiscard]] auto parse_assignment_expr(cpp2::impl::in<meta::assignment_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8210 "source/reflect.h2"
[[nodiscard]] auto parse_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8232 "source/reflect.h2"
[[nodiscard]] auto parse_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8252 "source/reflect.h2"
[[nodiscard]] auto parse_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8272 "source/reflect.h2"
[[nodiscard]] auto parse_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8292 "source/reflect.h2"
[[nodiscard]] auto parse_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8312 "source/reflect.h2"
[[nodiscard]] auto parse_equality_expr(cpp2::impl::in<meta::equality_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8333 "source/reflect.h2"
[[nodiscard]] auto parse_relational_expr(cpp2::impl::in<meta::relational_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8354 "source/reflect.h2"
[[nodiscard]] auto parse_compare_expr(cpp2::impl::in<meta::compare_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8374 "source/reflect.h2"
[[nodiscard]] auto parse_shift_expr(cpp2::impl::in<meta::shift_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8395 "source/reflect.h2"
[[nodiscard]] auto parse_additive_expr(cpp2::impl::in<meta::additive_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8416 "source/reflect.h2"
[[nodiscard]] auto parse_multiplicative_expr(cpp2::impl::in<meta::multiplicative_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8455 "source/reflect.h2"
[[nodiscard]] auto parse_prefix_expr(cpp2::impl::in<meta::prefix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8483 "source/reflect.h2"
[[nodiscard]] auto parse_postfix_expr(cpp2::impl::in<meta::postfix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8511 "source/reflect.h2"
[[nodiscard]] auto parse_rule_expr(cpp2::impl::in<meta::expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result;

#line 8552 "source/reflect.h2"
[[nodiscard]] auto parse_rule_stmt(cpp2::impl::in<meta::statement> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_stmt_result;

#line 8757 "source/reflect.h2"
[[nodiscard]] auto parse_rule_body_stmts(cpp2::impl::in<std::vector<meta::statement>> stmts, cpp2::impl::in<ad_substitution_context> ctx, 
                        std::vector<ad_stmt>& out) -> bool;

#line 8781 "source/reflect.h2"
class ad_rule_param_names {
    private: std::string result_val {"res_val"}; 
    private: std::string result_adj {"res_adj"}; 
    private: std::array<std::string,4> arg_vals {"x_val", "y_val", "z_val", "w_val"}; 
    private: std::array<std::string,4> arg_adjs {"x_adj", "y_adj", "z_adj", "w_adj"}; 
    public: ad_rule_param_names() = default;
    public: ad_rule_param_names(ad_rule_param_names const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_param_names const&) -> void = delete;

#line 8786 "source/reflect.h2"
};

#line 8791 "source/reflect.h2"
[[nodiscard]] auto is_identifier_char(cpp2::impl::in<char> c) -> bool;

#line 8806 "source/reflect.h2"
[[nodiscard]] auto replace_word(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> pattern, cpp2::impl::in<std::string> replacement) -> std::string;

#line 8862 "source/reflect.h2"
[[nodiscard]] auto substitute_rule_params(cpp2::impl::in<std::string> body_str, 
                         cpp2::impl::in<std::string> target_val, cpp2::impl::in<std::string> target_adj, 
                         cpp2::impl::in<std::vector<std::string>> arg_vals, 
                         cpp2::impl::in<std::vector<std::string>> arg_adjs) -> std::string;

#line 8912 "source/reflect.h2"
class ad_op_mapping_result {
           public: bool ok {false}; 
    public: ad_op_kind kind {ad_op_kind::add}; 

    public: explicit ad_op_mapping_result();
    public: ad_op_mapping_result(ad_op_mapping_result const& that);
#line 8917 "source/reflect.h2"
    public: auto operator=(ad_op_mapping_result const& that) -> ad_op_mapping_result& ;
#line 8917 "source/reflect.h2"
    public: ad_op_mapping_result(ad_op_mapping_result&& that) noexcept;
#line 8917 "source/reflect.h2"
    public: auto operator=(ad_op_mapping_result&& that) noexcept -> ad_op_mapping_result& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_op_kind> kind_) -> ad_op_mapping_result;

#line 8925 "source/reflect.h2"
};

#line 8936 "source/reflect.h2"
[[nodiscard]] auto map_operator_token(cpp2::impl::in<std::string_view> op) -> ad_op_mapping_result;

#line 8961 "source/reflect.h2"
[[nodiscard]] auto map_function_to_op(cpp2::impl::in<std::string_view> name) -> ad_op_mapping_result;

#line 8973 "source/reflect.h2"
auto debug_operator_mapping(cpp2::impl::in<std::string_view> op, cpp2::impl::in<bool> ok, cpp2::impl::in<ad_op_kind> kind) -> void;

#line 8991 "source/reflect.h2"
class ad_ir_error {
           public: std::string message {""}; 
    public: std::string location {""}; 
    public: std::string context {""}; 

    public: explicit ad_ir_error();
    public: ad_ir_error(ad_ir_error const& that);
#line 8997 "source/reflect.h2"
    public: auto operator=(ad_ir_error const& that) -> ad_ir_error& ;
#line 8997 "source/reflect.h2"
    public: ad_ir_error(ad_ir_error&& that) noexcept;
#line 8997 "source/reflect.h2"
    public: auto operator=(ad_ir_error&& that) noexcept -> ad_ir_error& ;

    public: [[nodiscard]] static auto make(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc = "", cpp2::impl::in<std::string> ctx = "") -> ad_ir_error;

#line 9006 "source/reflect.h2"
};

#line 9011 "source/reflect.h2"
auto ad_ir_error_print(cpp2::impl::in<ad_ir_error> err) -> void;

#line 9027 "source/reflect.h2"
class ad_ir_error_list {
    public: std::vector<ad_ir_error> errors {}; 

    public: explicit ad_ir_error_list();
    public: ad_ir_error_list(ad_ir_error_list const& that);
#line 9031 "source/reflect.h2"
    public: auto operator=(ad_ir_error_list const& that) -> ad_ir_error_list& ;
#line 9031 "source/reflect.h2"
    public: ad_ir_error_list(ad_ir_error_list&& that) noexcept;
#line 9031 "source/reflect.h2"
    public: auto operator=(ad_ir_error_list&& that) noexcept -> ad_ir_error_list& ;

#line 9036 "source/reflect.h2"
    public: auto add_error(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc = "", cpp2::impl::in<std::string> ctx = "") & -> void;

#line 9043 "source/reflect.h2"
    public: [[nodiscard]] auto has_errors() const& -> bool;

#line 9050 "source/reflect.h2"
    public: [[nodiscard]] auto count() const& -> int;

#line 9057 "source/reflect.h2"
    public: auto print_all() const& -> void;

#line 9073 "source/reflect.h2"
    public: auto clear() & -> void;

#line 9076 "source/reflect.h2"
};

#line 9090 "source/reflect.h2"
class ad_ir_builder {
           public: reverse_autodiff_context* ctx; 
           public: ad_rule_registry* registry; 
    public: int temp_counter {0}; 
    public: std::vector<std::string> temp_names {}; 
    public: ad_ir_error_list errors {}; 

#line 9098 "source/reflect.h2"
    public: explicit ad_ir_builder();

#line 9104 "source/reflect.h2"
    public: ad_ir_builder(cpp2::impl::in<reverse_autodiff_context*> ctx_, cpp2::impl::in<ad_rule_registry*> registry_);

#line 9115 "source/reflect.h2"
    public: auto report_error(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc = "", cpp2::impl::in<std::string> context = "") & -> void;

#line 9126 "source/reflect.h2"
    public: [[nodiscard]] auto has_errors() const& -> bool;

#line 9133 "source/reflect.h2"
    public: [[nodiscard]] auto error_count() const& -> int;

#line 9140 "source/reflect.h2"
    public: auto print_errors() const& -> void;

#line 9149 "source/reflect.h2"
    public: [[nodiscard]] auto gen_temp_name(cpp2::impl::in<std::string> base) & -> std::string;

#line 9164 "source/reflect.h2"
    public: [[nodiscard]] auto emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string;

#line 9324 "source/reflect.h2"
    public: [[nodiscard]] auto derive_op_name(cpp2::impl::in<ad_op_kind> op, cpp2::impl::in<std::vector<ad_expr>> args) const& -> std::string;

#line 9340 "source/reflect.h2"
    public: [[nodiscard]] auto build_identifier_expr(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name = "double") const& -> ad_expr;

#line 9350 "source/reflect.h2"
    public: [[nodiscard]] auto build_literal_expr(cpp2::impl::in<std::string> value, cpp2::impl::in<std::string> type_name = "double") const& -> ad_expr;

#line 9364 "source/reflect.h2"
    public: [[nodiscard]] auto build_member_access_expr(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> field, cpp2::impl::in<std::string> type_name = "double") const& -> ad_expr;

#line 9378 "source/reflect.h2"
    public: [[nodiscard]] auto build_primary_expr(cpp2::impl::in<meta::primary_expression> primary) & -> ad_expr;

#line 9426 "source/reflect.h2"
    public: [[nodiscard]] auto build_postfix_expr(cpp2::impl::in<meta::postfix_expression> postfix) & -> ad_expr;

#line 9482 "source/reflect.h2"
    public: [[nodiscard]] auto build_prefix_expr(cpp2::impl::in<meta::prefix_expression> prefix) & -> ad_expr;

#line 9528 "source/reflect.h2"
    public: [[nodiscard]] auto build_is_as_expr(cpp2::impl::in<meta::is_as_expression> isas) & -> ad_expr;

#line 9549 "source/reflect.h2"
    public: [[nodiscard]] auto build_multiplicative_expr(cpp2::impl::in<meta::multiplicative_expression> binexpr) & -> ad_expr;

#line 9593 "source/reflect.h2"
    public: [[nodiscard]] auto build_additive_expr(cpp2::impl::in<meta::additive_expression> binexpr) & -> ad_expr;

#line 9638 "source/reflect.h2"
    public: [[nodiscard]] auto parse_call_args(cpp2::impl::in<meta::expression_list> expr_list) & -> std::vector<ad_expr>;

#line 9652 "source/reflect.h2"
    public: [[nodiscard]] auto build_expression(cpp2::impl::in<meta::expression> expr) & -> ad_expr;

#line 9686 "source/reflect.h2"
    public: [[nodiscard]] auto build_from_assignment(cpp2::impl::in<meta::assignment_expression> assign) & -> ad_expr;

#line 9702 "source/reflect.h2"
    public: [[nodiscard]] auto build_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr) & -> ad_expr;

#line 9711 "source/reflect.h2"
    public: [[nodiscard]] auto build_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr) & -> ad_expr;

#line 9720 "source/reflect.h2"
    public: [[nodiscard]] auto build_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr) & -> ad_expr;

#line 9729 "source/reflect.h2"
    public: [[nodiscard]] auto build_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr) & -> ad_expr;

#line 9738 "source/reflect.h2"
    public: [[nodiscard]] auto build_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr) & -> ad_expr;

#line 9747 "source/reflect.h2"
    public: [[nodiscard]] auto build_equality_expr(cpp2::impl::in<meta::equality_expression> expr) & -> ad_expr;

#line 9756 "source/reflect.h2"
    public: [[nodiscard]] auto build_relational_expr(cpp2::impl::in<meta::relational_expression> expr) & -> ad_expr;

#line 9765 "source/reflect.h2"
    public: [[nodiscard]] auto build_compare_expr(cpp2::impl::in<meta::compare_expression> expr) & -> ad_expr;

#line 9774 "source/reflect.h2"
    public: [[nodiscard]] auto build_shift_expr(cpp2::impl::in<meta::shift_expression> expr) & -> ad_expr;

#line 9797 "source/reflect.h2"
    public: [[nodiscard]] auto apply_rule_or_default(cpp2::impl::in<std::string> name, cpp2::impl::in<int> n_args, cpp2::impl::in<bool> is_member, cpp2::impl::in<std::vector<ad_expr>> args) & -> ad_rule_application_result;

#line 9827 "source/reflect.h2"
    public: [[nodiscard]] auto is_active_ir_expr(cpp2::impl::in<ad_expr> expr) const& -> bool;

#line 9872 "source/reflect.h2"
    public: auto build_object_decl(cpp2::impl::in<meta::declaration> decl, 
                        std::vector<ad_stmt>& body_stmts, 
                        std::vector<ad_stmt>& reverse_stmts) & -> void;

#line 9929 "source/reflect.h2"
    public: auto build_assignment(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value_expr, 
                       std::vector<ad_stmt>& body_stmts, 
                       std::vector<ad_stmt>& reverse_stmts) & -> void;

#line 9960 "source/reflect.h2"
    public: [[nodiscard]] auto transform_expr_to_val(cpp2::impl::in<ad_expr> expr) & -> ad_expr;

#line 10007 "source/reflect.h2"
    public: [[nodiscard]] auto generate_reverse_for_expr(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> expr) & -> ad_stmt;

#line 10174 "source/reflect.h2"
    public: [[nodiscard]] auto generate_reverse_for_call_with_scale(cpp2::impl::in<ad_expr> call_expr, cpp2::impl::in<ad_expr> scale_expr, cpp2::impl::in<ad_expr> adj_ref) & -> ad_stmt;

#line 10261 "source/reflect.h2"
    public: [[nodiscard]] auto generate_reverse_for_call(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> call_expr) & -> ad_stmt;

#line 10343 "source/reflect.h2"
    public: auto build_return(cpp2::impl::in<ad_expr> return_expr, cpp2::impl::in<std::string> return_name, 
                   std::vector<ad_stmt>& body_stmts, 
                   std::vector<ad_stmt>& reverse_stmts) & -> void;

#line 10368 "source/reflect.h2"
    public: [[nodiscard]] auto build_function_ir(cpp2::impl::in<meta::function_declaration> mf) & -> ad_function_ir;

#line 10429 "source/reflect.h2"
    public: auto process_statement(cpp2::impl::in<meta::statement> stmt, 
                        std::vector<ad_stmt>& forward_stmts, 
                        std::vector<ad_stmt>& reverse_stmts) & -> void;
    public: ad_ir_builder(ad_ir_builder const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_ir_builder const&) -> void = delete;


#line 10478 "source/reflect.h2"
};

#line 10483 "source/reflect.h2"
class ad_rule_application_result {
    public: bool has_rule {false}; 
    public: ad_expr forward {}; 

    public: explicit ad_rule_application_result();
    public: ad_rule_application_result(ad_rule_application_result const& that);
#line 10488 "source/reflect.h2"
    public: auto operator=(ad_rule_application_result const& that) -> ad_rule_application_result& ;
#line 10488 "source/reflect.h2"
    public: ad_rule_application_result(ad_rule_application_result&& that) noexcept;
#line 10488 "source/reflect.h2"
    public: auto operator=(ad_rule_application_result&& that) noexcept -> ad_rule_application_result& ;
};

#line 10500 "source/reflect.h2"
[[nodiscard]] auto ad_op_kind_to_binary_str(cpp2::impl::in<ad_op_kind> op) -> std::string;

#line 10542 "source/reflect.h2"
class ad_ir_emitter {
    public: reverse_autodiff_context* ctx; 

    public: explicit ad_ir_emitter();

#line 10549 "source/reflect.h2"
    public: ad_ir_emitter(cpp2::impl::in<reverse_autodiff_context*> ctx_);
#line 10549 "source/reflect.h2"
    public: auto operator=(cpp2::impl::in<reverse_autodiff_context*> ctx_) -> ad_ir_emitter& ;

#line 10558 "source/reflect.h2"
    public: [[nodiscard]] auto emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string;

#line 10713 "source/reflect.h2"
    public: [[nodiscard]] auto emit_stmt(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<int> indent = 0) const& -> std::string;

#line 10858 "source/reflect.h2"
    public: [[nodiscard]] auto emit_forward(cpp2::impl::in<ad_function_ir> ir) const& -> std::string;

#line 10871 "source/reflect.h2"
    public: [[nodiscard]] auto emit_reverse(cpp2::impl::in<ad_function_ir> ir) const& -> std::string;

#line 10899 "source/reflect.h2"
    public: [[nodiscard]] auto emit_function(cpp2::impl::in<ad_function_ir> ir) const& -> std::string;
    public: ad_ir_emitter(ad_ir_emitter const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_ir_emitter const&) -> void = delete;


#line 10954 "source/reflect.h2"
};

#line 10960 "source/reflect.h2"
auto ad_ir_builder_debug_dump(cpp2::impl::in<ad_ir_builder> builder) -> void;

#line 11090 "source/reflect.h2"
auto autodiff_reverse_ir(meta::type_declaration& t, cpp2::impl::in<autodiff_context*> ctx) -> void;

#line 11252 "source/reflect.h2"
class autodiff_diff_code {

    public: autodiff_context* ctx; 

#line 11257 "source/reflect.h2"
           public: std::string fwd {""}; 

           public: std::string rws_primal {""}; 

    public: std::string rws_backprop {""}; 

#line 11268 "source/reflect.h2"
    public: autodiff_diff_code(cpp2::impl::in<autodiff_context*> ctx_);
#line 11268 "source/reflect.h2"
    public: auto operator=(cpp2::impl::in<autodiff_context*> ctx_) -> autodiff_diff_code& ;

#line 11276 "source/reflect.h2"
    public: autodiff_diff_code(autodiff_diff_code const& that);
#line 11276 "source/reflect.h2"
    public: auto operator=(autodiff_diff_code const& that) -> autodiff_diff_code& ;
#line 11276 "source/reflect.h2"
    public: autodiff_diff_code(autodiff_diff_code&& that) noexcept;
#line 11276 "source/reflect.h2"
    public: auto operator=(autodiff_diff_code&& that) noexcept -> autodiff_diff_code& ;

#line 11283 "source/reflect.h2"
    public: auto add_forward(cpp2::impl::in<std::string> v) & -> void;

#line 11289 "source/reflect.h2"
    public: auto add_reverse_primal(cpp2::impl::in<std::string> v) & -> void;

#line 11295 "source/reflect.h2"
    public: auto add_reverse_backprop(cpp2::impl::in<std::string> v) & -> void;

#line 11301 "source/reflect.h2"
    public: auto reset() & -> void;

#line 11312 "source/reflect.h2"
    public: auto operator=(cpp2::impl::in<std::string> v) -> autodiff_diff_code& ;

#line 11322 "source/reflect.h2"
    public: auto operator+=(cpp2::impl::in<std::string> v) & -> void;

#line 11331 "source/reflect.h2"
    public: auto operator+=(cpp2::impl::in<autodiff_diff_code> v) & -> void;

#line 11339 "source/reflect.h2"
    public: [[nodiscard]] auto empty() const& -> bool;

#line 11342 "source/reflect.h2"
};

#line 11352 "source/reflect.h2"
class autodiff_activity_check: public simple_traverser {

#line 11356 "source/reflect.h2"
           public: autodiff_context* ctx; 

           public: bool active {false}; 

#line 11365 "source/reflect.h2"
    public: autodiff_activity_check(cpp2::impl::in<autodiff_context*> ctx_);

#line 11374 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::type_declaration> t) -> void override;

#line 11391 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::object_declaration> o) -> void override;

#line 11414 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::primary_expression> primary) -> void override;

#line 11443 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void override;
    public: autodiff_activity_check(autodiff_activity_check const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(autodiff_activity_check const&) -> void = delete;


#line 11475 "source/reflect.h2"
};

#line 11480 "source/reflect.h2"
class autodiff_handler_base {

    public: autodiff_context* ctx; 

#line 11485 "source/reflect.h2"
    public: autodiff_diff_code diff; 

#line 11492 "source/reflect.h2"
    public: autodiff_handler_base(cpp2::impl::in<autodiff_context*> ctx_);
#line 11492 "source/reflect.h2"
    public: auto operator=(cpp2::impl::in<autodiff_context*> ctx_) -> autodiff_handler_base& ;

#line 11502 "source/reflect.h2"
    public: auto append(autodiff_handler_base const& o) & -> void;
    public: autodiff_handler_base(autodiff_handler_base const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(autodiff_handler_base const&) -> void = delete;


#line 11507 "source/reflect.h2"
};

#line 11512 "source/reflect.h2"
class autodiff_expression_handler: public simple_traverser, public autodiff_handler_base {

#line 11517 "source/reflect.h2"
    public: using base = simple_traverser;

#line 11520 "source/reflect.h2"
    public: std::string primal_expr {""}; 

           public: std::string fwd_expr {""}; 

           public: std::string rws_expr {""}; 

#line 11531 "source/reflect.h2"
    public: autodiff_expression_handler(cpp2::impl::in<autodiff_context*> ctx_);

#line 11541 "source/reflect.h2"
    public: [[nodiscard]] auto add_suffix_if_not_wildcard(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> suffix) const& -> std::string;

#line 11558 "source/reflect.h2"
    public: [[nodiscard]] auto prepare_backprop(cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b) const& -> std::string;

#line 11572 "source/reflect.h2"
    public: [[nodiscard]] auto prepare_backprop(cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> lhs) const& -> std::string;

#line 11584 "source/reflect.h2"
    public: auto gen_assignment(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> rhs, cpp2::impl::in<std::string> rhs_d, cpp2::impl::in<std::string> rhs_b) & -> void;

#line 11602 "source/reflect.h2"
    public: [[nodiscard]] auto gen_assignment(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b) & -> decltype(auto);

#line 11609 "source/reflect.h2"
    public: [[nodiscard]] auto gen_assignment(cpp2::impl::in<std::string> lhs) & -> decltype(auto);

#line 11626 "source/reflect.h2"
    public: auto gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> rhs, cpp2::impl::in<std::string> rhs_d, cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> type, cpp2::impl::in<std::string> type_d, cpp2::impl::in<std::string> type_b) & -> void;

#line 11649 "source/reflect.h2"
    public: [[nodiscard]] auto gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> rhs, cpp2::impl::in<std::string> rhs_d, cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> type) & -> decltype(auto);

#line 11659 "source/reflect.h2"
    public: [[nodiscard]] auto gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> type) & -> decltype(auto);

#line 11667 "source/reflect.h2"
    public: [[nodiscard]] auto gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> type) & -> decltype(auto);

#line 11673 "source/reflect.h2"
    public: class primal_fwd_rws_name {

        public: std::string primal {""}; 

        public: std::string fwd {""}; 

        public: std::string rws {""}; 

        public: bool active {false}; 
        public: primal_fwd_rws_name(auto const& primal_, auto const& fwd_, auto const& rws_, auto const& active_);
public: primal_fwd_rws_name();

#line 11682 "source/reflect.h2"
    };

#line 11689 "source/reflect.h2"
    public: [[nodiscard]] auto handle_expression_list(cpp2::impl::in<meta::expression_list> list) & -> std::vector<primal_fwd_rws_name>;

#line 11703 "source/reflect.h2"
    public: [[nodiscard]] auto handle_expression_term(auto const& term) & -> primal_fwd_rws_name;

#line 11770 "source/reflect.h2"
    public: auto handle_function_call(cpp2::impl::in<meta::postfix_expression> postfix, cpp2::impl::in<bool> has_return) & -> void;

#line 11959 "source/reflect.h2"
    public: [[nodiscard]] auto handle_special_function(cpp2::impl::in<std::string> object, cpp2::impl::in<std::string> object_d, cpp2::impl::in<std::string> object_b, cpp2::impl::in<std::string> function_name, cpp2::impl::in<std::vector<primal_fwd_rws_name>> args) & -> bool;

#line 12009 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::expression> expr) -> void override;

#line 12018 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void override;

#line 12027 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void override;

#line 12036 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void override;

#line 12045 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void override;

#line 12054 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void override;

#line 12063 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void override;

#line 12072 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void override;

#line 12081 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void override;

#line 12090 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void override;

#line 12099 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void override;

#line 12108 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void override;

#line 12155 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void override;

#line 12247 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void override;

#line 12256 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void override;

#line 12277 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void override;

#line 12322 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::primary_expression> primary) -> void override;
    public: autodiff_expression_handler(autodiff_expression_handler const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(autodiff_expression_handler const&) -> void = delete;


#line 12357 "source/reflect.h2"
};

#line 12362 "source/reflect.h2"
class autodiff_stmt_handler: public simple_traverser, public autodiff_handler_base {

#line 12367 "source/reflect.h2"
    public: using base = simple_traverser;

#line 12370 "source/reflect.h2"
    private: meta::function_declaration mf; 

#line 12373 "source/reflect.h2"
    private: std::vector<meta::parameter_declaration> last_params {}; 

    private: std::vector<std::string> overwritten {}; 

#line 12378 "source/reflect.h2"
    private: bool overwrite_push_pop {false}; 

#line 12386 "source/reflect.h2"
    public: autodiff_stmt_handler(cpp2::impl::in<autodiff_context*> ctx_, cpp2::impl::in<meta::function_declaration> mf_);

#line 12396 "source/reflect.h2"
    public: [[nodiscard]] auto handle_stmt_parameters(cpp2::impl::in<std::vector<parameter_declaration>> params) & -> autodiff_diff_code;

#line 12443 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::declaration> decl) -> void override;

#line 12453 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::function_declaration> f) -> void override;

#line 12463 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::object_declaration> o) -> void override;

#line 12530 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::type_declaration> t) -> void override;

#line 12540 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void override;

#line 12550 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::statement> stmt) -> void override;

#line 12562 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::compound_statement> stmt) -> void override;

#line 12602 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::return_statement> stmt) -> void override;

#line 12623 "source/reflect.h2"
    public: [[nodiscard]] auto reverse_next(cpp2::impl::in<std::string> expr) const& -> std::string;

#line 12643 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::iteration_statement> stmt) -> void override;

#line 12746 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::selection_statement> stmt) -> void override;

#line 12762 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::expression> expr) -> void override;

#line 12771 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void override;

#line 12827 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void override;

#line 12836 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void override;

#line 12845 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void override;

#line 12854 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void override;

#line 12863 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void override;

#line 12872 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void override;

#line 12881 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void override;

#line 12890 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void override;

#line 12899 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void override;

#line 12908 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void override;

#line 12917 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void override;

#line 12926 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void override;

#line 12935 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void override;

#line 12945 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void override;

#line 12982 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::primary_expression> primary) -> void override;
    public: autodiff_stmt_handler(autodiff_stmt_handler const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(autodiff_stmt_handler const&) -> void = delete;


#line 12986 "source/reflect.h2"
};

#line 12991 "source/reflect.h2"
class autodiff_declaration_handler: public simple_traverser, public autodiff_handler_base {

#line 12996 "source/reflect.h2"
    public: using base = simple_traverser;

#line 12999 "source/reflect.h2"
    private: meta::type_or_namespace_declaration decl; 

#line 13002 "source/reflect.h2"
    private: bool is_type_context {false}; 

    private: std::string diff_ad_type {""}; 

#line 13012 "source/reflect.h2"
    public: autodiff_declaration_handler(cpp2::impl::in<autodiff_context*> ctx_, cpp2::impl::in<meta::type_or_namespace_declaration> decl_);

#line 13022 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::declaration> decl_) -> void override;

#line 13032 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::function_declaration> f) -> void override;

#line 13195 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::object_declaration> o) -> void override;

#line 13228 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::type_declaration> t) -> void override;

#line 13257 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void override;

#line 13267 "source/reflect.h2"
    public: auto traverse(cpp2::impl::in<meta::statement> stmt) -> void override;
    public: autodiff_declaration_handler(autodiff_declaration_handler const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(autodiff_declaration_handler const&) -> void = delete;


#line 13270 "source/reflect.h2"
};

#line 13482 "source/reflect.h2"
auto autodiff(meta::type_declaration& t) -> void;

#line 13600 "source/reflect.h2"
using error_func = std::function<void(cpp2::impl::in<std::string> x)>;

#line 13604 "source/reflect.h2"
class expression_flags
 {
private: cpp2::u8 _value; private: constexpr expression_flags(cpp2::impl::in<cpp2::i64> _val);

private: constexpr auto operator=(cpp2::impl::in<cpp2::i64> _val) -> expression_flags& ;
public: constexpr auto operator|=(expression_flags const& that) & -> decltype(auto);
public: constexpr auto operator&=(expression_flags const& that) & -> decltype(auto);
public: constexpr auto operator^=(expression_flags const& that) & -> decltype(auto);
public: [[nodiscard]] constexpr auto operator|(expression_flags const& that) const& -> expression_flags;
public: [[nodiscard]] constexpr auto operator&(expression_flags const& that) const& -> expression_flags;
public: [[nodiscard]] constexpr auto operator^(expression_flags const& that) const& -> expression_flags;
public: [[nodiscard]] constexpr auto has(expression_flags const& that) const& -> bool;
public: constexpr auto set(expression_flags const& that) & -> void;
public: constexpr auto clear(expression_flags const& that) & -> void;
public: static const expression_flags case_insensitive;
public: static const expression_flags multiple_lines;
public: static const expression_flags single_line;
public: static const expression_flags no_group_captures;
public: static const expression_flags perl_code_syntax;
public: static const expression_flags perl_code_syntax_in_classes;
public: static const expression_flags none;
public: [[nodiscard]] constexpr auto get_raw_value() const& -> cpp2::u8;
public: constexpr explicit expression_flags();
public: constexpr expression_flags(expression_flags const& that);
public: constexpr auto operator=(expression_flags const& that) -> expression_flags& ;
public: constexpr expression_flags(expression_flags&& that) noexcept;
public: constexpr auto operator=(expression_flags&& that) noexcept -> expression_flags& ;
public: [[nodiscard]] auto operator<=>(expression_flags const& that) const& -> std::strong_ordering = default;
public: [[nodiscard]] auto to_string_impl(cpp2::impl::in<std::string_view> prefix, cpp2::impl::in<std::string_view> separator) const& -> std::string;
public: [[nodiscard]] auto to_string() const& -> std::string;
public: [[nodiscard]] auto to_code() const& -> std::string;
public: [[nodiscard]] static auto from_string(cpp2::impl::in<std::string_view> s) -> expression_flags;
public: [[nodiscard]] static auto from_code(cpp2::impl::in<std::string_view> s) -> expression_flags;

#line 13612 "source/reflect.h2"
};

#line 13620 "source/reflect.h2"
class regex_token
 {
    public: std::string string_rep; 

    public: regex_token(cpp2::impl::in<std::string> str);

#line 13628 "source/reflect.h2"
    public: explicit regex_token();

#line 13633 "source/reflect.h2"
    public: virtual auto generate_code([[maybe_unused]] generation_context& unnamed_param_2) const -> void = 0;
    public: [[nodiscard]] virtual auto reverse() const -> std::shared_ptr<regex_token> = 0;

    public: virtual auto add_groups([[maybe_unused]] std::set<int>& unnamed_param_2) const -> void;
    public: [[nodiscard]] auto to_string() const& -> std::string;
    public: auto set_string(cpp2::impl::in<std::string> s) & -> void;
    public: virtual ~regex_token() noexcept;

    public: regex_token(regex_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(regex_token const&) -> void = delete;

#line 13639 "source/reflect.h2"
};

using token_ptr = std::shared_ptr<regex_token>;
using token_vec = std::vector<token_ptr>;

#line 13645 "source/reflect.h2"
//  Adds a check in code generation.
//
class regex_token_check
: public regex_token {

#line 13651 "source/reflect.h2"
    private: std::string check; 

    public: regex_token_check(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> check_);

#line 13658 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 13662 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;
    public: virtual ~regex_token_check() noexcept;

    public: regex_token_check(regex_token_check const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(regex_token_check const&) -> void = delete;

#line 13663 "source/reflect.h2"
};

#line 13666 "source/reflect.h2"
//  Adds code in code generation.
//
class regex_token_code
: public regex_token {

#line 13672 "source/reflect.h2"
    private: std::string code; 

    public: regex_token_code(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> code_);

#line 13679 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 13683 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;
    public: virtual ~regex_token_code() noexcept;

    public: regex_token_code(regex_token_code const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(regex_token_code const&) -> void = delete;

#line 13684 "source/reflect.h2"
};

#line 13687 "source/reflect.h2"
//  Token that does not influence the matching. E.g. comment.
//
class regex_token_empty
: public regex_token {

#line 13693 "source/reflect.h2"
    public: regex_token_empty(cpp2::impl::in<std::string> str);

#line 13697 "source/reflect.h2"
    public: auto generate_code([[maybe_unused]] generation_context& unnamed_param_2) const -> void override;

#line 13701 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;
    public: virtual ~regex_token_empty() noexcept;

    public: regex_token_empty(regex_token_empty const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(regex_token_empty const&) -> void = delete;

#line 13702 "source/reflect.h2"
};

#line 13705 "source/reflect.h2"
//  Represents a list of regex tokens as one token.
//
class regex_token_list
: public regex_token {

#line 13711 "source/reflect.h2"
    public: token_vec tokens; 

    public: regex_token_list(cpp2::impl::in<token_vec> t);

#line 13718 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 13724 "source/reflect.h2"
    public: auto add_groups(std::set<int>& groups) const -> void override;

#line 13730 "source/reflect.h2"
    public: [[nodiscard]] static auto gen_string(cpp2::impl::in<token_vec> vec) -> std::string;

#line 13738 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;
    public: virtual ~regex_token_list() noexcept;

    public: regex_token_list(regex_token_list const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(regex_token_list const&) -> void = delete;


#line 13750 "source/reflect.h2"
};

#line 13753 "source/reflect.h2"
//
//  Parse and generation context.
//

//  State of the current capturing group. See '(<pattern>)'
//
class parse_context_group_state
 {
    public: token_vec cur_match_list {};           // Current list of matchers.
    public: token_vec alternate_match_lists {};    // List of alternate matcher lists. E.g. ab|cd|xy.
    public: expression_flags modifiers {};         // Current modifiers for the group/regular expression.

    //  Start a new alternative.
    public: auto next_alternative() & -> void;

#line 13773 "source/reflect.h2"
    //  Swap this state with the other one. NOLINTNEXTLINE(performance-noexcept-swap)
    public: auto swap(parse_context_group_state& t) & -> void;

#line 13780 "source/reflect.h2"
    //  Convert this state into a regex token.
    public: [[nodiscard]] auto get_as_token() & -> token_ptr;

#line 13792 "source/reflect.h2"
    //  Add a token to the current matcher list.
    public: auto add(cpp2::impl::in<token_ptr> token) & -> void;

#line 13797 "source/reflect.h2"
    //  True if current matcher list is empty.
    public: [[nodiscard]] auto empty() const& -> bool;

#line 13801 "source/reflect.h2"
    //  Apply optimizations to the matcher list.
    public: static auto post_process_list(token_vec& list) -> void;
    public: parse_context_group_state(auto const& cur_match_list_, auto const& alternate_match_lists_, auto const& modifiers_);
public: parse_context_group_state();


#line 13815 "source/reflect.h2"
};

#line 13818 "source/reflect.h2"
//  State for the branch reset. Takes care of the group numbering. See '(|<pattern>)'.
//
class parse_context_branch_reset_state
 {
    public: bool is_active {false}; // If we have a branch reset group.
    public: int cur_group {1}; // Next group identifier. 0 == global capture group.
    public: int max_group {1}; // Maximum group identifier generated.
    public: int from {1};     // Starting identifier on new alternative branch.

    //  Next group identifier.
    public: [[nodiscard]] auto next() & -> int;

#line 13836 "source/reflect.h2"
    //  Set next group identifier.
    public: auto set_next(cpp2::impl::in<int> g) & -> void;

#line 13842 "source/reflect.h2"
    //  Start a new alternative branch.
    public: auto next_alternative() & -> void;

#line 13849 "source/reflect.h2"
    //  Initialize for a branch reset group.
    public: auto set_active_reset(cpp2::impl::in<int> restart) & -> void;
    public: parse_context_branch_reset_state(auto const& is_active_, auto const& cur_group_, auto const& max_group_, auto const& from_);
public: parse_context_branch_reset_state();


#line 13856 "source/reflect.h2"
};

#line 13859 "source/reflect.h2"
//  Context during parsing of the regular expressions.
//
//  Keeps track of the distributed group identifiers, current parsed group and branch resets.
//
class parse_context
 {
    private: std::string_view regex; // Regular expression string.
    private: size_t pos {0};   // Current parsing position.
    private: token_ptr root;   // Token representing the regular expression.

    public: bool is_start_match {false};  // If the regex contains \G at the beginning.

    private: parse_context_group_state cur_group_state {}; 
    private: parse_context_branch_reset_state cur_branch_reset_state {}; 

#line 13875 "source/reflect.h2"
           public: std::map<std::string,int> named_groups {}; 

    private: error_func error_out; // TODO: Declaring std::function<void(std::string)> fails for cpp2.
    private: bool has_error {false}; 

    public: parse_context(cpp2::impl::in<std::string_view> r, auto const& e);

#line 13886 "source/reflect.h2"
    //  State management functions
    //

    //  Returned group state needs to be stored and provided in `end_group`.
    public: [[nodiscard]] auto start_group() & -> parse_context_group_state;

#line 13899 "source/reflect.h2"
    //  `old_state` argument needs to be from start group.
    public: [[nodiscard]] auto end_group(cpp2::impl::in<parse_context_group_state> old_state) & -> token_ptr;

#line 13907 "source/reflect.h2"
    public: [[nodiscard]] auto get_modifiers() const& -> expression_flags;

#line 13911 "source/reflect.h2"
    public: auto set_modifiers(cpp2::impl::in<expression_flags> mod) & -> void;

#line 13915 "source/reflect.h2"
    //  Branch reset management functions
    //

    public: [[nodiscard]] auto branch_reset_new_state() & -> parse_context_branch_reset_state;

#line 13927 "source/reflect.h2"
    public: auto branch_reset_restore_state(cpp2::impl::in<parse_context_branch_reset_state> old_state) & -> void;

#line 13934 "source/reflect.h2"
    public: auto next_alternative() & -> void;

#line 13940 "source/reflect.h2"
    //  Regex token management
    //
    public: auto add_token(cpp2::impl::in<token_ptr> token) & -> void;

#line 13946 "source/reflect.h2"
    public: [[nodiscard]] auto has_token() const& -> bool;

#line 13950 "source/reflect.h2"
    public: [[nodiscard]] auto pop_token() & -> token_ptr;

#line 13961 "source/reflect.h2"
    public: [[nodiscard]] auto get_as_token() & -> token_ptr;

#line 13965 "source/reflect.h2"
    //  Group management
    //
    public: [[nodiscard]] auto get_cur_group() const& -> int;

#line 13971 "source/reflect.h2"
    public: [[nodiscard]] auto next_group() & -> int;

#line 13975 "source/reflect.h2"
    public: auto set_named_group(cpp2::impl::in<std::string> name, cpp2::impl::in<int> id) & -> void;

#line 13982 "source/reflect.h2"
    public: [[nodiscard]] auto get_named_group(cpp2::impl::in<std::string> name) const& -> int;

#line 13993 "source/reflect.h2"
    //  Position management functions
    //
    public: [[nodiscard]] auto current() const& -> char;

    //  Get the next token in the regex, skipping spaces according to the parameters. See `x` and `xx` modifiers.
    private: [[nodiscard]] auto get_next_position(cpp2::impl::in<bool> in_class, cpp2::impl::in<bool> no_skip) const& -> size_t;

#line 14037 "source/reflect.h2"
    //  Return true if next token is available.
    private: [[nodiscard]] auto next_impl(cpp2::impl::in<bool> in_class, cpp2::impl::in<bool> no_skip) & -> bool;

#line 14049 "source/reflect.h2"
    public: [[nodiscard]] auto next() & -> decltype(auto);
    public: [[nodiscard]] auto next_in_class() & -> decltype(auto);
    public: [[nodiscard]] auto next_no_skip() & -> decltype(auto);

    public: [[nodiscard]] auto next_n(cpp2::impl::in<int> n) & -> bool;

#line 14062 "source/reflect.h2"
    public: [[nodiscard]] auto has_next() const& -> bool;

    private: [[nodiscard]] auto grab_until_impl(cpp2::impl::in<std::string> e, cpp2::impl::out<std::string> r, cpp2::impl::in<bool> any) & -> bool;

#line 14085 "source/reflect.h2"
    public: [[nodiscard]] auto grab_until(cpp2::impl::in<std::string> e, cpp2::impl::out<std::string> r) & -> decltype(auto);
    public: [[nodiscard]] auto grab_until(cpp2::impl::in<char> e, cpp2::impl::out<std::string> r) & -> decltype(auto);
    public: [[nodiscard]] auto grab_until_one_of(cpp2::impl::in<std::string> e, cpp2::impl::out<std::string> r) & -> decltype(auto);

    public: [[nodiscard]] auto grab_n(cpp2::impl::in<int> n, cpp2::impl::out<std::string> r) & -> bool;

#line 14102 "source/reflect.h2"
    public: [[nodiscard]] auto grab_number() & -> std::string;

#line 14123 "source/reflect.h2"
    private: [[nodiscard]] auto peek_impl(cpp2::impl::in<bool> in_class) const& -> char;

#line 14133 "source/reflect.h2"
    public: [[nodiscard]] auto peek() const& -> decltype(auto);
    public: [[nodiscard]] auto peek_in_class() const& -> decltype(auto);

#line 14137 "source/reflect.h2"
    //  Parsing functions
    //
    public: [[nodiscard]] auto parser_group_modifiers(cpp2::impl::in<std::string> change_str, expression_flags& parser_modifiers) & -> bool;

#line 14193 "source/reflect.h2"
    public: [[nodiscard]] auto parse_until(cpp2::impl::in<char> term) & -> bool;

#line 14232 "source/reflect.h2"
    public: [[nodiscard]] auto parse(cpp2::impl::in<std::string> modifiers) & -> bool;

#line 14247 "source/reflect.h2"
    //  Misc functions

    public: [[nodiscard]] auto get_pos() const& -> decltype(auto);
    public: [[nodiscard]] auto get_range(cpp2::impl::in<size_t> start, cpp2::impl::in<size_t> end) const& -> decltype(auto);
    public: [[nodiscard]] auto valid() const& -> bool;

    public: [[nodiscard]] auto error(cpp2::impl::in<std::string> err) & -> token_ptr;
    public: parse_context(parse_context const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(parse_context const&) -> void = delete;


#line 14258 "source/reflect.h2"
};

#line 14261 "source/reflect.h2"
//  Context for one function generation. Generation of functions can be interleaved,
//  therefore we buffer the code for one function here.
//
class generation_function_context {
    public: std::string code {""}; 
    public: std::string tabs {""}; 

    public: auto add_tabs(cpp2::impl::in<int> c) & -> void;

#line 14275 "source/reflect.h2"
    public: auto remove_tabs(cpp2::impl::in<int> c) & -> void;
    public: generation_function_context(auto const& code_, auto const& tabs_);
public: generation_function_context();


#line 14278 "source/reflect.h2"
};

#line 14281 "source/reflect.h2"
//  Context for generating the state machine.
class generation_context
 {
    private: std::vector<generation_function_context> gen_stack {1}; // Element 0 contains all the code.

    private: int matcher_func {0}; 
    private: int reset_func {0}; 
    private: int temp_name {0}; 
    private: std::string entry_func {""}; 

    //  Generation helpers
    //
    public: [[nodiscard]] auto match_parameters() const& -> std::string;

    //  Code generation.

    //  Add code line.
    public: auto add(cpp2::impl::in<std::string> s) & -> void;

#line 14303 "source/reflect.h2"
    //  Add check for token. The check needs to be a function call that returns a boolean.
    public: auto add_check(cpp2::impl::in<std::string> check) & -> void;

#line 14309 "source/reflect.h2"
    //  Add a stateful check. The check needs to return a `match_return`.
    public: auto add_statefull(cpp2::impl::in<std::string> next_func, cpp2::impl::in<std::string> check) & -> void;

#line 14318 "source/reflect.h2"
    protected: auto start_func_named(cpp2::impl::in<std::string> name) & -> void;

#line 14329 "source/reflect.h2"
    protected: [[nodiscard]] auto start_func() & -> std::string;

#line 14336 "source/reflect.h2"
    protected: auto end_func_statefull(cpp2::impl::in<std::string> s) & -> void;

#line 14356 "source/reflect.h2"
    //  Generate the function for a token.
    public: [[nodiscard]] auto generate_func(cpp2::impl::in<token_ptr> token) & -> std::string;

#line 14366 "source/reflect.h2"
    //  Generate the reset for a list of group identifiers.
    public: [[nodiscard]] auto generate_reset(cpp2::impl::in<std::set<int>> groups) & -> std::string;

#line 14389 "source/reflect.h2"
    //  Name generation
    //
    protected: [[nodiscard]] auto gen_func_name() & -> std::string;

#line 14397 "source/reflect.h2"
    public: [[nodiscard]] auto next_func_name() & -> std::string;

#line 14401 "source/reflect.h2"
    protected: [[nodiscard]] auto gen_reset_func_name() & -> std::string;

#line 14407 "source/reflect.h2"
    public: [[nodiscard]] auto gen_temp() & -> std::string;

#line 14413 "source/reflect.h2"
    //  Context management
    //
    public: [[nodiscard]] auto new_context() & -> generation_function_context*;

#line 14423 "source/reflect.h2"
    public: auto finish_context() & -> void;

#line 14431 "source/reflect.h2"
    //  Misc functions
    //
    private: [[nodiscard]] auto get_current() & -> generation_function_context*;

#line 14437 "source/reflect.h2"
    private: [[nodiscard]] auto get_base() & -> generation_function_context*;

#line 14441 "source/reflect.h2"
    public: [[nodiscard]] auto get_entry_func() const& -> std::string;

#line 14445 "source/reflect.h2"
    public: [[nodiscard]] auto create_named_group_lookup(cpp2::impl::in<std::map<std::string,int>> named_groups) const& -> std::string;

#line 14469 "source/reflect.h2"
    //  Run the generation for the token.
    public: [[nodiscard]] auto run(cpp2::impl::in<token_ptr> token) & -> std::string;
    public: generation_context() = default;
    public: generation_context(generation_context const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(generation_context const&) -> void = delete;


#line 14475 "source/reflect.h2"
};

//  Regex syntax: |  Example: ab|ba
//
//  Non greedy implementation. First alternative that matches is chosen.
//
class alternative_token
: public regex_token_empty {
                                     // No code gen here. alternative_token_gen is created in the parse_context

    public: explicit alternative_token();

    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;
    public: virtual ~alternative_token() noexcept;

    public: alternative_token(alternative_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(alternative_token const&) -> void = delete;


#line 14494 "source/reflect.h2"
};

class alternative_token_gen
: public regex_token {

#line 14500 "source/reflect.h2"
    private: token_vec alternatives; 

    public: alternative_token_gen(cpp2::impl::in<token_vec> a);

#line 14507 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 14524 "source/reflect.h2"
    public: auto add_groups(std::set<int>& groups) const -> void override;

#line 14531 "source/reflect.h2"
    public: [[nodiscard]] static auto gen_string(cpp2::impl::in<token_vec> a) -> std::string;

#line 14544 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;
    public: virtual ~alternative_token_gen() noexcept;

    public: alternative_token_gen(alternative_token_gen const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(alternative_token_gen const&) -> void = delete;


#line 14556 "source/reflect.h2"
};

#line 14559 "source/reflect.h2"
//  Regex syntax: .
//
class any_token
: public regex_token_check {

#line 14565 "source/reflect.h2"
    public: any_token(cpp2::impl::in<bool> single_line);

#line 14569 "source/reflect.h2"
    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;
    public: virtual ~any_token() noexcept;

    public: any_token(any_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(any_token const&) -> void = delete;


#line 14574 "source/reflect.h2"
};

//  Regex syntax: (?><matcher>)  Example: a(?>bc|c)c
//
class atomic_group_token
: public regex_token {

#line 14582 "source/reflect.h2"
            public: token_ptr inner_token {nullptr}; 

    public: explicit atomic_group_token();

    public: [[nodiscard]] auto reverse() const -> token_ptr override;

#line 14593 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 14601 "source/reflect.h2"
    public: auto add_groups(std::set<int>& groups) const -> void override;
    public: virtual ~atomic_group_token() noexcept;

    public: atomic_group_token(atomic_group_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(atomic_group_token const&) -> void = delete;


#line 14604 "source/reflect.h2"
};

//  Regex syntax: a
//
class char_token
: public regex_token {

#line 14612 "source/reflect.h2"
    private: std::string token; 
    private: bool ignore_case; 

    public: char_token(cpp2::impl::in<char> t, cpp2::impl::in<bool> ignore_case_);

#line 14621 "source/reflect.h2"
    public: char_token(cpp2::impl::in<std::string> t, cpp2::impl::in<bool> ignore_case_);

#line 14627 "source/reflect.h2"
    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;

#line 14631 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 14654 "source/reflect.h2"
    public: auto gen_case_insensitive(cpp2::impl::in<std::string> lower, cpp2::impl::in<std::string> upper, generation_context& ctx) const& -> void;

#line 14675 "source/reflect.h2"
    public: auto gen_case_sensitive(generation_context& ctx) const& -> void;

#line 14693 "source/reflect.h2"
    public: [[nodiscard]] auto add_escapes(std::string str) const& -> std::string;

#line 14708 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;

#line 14714 "source/reflect.h2"
    public: auto append(char_token const& that) & -> void;
    public: virtual ~char_token() noexcept;

    public: char_token(char_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(char_token const&) -> void = delete;


#line 14718 "source/reflect.h2"
};

#line 14721 "source/reflect.h2"
//  Regex syntax: [<character classes>]  Example: [abcx-y[:digits:]]
//
class class_token
: public regex_token {

#line 14727 "source/reflect.h2"
    private: bool negate; 
    private: bool case_insensitive; 
    private: std::string class_str; 

    public: class_token(cpp2::impl::in<bool> negate_, cpp2::impl::in<bool> case_insensitive_, cpp2::impl::in<std::string> class_str_, cpp2::impl::in<std::string> str);

#line 14739 "source/reflect.h2"
    //  TODO: Rework class generation: Generate check functions for classes.
    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;

#line 14865 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;

#line 14874 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 14879 "source/reflect.h2"
    private: [[nodiscard]] static auto create_matcher(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> template_arguments) -> std::string;
    public: virtual ~class_token() noexcept;

    public: class_token(class_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(class_token const&) -> void = delete;


#line 14886 "source/reflect.h2"
};

#line 14889 "source/reflect.h2"
//  Regex syntax: \a or \n or \[
//
[[nodiscard]] auto escape_token_parse(parse_context& ctx) -> token_ptr;

#line 14930 "source/reflect.h2"
//  Regex syntax: \K Example: ab\Kcd
//
[[nodiscard]] auto global_group_reset_token_parse(parse_context& ctx) -> token_ptr;

#line 14941 "source/reflect.h2"
//  Regex syntax: \<number>  Example: \1
//                \g{name_or_number}
//                \k{name_or_number}
//                \k<name_or_number>
//                \k'name_or_number'
//
class group_ref_token
: public regex_token {

#line 14951 "source/reflect.h2"
    private: int id; 
    private: bool case_insensitive; 
    private: bool reverse_eval; 

    public: group_ref_token(cpp2::impl::in<int> id_, cpp2::impl::in<bool> case_insensitive_, cpp2::impl::in<bool> reverse_, cpp2::impl::in<std::string> str);

#line 14963 "source/reflect.h2"
    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;

#line 15064 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;

#line 15068 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;
    public: virtual ~group_ref_token() noexcept;

    public: group_ref_token(group_ref_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(group_ref_token const&) -> void = delete;


#line 15071 "source/reflect.h2"
};

#line 15074 "source/reflect.h2"
//  Regex syntax: (<tokens>)      Example: (abc)
//                (?<modifiers)            (?i)
//                (?<modifiers>:<tokens>)  (?i:abc)
//                (?<<name>>:<tokens>)     (?<start>:abc)
//                (?#<comment>)            (#Step 1 finished)
//                (?|<tokens>)             (?|(abc)|(cde))
//                (?=<tokens>)             (?=abc)
//                (?!<tokens>)             (?!abc)
//                (*<name>:<tokens)        (*pla:abc)
//
class group_token
: public regex_token {

#line 15088 "source/reflect.h2"
    private: int number {-1}; 
    private: bool reverse_eval {false}; 
    private: token_ptr inner {nullptr}; 

    public: [[nodiscard]] static auto parse_lookahead_lookbehind(parse_context& ctx, cpp2::impl::in<std::string> syntax, cpp2::impl::in<bool> lookahead, cpp2::impl::in<bool> positive) -> token_ptr;

#line 15110 "source/reflect.h2"
    public: [[nodiscard]] static auto parse_atomic_pattern(parse_context& ctx, cpp2::impl::in<std::string> syntax) -> token_ptr;

#line 15124 "source/reflect.h2"
    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;

#line 15283 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;

#line 15291 "source/reflect.h2"
    public: [[nodiscard]] static auto gen_string(cpp2::impl::in<std::string> name, cpp2::impl::in<bool> name_brackets, cpp2::impl::in<bool> has_modifier, cpp2::impl::in<std::string> modifiers, cpp2::impl::in<token_ptr> inner_) -> std::string;

#line 15309 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 15340 "source/reflect.h2"
    public: auto add_groups(std::set<int>& groups) const -> void override;
    public: virtual ~group_token() noexcept;

    public: group_token() = default;
    public: group_token(group_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(group_token const&) -> void = delete;


#line 15347 "source/reflect.h2"
};

#line 15350 "source/reflect.h2"
//  Regex syntax: \x<number> or \x{<number>}  Example: \x{62}
//
[[nodiscard]] auto hexadecimal_token_parse(parse_context& ctx) -> token_ptr;

#line 15391 "source/reflect.h2"
//  Regex syntax: $  Example: aa$
//
[[nodiscard]] auto line_end_token_parse(parse_context& ctx) -> token_ptr;

#line 15411 "source/reflect.h2"
//  Regex syntax: ^  Example: ^aa
//
[[nodiscard]] auto line_start_token_parse(parse_context& ctx) -> token_ptr;

#line 15427 "source/reflect.h2"
//  Regex syntax: (?=) or (?!) or (*pla), etc.  Example: (?=AA)
//
//  Parsed in group_token.
//
class lookahead_lookbehind_token
: public regex_token {

#line 15435 "source/reflect.h2"
    protected: bool lookahead; 
    protected: bool positive; 
    public:   token_ptr inner {nullptr}; 

    public: lookahead_lookbehind_token(cpp2::impl::in<bool> lookahead_, cpp2::impl::in<bool> positive_);

#line 15444 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 15455 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;

#line 15462 "source/reflect.h2"
    public: auto add_groups(std::set<int>& groups) const -> void override;
    public: virtual ~lookahead_lookbehind_token() noexcept;

    public: lookahead_lookbehind_token(lookahead_lookbehind_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(lookahead_lookbehind_token const&) -> void = delete;


#line 15465 "source/reflect.h2"
};

#line 15468 "source/reflect.h2"
// Named character classes
//
[[nodiscard]] auto named_class_token_parse(parse_context& ctx) -> token_ptr;

#line 15496 "source/reflect.h2"
//  Regex syntax: \o{<number>}  Example: \o{142}
//
[[nodiscard]] auto octal_token_parse(parse_context& ctx) -> token_ptr;

#line 15524 "source/reflect.h2"
//  Regex syntax: <matcher>{min, max}  Example: a{2,4}
//
class range_token
: public regex_token {

#line 15530 "source/reflect.h2"
              protected: int min_count {-1}; 
              protected: int max_count {-1}; 
              protected: int kind {range_flags::greedy}; 
              protected: token_ptr inner_token {nullptr}; 

    public: explicit range_token();

    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;

#line 15610 "source/reflect.h2"
    public: auto parse_modifier(parse_context& ctx) & -> void;

#line 15622 "source/reflect.h2"
    public: [[nodiscard]] auto gen_mod_string() const& -> std::string;

#line 15635 "source/reflect.h2"
    public: [[nodiscard]] auto gen_range_string() const& -> std::string;

#line 15654 "source/reflect.h2"
    public: [[nodiscard]] auto reverse() const -> token_ptr override;

#line 15664 "source/reflect.h2"
    public: auto generate_code(generation_context& ctx) const -> void override;

#line 15675 "source/reflect.h2"
    public: auto add_groups(std::set<int>& groups) const -> void override;
    public: virtual ~range_token() noexcept;

    public: range_token(range_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(range_token const&) -> void = delete;


#line 15678 "source/reflect.h2"
};

#line 15681 "source/reflect.h2"
//  Regex syntax: *, +, or ?  Example: aa*
//
class special_range_token
: public range_token {

#line 15687 "source/reflect.h2"
    public: [[nodiscard]] static auto parse(parse_context& ctx) -> token_ptr;
    public: virtual ~special_range_token() noexcept;

    public: special_range_token() = default;
    public: special_range_token(special_range_token const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(special_range_token const&) -> void = delete;


#line 15717 "source/reflect.h2"
};

//  Regex syntax: \G  Example: \Gaa
//
//  Forces the match and/or consecutive matches to start at the position of the last match.
//
[[nodiscard]] auto start_match_parse(parse_context& ctx) -> token_ptr;

#line 15739 "source/reflect.h2"
//  Regex syntax: \b or \B  Example: \bword\b
//
//  Matches the start end end of word boundaries.
//
[[nodiscard]] auto word_boundary_token_parse(parse_context& ctx) -> token_ptr;

#line 15761 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  Parser for regular expression.
//
//-----------------------------------------------------------------------
//

//  Parser and generator for regular expressions.
template<typename Error_out> class regex_generator
 {
    private: std::string_view regex; 
    private: std::string modifier {""}; 
    private: std::string modifier_escape {""}; 

    private: Error_out error_out; 

    private: std::string source {""}; 

    public: regex_generator(cpp2::impl::in<std::string_view> r, Error_out const& e);

#line 15784 "source/reflect.h2"
    public: [[nodiscard]] auto parse() & -> std::string;

#line 15819 "source/reflect.h2"
    private: auto extract_modifiers() & -> void;
    public: regex_generator(regex_generator const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(regex_generator const&) -> void = delete;


#line 15833 "source/reflect.h2"
};

template<typename Err> [[nodiscard]] auto generate_regex(cpp2::impl::in<std::string_view> regex, Err const& err) -> std::string;

#line 15845 "source/reflect.h2"
auto regex_gen(meta::type_declaration& t) -> void;

#line 15900 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  apply_metafunctions
//
[[nodiscard]] auto apply_metafunctions(
    declaration_node& n, 
    type_declaration& rtype, 
    auto const& error
    ) -> bool;

#line 16041 "source/reflect.h2"
}

}


//=== Cpp2 function definitions =================================================

#line 1 "source/reflect.h2"

#line 17 "source/reflect.h2"
namespace cpp2 {

namespace meta {

#line 22 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  Compiler services
//
//-----------------------------------------------------------------------
//

#line 31 "source/reflect.h2"
    //  Common data members
    //

#line 45 "source/reflect.h2"
    //  Constructor
    //
#line 47 "source/reflect.h2"
    compiler_services::compiler_services(

        cpp2::impl::in<std::vector<error_entry>*> errors_, 
        cpp2::impl::in<std::set<std::string>*> includes_, 
        cpp2::impl::in<std::vector<std::string>*> extra_cpp1_, 
        cpp2::impl::in<std::vector<std::string>*> extra_build_, 
        cpp2::impl::in<std::string> filename, 
        cpp2::impl::in<stable_vector<token>*> generated_tokens_
    )
        : errors{ errors_ }
        , includes{ includes_ }
        , extra_cpp1{ extra_cpp1_ }
        , extra_build{ extra_build_ }
        , file_name{ filename }
        , errors_original_size{ cpp2::unchecked_narrow<int>(std::ssize(*cpp2::impl::assert_not_null(errors))) }
        , generated_tokens{ generated_tokens_ }
        , parser{ *cpp2::impl::assert_not_null(errors), *cpp2::impl::assert_not_null(includes), *cpp2::impl::assert_not_null(extra_cpp1), *cpp2::impl::assert_not_null(extra_build), file_name }
#line 56 "source/reflect.h2"
    {

#line 65 "source/reflect.h2"
    }

    //  Common API
    //
#line 69 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::filename() const& -> std::string_view { return file_name;  }

#line 71 "source/reflect.h2"
    auto compiler_services::set_metafunction_name(cpp2::impl::in<std::string_view> name, cpp2::impl::in<std::vector<std::string>> args) & -> void{
        metafunction_name  = name;
        metafunction_args  = args;
        metafunctions_used = CPP2_UFCS(empty)(args);
    }

#line 77 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::get_metafunction_name() const& -> std::string_view { return metafunction_name;  }

#line 79 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::get_argument(cpp2::impl::in<int> index) & -> std::string{
        metafunctions_used = true;
        if (([_0 = 0, _1 = index, _2 = CPP2_UFCS(ssize)(metafunction_args)]{ return cpp2::impl::cmp_less_eq(_0,_1) && cpp2::impl::cmp_less(_1,_2); }())) {
            return CPP2_ASSERT_IN_BOUNDS(metafunction_args, index); 
        }
        return ""; 
    }

#line 87 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::get_arguments() & -> std::vector<std::string>{
        metafunctions_used = true;
        return metafunction_args; 
    }

#line 92 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::arguments_were_used() const& -> bool { return metafunctions_used;  }

#line 94 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::parse_statement(

        std::string_view source
    ) & -> parse_statement_ret

    {
            cpp2::impl::deferred_init<std::unique_ptr<statement_node>> ret;
#line 100 "source/reflect.h2"
        auto original_source {source}; 

        CPP2_UFCS(push_back)(generated_lines, std::vector<source_line>());
        auto lines {&CPP2_UFCS(back)(generated_lines)}; 

        auto add_line {[&, _1 = lines](cpp2::impl::in<std::string_view> s) mutable -> void{
            static_cast<void>(CPP2_UFCS(emplace_back)((*cpp2::impl::assert_not_null(_1)), s, source_line::category::cpp2));
        }}; 
{
auto newline_pos{CPP2_UFCS(find)(source, '\n')};

        //  First split this string into source_lines
        //

#line 112 "source/reflect.h2"
        if ( cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(source),1) 
            && newline_pos != source.npos) 
        {
            while( newline_pos != source.npos ) 
            {
                add_line(CPP2_UFCS(substr)(source, 0, newline_pos));
                CPP2_UFCS(remove_prefix)(source, newline_pos + 1);
                newline_pos = CPP2_UFCS(find)(source, '\n');
            }
        }
}

#line 123 "source/reflect.h2"
        if (!(CPP2_UFCS(empty)(source))) {
            cpp2::move(add_line)(cpp2::move(source));
        }

        //  Now lex this source fragment to generate
        //  a single grammar_map entry, whose .second
        //  is the vector of tokens
        static_cast<void>(CPP2_UFCS(emplace_back)(generated_lexers, *cpp2::impl::assert_not_null(errors)));
        auto tokens {&CPP2_UFCS(back)(generated_lexers)}; 
        CPP2_UFCS(lex)((*cpp2::impl::assert_not_null(tokens)), *cpp2::impl::assert_not_null(cpp2::move(lines)), true);

        if (cpp2::cpp2_default.is_active() && !(std::ssize(CPP2_UFCS(get_map)((*cpp2::impl::assert_not_null(tokens)))) == 1) ) { cpp2::cpp2_default.report_violation(""); }

        //  Now parse this single declaration from
        //  the lexed tokens
        ret.construct(CPP2_UFCS(parse_one_declaration)(parser, 
                (*cpp2::impl::assert_not_null(CPP2_UFCS(begin)(CPP2_UFCS(get_map)(*cpp2::impl::assert_not_null(cpp2::move(tokens)))))).second, 
                *cpp2::impl::assert_not_null(generated_tokens)
              ));
        if (!((cpp2::impl::as_<bool>(ret.value())))) {
            error("parse failed - the source string is not a valid statement:\n" + cpp2::to_string(cpp2::move(original_source)) + "");
        }return std::move(ret.value()); 
    }

#line 147 "source/reflect.h2"
    auto compiler_services::add_runtime_support_include(cpp2::impl::in<std::string_view> s, cpp2::impl::in<bool> angles) & -> void{
        std::string inc {s}; 
        if (angles) {
            inc = "<" + inc + ">";
        }
        else {
            inc = "\"" + inc + "\"";
        }
        static_cast<void>(CPP2_UFCS(emplace)((*cpp2::impl::assert_not_null(includes)), cpp2::move(inc)));
    }

#line 158 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::add_extra_cpp1_code(cpp2::impl::in<std::string> s) & -> decltype(auto) { return CPP2_UFCS(push_back)((*cpp2::impl::assert_not_null(extra_cpp1)), s);  }
#line 159 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::add_extra_build_step(cpp2::impl::in<std::string> s) & -> decltype(auto) { return CPP2_UFCS(push_back)((*cpp2::impl::assert_not_null(extra_build)), s + "\n");  }

#line 161 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::position() const -> source_position

    {
        return {  }; 
    }

    //  Error diagnosis and handling, integrated with compiler output
    //  Unlike a contract violation, .requires continues further processing
    //
#line 170 "source/reflect.h2"
    auto compiler_services::require(

        cpp2::impl::in<bool> b, 
        cpp2::impl::in<std::string_view> msg
    ) const& -> void
    {
        if (!(b)) {
            error(msg);
        }
    }

#line 181 "source/reflect.h2"
    auto compiler_services::error(cpp2::impl::in<std::string_view> msg) const& -> void
    {
        auto message {cpp2::impl::as_<std::string>(msg)}; 
        if (!(CPP2_UFCS(empty)(metafunction_name))) {
            message = "while applying @" + cpp2::to_string(metafunction_name) + " - " + cpp2::to_string(message) + "";
        }
        static_cast<void>(CPP2_UFCS(emplace_back)((*cpp2::impl::assert_not_null(errors)), position(), cpp2::move(message)));
    }

    //  Enable custom contracts on this object, integrated with compiler output
    //  Unlike .requires, a contract violation stops further processing
    //
#line 193 "source/reflect.h2"
    auto compiler_services::report_violation(auto const& msg) const& -> void{
        error(msg);
        throw(std::runtime_error(
            "  ==> programming bug found in metafunction @" + cpp2::to_string(metafunction_name) + " "
            "- contract violation - see previous errors"
        ));
    }

#line 201 "source/reflect.h2"
    [[nodiscard]] auto compiler_services::is_active() const& -> decltype(auto) { return true;  }

    compiler_services::~compiler_services() noexcept{}
compiler_services::compiler_services(compiler_services const& that)
                                     : errors{ that.errors }
                                     , includes{ that.includes }
                                     , extra_cpp1{ that.extra_cpp1 }
                                     , extra_build{ that.extra_build }
                                     , file_name{ that.file_name }
                                     , errors_original_size{ that.errors_original_size }
                                     , generated_tokens{ that.generated_tokens }
                                     , parser{ that.parser }
                                     , metafunction_name{ that.metafunction_name }
                                     , metafunction_args{ that.metafunction_args }
                                     , metafunctions_used{ that.metafunctions_used }{}
compiler_services::compiler_services(compiler_services&& that) noexcept
                                     : errors{ std::move(that).errors }
                                     , includes{ std::move(that).includes }
                                     , extra_cpp1{ std::move(that).extra_cpp1 }
                                     , extra_build{ std::move(that).extra_build }
                                     , file_name{ std::move(that).file_name }
                                     , errors_original_size{ std::move(that).errors_original_size }
                                     , generated_tokens{ std::move(that).generated_tokens }
                                     , parser{ std::move(that).parser }
                                     , metafunction_name{ std::move(that).metafunction_name }
                                     , metafunction_args{ std::move(that).metafunction_args }
                                     , metafunctions_used{ std::move(that).metafunctions_used }{}

#line 205 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  All reflection types are wrappers around a pointer to node
//
//-----------------------------------------------------------------------
//

#line 218 "source/reflect.h2"
    template <typename T> reflection_base<T>::reflection_base(

        cpp2::impl::in<T*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : compiler_services{ s }
        , n{ n_ }
#line 223 "source/reflect.h2"
    {

#line 226 "source/reflect.h2"
        if (cpp2::cpp2_default.is_active() && !(n) ) { cpp2::cpp2_default.report_violation(CPP2_CONTRACT_MSG("a meta:: reflection must point to a valid node, not null")); }
    }

#line 229 "source/reflect.h2"
    template <typename T> [[nodiscard]] auto reflection_base<T>::position() const -> source_position { return CPP2_UFCS(position)((*cpp2::impl::assert_not_null(n)));  }

#line 231 "source/reflect.h2"
    template <typename T> [[nodiscard]] auto reflection_base<T>::print() const& -> std::string { return CPP2_UFCS(pretty_print_visualize)((*cpp2::impl::assert_not_null(n)), 0);  }

#line 233 "source/reflect.h2"
    template <typename T> [[nodiscard]] auto reflection_base<T>::is_same(cpp2::impl::in<reflection_base> o) const& -> bool { return n == o.n; }// Test pointers
#line 234 "source/reflect.h2"
    template <typename T> template<typename TO> [[nodiscard]] auto reflection_base<T>::is_same([[maybe_unused]] reflection_base<TO> const& unnamed_param_2) const& -> bool { return false;  }

    template <typename T> reflection_base<T>::~reflection_base() noexcept{}
template <typename T> reflection_base<T>::reflection_base(reflection_base const& that)
                                     : compiler_services{ static_cast<compiler_services const&>(that) }
                                     , n{ that.n }{}
template <typename T> reflection_base<T>::reflection_base(reflection_base&& that) noexcept
                                     : compiler_services{ static_cast<compiler_services&&>(that) }
                                     , n{ std::move(that).n }{}// Different types => false

#line 238 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  Declarations
//
//-----------------------------------------------------------------------
//

//-----------------------------------------------------------------------
//  All declarations
//

#line 252 "source/reflect.h2"
    declaration::declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<declaration_node>{ n_, s }
#line 257 "source/reflect.h2"
    {

    }

#line 261 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_public() const& -> bool { return CPP2_UFCS(is_public)((*cpp2::impl::assert_not_null(n))); }
#line 262 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_protected() const& -> bool { return CPP2_UFCS(is_protected)((*cpp2::impl::assert_not_null(n))); }
#line 263 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_private() const& -> bool { return CPP2_UFCS(is_private)((*cpp2::impl::assert_not_null(n))); }
#line 264 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_default_access() const& -> bool { return CPP2_UFCS(is_default_access)((*cpp2::impl::assert_not_null(n)));  }

#line 266 "source/reflect.h2"
    [[nodiscard]] auto declaration::default_to_public() & -> decltype(auto) { return static_cast<void>(CPP2_UFCS(make_public)((*cpp2::impl::assert_not_null(n)))); }
#line 267 "source/reflect.h2"
    [[nodiscard]] auto declaration::default_to_protected() & -> decltype(auto) { return static_cast<void>(CPP2_UFCS(make_protected)((*cpp2::impl::assert_not_null(n))));  }
#line 268 "source/reflect.h2"
    [[nodiscard]] auto declaration::default_to_private() & -> decltype(auto) { return static_cast<void>(CPP2_UFCS(make_private)((*cpp2::impl::assert_not_null(n)))); }

#line 270 "source/reflect.h2"
    [[nodiscard]] auto declaration::make_public() & -> bool { return CPP2_UFCS(make_public)((*cpp2::impl::assert_not_null(n))); }
#line 271 "source/reflect.h2"
    [[nodiscard]] auto declaration::make_protected() & -> bool { return CPP2_UFCS(make_protected)((*cpp2::impl::assert_not_null(n))); }
#line 272 "source/reflect.h2"
    [[nodiscard]] auto declaration::make_private() & -> bool { return CPP2_UFCS(make_private)((*cpp2::impl::assert_not_null(n))); }

#line 274 "source/reflect.h2"
    [[nodiscard]] auto declaration::has_name() const& -> bool { return CPP2_UFCS(has_name)((*cpp2::impl::assert_not_null(n))); }
#line 275 "source/reflect.h2"
    [[nodiscard]] auto declaration::has_name(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_name)((*cpp2::impl::assert_not_null(n)), s); }

#line 277 "source/reflect.h2"
    [[nodiscard]] auto declaration::name() const& -> std::string_view{
        if (has_name()) {return CPP2_UFCS(as_string_view)((*cpp2::impl::assert_not_null(CPP2_UFCS(name)(*cpp2::impl::assert_not_null(n))))); }
        else          { return ""; }
    }

#line 282 "source/reflect.h2"
    [[nodiscard]] auto declaration::has_initializer() const& -> bool { return CPP2_UFCS(has_initializer)((*cpp2::impl::assert_not_null(n)));  }

#line 284 "source/reflect.h2"
    [[nodiscard]] auto declaration::get_initializer() const& -> statement { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null(n)).initializer), (*this) };  }

#line 286 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_global() const& -> bool { return CPP2_UFCS(is_global)((*cpp2::impl::assert_not_null(n))); }
#line 287 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_function() const& -> bool { return CPP2_UFCS(is_function)((*cpp2::impl::assert_not_null(n))); }
#line 288 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_object() const& -> bool { return CPP2_UFCS(is_object)((*cpp2::impl::assert_not_null(n))); }
#line 289 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_base_object() const& -> bool { return CPP2_UFCS(is_base_object)((*cpp2::impl::assert_not_null(n))); }
#line 290 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_member_object() const& -> bool { return CPP2_UFCS(is_member_object)((*cpp2::impl::assert_not_null(n)));  }
#line 291 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_type() const& -> bool { return CPP2_UFCS(is_type)((*cpp2::impl::assert_not_null(n))); }
#line 292 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_namespace() const& -> bool { return CPP2_UFCS(is_namespace)((*cpp2::impl::assert_not_null(n))); }
#line 293 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_alias() const& -> bool { return CPP2_UFCS(is_alias)((*cpp2::impl::assert_not_null(n))); }

#line 295 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_type_alias() const& -> bool { return CPP2_UFCS(is_type_alias)((*cpp2::impl::assert_not_null(n))); }
#line 296 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_namespace_alias() const& -> bool { return CPP2_UFCS(is_namespace_alias)((*cpp2::impl::assert_not_null(n)));  }
#line 297 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_object_alias() const& -> bool { return CPP2_UFCS(is_object_alias)((*cpp2::impl::assert_not_null(n))); }

#line 299 "source/reflect.h2"
    [[nodiscard]] auto declaration::is_function_expression() const& -> bool { return CPP2_UFCS(is_function_expression)((*cpp2::impl::assert_not_null(n)));  }

#line 301 "source/reflect.h2"
    [[nodiscard]] auto declaration::as_function() const& -> function_declaration { return { n, (*this) }; }
#line 302 "source/reflect.h2"
    [[nodiscard]] auto declaration::as_object() const& -> object_declaration { return { n, (*this) }; }
#line 303 "source/reflect.h2"
    [[nodiscard]] auto declaration::as_type() const& -> type_declaration { return { n, (*this) }; }
#line 304 "source/reflect.h2"
    [[nodiscard]] auto declaration::as_nonglobal_namespace() const& -> namespace_declaration { return { n, (*this) };  }
#line 305 "source/reflect.h2"
    [[nodiscard]] auto declaration::as_alias() const& -> alias_declaration { return { n, (*this) }; }

#line 307 "source/reflect.h2"
    [[nodiscard]] auto declaration::get_parent() const& -> declaration { return declaration((*cpp2::impl::assert_not_null(n)).parent_declaration, (*this)); }

#line 309 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_function() const& -> bool { return CPP2_UFCS(parent_is_function)((*cpp2::impl::assert_not_null(n))); }
#line 310 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_object() const& -> bool { return CPP2_UFCS(parent_is_object)((*cpp2::impl::assert_not_null(n))); }
#line 311 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_type() const& -> bool { return CPP2_UFCS(parent_is_type)((*cpp2::impl::assert_not_null(n))); }
#line 312 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_nonglobal_namespace() const& -> bool { return CPP2_UFCS(parent_is_nonglobal_namespace)((*cpp2::impl::assert_not_null(n)));  }
#line 313 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_alias() const& -> bool { return CPP2_UFCS(parent_is_alias)((*cpp2::impl::assert_not_null(n))); }

#line 315 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_type_alias() const& -> bool { return CPP2_UFCS(parent_is_type_alias)((*cpp2::impl::assert_not_null(n))); }
#line 316 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_namespace_alias() const& -> bool { return CPP2_UFCS(parent_is_namespace_alias)((*cpp2::impl::assert_not_null(n)));  }
#line 317 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_object_alias() const& -> bool { return CPP2_UFCS(parent_is_object_alias)((*cpp2::impl::assert_not_null(n))); }

#line 319 "source/reflect.h2"
    [[nodiscard]] auto declaration::parent_is_polymorphic() const& -> bool { return CPP2_UFCS(parent_is_polymorphic)((*cpp2::impl::assert_not_null(n)));  }

#line 321 "source/reflect.h2"
    auto declaration::mark_for_removal_from_enclosing_type() & -> void
                                                    // this precondition should be sufficient ...
    {
        if (cpp2::type_safety.is_active() && !(parent_is_type()) ) { cpp2::type_safety.report_violation(""); }
#line 324 "source/reflect.h2"
        auto test {CPP2_UFCS(type_member_mark_for_removal)((*cpp2::impl::assert_not_null(n)))}; 
        if (cpp2::cpp2_default.is_active() && !(cpp2::move(test)) ) { cpp2::cpp2_default.report_violation(""); }// ... to ensure this assert is true
    }

    declaration::~declaration() noexcept{}
declaration::declaration(declaration const& that)
                                     : reflection_base<declaration_node>{ static_cast<reflection_base<declaration_node> const&>(that) }{}
declaration::declaration(declaration&& that) noexcept
                                     : reflection_base<declaration_node>{ static_cast<reflection_base<declaration_node>&&>(that) }{}

#line 330 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Function declarations
//

#line 337 "source/reflect.h2"
    function_declaration::function_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : declaration{ n_, s }
#line 342 "source/reflect.h2"
    {

        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_function)((*cpp2::impl::assert_not_null(n)))) ) { cpp2::cpp2_default.report_violation(""); }
    }

#line 347 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::index_of_parameter_named(cpp2::impl::in<std::string_view> s) const& -> int { return CPP2_UFCS(index_of_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 348 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 349 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_return_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_return_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 350 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_parameter_or_return_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_parameter_or_return_named)((*cpp2::impl::assert_not_null(n)), s);  }
#line 351 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_in_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_in_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 352 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_in_ref_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_in_ref_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 353 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_copy_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_copy_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 354 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_inout_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_inout_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 355 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_out_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_out_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 356 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_move_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_move_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 357 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_forward_parameter_named(cpp2::impl::in<std::string_view> s) const& -> bool { return CPP2_UFCS(has_forward_parameter_named)((*cpp2::impl::assert_not_null(n)), s); }
#line 358 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::first_parameter_name() const& -> std::string { return CPP2_UFCS(first_parameter_name)((*cpp2::impl::assert_not_null(n))); }

#line 360 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_parameter_with_name_and_pass(cpp2::impl::in<std::string_view> s, cpp2::impl::in<passing_style> pass) const& -> bool { 
                                                  return CPP2_UFCS(has_parameter_with_name_and_pass)((*cpp2::impl::assert_not_null(n)), s, pass);  }
#line 362 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_function_with_this() const& -> bool { return CPP2_UFCS(is_function_with_this)((*cpp2::impl::assert_not_null(n))); }
#line 363 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_virtual() const& -> bool { return CPP2_UFCS(is_virtual_function)((*cpp2::impl::assert_not_null(n))); }
#line 364 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_defaultable() const& -> bool { return CPP2_UFCS(is_defaultable_function)((*cpp2::impl::assert_not_null(n))); }
#line 365 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_constructor() const& -> bool { return CPP2_UFCS(is_constructor)((*cpp2::impl::assert_not_null(n))); }
#line 366 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_default_constructor() const& -> bool { return CPP2_UFCS(is_default_constructor)((*cpp2::impl::assert_not_null(n))); }
#line 367 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_move() const& -> bool { return CPP2_UFCS(is_move)((*cpp2::impl::assert_not_null(n))); }
#line 368 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_swap() const& -> bool { return CPP2_UFCS(is_swap)((*cpp2::impl::assert_not_null(n))); }
#line 369 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_constructor_with_that() const& -> bool { return CPP2_UFCS(is_constructor_with_that)((*cpp2::impl::assert_not_null(n))); }
#line 370 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_constructor_with_in_that() const& -> bool { return CPP2_UFCS(is_constructor_with_in_that)((*cpp2::impl::assert_not_null(n))); }
#line 371 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_constructor_with_move_that() const& -> bool { return CPP2_UFCS(is_constructor_with_move_that)((*cpp2::impl::assert_not_null(n)));  }
#line 372 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_assignment() const& -> bool { return CPP2_UFCS(is_assignment)((*cpp2::impl::assert_not_null(n))); }
#line 373 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_assignment_with_that() const& -> bool { return CPP2_UFCS(is_assignment_with_that)((*cpp2::impl::assert_not_null(n))); }
#line 374 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_assignment_with_in_that() const& -> bool { return CPP2_UFCS(is_assignment_with_in_that)((*cpp2::impl::assert_not_null(n))); }
#line 375 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_assignment_with_move_that() const& -> bool { return CPP2_UFCS(is_assignment_with_move_that)((*cpp2::impl::assert_not_null(n)));  }
#line 376 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_destructor() const& -> bool { return CPP2_UFCS(is_destructor)((*cpp2::impl::assert_not_null(n))); }

#line 378 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_copy_or_move() const& -> bool { return is_constructor_with_that() || is_assignment_with_that(); }

#line 380 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_declared_return_type() const& -> bool { return CPP2_UFCS(has_declared_return_type)((*cpp2::impl::assert_not_null(n))); }
#line 381 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_deduced_return_type() const& -> bool { return CPP2_UFCS(has_deduced_return_type)((*cpp2::impl::assert_not_null(n))); }
#line 382 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_bool_return_type() const& -> bool { return CPP2_UFCS(has_bool_return_type)((*cpp2::impl::assert_not_null(n))); }
#line 383 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_non_void_return_type() const& -> bool { return CPP2_UFCS(has_non_void_return_type)((*cpp2::impl::assert_not_null(n))); }

#line 385 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::has_compound_body() const& -> bool { return CPP2_UFCS(is_function_with_compound_body)((*cpp2::impl::assert_not_null(n))); }

#line 387 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::get_body() const& -> statement { return { CPP2_UFCS(get_function_body)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 388 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::get_compound_body() const& -> compound_statement { return { CPP2_UFCS(get_function_compound_body)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 389 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::get_unnamed_return_type() const& -> std::string { return CPP2_UFCS(unnamed_return_type_to_string)((*cpp2::impl::assert_not_null(n))); }
#line 390 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::get_signature() const& -> std::string { return CPP2_UFCS(signature_to_string)((*cpp2::impl::assert_not_null(n))); }

#line 392 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::is_binary_comparison_function() const& -> bool { return CPP2_UFCS(is_binary_comparison_function)((*cpp2::impl::assert_not_null(n)));  }

#line 394 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::get_parameters() const& -> std::vector<parameter_declaration>

    {
        std::vector<parameter_declaration> ret {}; 
        for ( auto const& param : CPP2_UFCS(get_function_parameters)((*cpp2::impl::assert_not_null(n))) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, param, (*this)));
        }
        return ret; 
    }

#line 404 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::get_returns() const& -> std::vector<parameter_declaration>

    {
        std::vector<parameter_declaration> ret {}; 
        for ( auto const& param : CPP2_UFCS(get_function_returns)((*cpp2::impl::assert_not_null(n))) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, param, (*this)));
        }
        return ret; 
    }

    //  Modifying operations
    //
#line 416 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::default_to_virtual() & -> decltype(auto) { return static_cast<void>(CPP2_UFCS(make_function_virtual)((*cpp2::impl::assert_not_null(n)))); }

#line 418 "source/reflect.h2"
    [[nodiscard]] auto function_declaration::make_virtual() & -> bool { return CPP2_UFCS(make_function_virtual)((*cpp2::impl::assert_not_null(n))); }

#line 420 "source/reflect.h2"
    auto function_declaration::add_initializer(cpp2::impl::in<std::string_view> source) & -> void

#line 423 "source/reflect.h2"
    {
        if ((*this).is_active() && !(!(has_initializer())) ) { (*this).report_violation(CPP2_CONTRACT_MSG("cannot add an initializer to a function that already has one")); }
        if ((*this).is_active() && !(parent_is_type()) ) { (*this).report_violation(CPP2_CONTRACT_MSG("cannot add an initializer to a function that isn't in a type scope")); }
#line 424 "source/reflect.h2"
        auto stmt {parse_statement(source)}; 
        if (!((cpp2::impl::as_<bool>(stmt)))) {
            error("cannot add an initializer that is not a valid statement");
            return ; 
        }
        require(CPP2_UFCS(add_function_initializer)((*cpp2::impl::assert_not_null(n)), std::move(cpp2::move(stmt))), 
                 std::string("unexpected error while attempting to add initializer"));
    }

    function_declaration::function_declaration(function_declaration const& that)
                                     : declaration{ static_cast<declaration const&>(that) }{}
function_declaration::function_declaration(function_declaration&& that) noexcept
                                     : declaration{ static_cast<declaration&&>(that) }{}

#line 435 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Object declarations
//

#line 442 "source/reflect.h2"
    object_declaration::object_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : declaration{ n_, s }
#line 447 "source/reflect.h2"
    {

        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_object)((*cpp2::impl::assert_not_null(n)))) ) { cpp2::cpp2_default.report_violation(""); }
    }

#line 452 "source/reflect.h2"
    [[nodiscard]] auto object_declaration::is_const() const& -> bool { return CPP2_UFCS(is_const)((*cpp2::impl::assert_not_null(n))); }
#line 453 "source/reflect.h2"
    [[nodiscard]] auto object_declaration::has_wildcard_type() const& -> bool { return CPP2_UFCS(has_wildcard_type)((*cpp2::impl::assert_not_null(n)));  }

#line 455 "source/reflect.h2"
    [[nodiscard]] auto object_declaration::type() const& -> std::string{
        auto ret {CPP2_UFCS(object_type)((*cpp2::impl::assert_not_null(n)))}; 
        require(!(contains(ret, "(*ERROR*)")), 
                 "cannot to_string this type: " + ret);
        return ret; 
    }

#line 462 "source/reflect.h2"
    [[nodiscard]] auto object_declaration::initializer() const& -> std::string{
        auto ret {CPP2_UFCS(object_initializer)((*cpp2::impl::assert_not_null(n)))}; 
        require(!(contains(ret, "(*ERROR*)")), 
                 "cannot to_string this initializer: " + ret);
        return ret; 
    }

    object_declaration::object_declaration(object_declaration const& that)
                                     : declaration{ static_cast<declaration const&>(that) }{}
object_declaration::object_declaration(object_declaration&& that) noexcept
                                     : declaration{ static_cast<declaration&&>(that) }{}

#line 471 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Type and namespace declarations
//

#line 478 "source/reflect.h2"
    type_or_namespace_declaration::type_or_namespace_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : declaration{ n_, s }
#line 483 "source/reflect.h2"
    {

        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_type)((*cpp2::impl::assert_not_null(n))) || CPP2_UFCS(is_namespace)((*cpp2::impl::assert_not_null(n)))) ) { cpp2::cpp2_default.report_violation(""); }
    }

#line 488 "source/reflect.h2"
    auto type_or_namespace_declaration::reserve_names(cpp2::impl::in<std::string_view> name, auto&& ...etc) const& -> void
    {                           // etc is not declared ':string_view' for compatibility with GCC 10.x
        for ( 
             auto const& m : get_members() ) {
            CPP2_UFCS(require)(m, !(CPP2_UFCS(has_name)(m, name)), 
                       "in a '" + cpp2::to_string(get_metafunction_name()) + "' type, the name '" + cpp2::to_string(name) + "' "
                       "is reserved for use by the '" + cpp2::to_string(get_metafunction_name()) + "' implementation"
            );
        }
        if constexpr (!(CPP2_PACK_EMPTY(etc))) {
            reserve_names(CPP2_FORWARD(etc)...);
        }
    }

#line 502 "source/reflect.h2"
    [[nodiscard]] auto type_or_namespace_declaration::get_member_functions() const& -> std::vector<function_declaration>

    {
        std::vector<function_declaration> ret {}; 
        for ( 
             auto const& d : CPP2_UFCS(get_nested_declarations)((*cpp2::impl::assert_not_null(n)), declaration_node::functions) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, d, (*this)));
        }
        return ret; 
    }

#line 513 "source/reflect.h2"
    [[nodiscard]] auto type_or_namespace_declaration::get_member_functions_needing_initializer() const& -> std::vector<function_declaration>

    {
        std::vector<function_declaration> ret {}; 
        for ( 
             auto const& d : CPP2_UFCS(get_nested_declarations)((*cpp2::impl::assert_not_null(n)), declaration_node::functions) ) 
        if ( !(CPP2_UFCS(has_initializer)((*cpp2::impl::assert_not_null(d)))) 
            && !(CPP2_UFCS(is_virtual_function)((*cpp2::impl::assert_not_null(d)))) 
            && !(CPP2_UFCS(is_defaultable_function)((*cpp2::impl::assert_not_null(d))))) 
        {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, d, (*this)));
        }
        return ret; 
    }

#line 528 "source/reflect.h2"
    [[nodiscard]] auto type_or_namespace_declaration::get_member_objects() const& -> std::vector<object_declaration>

    {
        std::vector<object_declaration> ret {}; 
        for ( auto const& d : CPP2_UFCS(get_nested_declarations)((*cpp2::impl::assert_not_null(n)), declaration_node::objects) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, d, (*this)));
        }
        return ret; 
    }

#line 538 "source/reflect.h2"
    [[nodiscard]] auto type_or_namespace_declaration::get_member_types() const& -> std::vector<type_declaration>

    {
        std::vector<type_declaration> ret {}; 
        for ( auto const& d : CPP2_UFCS(get_nested_declarations)((*cpp2::impl::assert_not_null(n)), declaration_node::types) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, d, (*this)));
        }
        return ret; 
    }

#line 548 "source/reflect.h2"
    [[nodiscard]] auto type_or_namespace_declaration::get_member_aliases() const& -> std::vector<alias_declaration>

    {
        std::vector<alias_declaration> ret {}; 
        for ( auto const& d : CPP2_UFCS(get_nested_declarations)((*cpp2::impl::assert_not_null(n)), declaration_node::aliases) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, d, (*this)));
        }
        return ret; 
    }

#line 558 "source/reflect.h2"
    [[nodiscard]] auto type_or_namespace_declaration::get_members() const& -> std::vector<declaration>

    {
        std::vector<declaration> ret {}; 
        for ( auto const& d : CPP2_UFCS(get_nested_declarations)((*cpp2::impl::assert_not_null(n)), declaration_node::all) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, d, (*this)));
        }
        return ret; 
    }

#line 568 "source/reflect.h2"
    auto type_or_namespace_declaration::add_member(cpp2::impl::in<std::string_view> source) & -> void
    {
        auto decl {parse_statement(source)}; 
        if (!((cpp2::impl::as_<bool>(decl)))) {
            error("the provided source string is not a valid statement");
            return ; 
        }
        if (!(CPP2_UFCS(is_declaration)((*cpp2::impl::assert_not_null(decl))))) {
            error("cannot add a member that is not a declaration");
        }

        require(CPP2_UFCS(add_type_or_namespace_member)((*cpp2::impl::assert_not_null(n)), std::move(cpp2::move(decl))), 
                 std::string("unexpected error while attempting to add member:\n") + source);
    }

    type_or_namespace_declaration::type_or_namespace_declaration(type_or_namespace_declaration const& that)
                                     : declaration{ static_cast<declaration const&>(that) }{}
type_or_namespace_declaration::type_or_namespace_declaration(type_or_namespace_declaration&& that) noexcept
                                     : declaration{ static_cast<declaration&&>(that) }{}

#line 589 "source/reflect.h2"
    type_declaration::type_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : type_or_namespace_declaration{ n_, s }
#line 594 "source/reflect.h2"
    {

        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_type)((*cpp2::impl::assert_not_null(n)))) ) { cpp2::cpp2_default.report_violation(""); }
    }

#line 600 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::is_polymorphic() const& -> bool { return CPP2_UFCS(is_polymorphic)((*cpp2::impl::assert_not_null(n))); }
#line 601 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::is_final() const& -> bool { return CPP2_UFCS(is_type_final)((*cpp2::impl::assert_not_null(n))); }
#line 602 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::make_final() & -> bool { return CPP2_UFCS(make_type_final)((*cpp2::impl::assert_not_null(n))); }

#line 604 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::query_declared_value_set_functions() const& -> query_declared_value_set_functions_ret

#line 611 "source/reflect.h2"
    {
            cpp2::impl::deferred_init<bool> out_this_in_that;
            cpp2::impl::deferred_init<bool> out_this_move_that;
            cpp2::impl::deferred_init<bool> inout_this_in_that;
            cpp2::impl::deferred_init<bool> inout_this_move_that;
#line 612 "source/reflect.h2"
        auto declared {CPP2_UFCS(find_declared_value_set_functions)((*cpp2::impl::assert_not_null(n)))}; 
        out_this_in_that.construct(declared.out_this_in_that != nullptr);
        out_this_move_that.construct(declared.out_this_move_that != nullptr);
        inout_this_in_that.construct(declared.inout_this_in_that != nullptr);
        inout_this_move_that.construct(cpp2::move(declared).inout_this_move_that != nullptr);
        return  { std::move(out_this_in_that.value()), std::move(out_this_move_that.value()), std::move(inout_this_in_that.value()), std::move(inout_this_move_that.value()) }; // NOLINT(performance-move-const-arg)
    }

#line 620 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::disable_member_function_generation() & -> decltype(auto) { return CPP2_UFCS(type_disable_member_function_generation)((*cpp2::impl::assert_not_null(n)));  }
#line 621 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::disable_ref_qualifier_generation() & -> decltype(auto) { return CPP2_UFCS(type_disable_ref_qualifier_generation)((*cpp2::impl::assert_not_null(n))); }

    //  At some point we may want to allow this also for namespaces, but for now only types
#line 624 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::remove_marked_members() & -> decltype(auto) { return CPP2_UFCS(type_remove_marked_members)((*cpp2::impl::assert_not_null(n)));  }
#line 625 "source/reflect.h2"
    [[nodiscard]] auto type_declaration::remove_all_members() & -> decltype(auto) { return CPP2_UFCS(type_remove_all_members)((*cpp2::impl::assert_not_null(n))); }

    type_declaration::type_declaration(type_declaration const& that)
                                     : type_or_namespace_declaration{ static_cast<type_or_namespace_declaration const&>(that) }{}
type_declaration::type_declaration(type_declaration&& that) noexcept
                                     : type_or_namespace_declaration{ static_cast<type_or_namespace_declaration&&>(that) }{}

#line 633 "source/reflect.h2"
    namespace_declaration::namespace_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : type_or_namespace_declaration{ n_, s }
#line 638 "source/reflect.h2"
    {

        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_namespace)((*cpp2::impl::assert_not_null(n)))) ) { cpp2::cpp2_default.report_violation(""); }
    }

    namespace_declaration::namespace_declaration(namespace_declaration const& that)
                                     : type_or_namespace_declaration{ static_cast<type_or_namespace_declaration const&>(that) }{}
namespace_declaration::namespace_declaration(namespace_declaration&& that) noexcept
                                     : type_or_namespace_declaration{ static_cast<type_or_namespace_declaration&&>(that) }{}

#line 645 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Alias declarations
//

#line 652 "source/reflect.h2"
    alias_declaration::alias_declaration(

        cpp2::impl::in<declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : declaration{ n_, s }
#line 657 "source/reflect.h2"
    {

        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_alias)((*cpp2::impl::assert_not_null(n)))) ) { cpp2::cpp2_default.report_violation(""); }
    }

    alias_declaration::alias_declaration(alias_declaration const& that)
                                     : declaration{ static_cast<declaration const&>(that) }{}
alias_declaration::alias_declaration(alias_declaration&& that) noexcept
                                     : declaration{ static_cast<declaration&&>(that) }{}

#line 664 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Parameter declarations
//

#line 671 "source/reflect.h2"
    parameter_declaration::parameter_declaration(

        cpp2::impl::in<parameter_declaration_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<parameter_declaration_node>{ n_, s }
#line 676 "source/reflect.h2"
    {

    }

#line 680 "source/reflect.h2"
    [[nodiscard]] auto parameter_declaration::get_declaration() const& -> object_declaration { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null(n)).declaration), (*this) }; }
#line 681 "source/reflect.h2"
    [[nodiscard]] auto parameter_declaration::get_passing_style() const& -> passing_style { return (*cpp2::impl::assert_not_null(n)).pass; }

#line 683 "source/reflect.h2"
    [[nodiscard]] auto parameter_declaration::is_implicit() const& -> bool { return (*cpp2::impl::assert_not_null(n)).mod == parameter_declaration_node::modifier::implicit;  }
#line 684 "source/reflect.h2"
    [[nodiscard]] auto parameter_declaration::is_virtual() const& -> bool { return (*cpp2::impl::assert_not_null(n)).mod == parameter_declaration_node::modifier::virtual_;  }
#line 685 "source/reflect.h2"
    [[nodiscard]] auto parameter_declaration::is_override() const& -> bool { return (*cpp2::impl::assert_not_null(n)).mod == parameter_declaration_node::modifier::override_;  }
#line 686 "source/reflect.h2"
    [[nodiscard]] auto parameter_declaration::is_final() const& -> bool { return (*cpp2::impl::assert_not_null(n)).mod == parameter_declaration_node::modifier::final_; }

    parameter_declaration::parameter_declaration(parameter_declaration const& that)
                                     : reflection_base<parameter_declaration_node>{ static_cast<reflection_base<parameter_declaration_node> const&>(that) }{}
parameter_declaration::parameter_declaration(parameter_declaration&& that) noexcept
                                     : reflection_base<parameter_declaration_node>{ static_cast<reflection_base<parameter_declaration_node>&&>(that) }{}

#line 690 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  Expressions
//
//-----------------------------------------------------------------------
//

//-----------------------------------------------------------------------
//  Binary expressions
//

#line 717 "source/reflect.h2"
    template <String Name, typename Term> binary_expression<Name,Term>::binary_expression(

        binary_expression_node<Name,Term>* const& n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<binary_expression_node<Name,Term>>{ n_, s }
#line 722 "source/reflect.h2"
    {

    }

#line 726 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null((*this).n))); }
#line 727 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::lhs_is_id_expression() const& -> bool { return CPP2_UFCS(lhs_is_id_expression)((*cpp2::impl::assert_not_null((*this).n))); }
#line 728 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_standalone_expression() const& -> bool { return CPP2_UFCS(is_standalone_expression)((*cpp2::impl::assert_not_null((*this).n)));  }
#line 729 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::terms_size() const& -> int { return CPP2_UFCS(terms_size)((*cpp2::impl::assert_not_null((*this).n))); }
#line 730 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null((*this).n))); }
#line 731 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_id_expression() const& -> bool { return CPP2_UFCS(is_id_expression)((*cpp2::impl::assert_not_null((*this).n))); }
#line 732 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_unqualified_id() const& -> bool { return CPP2_UFCS(is_unqualified_id)((*cpp2::impl::assert_not_null((*this).n))); }
#line 733 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_expression_list() const& -> bool { return CPP2_UFCS(is_expression_list)((*cpp2::impl::assert_not_null((*this).n))); }
#line 734 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_literal() const& -> bool { return CPP2_UFCS(is_literal)((*cpp2::impl::assert_not_null((*this).n))); }

#line 740 "source/reflect.h2"
        template <String Name, typename Term> template <typename T> binary_expression<Name,Term>::term_t<T>::term_t(auto&& o, auto&& ptr, auto&& cs)
                                                                      : op{ CPP2_FORWARD(o) }
                                                                      , term{ CPP2_FORWARD(ptr), CPP2_FORWARD(cs) }{}

#line 742 "source/reflect.h2"
        template <String Name, typename Term> template <typename T> [[nodiscard]] auto binary_expression<Name,Term>::term_t<T>::get_op() const& -> std::string { return op; }
#line 743 "source/reflect.h2"
        template <String Name, typename Term> template <typename T> [[nodiscard]] auto binary_expression<Name,Term>::term_t<T>::get_term() const& -> T { return term; }

        template <String Name, typename Term> template <typename T> binary_expression<Name,Term>::term_t<T>::term_t(term_t const& that)
                                : op{ that.op }
                                , term{ that.term }{}

template <String Name, typename Term> template <typename T> auto binary_expression<Name,Term>::term_t<T>::operator=(term_t const& that) -> term_t& {
                                op = that.op;
                                term = that.term;
                                return *this;}
template <String Name, typename Term> template <typename T> binary_expression<Name,Term>::term_t<T>::term_t(term_t&& that) noexcept
                                : op{ std::move(that).op }
                                , term{ std::move(that).term }{}
template <String Name, typename Term> template <typename T> auto binary_expression<Name,Term>::term_t<T>::operator=(term_t&& that) noexcept -> term_t& {
                                op = std::move(that).op;
                                term = std::move(that).term;
                                return *this;}
#line 746 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::get_terms() const& -> auto{
        if constexpr (std::is_same_v<Term,is_as_expression_node>) {
            std::vector<term_t<is_as_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,multiplicative_expression_node>) {
            std::vector<term_t<multiplicative_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,additive_expression_node>)        {
            std::vector<term_t<additive_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,shift_expression_node>)           {
            std::vector<term_t<shift_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,compare_expression_node>)         {
            std::vector<term_t<compare_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,relational_expression_node>)      {
            std::vector<term_t<relational_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,equality_expression_node>)        {
            std::vector<term_t<equality_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,bit_and_expression_node>)         {
            std::vector<term_t<bit_and_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,bit_xor_expression_node>)         {
            std::vector<term_t<bit_xor_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,bit_or_expression_node>)          {
            std::vector<term_t<bit_or_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,logical_and_expression_node>)     {
            std::vector<term_t<logical_and_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
        if constexpr (std::is_same_v<Term,logical_or_expression_node>)      {
            std::vector<term_t<logical_or_expression>> ret {}; 
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, "", CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this)));
            for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).terms ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
            return ret; 
        }
    }

#line 821 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::as_expression_list() const& -> expression_list { return { CPP2_UFCS(get_expression_list)((*cpp2::impl::assert_not_null((*this).n))), (*this) };  }
#line 822 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::as_literal() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_literal)(*cpp2::impl::assert_not_null((*this).n))))); }

    //  Get the postfix-expression, if that's the entire expression (not actually binary)
#line 825 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::get_if_only_a_postfix_expression() const& -> postfix_expression { return { CPP2_UFCS(get_if_only_a_postfix_expression_node)((*cpp2::impl::assert_not_null((*this).n))), (*this) };  }
    //  Get left-hand postfix-expression
#line 827 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::get_lhs_postfix_expression() const& -> postfix_expression { return { CPP2_UFCS(get_postfix_expression_node)((*cpp2::impl::assert_not_null((*this).n))), (*this) }; }
    //  Get first right-hand postfix-expression, if there is one
#line 829 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::get_second_postfix_expression() const& -> postfix_expression { return { CPP2_UFCS(get_second_postfix_expression_node)((*cpp2::impl::assert_not_null((*this).n))), (*this) }; }

#line 831 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::is_result_a_temporary_variable() const& -> bool { return CPP2_UFCS(is_result_a_temporary_variable)((*cpp2::impl::assert_not_null((*this).n))); }

#line 833 "source/reflect.h2"
    template <String Name, typename Term> [[nodiscard]] auto binary_expression<Name,Term>::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null((*this).n)));  }

    template <String Name, typename Term> binary_expression<Name,Term>::binary_expression(binary_expression const& that)
                                     : reflection_base<binary_expression_node<Name,Term>>{ static_cast<reflection_base<binary_expression_node<Name,Term>> const&>(that) }{}
template <String Name, typename Term> binary_expression<Name,Term>::binary_expression(binary_expression&& that) noexcept
                                     : reflection_base<binary_expression_node<Name,Term>>{ static_cast<reflection_base<binary_expression_node<Name,Term>>&&>(that) }{}

#line 837 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Expression list
//

#line 844 "source/reflect.h2"
    expression_list::expression_list(

        cpp2::impl::in<expression_list_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<expression_list_node>{ n_, s }
#line 849 "source/reflect.h2"
    {

    }

#line 853 "source/reflect.h2"
    [[nodiscard]] auto expression_list::is_empty() const& -> bool { return CPP2_UFCS(is_empty)((*cpp2::impl::assert_not_null(n))); }
#line 854 "source/reflect.h2"
    [[nodiscard]] auto expression_list::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null(n)));  }

#line 856 "source/reflect.h2"
    [[nodiscard]] auto expression_list::get_expressions() const& -> std::vector<expression>

    {
        std::vector<expression> ret {}; 
        for ( auto const& expr : CPP2_UFCS(get_expressions)((*cpp2::impl::assert_not_null(n))) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, expression(CPP2_UFCS(get)(expr.expr), (*this))));
        }
        return ret; 
    }

#line 866 "source/reflect.h2"
    [[nodiscard]] auto expression_list::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    expression_list::expression_list(expression_list const& that)
                                     : reflection_base<expression_list_node>{ static_cast<reflection_base<expression_list_node> const&>(that) }{}
expression_list::expression_list(expression_list&& that) noexcept
                                     : reflection_base<expression_list_node>{ static_cast<reflection_base<expression_list_node>&&>(that) }{}

#line 870 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Prefix expressions
//

#line 877 "source/reflect.h2"
    prefix_expression::prefix_expression(

        cpp2::impl::in<prefix_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<prefix_expression_node>{ n_, s }
#line 882 "source/reflect.h2"
    {

    }

#line 886 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::get_ops() const& -> std::vector<std::string>{
        std::vector<std::string> ret {}; 
        for ( auto const& op : (*cpp2::impl::assert_not_null(n)).ops ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(op)))));
        }
        return ret; 
    }

#line 894 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::get_postfix_expression() const& -> postfix_expression { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this) };  }

#line 896 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null(n))); }
#line 897 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null(n))); }
#line 898 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::is_id_expression() const& -> bool { return CPP2_UFCS(is_id_expression)((*cpp2::impl::assert_not_null(n))); }
#line 899 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::is_unqualified_id() const& -> bool { return CPP2_UFCS(is_unqualified_id)((*cpp2::impl::assert_not_null(n))); }
#line 900 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::is_expression_list() const& -> bool { return CPP2_UFCS(is_expression_list)((*cpp2::impl::assert_not_null(n))); }
#line 901 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::is_literal() const& -> bool { return CPP2_UFCS(is_literal)((*cpp2::impl::assert_not_null(n))); }
#line 902 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::is_result_a_temporary_variable() const& -> bool { return CPP2_UFCS(is_result_a_temporary_variable)((*cpp2::impl::assert_not_null(n)));  }

#line 904 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::as_expression_list() const& -> expression_list { return { CPP2_UFCS(get_expression_list)((*cpp2::impl::assert_not_null((*this).n))), (*this) };  }
#line 905 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::as_literal() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_literal)(*cpp2::impl::assert_not_null(n))))); }
#line 906 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::as_identifier() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_identifier)(*cpp2::impl::assert_not_null(n))))); }

#line 908 "source/reflect.h2"
    [[nodiscard]] auto prefix_expression::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null((*this).n)));  }

    prefix_expression::~prefix_expression() noexcept{}
prefix_expression::prefix_expression(prefix_expression const& that)
                                     : reflection_base<prefix_expression_node>{ static_cast<reflection_base<prefix_expression_node> const&>(that) }{}
prefix_expression::prefix_expression(prefix_expression&& that) noexcept
                                     : reflection_base<prefix_expression_node>{ static_cast<reflection_base<prefix_expression_node>&&>(that) }{}

#line 912 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Postfix expressions
//

#line 919 "source/reflect.h2"
    postfix_expression::postfix_expression(

        cpp2::impl::in<postfix_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<postfix_expression_node>{ n_, s }
#line 924 "source/reflect.h2"
    {

    }

#line 928 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::get_primary_expression() const& -> primary_expression { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null((*this).n)).expr), (*this) };  }

#line 934 "source/reflect.h2"
        postfix_expression::term_t::term_t(auto&& term, auto&& cs)
                                                            : term_{ CPP2_FORWARD(term) }
                                                            , cs_{ CPP2_FORWARD(cs) }{}

#line 936 "source/reflect.h2"
        [[nodiscard]] auto postfix_expression::term_t::get_op() const& -> std::string_view { return CPP2_UFCS(as_string_view)((*cpp2::impl::assert_not_null((*cpp2::impl::assert_not_null(term_)).op))); }

        //  If op is        More is contained in the        Notes
        //
        //  .               id_expression                   member selection
        //  [ (             expression_list                 subscript or function call
        //  ...             expression                      fold expression

#line 944 "source/reflect.h2"
        [[nodiscard]] auto postfix_expression::term_t::is_id_expression() const& -> bool { return CPP2_UFCS(get)((*cpp2::impl::assert_not_null(term_)).id_expr) != nullptr; }
#line 945 "source/reflect.h2"
        [[nodiscard]] auto postfix_expression::term_t::is_expression_list() const& -> bool { return CPP2_UFCS(get)((*cpp2::impl::assert_not_null(term_)).expr_list) != nullptr; }
#line 946 "source/reflect.h2"
        [[nodiscard]] auto postfix_expression::term_t::is_expression() const& -> bool { return CPP2_UFCS(get)((*cpp2::impl::assert_not_null(term_)).last_expr) != nullptr; }

#line 948 "source/reflect.h2"
        [[nodiscard]] auto postfix_expression::term_t::get_id_expression() const& -> id_expression { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null(term_)).id_expr), *cpp2::impl::assert_not_null(cs_) }; }
#line 949 "source/reflect.h2"
        [[nodiscard]] auto postfix_expression::term_t::get_expression_list() const& -> expression_list { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null(term_)).expr_list), *cpp2::impl::assert_not_null(cs_) };  }
#line 950 "source/reflect.h2"
        [[nodiscard]] auto postfix_expression::term_t::get_expression() const& -> expression { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null(term_)).last_expr), *cpp2::impl::assert_not_null(cs_) }; }

        postfix_expression::term_t::term_t(term_t const& that)
                                     : term_{ that.term_ }
                                     , cs_{ that.cs_ }{}
postfix_expression::term_t::term_t(term_t&& that) noexcept
                                     : term_{ std::move(that).term_ }
                                     , cs_{ std::move(that).cs_ }{}

#line 953 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::get_terms() const& -> auto{
        std::vector<term_t> ret {}; 
        for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).ops ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, &t, &(*this))); }
        return ret; 
    }

#line 959 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null(n)));  }
#line 960 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null(n))); }
#line 961 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::is_id_expression() const& -> bool { return CPP2_UFCS(is_id_expression)((*cpp2::impl::assert_not_null(n))); }
#line 962 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::is_unqualified_id() const& -> bool { return CPP2_UFCS(is_unqualified_id)((*cpp2::impl::assert_not_null(n)));  }
#line 963 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::is_expression_list() const& -> bool { return CPP2_UFCS(is_expression_list)((*cpp2::impl::assert_not_null(n)));  }
#line 964 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::is_literal() const& -> bool { return CPP2_UFCS(is_literal)((*cpp2::impl::assert_not_null(n))); }

#line 966 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::as_identifier() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_identifier)(*cpp2::impl::assert_not_null(n))))); }
#line 967 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::as_expression_list() const& -> expression_list { return { CPP2_UFCS(get_expression_list)((*cpp2::impl::assert_not_null((*this).n))), (*this) };  }
#line 968 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::as_literal() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_literal)(*cpp2::impl::assert_not_null(n))))); }

#line 970 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::get_first_token_ignoring_this() const& -> std::string_view{
        auto ptok {CPP2_UFCS(get_first_token_ignoring_this)((*cpp2::impl::assert_not_null(n)))}; 
        if (ptok) {return *cpp2::impl::assert_not_null(cpp2::move(ptok)); }
        return ""; 
    }

#line 976 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::starts_with_function_call_with_num_parameters(cpp2::impl::in<int> num) const& -> bool { return CPP2_UFCS(starts_with_function_call_with_n_parameters)((*cpp2::impl::assert_not_null(n)), num);  }
#line 977 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::is_result_a_temporary_variable() const& -> bool { return CPP2_UFCS(is_result_a_temporary_variable)((*cpp2::impl::assert_not_null(n))); }

#line 979 "source/reflect.h2"
    [[nodiscard]] auto postfix_expression::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    postfix_expression::postfix_expression(postfix_expression const& that)
                                     : reflection_base<postfix_expression_node>{ static_cast<reflection_base<postfix_expression_node> const&>(that) }{}
postfix_expression::postfix_expression(postfix_expression&& that) noexcept
                                     : reflection_base<postfix_expression_node>{ static_cast<reflection_base<postfix_expression_node>&&>(that) }{}

#line 983 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Template arguments
//

#line 990 "source/reflect.h2"
    template_arg::template_arg(

        cpp2::impl::in<template_argument*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<template_argument>{ n_, s }
#line 995 "source/reflect.h2"
    {

    }

#line 999 "source/reflect.h2"
    [[nodiscard]] auto template_arg::is_expression() const& -> bool { return CPP2_UFCS(is_expression)((*cpp2::impl::assert_not_null(n)));  }
#line 1000 "source/reflect.h2"
    [[nodiscard]] auto template_arg::is_type_id() const& -> bool { return CPP2_UFCS(is_type_id)((*cpp2::impl::assert_not_null(n))); }

#line 1002 "source/reflect.h2"
    [[nodiscard]] auto template_arg::as_expression() const& -> expression { return { CPP2_UFCS(get_expression)((*cpp2::impl::assert_not_null((*this).n))), (*this) };  }
#line 1003 "source/reflect.h2"
    [[nodiscard]] auto template_arg::as_type_id() const& -> type_id { return { CPP2_UFCS(get_type_id)((*cpp2::impl::assert_not_null((*this).n))), (*this) }; }

#line 1005 "source/reflect.h2"
    [[nodiscard]] auto template_arg::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    template_arg::template_arg(template_arg const& that)
                                     : reflection_base<template_argument>{ static_cast<reflection_base<template_argument> const&>(that) }{}
template_arg::template_arg(template_arg&& that) noexcept
                                     : reflection_base<template_argument>{ static_cast<reflection_base<template_argument>&&>(that) }{}

#line 1009 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Unqualified IDs
//

#line 1016 "source/reflect.h2"
    unqualified_id::unqualified_id(

        cpp2::impl::in<unqualified_id_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<unqualified_id_node>{ n_, s }
#line 1021 "source/reflect.h2"
    {

    }

#line 1025 "source/reflect.h2"
    [[nodiscard]] auto unqualified_id::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null(n))); }

#line 1027 "source/reflect.h2"
    [[nodiscard]] auto unqualified_id::get_identifier() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_identifier)(*cpp2::impl::assert_not_null(n)))));  }

    //get_template_args: (this) -> std::vector<template_arg> = {
    //    ret: std::vector<template_arg> = ();
    //    for this.n*.template_arguments() do (t) { _ = ret.emplace_back( t&, this ); }
    //    return ret;
    //}

#line 1035 "source/reflect.h2"
    [[nodiscard]] auto unqualified_id::as_token() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_token)(*cpp2::impl::assert_not_null(n)))));  }

#line 1037 "source/reflect.h2"
    [[nodiscard]] auto unqualified_id::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    unqualified_id::unqualified_id(unqualified_id const& that)
                                     : reflection_base<unqualified_id_node>{ static_cast<reflection_base<unqualified_id_node> const&>(that) }{}
unqualified_id::unqualified_id(unqualified_id&& that) noexcept
                                     : reflection_base<unqualified_id_node>{ static_cast<reflection_base<unqualified_id_node>&&>(that) }{}

#line 1041 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Qualified IDs
//

#line 1048 "source/reflect.h2"
    qualified_id::qualified_id(

        cpp2::impl::in<qualified_id_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<qualified_id_node>{ n_, s }
#line 1053 "source/reflect.h2"
    {

    }

#line 1061 "source/reflect.h2"
        qualified_id::term_t::term_t(auto&& o, auto&& ptr, auto&& cs)
                                                                      : op{ CPP2_FORWARD(o) }
                                                                      , unqualified{ CPP2_FORWARD(ptr), CPP2_FORWARD(cs) }{}

#line 1063 "source/reflect.h2"
        [[nodiscard]] auto qualified_id::term_t::get_op() const& -> std::string { return op; }
#line 1064 "source/reflect.h2"
        [[nodiscard]] auto qualified_id::term_t::get_unqualified() const& -> unqualified_id { return unqualified;  }

        qualified_id::term_t::term_t(term_t const& that)
                                     : op{ that.op }
                                     , unqualified{ that.unqualified }{}
qualified_id::term_t::term_t(term_t&& that) noexcept
                                     : op{ std::move(that).op }
                                     , unqualified{ std::move(that).unqualified }{}

#line 1067 "source/reflect.h2"
    [[nodiscard]] auto qualified_id::get_terms() const& -> auto{
        std::vector<term_t> ret {}; 
        for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).ids ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.scope_op), CPP2_UFCS(get)(t.id), (*this))); }
        return ret; 
    }

    //get_template_args: (this) -> std::vector<template_arg> = {
    //    ret: std::vector<template_arg> = ();
    //    for this.n*.template_arguments() do (t) { _ = ret.emplace_back( t&, this ); }
    //    return ret;
    //}

#line 1079 "source/reflect.h2"
    [[nodiscard]] auto qualified_id::as_token() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_token)(*cpp2::impl::assert_not_null(n)))));  }

#line 1081 "source/reflect.h2"
    [[nodiscard]] auto qualified_id::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    qualified_id::qualified_id(qualified_id const& that)
                                     : reflection_base<qualified_id_node>{ static_cast<reflection_base<qualified_id_node> const&>(that) }{}
qualified_id::qualified_id(qualified_id&& that) noexcept
                                     : reflection_base<qualified_id_node>{ static_cast<reflection_base<qualified_id_node>&&>(that) }{}

#line 1085 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Type IDs
//

#line 1092 "source/reflect.h2"
    type_id::type_id(

        cpp2::impl::in<type_id_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<type_id_node>{ n_, s }
#line 1097 "source/reflect.h2"
    {

    }

    //get_template_args: (this) -> std::vector<template_arg> = {
    //    ret: std::vector<template_arg> = ();
    //    for this.n*.template_arguments() do (t) { _ = ret.emplace_back( t&, this ); }
    //    return ret;
    //}

#line 1107 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_postfix_expression() const& -> bool { return CPP2_UFCS(is_postfix_expression)((*cpp2::impl::assert_not_null((*this).n)));  }
#line 1108 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_qualified_id() const& -> bool { return CPP2_UFCS(is_qualified_id)((*cpp2::impl::assert_not_null((*this).n))); }
#line 1109 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_unqualified_id() const& -> bool { return CPP2_UFCS(is_unqualified_id)((*cpp2::impl::assert_not_null((*this).n))); }
#line 1110 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_function_typeid() const& -> bool { return CPP2_UFCS(is_function_typeid)((*cpp2::impl::assert_not_null((*this).n))); }
#line 1111 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_keyword() const& -> bool { return CPP2_UFCS(is_keyword)((*cpp2::impl::assert_not_null((*this).n))); }
#line 1112 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_wildcard() const& -> bool { return CPP2_UFCS(is_wildcard)((*cpp2::impl::assert_not_null((*this).n))); }
#line 1113 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_pointer_qualified() const& -> bool { return CPP2_UFCS(is_pointer_qualified)((*cpp2::impl::assert_not_null((*this).n)));  }
#line 1114 "source/reflect.h2"
    [[nodiscard]] auto type_id::is_concept() const& -> bool { return CPP2_UFCS(is_concept)((*cpp2::impl::assert_not_null((*this).n))); }

#line 1116 "source/reflect.h2"
    [[nodiscard]] auto type_id::as_postfix_expression() const& -> postfix_expression { return { CPP2_UFCS(get_postfix_expression)((*cpp2::impl::assert_not_null(n))), (*this) };  }
#line 1117 "source/reflect.h2"
    [[nodiscard]] auto type_id::as_qualified_id() const& -> qualified_id { return { CPP2_UFCS(get_qualified_id)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1118 "source/reflect.h2"
    [[nodiscard]] auto type_id::as_unqualified_id() const& -> unqualified_id { return { CPP2_UFCS(get_unqualified_id)((*cpp2::impl::assert_not_null(n))), (*this) }; }
    // TODO
    //as_function_typeid   : (this) -> function_typeid    = (n*.get_function_typeid(),    this);
#line 1121 "source/reflect.h2"
    [[nodiscard]] auto type_id::as_keyword() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_keyword)(*cpp2::impl::assert_not_null(n))))); }
#line 1122 "source/reflect.h2"
    [[nodiscard]] auto type_id::as_token() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_token)(*cpp2::impl::assert_not_null(n))))); }

#line 1124 "source/reflect.h2"
    [[nodiscard]] auto type_id::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    type_id::type_id(type_id const& that)
                                     : reflection_base<type_id_node>{ static_cast<reflection_base<type_id_node> const&>(that) }{}
type_id::type_id(type_id&& that) noexcept
                                     : reflection_base<type_id_node>{ static_cast<reflection_base<type_id_node>&&>(that) }{}

#line 1128 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Primary expressions
//

#line 1135 "source/reflect.h2"
    primary_expression::primary_expression(

        cpp2::impl::in<primary_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<primary_expression_node>{ n_, s }
#line 1140 "source/reflect.h2"
    {

    }

    //get_template_args: (this) -> std::vector<template_arg> = {
    //    ret: std::vector<template_arg> = ();
    //    for this.n*.template_arguments() do (t) { _ = ret.emplace_back( t&, this ); }
    //    return ret;
    //}

#line 1150 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null(n)));  }
#line 1151 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null(n))); }
#line 1152 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::is_id_expression() const& -> bool { return CPP2_UFCS(is_id_expression)((*cpp2::impl::assert_not_null(n))); }
#line 1153 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::is_unqualified_id() const& -> bool { return CPP2_UFCS(is_unqualified_id)((*cpp2::impl::assert_not_null(n)));  }
#line 1154 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::is_expression_list() const& -> bool { return CPP2_UFCS(is_expression_list)((*cpp2::impl::assert_not_null(n)));  }
#line 1155 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::is_literal() const& -> bool { return CPP2_UFCS(is_literal)((*cpp2::impl::assert_not_null(n))); }
#line 1156 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::is_declaration() const& -> bool { return CPP2_UFCS(is_declaration)((*cpp2::impl::assert_not_null(n))); }

#line 1158 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::as_identifier() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_identifier)(*cpp2::impl::assert_not_null(n))))); }
#line 1159 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::as_expression_list() const& -> expression_list { return { CPP2_UFCS(get_expression_list)((*cpp2::impl::assert_not_null((*this).n))), (*this) };  }
#line 1160 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::as_literal() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_literal)(*cpp2::impl::assert_not_null(n))))); }
#line 1161 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::as_declaration() const& -> declaration { return { CPP2_UFCS(get_declaration)((*cpp2::impl::assert_not_null((*this).n))), (*this) }; }

#line 1163 "source/reflect.h2"
    [[nodiscard]] auto primary_expression::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    primary_expression::primary_expression(primary_expression const& that)
                                     : reflection_base<primary_expression_node>{ static_cast<reflection_base<primary_expression_node> const&>(that) }{}
primary_expression::primary_expression(primary_expression&& that) noexcept
                                     : reflection_base<primary_expression_node>{ static_cast<reflection_base<primary_expression_node>&&>(that) }{}

#line 1167 "source/reflect.h2"
//-----------------------------------------------------------------------
//  ID expression
//

#line 1174 "source/reflect.h2"
    id_expression::id_expression(

        cpp2::impl::in<id_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<id_expression_node>{ n_, s }
#line 1179 "source/reflect.h2"
    {

    }

    //get_template_args: (this) -> std::vector<template_arg> = {
    //    ret: std::vector<template_arg> = ();
    //    for this.n*.template_arguments() do (t) { _ = ret.emplace_back( t&, this ); }
    //    return ret;
    //}

#line 1189 "source/reflect.h2"
    [[nodiscard]] auto id_expression::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null(n))); }
#line 1190 "source/reflect.h2"
    [[nodiscard]] auto id_expression::is_empty() const& -> bool { return CPP2_UFCS(is_empty)((*cpp2::impl::assert_not_null(n))); }
#line 1191 "source/reflect.h2"
    [[nodiscard]] auto id_expression::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null(n))); }
#line 1192 "source/reflect.h2"
    [[nodiscard]] auto id_expression::is_qualified() const& -> bool { return CPP2_UFCS(is_qualified)((*cpp2::impl::assert_not_null(n))); }
#line 1193 "source/reflect.h2"
    [[nodiscard]] auto id_expression::is_unqualified() const& -> bool { return CPP2_UFCS(is_unqualified)((*cpp2::impl::assert_not_null(n))); }

#line 1195 "source/reflect.h2"
    [[nodiscard]] auto id_expression::as_identifier() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_identifier)(*cpp2::impl::assert_not_null(n))))); }
#line 1196 "source/reflect.h2"
    [[nodiscard]] auto id_expression::as_qualified() const& -> qualified_id { return { CPP2_UFCS(get_qualified_id)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1197 "source/reflect.h2"
    [[nodiscard]] auto id_expression::as_unqualified() const& -> unqualified_id { return { CPP2_UFCS(get_unqualified_id)((*cpp2::impl::assert_not_null(n))), (*this) }; }

#line 1199 "source/reflect.h2"
    [[nodiscard]] auto id_expression::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    id_expression::~id_expression() noexcept{}
id_expression::id_expression(id_expression const& that)
                                     : reflection_base<id_expression_node>{ static_cast<reflection_base<id_expression_node> const&>(that) }{}
id_expression::id_expression(id_expression&& that) noexcept
                                     : reflection_base<id_expression_node>{ static_cast<reflection_base<id_expression_node>&&>(that) }{}

#line 1203 "source/reflect.h2"
//-----------------------------------------------------------------------
//  General expression
//

#line 1210 "source/reflect.h2"
    expression::expression(

        cpp2::impl::in<expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<expression_node>{ n_, s }
#line 1215 "source/reflect.h2"
    {

    }

#line 1219 "source/reflect.h2"
    [[nodiscard]] auto expression::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null(n))); }
#line 1220 "source/reflect.h2"
    [[nodiscard]] auto expression::is_standalone_expression() const& -> bool { return CPP2_UFCS(is_standalone_expression)((*cpp2::impl::assert_not_null(n)));  }
#line 1221 "source/reflect.h2"
    [[nodiscard]] auto expression::subexpression_count() const& -> int { return CPP2_UFCS(subexpression_count)((*cpp2::impl::assert_not_null(n))); }
#line 1222 "source/reflect.h2"
    [[nodiscard]] auto expression::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null(n))); }
#line 1223 "source/reflect.h2"
    [[nodiscard]] auto expression::is_id_expression() const& -> bool { return CPP2_UFCS(is_id_expression)((*cpp2::impl::assert_not_null(n))); }
#line 1224 "source/reflect.h2"
    [[nodiscard]] auto expression::is_unqualified_id() const& -> bool { return CPP2_UFCS(is_unqualified_id)((*cpp2::impl::assert_not_null(n))); }
#line 1225 "source/reflect.h2"
    [[nodiscard]] auto expression::is_expression_list() const& -> bool { return CPP2_UFCS(is_expression_list)((*cpp2::impl::assert_not_null(n))); }
#line 1226 "source/reflect.h2"
    [[nodiscard]] auto expression::is_empty_expression_list() const& -> bool { return CPP2_UFCS(is_empty_expression_list)((*cpp2::impl::assert_not_null(n)));  }
#line 1227 "source/reflect.h2"
    [[nodiscard]] auto expression::is_literal() const& -> bool { return CPP2_UFCS(is_literal)((*cpp2::impl::assert_not_null(n))); }
#line 1228 "source/reflect.h2"
    [[nodiscard]] auto expression::is_assignment_expression() const& -> bool { return CPP2_UFCS(is_assignment_expression)((*cpp2::impl::assert_not_null(n)));  }

#line 1230 "source/reflect.h2"
    [[nodiscard]] auto expression::is_simple_assignment() const& -> bool{
        auto ret {CPP2_UFCS(get_lhs_rhs_if_simple_assignment)((*cpp2::impl::assert_not_null(n)))}; 
        return ret.lhs && ret.rhs; 
    }

#line 1235 "source/reflect.h2"
    [[nodiscard]] auto expression::get_lhs_rhs_if_simple_assignment() const& -> get_lhs_rhs_if_simple_assignment_ret

#line 1240 "source/reflect.h2"
    {
            cpp2::impl::deferred_init<postfix_expression> lhs;
            cpp2::impl::deferred_init<logical_or_expression> rhs;
#line 1241 "source/reflect.h2"
        auto ret {CPP2_UFCS(get_lhs_rhs_if_simple_assignment)((*cpp2::impl::assert_not_null(n)))}; 
        lhs.construct(ret.lhs, (*this));
        rhs.construct(cpp2::move(ret).rhs, (*this));
    return  { std::move(lhs.value()), std::move(rhs.value()) }; }

#line 1246 "source/reflect.h2"
    [[nodiscard]] auto expression::as_assignment_expression() const& -> assignment_expression { return { CPP2_UFCS(get_assignment_expression)((*cpp2::impl::assert_not_null(n))), (*this) };  }
#line 1247 "source/reflect.h2"
    [[nodiscard]] auto expression::as_expression_list() const& -> expression_list { return { CPP2_UFCS(get_expression_list)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1248 "source/reflect.h2"
    [[nodiscard]] auto expression::as_literal() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_literal)(*cpp2::impl::assert_not_null(n))))); }

#line 1250 "source/reflect.h2"
    [[nodiscard]] auto expression::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    expression::~expression() noexcept{}
expression::expression(expression const& that)
                                     : reflection_base<expression_node>{ static_cast<reflection_base<expression_node> const&>(that) }{}
expression::expression(expression&& that) noexcept
                                     : reflection_base<expression_node>{ static_cast<reflection_base<expression_node>&&>(that) }{}

#line 1254 "source/reflect.h2"
//-----------------------------------------------------------------------
//  is_as_expression
//

#line 1261 "source/reflect.h2"
    is_as_expression::is_as_expression(

        cpp2::impl::in<is_as_expression_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<is_as_expression_node>{ n_, s }
#line 1266 "source/reflect.h2"
    {

    }

#line 1274 "source/reflect.h2"
        is_as_expression::term_t::term_t(auto&& o, auto&& ptr, auto&& cs)
                                                                      : op{ CPP2_FORWARD(o) }
                                                                      , expr{ CPP2_FORWARD(ptr), CPP2_FORWARD(cs) }{}

#line 1276 "source/reflect.h2"
        [[nodiscard]] auto is_as_expression::term_t::get_op() const& -> std::string { return op; }
#line 1277 "source/reflect.h2"
        [[nodiscard]] auto is_as_expression::term_t::get_expr() const& -> expression { return expr; }

        is_as_expression::term_t::term_t(term_t const& that)
                                     : op{ that.op }
                                     , expr{ that.expr }{}
is_as_expression::term_t::term_t(term_t&& that) noexcept
                                     : op{ std::move(that).op }
                                     , expr{ std::move(that).expr }{}

#line 1280 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::get_expression() const& -> prefix_expression { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null(n)).expr), (*this) };  }

#line 1282 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::get_terms() const& -> auto{
        std::vector<term_t> ret {}; 
        for ( auto const& t : (*cpp2::impl::assert_not_null((*this).n)).ops ) {static_cast<void>(CPP2_UFCS(emplace_back)(ret, *cpp2::impl::assert_not_null(t.op), CPP2_UFCS(get)(t.expr), (*this))); }
        return ret; 
    }

#line 1288 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::is_fold_expression() const& -> bool { return CPP2_UFCS(is_fold_expression)((*cpp2::impl::assert_not_null((*this).n)));  }
#line 1289 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::is_identifier() const& -> bool { return CPP2_UFCS(is_identifier)((*cpp2::impl::assert_not_null((*this).n))); }
#line 1290 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::is_id_expression() const& -> bool { return CPP2_UFCS(is_id_expression)((*cpp2::impl::assert_not_null((*this).n))); }
#line 1291 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::is_unqualified_id() const& -> bool { return CPP2_UFCS(is_unqualified_id)((*cpp2::impl::assert_not_null((*this).n)));  }
#line 1292 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::is_expression_list() const& -> bool { return CPP2_UFCS(is_expression_list)((*cpp2::impl::assert_not_null((*this).n)));  }
#line 1293 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::is_literal() const& -> bool { return CPP2_UFCS(is_literal)((*cpp2::impl::assert_not_null((*this).n))); }

#line 1295 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::as_expression_list() const& -> expression_list { return { CPP2_UFCS(get_expression_list)((*cpp2::impl::assert_not_null((*this).n))), (*this) };  }
#line 1296 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::as_literal() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_literal)(*cpp2::impl::assert_not_null(n))))); }

#line 1298 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::get_identifier() const& -> std::string_view{
        auto ptok {CPP2_UFCS(get_identifier)((*cpp2::impl::assert_not_null((*this).n)))}; 
        if (ptok) {return *cpp2::impl::assert_not_null(cpp2::move(ptok)); }
        return ""; 
    }

#line 1304 "source/reflect.h2"
    [[nodiscard]] auto is_as_expression::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null((*this).n)));  }

    is_as_expression::~is_as_expression() noexcept{}
is_as_expression::is_as_expression(is_as_expression const& that)
                                     : reflection_base<is_as_expression_node>{ static_cast<reflection_base<is_as_expression_node> const&>(that) }{}
is_as_expression::is_as_expression(is_as_expression&& that) noexcept
                                     : reflection_base<is_as_expression_node>{ static_cast<reflection_base<is_as_expression_node>&&>(that) }{}

#line 1308 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  Statements
//
//-----------------------------------------------------------------------
//

//-----------------------------------------------------------------------
//  General statement
//

#line 1322 "source/reflect.h2"
    statement::statement(

        cpp2::impl::in<statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<statement_node>{ n_, s }
#line 1327 "source/reflect.h2"
    {

    }

#line 1331 "source/reflect.h2"
    [[nodiscard]] auto statement::get_parameters() const& -> std::vector<parameter_declaration>

    {
        std::vector<parameter_declaration> ret {}; 
        for ( auto const& param : CPP2_UFCS(get_parameters)((*cpp2::impl::assert_not_null(n))) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, param, (*this)));
        }
        return ret; 
    }

#line 1341 "source/reflect.h2"
    [[nodiscard]] auto statement::is_expression_statement() const& -> bool { return CPP2_UFCS(is_expression)((*cpp2::impl::assert_not_null(n)));  }
#line 1342 "source/reflect.h2"
    [[nodiscard]] auto statement::is_compound_statement() const& -> bool { return CPP2_UFCS(is_compound)((*cpp2::impl::assert_not_null(n))); }
#line 1343 "source/reflect.h2"
    [[nodiscard]] auto statement::is_selection_statement() const& -> bool { return CPP2_UFCS(is_selection)((*cpp2::impl::assert_not_null(n))); }
#line 1344 "source/reflect.h2"
    [[nodiscard]] auto statement::is_declaration() const& -> bool { return CPP2_UFCS(is_declaration)((*cpp2::impl::assert_not_null(n))); }
#line 1345 "source/reflect.h2"
    [[nodiscard]] auto statement::is_return_statement() const& -> bool { return CPP2_UFCS(is_return)((*cpp2::impl::assert_not_null(n))); }
#line 1346 "source/reflect.h2"
    [[nodiscard]] auto statement::is_iteration_statement() const& -> bool { return CPP2_UFCS(is_iteration)((*cpp2::impl::assert_not_null(n))); }
#line 1347 "source/reflect.h2"
    [[nodiscard]] auto statement::is_using_statement() const& -> bool { return CPP2_UFCS(is_using)((*cpp2::impl::assert_not_null(n))); }
#line 1348 "source/reflect.h2"
    [[nodiscard]] auto statement::is_contract() const& -> bool { return CPP2_UFCS(is_contract)((*cpp2::impl::assert_not_null(n))); }
#line 1349 "source/reflect.h2"
    [[nodiscard]] auto statement::is_inspect_expression() const& -> bool { return CPP2_UFCS(is_inspect)((*cpp2::impl::assert_not_null(n))); }
#line 1350 "source/reflect.h2"
    [[nodiscard]] auto statement::is_jump_statement() const& -> bool { return CPP2_UFCS(is_jump)((*cpp2::impl::assert_not_null(n))); }

#line 1352 "source/reflect.h2"
    [[nodiscard]] auto statement::as_expression_statement() const& -> expression_statement { return { CPP2_UFCS_TEMPLATE(get_if<expression_statement_node>)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1353 "source/reflect.h2"
    [[nodiscard]] auto statement::as_compound_statement() const& -> compound_statement { return { CPP2_UFCS_TEMPLATE(get_if<compound_statement_node>)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1354 "source/reflect.h2"
    [[nodiscard]] auto statement::as_selection_statement() const& -> selection_statement { return selection_statement(CPP2_UFCS_TEMPLATE(get_if<selection_statement_node>)((*cpp2::impl::assert_not_null(n))), (*this)); }
#line 1355 "source/reflect.h2"
    [[nodiscard]] auto statement::as_declaration() const& -> declaration { return declaration(CPP2_UFCS_TEMPLATE(get_if<declaration_node>)((*cpp2::impl::assert_not_null(n))), (*this)); }
#line 1356 "source/reflect.h2"
    [[nodiscard]] auto statement::as_return_statement() const& -> return_statement { return return_statement(CPP2_UFCS_TEMPLATE(get_if<return_statement_node>)((*cpp2::impl::assert_not_null(n))), (*this)); }
#line 1357 "source/reflect.h2"
    [[nodiscard]] auto statement::as_iteration_statement() const& -> iteration_statement { return iteration_statement(CPP2_UFCS_TEMPLATE(get_if<iteration_statement_node>)((*cpp2::impl::assert_not_null(n))), (*this)); }
    //as_using_statement      : (this) -> using_statement       = using_statement      (n*.get_if<using_statement_node>(), this);
    //as_contract             : (this) -> contract              = contract             (n*.get_if<contract_node>(), this);
    //as_inspect_expression   : (this) -> inspect_expression    = inspect_expression   (n*.get_if<inspect_expression_node>(), this);
    //as_jump_statement       : (this) -> jump_statement        = jump_statement       (n*.get_if<jump_statement_node>(), this);

#line 1363 "source/reflect.h2"
    [[nodiscard]] auto statement::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n)));  }

    statement::~statement() noexcept{}
statement::statement(statement const& that)
                                     : reflection_base<statement_node>{ static_cast<reflection_base<statement_node> const&>(that) }{}
statement::statement(statement&& that) noexcept
                                     : reflection_base<statement_node>{ static_cast<reflection_base<statement_node>&&>(that) }{}

#line 1367 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Expression statements
//

#line 1374 "source/reflect.h2"
    expression_statement::expression_statement(

        cpp2::impl::in<expression_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<expression_statement_node>{ n_, s }
#line 1379 "source/reflect.h2"
    {

    }

#line 1383 "source/reflect.h2"
    [[nodiscard]] auto expression_statement::get_expression() const& -> expression { return { CPP2_UFCS(get)((*cpp2::impl::assert_not_null(n)).expr), (*this) }; }

#line 1385 "source/reflect.h2"
    [[nodiscard]] auto expression_statement::to_string() const& -> std::string { return CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(n))); }

    expression_statement::expression_statement(expression_statement const& that)
                                     : reflection_base<expression_statement_node>{ static_cast<reflection_base<expression_statement_node> const&>(that) }{}
expression_statement::expression_statement(expression_statement&& that) noexcept
                                     : reflection_base<expression_statement_node>{ static_cast<reflection_base<expression_statement_node>&&>(that) }{}

#line 1389 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Compound statements
//

#line 1396 "source/reflect.h2"
    compound_statement::compound_statement(

        cpp2::impl::in<compound_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<compound_statement_node>{ n_, s }
#line 1401 "source/reflect.h2"
    {

    }

#line 1405 "source/reflect.h2"
    [[nodiscard]] auto compound_statement::get_statements() const& -> std::vector<statement>

    {
        std::vector<statement> ret {}; 
        for ( auto const& stmt : CPP2_UFCS(get_statements)((*cpp2::impl::assert_not_null(n))) ) {
            static_cast<void>(CPP2_UFCS(emplace_back)(ret, stmt, (*this)));
        }
        return ret; 
    }

#line 1415 "source/reflect.h2"
    auto compound_statement::add_statement(cpp2::impl::in<std::string_view> source, cpp2::impl::in<int> before_position) & -> void
    {
        auto stmt {parse_statement(source)}; 
        if (!((cpp2::impl::as_<bool>(stmt)))) {
            error("the provided source string is not a valid statement");
            return ; 
        }
        require(CPP2_UFCS(add_statement)((*cpp2::impl::assert_not_null(n)), std::move(cpp2::move(stmt)), before_position), 
                 std::string("unexpected error while attempting to add statement:\n") + source);
    }

    compound_statement::compound_statement(compound_statement const& that)
                                     : reflection_base<compound_statement_node>{ static_cast<reflection_base<compound_statement_node> const&>(that) }{}
compound_statement::compound_statement(compound_statement&& that) noexcept
                                     : reflection_base<compound_statement_node>{ static_cast<reflection_base<compound_statement_node>&&>(that) }{}

#line 1428 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Selection statements
//

#line 1435 "source/reflect.h2"
    selection_statement::selection_statement(

        cpp2::impl::in<selection_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<selection_statement_node>{ n_, s }
#line 1440 "source/reflect.h2"
    {

    }

#line 1444 "source/reflect.h2"
    [[nodiscard]] auto selection_statement::has_false_branch_in_source_code() const& -> bool { return CPP2_UFCS(has_false_branch_in_source_code)((*cpp2::impl::assert_not_null(n)));  }
#line 1445 "source/reflect.h2"
    [[nodiscard]] auto selection_statement::has_false_branch() const& -> bool { return CPP2_UFCS(has_false_branch)((*cpp2::impl::assert_not_null(n))); }

#line 1447 "source/reflect.h2"
    [[nodiscard]] auto selection_statement::get_identifier() const& -> std::string_view { return CPP2_UFCS(as_string_view)((*cpp2::impl::assert_not_null(CPP2_UFCS(get_identifier)(*cpp2::impl::assert_not_null(n))))); }
#line 1448 "source/reflect.h2"
    [[nodiscard]] auto selection_statement::get_expression() const& -> logical_or_expression { return { CPP2_UFCS(get_expression)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1449 "source/reflect.h2"
    [[nodiscard]] auto selection_statement::get_true_branch() const& -> compound_statement { return { CPP2_UFCS(get_true_branch)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1450 "source/reflect.h2"
    [[nodiscard]] auto selection_statement::get_false_branch() const& -> compound_statement { return { CPP2_UFCS(get_false_branch)((*cpp2::impl::assert_not_null(n))), (*this) }; }

    selection_statement::selection_statement(selection_statement const& that)
                                     : reflection_base<selection_statement_node>{ static_cast<reflection_base<selection_statement_node> const&>(that) }{}
selection_statement::selection_statement(selection_statement&& that) noexcept
                                     : reflection_base<selection_statement_node>{ static_cast<reflection_base<selection_statement_node>&&>(that) }{}

#line 1454 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Return statements
//

#line 1461 "source/reflect.h2"
    return_statement::return_statement(

        cpp2::impl::in<return_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<return_statement_node>{ n_, s }
#line 1466 "source/reflect.h2"
    {

    }

#line 1470 "source/reflect.h2"
    [[nodiscard]] auto return_statement::has_expression() const& -> bool { return CPP2_UFCS(has_expression)((*cpp2::impl::assert_not_null(n))); }

#line 1472 "source/reflect.h2"
    [[nodiscard]] auto return_statement::get_expression() const& -> expression { return { CPP2_UFCS(get_expression)((*cpp2::impl::assert_not_null(n))), (*this) };  }

    return_statement::return_statement(return_statement const& that)
                                     : reflection_base<return_statement_node>{ static_cast<reflection_base<return_statement_node> const&>(that) }{}
return_statement::return_statement(return_statement&& that) noexcept
                                     : reflection_base<return_statement_node>{ static_cast<reflection_base<return_statement_node>&&>(that) }{}

#line 1476 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Iteration statements - for, do, while
//

#line 1483 "source/reflect.h2"
    iteration_statement::iteration_statement(

        cpp2::impl::in<iteration_statement_node*> n_, 
        cpp2::impl::in<compiler_services> s
    )
        : reflection_base<iteration_statement_node>{ n_, s }
#line 1488 "source/reflect.h2"
    {

    }

#line 1492 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::is_do() const& -> bool { return CPP2_UFCS(is_do)((*cpp2::impl::assert_not_null(n))); }
#line 1493 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::is_while() const& -> bool { return CPP2_UFCS(is_while)((*cpp2::impl::assert_not_null(n)));  }
#line 1494 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::is_for() const& -> bool { return CPP2_UFCS(is_for)((*cpp2::impl::assert_not_null(n))); }
#line 1495 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::has_next() const& -> bool { return CPP2_UFCS(has_next)((*cpp2::impl::assert_not_null(n)));  }

#line 1497 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::get_label() const& -> std::string { return CPP2_UFCS(to_string)(CPP2_UFCS(get_label)((*cpp2::impl::assert_not_null(n)))); }
#line 1498 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::get_next_expression() const& -> assignment_expression { return { CPP2_UFCS(get_next_expression)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1499 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::get_do_while_condition() const& -> logical_or_expression { return { CPP2_UFCS(get_do_while_condition)((*cpp2::impl::assert_not_null(n))), (*this) };  }
#line 1500 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::get_do_while_body() const& -> compound_statement { return { CPP2_UFCS(get_do_while_body)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1501 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::get_for_range() const& -> expression { return { CPP2_UFCS(get_for_range)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1502 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::get_for_parameter() const& -> parameter_declaration { return { CPP2_UFCS(get_for_parameter)((*cpp2::impl::assert_not_null(n))), (*this) }; }
#line 1503 "source/reflect.h2"
    [[nodiscard]] auto iteration_statement::get_for_body() const& -> statement { return { CPP2_UFCS(get_for_body)((*cpp2::impl::assert_not_null(n))), (*this) }; }

    iteration_statement::iteration_statement(iteration_statement const& that)
                                     : reflection_base<iteration_statement_node>{ static_cast<reflection_base<iteration_statement_node> const&>(that) }{}
iteration_statement::iteration_statement(iteration_statement&& that) noexcept
                                     : reflection_base<iteration_statement_node>{ static_cast<reflection_base<iteration_statement_node>&&>(that) }{}

#line 1507 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  Metafunctions - these are hardwired for now until we get to the
//  step of writing a Cpp2 interpreter to run inside the compiler
//
//-----------------------------------------------------------------------
//

//-----------------------------------------------------------------------
//  Some common metafunction helpers (metafunctions are just functions,
//  so they can be factored as usual)
//
#line 1519 "source/reflect.h2"
auto add_virtual_destructor(meta::type_declaration& t) -> void
{
    CPP2_UFCS(add_member)(t, "operator=: (virtual move this) = { }");
}

#line 1525 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//      "... an abstract base class defines an interface ..."
//
//          -- Stroustrup (The Design and Evolution of C++, 12.3.1)
//
//-----------------------------------------------------------------------
//
//  interface
//
//  an abstract base class having only pure virtual named functions,
//  a public default constructor, a public virtual destructor, and
//  protected copy/move operations
//
#line 1539 "source/reflect.h2"
auto interface(meta::type_declaration& t) -> void
{
    auto has_dtor {false}; 

    for ( auto& m : CPP2_UFCS(get_members)(t) ) 
    {
        CPP2_UFCS(require)(m, !(CPP2_UFCS(is_object)(m)), 
                   "interfaces may not contain data objects");
        if (CPP2_UFCS(is_function)(m)) {
            auto mf {CPP2_UFCS(as_function)(m)}; 
            CPP2_UFCS(require)(mf, !(CPP2_UFCS(is_copy_or_move)(mf)), 
                        "interfaces may not copy or move; consider a virtual clone() instead");
            CPP2_UFCS(require)(mf, !(CPP2_UFCS(has_initializer)(mf)), 
                        "interface functions must not have a function body; remove the '=' initializer");
            CPP2_UFCS(require)(mf, CPP2_UFCS(make_public)(mf), 
                        "interface functions must be public");
            CPP2_UFCS(default_to_virtual)(mf);
            has_dtor |= CPP2_UFCS(is_destructor)(cpp2::move(mf));
        }
    }

    //  Add public default constructor + protected copy/move operations
    CPP2_UFCS(add_member)(t, "operator=: (out this) = { }");
    CPP2_UFCS(add_member)(t, "protected operator=: (out this, that) = { }");

    //  Add public virtual destructor
    if (!(cpp2::move(has_dtor))) {
        CPP2_UFCS(add_virtual_destructor)(t);
    }
}

#line 1571 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//     "C.35: A base class destructor should be either public and
//      virtual, or protected and non-virtual."
//
//          -- Stroustrup, Sutter, et al. (C++ Core Guidelines)
//
//-----------------------------------------------------------------------
//
//  polymorphic_base
//
//  A polymorphic base type whose destructor is either public and virtual
//  or else protected and nonvirtual.
//
//  Unlike an interface, it can have nonpublic and nonvirtual functions.
//
#line 1587 "source/reflect.h2"
auto polymorphic_base(meta::type_declaration& t) -> void
{
    auto has_dtor {false}; 

    for ( auto& mf : CPP2_UFCS(get_member_functions)(t) ) 
    {
        if (CPP2_UFCS(is_default_access)(mf)) {
            CPP2_UFCS(default_to_public)(mf);
        }
        CPP2_UFCS(require)(mf, !(CPP2_UFCS(is_copy_or_move)(mf)), 
                    "polymorphic base types may not copy or move; consider a virtual clone() instead");
        if (CPP2_UFCS(is_destructor)(mf)) {
            has_dtor = true;
            CPP2_UFCS(require)(mf, ((CPP2_UFCS(is_public)(mf) || CPP2_UFCS(is_default_access)(mf)) && CPP2_UFCS(is_virtual)(mf)) 
                        || (CPP2_UFCS(is_protected)(mf) && !(CPP2_UFCS(is_virtual)(mf))), 
                        "a polymorphic base type destructor must be public and virtual, or protected and nonvirtual");
        }
    }

    if (!(cpp2::move(has_dtor))) {
        CPP2_UFCS(add_virtual_destructor)(t);
    }
}

#line 1612 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//     "... A totally ordered type ... requires operator<=> that
//      returns std::strong_ordering. If the function is not
//      user-written, a lexicographical memberwise implementation
//      is generated by default..."
//
//          -- P0707R4, section 3
//
//      Note: This feature derived from Cpp2 was already adopted
//            into Standard C++ via paper P0515, so most of the
//            heavy lifting is done by the Cpp1 C++20/23 compiler,
//            including the memberwise default semantics
//            (In contrast, cppfront has to do the work itself for
//            default memberwise semantics for operator= assignment
//            as those aren't yet part of Standard C++)
//
//-----------------------------------------------------------------------
//

#line 1632 "source/reflect.h2"
auto ordered_impl(
    meta::type_declaration& t, 
    cpp2::impl::in<std::string_view> ordering// must be "strong_ordering" etc.
) -> void
{
    auto has_spaceship {false}; 

    for ( auto& mf : CPP2_UFCS(get_member_functions)(t) ) 
    {
        if (CPP2_UFCS(has_name)(mf, "operator<=>")) {
            has_spaceship = true;
            auto return_name {CPP2_UFCS(get_unnamed_return_type)(mf)}; 
            if (CPP2_UFCS(find)(return_name, ordering) == return_name.npos) 
            {
                CPP2_UFCS(error)(mf, "operator<=> must return std::" + cpp2::impl::as_<std::string>(ordering));
            }
        }
    }

    if (!(cpp2::move(has_spaceship))) {
        CPP2_UFCS(add_member)(t, "operator<=>: (this, that) -> std::" + (cpp2::impl::as_<std::string>(ordering)) + ";");
    }
}

//-----------------------------------------------------------------------
//  ordered - a totally ordered type
//
//  Note: the ordering that should be encouraged as default gets the nice name
//
#line 1661 "source/reflect.h2"
auto ordered(meta::type_declaration& t) -> void
{
    ordered_impl(t, "strong_ordering");
}

//-----------------------------------------------------------------------
//  weakly_ordered - a weakly ordered type
//
#line 1669 "source/reflect.h2"
auto weakly_ordered(meta::type_declaration& t) -> void
{
    ordered_impl(t, "weak_ordering");
}

//-----------------------------------------------------------------------
//  partially_ordered - a partially ordered type
//
#line 1677 "source/reflect.h2"
auto partially_ordered(meta::type_declaration& t) -> void
{
    ordered_impl(t, "partial_ordering");
}

#line 1683 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//     "A value is ... a regular type. It must have all public
//      default construction, copy/move construction/assignment,
//      and destruction, all of which are generated by default
//      if not user-written; and it must not have any protected
//      or virtual functions (including the destructor)."
//
//          -- P0707R4, section 3
//
//-----------------------------------------------------------------------
//
//  copyable
//
//  A type with (copy and move) x (construction and assignment)
//
#line 1699 "source/reflect.h2"
auto copyable(meta::type_declaration& t) -> void
{
    //  If the user explicitly wrote any of the copy/move functions,
    //  they must also have written the most general one - we can't
    //  assume we can safely generate it for them since they've opted
    //  into customized semantics
    auto smfs {CPP2_UFCS(query_declared_value_set_functions)(t)}; 
    if ( !(smfs.out_this_in_that) 
        && (
            smfs.out_this_move_that 
            || smfs.inout_this_in_that 
            || smfs.inout_this_move_that)) 

    {
        CPP2_UFCS(error)(t, 
            "this type is partially copyable/movable - when you provide "
            "any of the more-specific operator= signatures, you must also provide "
            "the one with the general signature (out this, that); alternatively, "
            "consider removing all the operator= functions and let them all be "
            "generated for you with default memberwise semantics"
        );
    }
    else {if (!(cpp2::move(smfs).out_this_in_that)) {
        CPP2_UFCS(add_member)(t, "operator=: (out this, that) = { }");
    }}
}

#line 1727 "source/reflect.h2"
//  copy_constructible
//
//  A type with (copy and move) construction
//
#line 1731 "source/reflect.h2"
auto copy_constructible(meta::type_declaration& t) -> void
{
    //  If the user explicitly wrote any of the copy/move constructors,
    //  they must also have written the most general one - we can't
    //  assume we can safely generate it for them since they've opted
    //  into customized semantics
    auto smfs {CPP2_UFCS(query_declared_value_set_functions)(t)}; 
    if ( !(smfs.out_this_in_that) 
        && smfs.out_this_move_that) 
    {
        CPP2_UFCS(error)(t, 
            "this type is partially copy/move constructible - when you provide "
            "the (out this, move that) operator= signature, you must also provide "
            "the one with the general signature (out this, that)"
        );
    }
    else {if (
        !(smfs.out_this_in_that) 
        && !(smfs.out_this_move_that)) 
    {
        CPP2_UFCS(add_member)(t, "operator=: (out this,      that) = { }");
        CPP2_UFCS(add_member)(t, "operator=: (out this, move that) = { }");
    }}
}

#line 1757 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  hashable
//
//  A memberwise hashable type
//
#line 1763 "source/reflect.h2"
auto hashable(meta::type_declaration& t) -> void
{
    CPP2_UFCS(require)(t, !(CPP2_UFCS(empty)(CPP2_UFCS(get_member_objects)(t))), 
               "a hashable type must have at least one data member");

    std::string hash {"    hash: (this) -> size_t = {\n"
                        "        ret: size_t = 0;"}; 

    for ( 
          auto const& o : CPP2_UFCS(get_member_objects)(t) ) 
    {
        cpp2::impl::deferred_init<std::string> o_hash; 
        if (CPP2_UFCS(name)(o) == "this") {
            o_hash.construct("" + cpp2::to_string(CPP2_UFCS(type)(o)) + "::hash()");
        }
        else {
            o_hash.construct("std::hash<" + cpp2::to_string(CPP2_UFCS(type)(o)) + ">()(" + cpp2::to_string(CPP2_UFCS(name)(o)) + ")");
        }

        hash += "\n        cpp2::hash_combine( ret, " + cpp2::to_string(cpp2::move(o_hash.value())) + " );";
    }

    CPP2_UFCS(add_member)(t, cpp2::move(hash) + "\n        return ret;\n    }");
}

#line 1789 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  basic_value
//
//  A regular type: copyable, plus has public default construction
//  and no protected or virtual functions
//
#line 1796 "source/reflect.h2"
auto basic_value(meta::type_declaration& t) -> void
{
    CPP2_UFCS(copyable)(t);

    auto has_default_ctor {false}; 
    for ( auto& mf : CPP2_UFCS(get_member_functions)(t) ) {
        has_default_ctor |= CPP2_UFCS(is_default_constructor)(mf);
        CPP2_UFCS(require)(mf, !(CPP2_UFCS(is_protected)(mf)) && !(CPP2_UFCS(is_virtual)(mf)), 
                    "a value type may not have a protected or virtual function");
        CPP2_UFCS(require)(mf, !(CPP2_UFCS(is_destructor)(mf)) || CPP2_UFCS(is_public)(mf) || CPP2_UFCS(is_default_access)(mf), 
                    "a value type may not have a non-public destructor");
    }

    if (!(cpp2::move(has_default_ctor))) {
        CPP2_UFCS(add_member)(t, "operator=: (out this) = { }");
    }
}

//-----------------------------------------------------------------------
//
//     "A 'value' is a totally ordered basic_value..."
//
//          -- P0707R4, section 3
//
//  value - a value type that is totally ordered
//
//  Note: the ordering that should be encouraged as default gets the nice name
//
#line 1824 "source/reflect.h2"
auto value(meta::type_declaration& t) -> void
{
    CPP2_UFCS(ordered)(t);
    CPP2_UFCS(basic_value)(t);
}

#line 1830 "source/reflect.h2"
auto weakly_ordered_value(meta::type_declaration& t) -> void
{
    CPP2_UFCS(weakly_ordered)(t);
    CPP2_UFCS(basic_value)(t);
}

#line 1836 "source/reflect.h2"
auto partially_ordered_value(meta::type_declaration& t) -> void
{
    CPP2_UFCS(partially_ordered)(t);
    CPP2_UFCS(basic_value)(t);
}

#line 1843 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//     C.20: If you can avoid defining default operations, do
//
//     ##### Reason
//
//     It's the simplest and gives the cleanest semantics.
//
//     ...
//
//     This is known as "the rule of zero".
//
//          -- C++ Core Guidelines
//             C.20: If you can avoid defining any default operations, do
//             <https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines#Rc-zero>
//
//-----------------------------------------------------------------------
//
//  cpp1_rule_of_zero
//
//  a type without declared copy/move/destructor functions
//
#line 1865 "source/reflect.h2"
auto cpp1_rule_of_zero(meta::type_declaration& t) -> void
{
    for ( auto& mf : CPP2_UFCS(get_member_functions)(t) ) 
    {
        CPP2_UFCS(require)(t, !(CPP2_UFCS(is_constructor_with_that)(mf)) 
                   && !(CPP2_UFCS(is_assignment_with_that)(mf)) 
                   && !(CPP2_UFCS(is_destructor)(mf)), 
                   "the rule of zero requires no copy/move/destructor functions");
    }
    CPP2_UFCS(disable_member_function_generation)(t);
}

//-----------------------------------------------------------------------
//
//     "By definition, a `struct` is a `class` in which members
//      are by default `public`; that is,
//
//      	struct s { ...
//
//      is simply shorthand for
//
//          class s { public: ...
//
//      ... Which style you use depends on circumstances and taste.
//      I usually prefer to use `struct` for classes that have all
//      data `public`."
//
//          -- Stroustrup (The C++ Programming Language, 3rd ed., p. 234)
//
//-----------------------------------------------------------------------
//
//  struct
//
//  a type with only public bases, objects, and functions,
//  no virtual functions, and no user-defined constructors
//  (i.e., no invariants) or assignment or destructors.
//
//  For GCC 10 compatibility, optionally allow passing struct<noforward>
//  that generates a memberwise constructor with a generic deduced
//  parameters instead of concrete forwarding parameters (mainly used
//  for cppfront internal use, so cppfront builds under GCC 10)
//
#line 1907 "source/reflect.h2"
auto cpp2_struct(meta::type_declaration& t) -> void
{
    std::string ctor_params {}; 
    std::string ctor_inits {}; 

    auto found_member_without_initializer {false}; 

    for ( auto& m : CPP2_UFCS(get_members)(t) ) 
    {
        CPP2_UFCS(require)(m, CPP2_UFCS(make_public)(m), 
                   "all struct members must be public");
        if (CPP2_UFCS(is_function)(m)) {
            auto mf {CPP2_UFCS(as_function)(m)}; 
            CPP2_UFCS(require)(t, !(CPP2_UFCS(is_virtual)(mf)), 
                       "a struct may not have a virtual function");
            CPP2_UFCS(require)(t, !(CPP2_UFCS(has_name)(cpp2::move(mf), "operator=")), 
                       "a struct may not have a user-defined operator=");
        }
        else {if (CPP2_UFCS(is_object)(m)) {
            auto mo {CPP2_UFCS(as_object)(m)}; 
            if (CPP2_UFCS(name)(mo) != "this") {
                if (CPP2_UFCS(get_argument)(t, 0) == "noforward") {
                    ctor_params += "" + cpp2::to_string(CPP2_UFCS(name)(mo)) + "_, ";
                }
                else {
                    ctor_params += "forward " + cpp2::to_string(CPP2_UFCS(name)(mo)) + "_ : " + cpp2::to_string(CPP2_UFCS(type)(mo)) + ", ";
                }
                ctor_inits  += "" + cpp2::to_string(CPP2_UFCS(name)(mo)) + " = " + cpp2::to_string(CPP2_UFCS(name)(mo)) + "_; ";
            }
            else {
                ctor_inits += "" + cpp2::to_string(CPP2_UFCS(type)(mo)) + " = (" + cpp2::to_string(CPP2_UFCS(initializer)(mo)) + "); ";
            }
            found_member_without_initializer |= !(CPP2_UFCS(has_initializer)(cpp2::move(mo)));
        }}
    }
    CPP2_UFCS(cpp1_rule_of_zero)(t);

    //  If we found any data members
    if (!(CPP2_UFCS(empty)(ctor_params))) 
    {
        //  Then to enable construction from corresponding values
        //  requires a constructor... an exception to the rule of zero
        CPP2_UFCS(add_member)(t, "    operator=: (implicit out this, " + cpp2::to_string(cpp2::move(ctor_params)) + ") = { " + cpp2::to_string(cpp2::move(ctor_inits)) + " }");

        //  And if all members had initializers, we need a default constructor
        if (!(cpp2::move(found_member_without_initializer))) {
            CPP2_UFCS(add_member)(t, "    operator=: (implicit out this) = { }");
        }
    }
}

value_member_info::value_member_info(auto const& name_, auto const& type_, auto const& value_)
                                                               : name{ name_ }
                                                               , type{ type_ }
                                                               , value{ value_ }{}

#line 1959 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//     "C enumerations constitute a curiously half-baked concept. ...
//      the cleanest way out was to deem each enumeration a separate type."
//
//          -- Stroustrup (The Design and Evolution of C++, 11.7)
//
//     "An enumeration is a distinct type ... with named constants"
//
//          -- ISO C++ Standard
//
//-----------------------------------------------------------------------
//
//  basic_enum
//
//  a type together with named constants that are its possible values
//

#line 1982 "source/reflect.h2"
auto basic_enum(
    meta::type_declaration& t, 
    auto const& nextval, 
    cpp2::impl::in<bool> bitwise
    ) -> void
{
    std::vector<value_member_info> enumerators {}; 
    cpp2::i64 min_value {}; 
    cpp2::i64 max_value {}; 
    cpp2::impl::deferred_init<std::string> underlying_type; 

    t.reserve_names("operator=", "operator<=>");
    if (bitwise) {
        t.reserve_names("has", "set", "clear", "to_string", "get_raw_value", "none");
    }

    //  1. Gather: The names of all the user-written members, and find/compute the type

    underlying_type.construct(CPP2_UFCS(get_argument)(t, 0));// use the first template argument, if there was one

    auto found_non_numeric {false}; 
{
std::string value{"-1"};

#line 2005 "source/reflect.h2"
    for ( 
          auto const& m : CPP2_UFCS(get_members)(t) ) 
    if (  CPP2_UFCS(is_member_object)(m)) 
    {
        CPP2_UFCS(require)(m, CPP2_UFCS(is_public)(m) || CPP2_UFCS(is_default_access)(m), 
                    "an enumerator cannot be protected or private");

        auto mo {CPP2_UFCS(as_object)(m)}; 
        if (!(CPP2_UFCS(has_wildcard_type)(mo))) {
            CPP2_UFCS(error)(mo, 
                "an explicit underlying type should be specified as a compile-time argument "
                "to the metafunction - try 'enum<u16>' or 'flag_enum<u64>'"
            );
        }

        auto init {CPP2_UFCS(initializer)(mo)}; 

        auto is_default_or_numeric {is_empty_or_a_decimal_number(init)}; 
        found_non_numeric |= !(CPP2_UFCS(empty)(init)) && !(is_default_or_numeric);
        CPP2_UFCS(require)(m, !(cpp2::move(is_default_or_numeric)) || !(found_non_numeric) || CPP2_UFCS(has_name)(mo, "none"), 
            "" + cpp2::to_string(CPP2_UFCS(name)(mo)) + ": enumerators with non-numeric values must come after all default and numeric values");

        nextval(value, cpp2::move(init));

        auto v {std::strtoll(&CPP2_ASSERT_IN_BOUNDS_LITERAL(value, 0), nullptr, 10)}; // for non-numeric values we'll just get 0 which is okay for now
        if (cpp2::impl::cmp_less(v,min_value)) {
            min_value = v;
        }
        if (cpp2::impl::cmp_greater(v,max_value)) {
            max_value = cpp2::move(v);
        }

        //  Adding local variable 'e' to work around a Clang warning
        value_member_info e {cpp2::impl::as_<std::string>(CPP2_UFCS(name)(mo)), "", value}; 
        CPP2_UFCS(push_back)(enumerators, cpp2::move(e));

        CPP2_UFCS(mark_for_removal_from_enclosing_type)(mo);
        static_cast<void>(cpp2::move(mo));
    }
}

#line 2045 "source/reflect.h2"
    if ((CPP2_UFCS(empty)(enumerators))) {
        CPP2_UFCS(error)(t, "an enumeration must contain at least one enumerator value");
        return ; 
    }

    //  Compute the default underlying type, if it wasn't explicitly specified
    if (underlying_type.value() == "") 
    {
        CPP2_UFCS(require)(t, !(cpp2::move(found_non_numeric)), 
            "if you write an enumerator with a non-numeric-literal value, "
            "you must specify the enumeration's underlying type"
        );

        if (!(bitwise)) {
            if (cpp2::impl::cmp_greater_eq(min_value,std::numeric_limits<cpp2::i8>::min()) && cpp2::impl::cmp_less_eq(max_value,std::numeric_limits<cpp2::i8>::max())) {
                underlying_type.value() = "i8";
            }
            else {if (cpp2::impl::cmp_greater_eq(min_value,std::numeric_limits<cpp2::i16>::min()) && cpp2::impl::cmp_less_eq(max_value,std::numeric_limits<cpp2::i16>::max())) {
                underlying_type.value() = "i16";
            }
            else {if (cpp2::impl::cmp_greater_eq(min_value,std::numeric_limits<cpp2::i32>::min()) && cpp2::impl::cmp_less_eq(max_value,std::numeric_limits<cpp2::i32>::max())) {
                underlying_type.value() = "i32";
            }
            else {if (cpp2::impl::cmp_greater_eq(cpp2::move(min_value),std::numeric_limits<cpp2::i64>::min()) && cpp2::impl::cmp_less_eq(cpp2::move(max_value),std::numeric_limits<cpp2::i64>::max())) {
                underlying_type.value() = "i64";
            }
            else {
                CPP2_UFCS(error)(t, 
                    "values are outside the range representable by the "
                    "largest supported underlying signed type (i64)"
                );
            }}}}
        }
        else {
            auto umax {cpp2::move(max_value) * cpp2::impl::as_<cpp2::u64, 2>()}; 
            if (cpp2::impl::cmp_less_eq(umax,std::numeric_limits<cpp2::u8>::max())) {
                underlying_type.value() = "u8";
            }
            else {if (cpp2::impl::cmp_less_eq(umax,std::numeric_limits<cpp2::u16>::max())) {
                underlying_type.value() = "u16";
            }
            else {if (cpp2::impl::cmp_less_eq(cpp2::move(umax),std::numeric_limits<cpp2::u32>::max())) {
                underlying_type.value() = "u32";
            }
            else {
                underlying_type.value() = "u64";
            }}}
        }
    }

#line 2096 "source/reflect.h2"
    //  2. Replace: Erase the contents and replace with modified contents
    //
    //  Note that most values and functions are declared as '==' compile-time values, i.e. Cpp1 'constexpr'

    CPP2_UFCS(remove_marked_members)(t);

    //  Generate the 'none' value if appropriate, and use that or
    //  else the first enumerator as the default-constructed value
    auto default_value {CPP2_ASSERT_IN_BOUNDS_LITERAL(enumerators, 0).name}; 
    if (bitwise) {
        default_value = "none";
        value_member_info e {"none", "", "0"}; 
        CPP2_UFCS(push_back)(enumerators, cpp2::move(e));
    }

    //  Generate all the private implementation
    CPP2_UFCS(add_member)(t, "    _value            : " + cpp2::to_string(underlying_type.value()) + ";");
    CPP2_UFCS(add_member)(t, "    private operator= : (implicit out this, _val: i64) == "
                                            "_value = cpp2::unchecked_narrow<" + cpp2::to_string(underlying_type.value()) + ">(_val);");

    //  Generate the bitwise operations
    if (bitwise) {
        CPP2_UFCS(add_member)(t, "    operator|=: ( inout this, that )                 == _value |= that._value;");
        CPP2_UFCS(add_member)(t, "    operator&=: ( inout this, that )                 == _value &= that._value;");
        CPP2_UFCS(add_member)(t, "    operator^=: ( inout this, that )                 == _value ^= that._value;");
        CPP2_UFCS(add_member)(t, "    operator| : (       this, that ) -> " + cpp2::to_string(CPP2_UFCS(name)(t)) + "  == _value |  that._value;");
        CPP2_UFCS(add_member)(t, "    operator& : (       this, that ) -> " + cpp2::to_string(CPP2_UFCS(name)(t)) + "  == _value &  that._value;");
        CPP2_UFCS(add_member)(t, "    operator^ : (       this, that ) -> " + cpp2::to_string(CPP2_UFCS(name)(t)) + "  == _value ^  that._value;");
        CPP2_UFCS(add_member)(t, "    has       : (       this, that ) -> bool         == _value &  that._value;");
        CPP2_UFCS(add_member)(t, "    set       : ( inout this, that )                 == { _value |= that._value;  }");
        CPP2_UFCS(add_member)(t, "    clear     : ( inout this, that )                 == { _value &= that._value~; }");
    }

    //  Add the enumerators
    for ( auto const& e : enumerators ) {
        CPP2_UFCS(add_member)(t, "    " + cpp2::to_string(e.name) + " : " + cpp2::to_string(CPP2_UFCS(name)(t)) + " == " + cpp2::to_string(e.value) + ";");
    }

    //  Generate the common functions
    CPP2_UFCS(add_member)(t, "    get_raw_value     : (this) -> " + cpp2::to_string(cpp2::move(underlying_type.value())) + " == _value;");
    CPP2_UFCS(add_member)(t, "    operator=         : (out this) == { _value = " + cpp2::to_string(default_value) + "._value; }");
    CPP2_UFCS(add_member)(t, "    operator=         : (out this, that) == { }");
    CPP2_UFCS(add_member)(t, "    operator<=>       : (this, that) -> std::strong_ordering;");
{
std::string to_string_impl{"    to_string_impl: (this, prefix: std::string_view"};

    //  Provide 'to_string' and 'to_code' functions to print enumerator
    //  name(s) as human-readable strings or as code expressions

#line 2143 "source/reflect.h2"
    {
        if (bitwise) {
            to_string_impl += ", separator: std::string_view ) -> std::string = { \n"
                              "    ret : std::string = \"(\";\n"
                              "    sep : std::string = ();\n"
                              "    if this == none { return \"(none)\"; }\n";
        }
        else {
            to_string_impl += ") -> std::string = { \n";
        }

        to_string_impl += "    pref := cpp2::to_string(prefix);\n";

        for ( 
              auto const& e : enumerators ) {
            if (e.name != "_") {// ignore unnamed values
                if (bitwise) {
                    if (e.name != "none") {
                        to_string_impl += "    if (this & " + cpp2::to_string(CPP2_UFCS(name)(t)) + "::" + cpp2::to_string(e.name) + ") == " + cpp2::to_string(CPP2_UFCS(name)(t)) + "::" + cpp2::to_string(e.name) + " { "
                                                  "ret += sep + pref + \"" + cpp2::to_string(e.name) + "\"; sep = separator; "
                                              "}\n";
                    }
                }
                else {
                    to_string_impl += "    if this == " + cpp2::to_string(CPP2_UFCS(name)(t)) + "::" + cpp2::to_string(e.name) + " { return pref + \"" + cpp2::to_string(e.name) + "\"; }\n";
                }
            }
        }

        if (bitwise) {
            to_string_impl += "    return ret+\")\";\n}\n";
        }
        else {
            to_string_impl += "    return \"invalid " + cpp2::to_string(CPP2_UFCS(name)(t)) + " value\";\n}\n";
        }

        CPP2_UFCS(add_member)(t, cpp2::move(to_string_impl));
    }
}

#line 2182 "source/reflect.h2"
    if (bitwise) {
        CPP2_UFCS(add_member)(t, "    to_string: (this) -> std::string = to_string_impl( \"\", \", \" );");
        CPP2_UFCS(add_member)(t, "    to_code  : (this) -> std::string = to_string_impl( \"" + cpp2::to_string(CPP2_UFCS(name)(t)) + "::\", \" | \" );");
    }
    else {
        CPP2_UFCS(add_member)(t, "    to_string: (this) -> std::string = to_string_impl( \"\" );");
        CPP2_UFCS(add_member)(t, "    to_code  : (this) -> std::string = to_string_impl( \"" + cpp2::to_string(CPP2_UFCS(name)(t)) + "::\" );");
    }
{
std::string from_string{"    from_string: (s: std::string_view) -> " + cpp2::to_string(CPP2_UFCS(name)(t)) + " = { \n"};

    //  Provide a 'from_string' function to parse strings into enumerators

#line 2193 "source/reflect.h2"
    {
        std::string_view prefix {""}; 
        std::string_view combine_op {"return"}; 

        //  For flags, accept a list that we break apart and then |= together
        if (bitwise) 
        {
            prefix      = "flag_";
            combine_op  = "ret |=";

            from_string += "        ret := none;\n"
                           "        outer: do {\n"
                           "        for cpp2::string_util::split_string_list(s) do (x) {\n";
        }
        //  Otherwise, accept just a single string
        else {
            from_string += "        x := s;\n";
        }
{
std::string_view else_{""};

#line 2213 "source/reflect.h2"
        for ( 
              auto const& e : cpp2::move(enumerators) ) {
            from_string += "            " + cpp2::to_string(else_) + "if \"" + cpp2::to_string(e.name) + "\" == x { " + cpp2::to_string(combine_op) + " " + cpp2::to_string(CPP2_UFCS(name)(t)) + "::" + cpp2::to_string(e.name) + "; }\n";
            else_ = "else ";
        }
}

#line 2219 "source/reflect.h2"
        if (bitwise) {
            from_string += "            else { break outer; }\n"
                           "        }\n"
                           "        return ret;\n"
                           "        } while false;\n";
        }

        from_string += "        cpp2::type_safety.report_violation( (\"can't convert string '\" + cpp2::to_string(s) + \"' to " + cpp2::to_string(cpp2::move(prefix)) + "enum of type " + cpp2::to_string(CPP2_UFCS(name)(t)) + "\").c_str() );\n"
                       "        return " + cpp2::to_string(CPP2_UFCS(name)(t)) + "::" + cpp2::to_string(cpp2::move(default_value)) + ";\n"
                       "    }\n\n";

        CPP2_UFCS(add_member)(t, cpp2::move(from_string));
    }
}

#line 2233 "source/reflect.h2"
    CPP2_UFCS(add_member)(t, "    from_code: (s: std::string_view) -> " + cpp2::to_string(CPP2_UFCS(name)(t)) + " = { str: std::string = s; return from_string( cpp2::string_util::replace_all(str, \"" + cpp2::to_string(CPP2_UFCS(name)(t)) + "::\", \"\" ) ); }");
}

#line 2237 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//    "An enum[...] is a totally ordered value type that stores a
//     value of its enumerators's type, and otherwise has only public
//     member variables of its enumerator's type, all of which are
//     naturally scoped because they are members of a type."
//
//          -- P0707R4, section 3
//
#line 2246 "source/reflect.h2"
auto cpp2_enum(meta::type_declaration& t) -> void
{
    //  Let basic_enum do its thing, with an incrementing value generator
    CPP2_UFCS(basic_enum)(t, 
        [](std::string& value, cpp2::impl::in<std::string> specified_value) -> void{
            if (!(CPP2_UFCS(empty)(specified_value))) {
                value = specified_value;
            }else {
                auto v {std::strtoll(&CPP2_ASSERT_IN_BOUNDS_LITERAL(value, 0), nullptr, 10)}; 
                value = cpp2::impl::as_<std::string>((cpp2::move(v) + 1));
            }
        }, 
        false   // disable bitwise operations
    );
}

#line 2263 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//     "flag_enum expresses an enumeration that stores values
//      corresponding to bitwise-or'd enumerators. The enumerators must
//      be powers of two, and are automatically generated [...] A none
//      value is provided [...] Operators | and & are provided to
//      combine and extract values."
//
//          -- P0707R4, section 3
//
#line 2273 "source/reflect.h2"
auto flag_enum(meta::type_declaration& t) -> void
{
    //  Let basic_enum do its thing, with a power-of-two value generator
    CPP2_UFCS(basic_enum)(t, 
        [](std::string& value, cpp2::impl::in<std::string> specified_value) -> void{
            if (!(CPP2_UFCS(empty)(specified_value))) {
                value = specified_value;
            }else {
                auto v {std::strtoll(&CPP2_ASSERT_IN_BOUNDS_LITERAL(value, 0), nullptr, 10)}; 
                if (cpp2::impl::cmp_less(v,1)) {
                    value = "1";
                }
                else {
                    value = cpp2::impl::as_<std::string>((cpp2::move(v) * 2));
                }
            }
        }, 
        true    // enable bitwise operations
    );
}

#line 2295 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//     "As with void*, programmers should know that unions [...] are
//      inherently dangerous, should be avoided wherever possible,
//      and should be handled with special care when actually needed."
//
//          -- Stroustrup (The Design and Evolution of C++, 14.3.4.1)
//
//     "C++17 needs a type-safe union... The implications of the
//      consensus `variant` design are well understood and have been
//      explored over several LEWG discussions, over a thousand emails,
//      a joint LEWG/EWG session, and not to mention 12 years of
//      experience with Boost and other libraries."
//
//          -- Axel Naumann, in P0088 (wg21.link/p0088),
//             the adopted proposal for C++17 std::variant
//
//-----------------------------------------------------------------------
//
//  union
//
//  a type that contains exactly one of a fixed set of values at a time
//

#line 2319 "source/reflect.h2"
auto cpp2_union(meta::type_declaration& t) -> void
{
    std::vector<value_member_info> alternatives {}; 
{
auto value{0};

    //  1. Gather: All the user-written members, and find/compute the max size

#line 2326 "source/reflect.h2"
    for ( 

           auto const& m : CPP2_UFCS(get_members)(t) )  { do 
    if (   CPP2_UFCS(is_member_object)(m)) 
    {
        CPP2_UFCS(require)(m, CPP2_UFCS(is_public)(m) || CPP2_UFCS(is_default_access)(m), 
                   "a union alternative cannot be protected or private"
                );

        CPP2_UFCS(require)(m, !(CPP2_UFCS(starts_with)(CPP2_UFCS(name)(m), "is_")) 
                   && !(CPP2_UFCS(starts_with)(CPP2_UFCS(name)(m), "set_")), 
                   "a union alternative's name cannot start with 'is_' or 'set_' - that could cause "
                   "user confusion with the 'is_alternative' and 'set_alternative' generated functions"
                );

        auto mo {CPP2_UFCS(as_object)(m)}; 
        CPP2_UFCS(require)(mo, CPP2_UFCS(empty)(CPP2_UFCS(initializer)(mo)), 
                    "a union alternative cannot have an initializer"
                );

        //  Adding local variable 'e' to work around a Clang warning
        value_member_info e {cpp2::impl::as_<std::string>(CPP2_UFCS(name)(mo)), CPP2_UFCS(type)(mo), cpp2::impl::as_<std::string>(value)}; 
        CPP2_UFCS(push_back)(alternatives, cpp2::move(e));

        CPP2_UFCS(mark_for_removal_from_enclosing_type)(mo);
        static_cast<void>(cpp2::move(mo));
    } while (false); ++value; }
}

#line 2354 "source/reflect.h2"
    std::string discriminator_type {}; 
    if (cpp2::impl::cmp_less(CPP2_UFCS(ssize)(alternatives),std::numeric_limits<cpp2::i8>::max())) {
        discriminator_type = "i8";
    }
    else {if (cpp2::impl::cmp_less(CPP2_UFCS(ssize)(alternatives),std::numeric_limits<cpp2::i16>::max())) {
        discriminator_type = "i16";
    }
    else {if (cpp2::impl::cmp_less(CPP2_UFCS(ssize)(alternatives),std::numeric_limits<cpp2::i32>::max())) {
        discriminator_type = "i32";
    }
    else {
        discriminator_type = "i64";
    }}}

#line 2369 "source/reflect.h2"
    //  2. Replace: Erase the contents and replace with modified contents

    CPP2_UFCS(remove_marked_members)(t);
{
std::string storage{"    _storage: cpp2::aligned_storage<cpp2::max( "};

    //  Provide storage

#line 2375 "source/reflect.h2"
    {
        for ( 
              auto const& e : alternatives ) {
            storage += "sizeof(" + cpp2::to_string(e.type) + "), ";
        }

        storage += "), cpp2::max( ";

        for ( 
              auto const& e : alternatives ) {
            storage += "alignof(" + cpp2::to_string(e.type) + "), ";
        }

        storage += " )> = ();\n";
        CPP2_UFCS(add_member)(t, cpp2::move(storage));
    }
}

    //  Provide discriminator
#line 2393 "source/reflect.h2"
    CPP2_UFCS(add_member)(t, "    _discriminator: " + cpp2::to_string(cpp2::move(discriminator_type)) + " = -1;\n");

    //  Add the alternatives: is_alternative, get_alternative, and set_alternative
    for ( 
         auto const& a : alternatives ) 
    {
        CPP2_UFCS(add_member)(t, "    is_" + cpp2::to_string(a.name) + ": (this) -> bool = _discriminator == " + cpp2::to_string(a.value) + ";\n");

        CPP2_UFCS(add_member)(t, "    " + cpp2::to_string(a.name) + ": (this) -> forward " + cpp2::to_string(a.type) + " pre(is_" + cpp2::to_string(a.name) + "()) = "
                            "reinterpret_cast<* const " + cpp2::to_string(a.type) + ">(_storage&)*;\n"
                    );

        CPP2_UFCS(add_member)(t, "    " + cpp2::to_string(a.name) + ": (inout this) -> forward " + cpp2::to_string(a.type) + " pre(is_" + cpp2::to_string(a.name) + "()) = "
                            "reinterpret_cast<*" + cpp2::to_string(a.type) + ">(_storage&)*;\n"
                    );

        CPP2_UFCS(add_member)(t, "    set_" + cpp2::to_string(a.name) + ": (inout this, _value: " + cpp2::to_string(a.type) + ") = { "
                            "if !is_" + cpp2::to_string(a.name) + "() { _destroy(); std::construct_at( reinterpret_cast<*" + cpp2::to_string(a.type) + ">(_storage&), _value); } "
                            "else { reinterpret_cast<*" + cpp2::to_string(a.type) + ">(_storage&)* = _value; } "
                            "_discriminator = " + cpp2::to_string(a.value) + "; "
                            "}\n"
                    );

        CPP2_UFCS(add_member)(t, "    set_" + cpp2::to_string(a.name) + ": (inout this, forward _args...: _) = { "
                            "if !is_" + cpp2::to_string(a.name) + "() { _destroy(); std::construct_at( reinterpret_cast<*" + cpp2::to_string(a.type) + ">(_storage&), _args...); } "
                            " else { reinterpret_cast<*" + cpp2::to_string(a.type) + ">(_storage&)* = :" + cpp2::to_string(a.type) + " = (_args...); } "
                            "_discriminator = " + cpp2::to_string(a.value) + "; "
                            "}\n"
                    );
    }
{
std::string destroy{"    private _destroy: (inout this) = {\n"};

    //  Add destroy

#line 2426 "source/reflect.h2"
    {
        for ( 
              auto const& a : alternatives ) {
            destroy += "        if _discriminator == " + cpp2::to_string(a.value) + " { std::destroy_at( reinterpret_cast<*" + cpp2::to_string(a.type) + ">(_storage&) ); }\n";
        }

        destroy += "        _discriminator = -1;\n"
                   "    }\n";
        CPP2_UFCS(add_member)(t, cpp2::move(destroy));
    }
}

    //  Add the destructor
#line 2438 "source/reflect.h2"
    CPP2_UFCS(add_member)(t, "    operator=: (move this) = { _destroy(); _ = this; }");

    //  Add default constructor
    CPP2_UFCS(add_member)(t, "    operator=: (out this) = { }");
{
std::string value_set{""};

    //  Add copy/move construction and assignment

#line 2445 "source/reflect.h2"
    {
        for ( 
              auto const& a : cpp2::move(alternatives) ) {
            value_set += "        if that.is_" + cpp2::to_string(a.name) + "() { set_" + cpp2::to_string(a.name) + "( that." + cpp2::to_string(a.name) + "() ); }\n";
        }
        value_set += "    }\n";

        CPP2_UFCS(add_member)(t, "    operator=: (out this, that) = {\n"
                      "        _storage = ();\n"
                      "        _discriminator = -1;\n" 
                      + value_set
                    );
        CPP2_UFCS(add_member)(t, "    operator=: (inout this, that) = {\n"
                      "        _storage = _;\n"
                      "        _discriminator = _;\n" 
                      + cpp2::move(value_set)
                    );
    }
}
#line 2463 "source/reflect.h2"
}

#line 2466 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  encapsulated
//
//  A type with no public data members
//
#line 2472 "source/reflect.h2"
auto encapsulated(meta::type_declaration& t) -> void
{
    for ( 
         auto const& m : CPP2_UFCS(get_member_objects)(t) ) 
    {
        CPP2_UFCS(require)(m, 
            !(CPP2_UFCS(is_public)(m)), 
            "an @encapsulated type must not have public data members"
        );
    }
}

#line 2485 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  noncopyable
//
//  A type with no copy/move construction/assignment
//
#line 2491 "source/reflect.h2"
auto noncopyable(meta::type_declaration& t) -> void
{
    auto smfs {CPP2_UFCS(query_declared_value_set_functions)(t)}; 
    CPP2_UFCS(require)(t, 
        !(smfs.out_this_in_that) 
        && !(smfs.out_this_move_that) 
        && !(smfs.inout_this_in_that) 
        && !(smfs.inout_this_move_that), 
        "a @noncopyable type must not have operator= with this and that parameters"
    );
}

#line 2504 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  singleton
//
//  An encapsulated noncopyable type with a single instance accessed via
//  an ::instance() function
//
//  A private default constructor is provided.
//
#line 2513 "source/reflect.h2"
auto singleton(meta::type_declaration& t) -> void
{
    CPP2_UFCS(noncopyable)(t);
    CPP2_UFCS(encapsulated)(t);

    for ( 
         auto const& m : CPP2_UFCS(get_member_functions)(t) ) 
    {
        CPP2_UFCS(require)(m, 
            !(CPP2_UFCS(is_constructor)(m)), 
            "a @singleton type must not have a user-written constructor - "
            "a private default constructor will be generated automatically"
        );
    }

    CPP2_UFCS(add_member)(t, "    private operator=: (out this) = { }\n");
    CPP2_UFCS(add_member)(t, "    instance: () -> forward " + cpp2::to_string(CPP2_UFCS(name)(t)) + " = {\n"
                  "        static _instance: " + cpp2::to_string(CPP2_UFCS(name)(t)) + " = ();"
                  "        return _instance;\n"
                  "    }\n");
}

#line 2536 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  print - output a pretty-printed visualization of t
//
#line 2540 "source/reflect.h2"
auto print(cpp2::impl::in<meta::type_declaration> t) -> void
{
    std::cout << CPP2_UFCS(print)(t) << "\n";
}

#line 2546 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  noisy - make each function print its name and signature,
//          so the programmer can see what's called
//
#line 2551 "source/reflect.h2"
auto noisy(cpp2::impl::in<meta::type_declaration> t) -> void
{
    for ( 
         auto const& m : CPP2_UFCS(get_members)(t) ) 
    if ( CPP2_UFCS(is_function)(m) 
        && !(CPP2_UFCS(has_name)(m, "operator="))) 
    {
        auto mf {CPP2_UFCS(as_function)(m)}; 
        if (CPP2_UFCS(has_compound_body)(mf)) {
            auto body {CPP2_UFCS(get_compound_body)(mf)}; 
            CPP2_UFCS(add_statement)(body, "    std::cout << \"" + cpp2::to_string(CPP2_UFCS(get_signature)(cpp2::move(mf))) + "\\n\";");
            static_cast<void>(cpp2::move(body));
        }
    }
}

#line 2568 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  python - expose the type using pybind11
//
//  *** Basic proof of concept only, limited and not well tested
//      Hardcoded for pybind11 and g++10 and my local cppfront include path
//
#line 2575 "source/reflect.h2"
[[nodiscard]] auto python_param_names_and_types(cpp2::impl::in<meta::function_declaration> mf) -> python_param_names_and_types_ret

#line 2581 "source/reflect.h2"
{
    std::string names {};
    std::string types {};
#line 2582 "source/reflect.h2"
    for ( 
         auto const& param : CPP2_UFCS(get_parameters)(mf) ) 
    if ( CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(param)) != "this") 
    {
        names += ", ";
        if (!(CPP2_UFCS(empty)(types))) {
            types += ", ";
        }
        names += std::string("pybind11::arg(\"") + CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(param)) + "\")";
        types += CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(param));
    }
    // TODO: Remove when fixed (https://github.com/hsutter/cppfront/issues/1426). Force newline for return.
    static_cast<void>(names);
return  { std::move(names), std::move(types) }; }

#line 2597 "source/reflect.h2"
auto python(meta::type_declaration& t) -> void
{
    std::string bind {}; 
    bind += "PYBIND11_MODULE(" + cpp2::to_string(CPP2_UFCS(name)(t)) + "lib, m) {\n";
    bind += "    pybind11::class_<" + cpp2::to_string(CPP2_UFCS(name)(t)) + ">(m, \"" + cpp2::to_string(CPP2_UFCS(name)(t)) + "\")\n";

    for ( 
         auto const& m : CPP2_UFCS(get_members)(t) ) 
    if ( CPP2_UFCS(is_function)(m)) 
    {
        auto mf {CPP2_UFCS(as_function)(m)}; 
        auto params {CPP2_UFCS(python_param_names_and_types)(mf)}; 

        if (CPP2_UFCS(is_constructor)(mf)) {
            bind += "        .def(pybind11::init<" + cpp2::to_string(cpp2::move(params).types) + ">())\n";
        }
        else {if (!(CPP2_UFCS(has_name)(mf, "operator="))) {
            bind += "        .def(\"" + cpp2::to_string(CPP2_UFCS(name)(mf)) + "\", &" + cpp2::to_string(CPP2_UFCS(name)(t)) + "::" + cpp2::to_string(CPP2_UFCS(name)(mf)) + " " + cpp2::to_string(cpp2::move(params).names) + ")\n";
        }}
    }

    bind += "    ;\n";
    bind += "}\n";

    auto file {CPP2_UFCS(filename)(t)}; 
    if (CPP2_UFCS(ends_with)(file, ".cpp2")) {
        file = CPP2_UFCS(substr)(file, 0, CPP2_UFCS(size)(file) - 5);// drop the ".cpp2"
    }
    std::string build {"g++-10 -O3 -shared -std=c++20 -fPIC $(python3 -m pybind11 --includes) " + cpp2::to_string(file) + ".cpp -o " + cpp2::to_string(file) + "lib$(python3-config --extension-suffix)"}; 

    CPP2_UFCS(add_runtime_support_include)(t, "pybind11/pybind11.h", true);
    CPP2_UFCS(add_runtime_support_include)(t, "pybind11/stl.h", true);
    CPP2_UFCS(add_extra_cpp1_code)(t, cpp2::move(bind));
    CPP2_UFCS(add_extra_build_step)(t, cpp2::move(build));
}

#line 2634 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  javascript - expose the type using emscripten
//
//  *** Basic proof of concept only, limited and not well tested
//
#line 2640 "source/reflect.h2"
auto javascript(meta::type_declaration& t) -> void
{
    std::string bind {}; 
    bind += "using namespace emscripten;\n";
    bind += "EMSCRIPTEN_BINDINGS(" + cpp2::to_string(CPP2_UFCS(name)(t)) + "_module) {\n";
    bind += "    class_<" + cpp2::to_string(CPP2_UFCS(name)(t)) + ">(\"" + cpp2::to_string(CPP2_UFCS(name)(t)) + "\")\n";

    for ( 
         auto const& m : CPP2_UFCS(get_members)(t) ) 
    if ( CPP2_UFCS(is_function)(m)) 
    {
        auto mf {CPP2_UFCS(as_function)(m)}; 
        auto params {CPP2_UFCS(python_param_names_and_types)(mf)}; // good enough! only care about .types

        if (CPP2_UFCS(is_constructor)(mf)) {
            bind += "        .constructor<" + cpp2::to_string(cpp2::move(params).types) + ">()\n";
        }
        else {if (!(CPP2_UFCS(has_name)(mf, "operator="))) {
            bind += "        .function(\"" + cpp2::to_string(CPP2_UFCS(name)(mf)) + "\", &" + cpp2::to_string(CPP2_UFCS(name)(t)) + "::" + cpp2::to_string(CPP2_UFCS(name)(mf)) + ")\n";
        }}
    }

    bind += "    ;\n";
    bind += "}\n";

    auto file {CPP2_UFCS(filename)(t)}; 
    if (CPP2_UFCS(ends_with)(file, ".cpp2")) {
        file = CPP2_UFCS(substr)(file, 0, CPP2_UFCS(size)(file) - 5);// drop the ".cpp2"
    }
    std::string build {"em++ -std=c++20 -O3 " + cpp2::to_string(file) + ".cpp --bind -s MODULARIZE=1 -s ENVIRONMENT='web,node' -s ALLOW_MEMORY_GROWTH=1 -s FILESYSTEM=0 -s LEGACY_VM_SUPPORT=1 -o " + cpp2::to_string(file) + ".js"}; 
    CPP2_UFCS(add_runtime_support_include)(t, "emscripten/bind.h", true);
    CPP2_UFCS(add_extra_cpp1_code)(t, cpp2::move(bind));
    CPP2_UFCS(add_extra_build_step)(t, cpp2::move(build));
    CPP2_UFCS(disable_ref_qualifier_generation)(t);
}

#line 2677 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  For reflection test cases
//
#line 2681 "source/reflect.h2"
auto sample_print(cpp2::impl::in<std::string_view> s, cpp2::impl::in<cpp2::i32> indent) -> void
{
    std::cout 
        << pre(indent) 
        << s 
        << "\n";
}

#line 2691 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::declaration> decl) -> void{
        traverse(decl);
    }

#line 2695 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::declaration> decl) -> void
    {
        if (CPP2_UFCS(is_function)(decl)) {
            pre_traverse(CPP2_UFCS(as_function)(decl));
        }

        if (CPP2_UFCS(is_object)(decl)) {
            pre_traverse(CPP2_UFCS(as_object)(decl));
        }

        if (CPP2_UFCS(is_type)(decl)) {
            pre_traverse(CPP2_UFCS(as_type)(decl));
        }

        // ...
        // ... extend as desired to namespace, alias, etc.
        // ...
    }

#line 2715 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::function_declaration> f) -> void{
        traverse(f);
    }

#line 2719 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::function_declaration> f) -> void
    {
        auto parameters {CPP2_UFCS(get_parameters)(f)}; 
        for ( auto const& param : cpp2::move(parameters) ) {
            pre_traverse(param);
        }

        auto returns {CPP2_UFCS(get_returns)(f)}; 
        for ( auto const& param : cpp2::move(returns) ) {
            pre_traverse(param);
        }

        if (!(CPP2_UFCS(has_compound_body)(f))) {
            pre_traverse(CPP2_UFCS(get_body)(f));
        }
        else {
            pre_traverse(CPP2_UFCS(get_compound_body)(f));
        }
    }

#line 2740 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::object_declaration> o) -> void{
        traverse(o);
    }

#line 2744 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::object_declaration> o) -> void
    {
        if (CPP2_UFCS(has_initializer)(o)) {
            pre_traverse(CPP2_UFCS(get_initializer)(o));
        }
    }

#line 2752 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::type_declaration> t) -> void{
        traverse(t);
    }

#line 2756 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::type_declaration> t) -> void
    {
        for ( auto const& m : CPP2_UFCS(get_members)(t) ) {
            pre_traverse(m);
        }
    }

#line 2764 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void{
        traverse(t);
    }

#line 2768 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void
    {
        pre_traverse(CPP2_UFCS(get_declaration)(t));
    }

#line 2773 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::statement> stmt) -> void{
        traverse(stmt);
    }

#line 2777 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::statement> stmt) -> void
    {
        if (CPP2_UFCS(is_expression_statement)(stmt)) {
            pre_traverse(CPP2_UFCS(get_expression)(CPP2_UFCS(as_expression_statement)(stmt)));
        }

        if (CPP2_UFCS(is_compound_statement)(stmt)) {
            pre_traverse(CPP2_UFCS(as_compound_statement)(stmt));
        }

        if (CPP2_UFCS(is_selection_statement)(stmt)) 
        {
            pre_traverse(CPP2_UFCS(as_selection_statement)(stmt));
        }

        if (CPP2_UFCS(is_declaration)(stmt)) {
            pre_traverse(CPP2_UFCS(as_declaration)(stmt));
        }

        if (CPP2_UFCS(is_return_statement)(stmt)) {
            pre_traverse(CPP2_UFCS(as_return_statement)(stmt));
        }

        if (CPP2_UFCS(is_iteration_statement)(stmt)) {
            pre_traverse(CPP2_UFCS(as_iteration_statement)(stmt));
        }

        // TODO:
        //  using
        //  contract
        //  inspect
        //  jump
    }

#line 2812 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::compound_statement> stmt) -> void{
        traverse(stmt);
    }

#line 2816 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::compound_statement> stmt) -> void
    {
        auto stmts {CPP2_UFCS(get_statements)(stmt)}; 

        for ( auto const& cur : cpp2::move(stmts) ) {
            pre_traverse(cur);
        }
    }

#line 2826 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::return_statement> stmt) -> void{
        traverse(stmt);
    }

#line 2830 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::return_statement> stmt) -> void
    {
        if (CPP2_UFCS(has_expression)(stmt)) {
            pre_traverse(CPP2_UFCS(get_expression)(stmt));
        }
    }

#line 2838 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::iteration_statement> stmt) -> void{
        traverse(stmt);
    }

#line 2842 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::iteration_statement> stmt) -> void
    {
        if (CPP2_UFCS(is_do)(stmt) || CPP2_UFCS(is_while)(stmt)) {
            pre_traverse(CPP2_UFCS(get_do_while_condition)(stmt));
            pre_traverse(CPP2_UFCS(get_do_while_body)(stmt));
        }
        else {
            if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_for)(stmt)) ) { cpp2::cpp2_default.report_violation(""); }
            pre_traverse(CPP2_UFCS(get_for_range)(stmt));
            pre_traverse(CPP2_UFCS(get_for_parameter)(stmt));
            pre_traverse(CPP2_UFCS(get_for_body)(stmt));
        }

        if (CPP2_UFCS(has_next)(stmt)) {
            pre_traverse(CPP2_UFCS(get_next_expression)(stmt));
        }
    }

#line 2861 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::selection_statement> stmt) -> void{
        traverse(stmt);
    }

#line 2865 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::selection_statement> stmt) -> void
    {
        pre_traverse(CPP2_UFCS(get_expression)(stmt));
        pre_traverse(CPP2_UFCS(get_true_branch)(stmt));

        if (CPP2_UFCS(has_false_branch)(stmt)) {
            pre_traverse(CPP2_UFCS(get_false_branch)(stmt));
        }
    }

#line 2876 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::expression> expr) -> void
    {
        // Nothing to select here.
        traverse(expr);
    }

#line 2882 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::expression> expr) -> void
    {
        //  An expression has other shortcuts to query deeper properties,
        //  but let's just traverse all the nested grammer elements to
        //  show how that traversal works

        // The expressions use the pre_traverse function to decide which expression
        // they are. The correct one calls traverse only once.

        //  The expression's basic payload is just an assignment expression
        pre_traverse(CPP2_UFCS(as_assignment_expression)(expr));
    }

#line 2896 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual assignment,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 2913 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 2924 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual logical-or,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 2941 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 2953 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual logical-and,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 2970 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 2981 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual bit-or,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 2998 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3009 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual bit-xor,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3026 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3038 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual bit-and,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3055 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3067 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual equality,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3084 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3095 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual relational,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3112 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3123 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual compare,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3140 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3151 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual shift,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3168 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3179 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual additive,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3196 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3208 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

        //  If this has only one term, it's not an actual multiplicative,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(ssize)(terms) == 1) {
            pre_traverse(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))));
        }

        //  Else we're at an actual binary expression with a rhs
        else {
            traverse(binexpr);
        }
    }

#line 3225 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            traverse(CPP2_UFCS(get_term)(term));
        }
    }

#line 3236 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(isas)}; 

        //  If this has no additional terms, it's not an actual is-as,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(empty)(cpp2::move(terms))) {
            pre_traverse(CPP2_UFCS(get_expression)(isas));
        }

        //  Else we're at an actual is-as expression with a rhs
        else {
            traverse(isas);
        }
    }

#line 3252 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(isas)}; 

        pre_traverse(CPP2_UFCS(get_expression)(isas));

        for ( auto const& term : cpp2::move(terms) ) {
            traverse(CPP2_UFCS(get_expr)(term));
        }
    }

#line 3263 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::expression_list> exprs) -> void
    {
        for ( auto const& expr : CPP2_UFCS(get_expressions)(exprs) ) {
            traverse(expr);
        }
    }

#line 3270 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void
    {
        auto ops {CPP2_UFCS(get_ops)(prefix)}; 

        //  If this has no additional ops, it's not a naked prefix expr,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(empty)(cpp2::move(ops))) {
            pre_traverse(CPP2_UFCS(get_postfix_expression)(prefix));
        }

        //  Else we're at an actual prefix expression with ops
        else {
            traverse(prefix);
        }
    }

#line 3286 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void
    {
        pre_traverse(CPP2_UFCS(get_postfix_expression)(prefix));
    }

#line 3291 "source/reflect.h2"
    auto simple_traverser::pre_traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(postfix)}; 

        //  If this has no additional terms, it's not a naked postfix expr,
        //  it's holding a lower grammar production so go traverse that
        if (CPP2_UFCS(empty)(cpp2::move(terms))) {
            traverse(CPP2_UFCS(get_primary_expression)(postfix));
        }

        //  Else we're at an actual postfix expression with ops
        else {
            traverse(postfix);
        }
    }

#line 3307 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(postfix)}; 

        traverse(CPP2_UFCS(get_primary_expression)(postfix));

        for ( auto const& term : cpp2::move(terms) ) {
            if (CPP2_UFCS(is_id_expression)(term)) {
                traverse(CPP2_UFCS(get_id_expression)(term));
            }
            else {if (CPP2_UFCS(is_expression_list)(term)) {
                traverse(CPP2_UFCS(get_expression_list)(term));
            }
            else {if (CPP2_UFCS(is_expression)(term)) {
                traverse(CPP2_UFCS(get_expression)(term));
            }}}
        }
    }

#line 3326 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::unqualified_id> uid) -> void
    {
        static_cast<void>(uid);
    }

#line 3332 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::qualified_id> qid) -> void
    {
        for ( 
             auto const& term : CPP2_UFCS(get_terms)(qid) ) 
        {
            traverse(CPP2_UFCS(get_unqualified)(term));
        }
    }

#line 3342 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::type_id> tid) -> void
    {
        if (CPP2_UFCS(is_postfix_expression)(tid)) {
            traverse(CPP2_UFCS(as_postfix_expression)(tid));
        }
        else {if (CPP2_UFCS(is_qualified_id)(tid)) {
            traverse(CPP2_UFCS(as_qualified_id)(tid));
        }
        else {if (CPP2_UFCS(is_unqualified_id)(tid)) {
            traverse(CPP2_UFCS(as_unqualified_id)(tid));
        }
        else {
            // Regular type_id
        }}}
    }

#line 3359 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::primary_expression> primary) -> void
    {
        if (CPP2_UFCS(is_identifier)(primary)) {
            // Regular identifier
        }
        else {if (CPP2_UFCS(is_expression_list)(primary)) {
            traverse(CPP2_UFCS(as_expression_list)(primary));
        }
        else {if (CPP2_UFCS(is_literal)(primary)) {
            // Regular literal
        }
        else {if (CPP2_UFCS(is_declaration)(primary)) {
            // TODO: traverse(primary.as_declaration());
        }
        else {
            // Regular primary
        }}}}
    }

#line 3379 "source/reflect.h2"
    auto simple_traverser::traverse(cpp2::impl::in<meta::id_expression> idexpr) -> void
    {
        if (CPP2_UFCS(is_identifier)(idexpr)) {
            // Regular id
        }
        else {if (CPP2_UFCS(is_qualified)(idexpr)) {
            traverse(CPP2_UFCS(as_qualified)(idexpr));
        }
        else {if (CPP2_UFCS(is_unqualified)(idexpr)) {
            traverse(CPP2_UFCS(as_unqualified)(idexpr));
        }
        else {
            // Regular id expr
        }}}
    }

#line 3397 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  sample_traverser serves two purposes:
//
//      - infrastructure for writing reflection API test cases
//
//      - a sample for how code can use the reflection API, notably
//        for reflecting on function bodies (statements, expressions)
//

#line 3407 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::declaration> decl, cpp2::impl::in<cpp2::i32> indent) -> void
{
    sample_print("Declaration: " + cpp2::to_string(CPP2_UFCS(name)(decl)) + "", indent);

    if (CPP2_UFCS(is_function)(decl)) {
        sample_traverser(CPP2_UFCS(as_function)(decl), indent + 1);
    }

    if (CPP2_UFCS(is_object)(decl)) {
        sample_traverser(CPP2_UFCS(as_object)(decl), indent + 1);
    }

    if (CPP2_UFCS(is_type)(decl)) {
        sample_traverser(CPP2_UFCS(as_type)(decl), indent + 1);
    }

    // ...
    // ... extend as desired to namespace, alias, etc.
    // ...
}

#line 3429 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::function_declaration> f, cpp2::impl::in<cpp2::i32> indent) -> void
{
    sample_print("Function: " + cpp2::to_string(CPP2_UFCS(name)(f)) + "", indent + 1);

    auto parameters {CPP2_UFCS(get_parameters)(f)}; 
    if (!(CPP2_UFCS(empty)(parameters))) {
        sample_print("Parameters:", indent + 2);
        for ( auto const& param : cpp2::move(parameters) ) {
            sample_traverser(param, indent + 3);
        }
    }

    auto returns {CPP2_UFCS(get_returns)(f)}; 
    if (!(CPP2_UFCS(empty)(returns))) {
        sample_print("Returns:", indent + 2);
        for ( auto const& param : cpp2::move(returns) ) {
            sample_traverser(param, indent + 3);
        }
    }

    sample_print("Body:", indent + 2);
    if (!(CPP2_UFCS(has_compound_body)(f))) {
        sample_traverser(CPP2_UFCS(get_body)(f), indent + 3);
    }
    else {
        sample_traverser(CPP2_UFCS(get_compound_body)(f), indent + 3);
    }
}

#line 3459 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::object_declaration> o, cpp2::impl::in<cpp2::i32> indent) -> void
{
    sample_print("Object: name " + cpp2::to_string(CPP2_UFCS(name)(o)) + ", type " + cpp2::to_string(CPP2_UFCS(type)(o)) + "", indent);
    if (CPP2_UFCS(has_initializer)(o)) {
        sample_print("Initializer:", indent + 1);
        sample_traverser(CPP2_UFCS(get_initializer)(o), indent + 2);
    }
}

#line 3469 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::type_declaration> t, cpp2::impl::in<cpp2::i32> indent) -> void
{
    sample_print("Type: " + cpp2::to_string(CPP2_UFCS(name)(t)) + "", indent);

    if (CPP2_UFCS(parent_is_nonglobal_namespace)(t)) 
    {
        auto ns {CPP2_UFCS(as_nonglobal_namespace)(CPP2_UFCS(get_parent)(t))}; 
        sample_print("is a member of namespace " + cpp2::to_string(CPP2_UFCS(name)(ns)) + " which contains the following names:", indent + 1);
        for ( auto const& m : CPP2_UFCS(get_members)(ns) ) {
            sample_print(CPP2_UFCS(name)(m), indent + 2);
        }
        CPP2_UFCS(add_member)(ns, "add_1: (x) = x+1;");
        static_cast<void>(cpp2::move(ns));
    }

    for ( auto const& m : CPP2_UFCS(get_members)(t) ) {
        sample_traverser(m, indent + 1);
    }
}

#line 3490 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::parameter_declaration> t, cpp2::impl::in<cpp2::i32> indent) -> void
{
    sample_print("parameter:", indent);

    auto pass {CPP2_UFCS(get_passing_style)(t)}; 
    if (pass == passing_style::in)          { sample_print("passing style: in", indent + 1);}
    if (pass == passing_style::in_ref)      { sample_print("passing style: in_ref", indent + 1);}
    if (pass == passing_style::copy)        { sample_print("passing style: copy", indent + 1);}
    if (pass == passing_style::inout)       { sample_print("passing style: inout", indent + 1);}
    if (pass == passing_style::out)         { sample_print("passing style: out", indent + 1);}
    if (pass == passing_style::move)        { sample_print("passing style: move", indent + 1);}
    if (pass == passing_style::forward)     { sample_print("passing style: forward", indent + 1);}
    if (cpp2::move(pass) == passing_style::forward_ref) {sample_print("passing style: forward_ref", indent + 1); }

    sample_print("declaration:", indent + 1);
    sample_traverser(CPP2_UFCS(get_declaration)(t), indent + 2);
}

#line 3509 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto params {CPP2_UFCS(get_parameters)(stmt)}; 
    if (!(CPP2_UFCS(empty)(params))) {
        sample_print("statement parameters: ", indent);
        for ( auto const& param : cpp2::move(params) ) {
            sample_traverser(param, indent + 1);
        }
    }

    if (CPP2_UFCS(is_expression_statement)(stmt)) {
        sample_traverser(CPP2_UFCS(get_expression)(CPP2_UFCS(as_expression_statement)(stmt)), indent);
    }

    if (CPP2_UFCS(is_compound_statement)(stmt)) {
        sample_traverser(CPP2_UFCS(as_compound_statement)(stmt), indent);
    }

    if (CPP2_UFCS(is_selection_statement)(stmt)) 
    {
        auto sel {CPP2_UFCS(as_selection_statement)(stmt)}; 
        sample_print("" + cpp2::to_string(CPP2_UFCS(get_identifier)(sel)) + " statement", indent);

        sample_print("condition:", indent + 1);
        sample_traverser(CPP2_UFCS(get_expression)(sel), indent + 2);

        sample_print("true branch:", indent + 1);
        sample_traverser(CPP2_UFCS(get_true_branch)(sel), indent + 2);

        if (CPP2_UFCS(has_false_branch)(sel)) {
            sample_print("false branch:", indent + 1);
            sample_traverser(CPP2_UFCS(get_false_branch)(cpp2::move(sel)), indent + 2);
        }
    }

    if (CPP2_UFCS(is_declaration)(stmt)) {
        sample_traverser(CPP2_UFCS(as_declaration)(stmt), indent + 1);
    }

    if (CPP2_UFCS(is_return_statement)(stmt)) {
        sample_traverser(CPP2_UFCS(as_return_statement)(stmt), indent + 1);
    }

    if (CPP2_UFCS(is_iteration_statement)(stmt)) {
        sample_traverser(CPP2_UFCS(as_iteration_statement)(stmt), indent + 1);
    }

    // TODO:
    //  using
    //  contract
    //  inspect
    //  jump
}

#line 3564 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::compound_statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto stmts {CPP2_UFCS(get_statements)(stmt)}; 

    if (CPP2_UFCS(empty)(stmts)) {
        sample_print("compound statement (empty)", indent);
        return ; 
    }

    // Else
    sample_print("compound statement", indent);
    for ( auto const& stmt2 : cpp2::move(stmts) ) {
        sample_traverser(stmt2, indent + 1);
    }
}

#line 3581 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::return_statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void
{
    sample_print("return statement", indent);
    if (CPP2_UFCS(has_expression)(stmt)) {
        sample_print("expression", indent + 1);
        sample_traverser(CPP2_UFCS(get_expression)(stmt), indent + 2);
    }
}

#line 3591 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::iteration_statement> stmt, cpp2::impl::in<cpp2::i32> indent) -> void
{
    if (CPP2_UFCS(is_do)(stmt) || CPP2_UFCS(is_while)(stmt)) {
        if (CPP2_UFCS(is_do)(stmt)) {
            sample_print("do loop:", indent);
        }
        else {
            sample_print("while loop:", indent);
        }
        sample_print("condition:", indent + 1);
        sample_traverser(CPP2_UFCS(get_do_while_condition)(stmt), indent + 2);
        sample_print("body:", indent + 1);
        sample_traverser(CPP2_UFCS(get_do_while_body)(stmt), indent + 2);
    }
    else {
        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_for)(stmt)) ) { cpp2::cpp2_default.report_violation(""); }
        sample_print("for loop:", indent);
        sample_print("range:", indent + 1);
        sample_traverser(CPP2_UFCS(get_for_range)(stmt), indent + 2);
        sample_print("parameter:", indent + 1);
        sample_traverser(CPP2_UFCS(get_for_parameter)(stmt), indent + 2);
        sample_print("body:", indent + 1);
        sample_traverser(CPP2_UFCS(get_for_body)(stmt), indent + 2);
    }

    if (CPP2_UFCS(has_next)(stmt)) {
        sample_print("next expression:", indent + 1);
        sample_traverser(CPP2_UFCS(get_next_expression)(stmt), indent + 2);
    }
}

#line 3623 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::expression> expr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    //  An expression has other shortcuts to query deeper properties,
    //  but let's just traverse all the nested grammar elements to
    //  show how that traversal works

    //  The expression's basic payload is just an assignment expression
    //  today - this can change when we add try-expressions
    if (CPP2_UFCS(is_assignment_expression)(expr)) {
        sample_traverser(CPP2_UFCS(as_assignment_expression)(expr), indent);
    }
}

#line 3637 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::assignment_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual assignment,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("assignment", indent);
{
auto first{true};

#line 3653 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3663 "source/reflect.h2"
    }
}

#line 3667 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::logical_or_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual logical-or,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("logical-or", indent);
{
auto first{true};

#line 3683 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3693 "source/reflect.h2"
    }
}

#line 3697 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::logical_and_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual logical-and,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("logical-and", indent);
{
auto first{true};

#line 3713 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3723 "source/reflect.h2"
    }
}

#line 3727 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::bit_or_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual bit-or,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("bit-or", indent);
{
auto first{true};

#line 3743 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3753 "source/reflect.h2"
    }
}

#line 3757 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::bit_xor_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual bit-xor,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("bit-xor", indent);
{
auto first{true};

#line 3773 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3783 "source/reflect.h2"
    }
}

#line 3787 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::bit_and_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual bit-and,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("bit-and", indent);
{
auto first{true};

#line 3803 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3813 "source/reflect.h2"
    }
}

#line 3817 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::equality_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual equality,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("equality", indent);
{
auto first{true};

#line 3833 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3843 "source/reflect.h2"
    }
}

#line 3847 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::relational_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual relational,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("relational", indent);
{
auto first{true};

#line 3863 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3873 "source/reflect.h2"
    }
}

#line 3877 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::compare_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual compare,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("compare", indent);
{
auto first{true};

#line 3893 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3903 "source/reflect.h2"
    }
}

#line 3907 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::shift_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual shift,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("shift", indent);
{
auto first{true};

#line 3923 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3933 "source/reflect.h2"
    }
}

#line 3937 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::additive_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual additive,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("additive", indent);
{
auto first{true};

#line 3953 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3963 "source/reflect.h2"
    }
}

#line 3967 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::multiplicative_expression> binexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(binexpr)}; 
    if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(terms))) ) { cpp2::cpp2_default.report_violation(""); }

    //  If this has only one term, it's not an actual multiplicative,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(ssize)(terms) == 1) {
        sample_traverser(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms))), indent);
    }

    //  Else we're at an actual binary expression with a rhs
    else {
        sample_print("multiplicative", indent);
{
auto first{true};

#line 3983 "source/reflect.h2"
        for ( 
             auto const& term : cpp2::move(terms) ) 
        {
            if (!(first)) {
                sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            }
            first = false;
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_term)(term), indent + 2);
        }
}
#line 3993 "source/reflect.h2"
    }
}

#line 3997 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::is_as_expression> isas, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(isas)}; 

    //  If this has no additional terms, it's not an actual is-as,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(empty)(terms)) {
        sample_traverser(CPP2_UFCS(get_expression)(isas), indent);
    }

    //  Else we're at an actual is-as expression with a rhs
    else {
        sample_print("is-as expression", indent);

        sample_print("expression", indent + 1);
        sample_traverser(CPP2_UFCS(get_expression)(isas), indent + 2);

        for ( auto const& term : cpp2::move(terms) ) {
            sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            sample_print("term:", indent + 1);
            sample_traverser(CPP2_UFCS(get_expr)(term), indent + 2);
        }
    }
}

#line 4023 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::expression_list> exprs, cpp2::impl::in<cpp2::i32> indent) -> void
{
    if (CPP2_UFCS(is_empty)(exprs)) {
        sample_print("()", indent);
    }
    else {
        sample_print("(", indent);
        for ( auto const& expr : CPP2_UFCS(get_expressions)(exprs) ) {
            sample_traverser(expr, indent + 1);
        }
        sample_print(")", indent);
    }
}

#line 4038 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::prefix_expression> prefix, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto ops {CPP2_UFCS(get_ops)(prefix)}; 

    //  If this has no additional ops, it's not a naked prefix expr,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(empty)(ops)) {
        sample_traverser(CPP2_UFCS(get_postfix_expression)(prefix), indent);
    }

    //  Else we're at an actual prefix expression with ops
    else {
        sample_print("prefix expression", indent);

        for ( auto const& op : cpp2::move(ops) ) {
            sample_print("op: " + cpp2::to_string(op) + "", indent + 1);
        }

        sample_print("expression", indent + 1);
        sample_traverser(CPP2_UFCS(get_postfix_expression)(prefix), indent + 2);
    }
}

#line 4062 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::postfix_expression> postfix, cpp2::impl::in<cpp2::i32> indent) -> void
{
    auto terms {CPP2_UFCS(get_terms)(postfix)}; 

    //  If this has no additional terms, it's not a naked postfix expr,
    //  it's holding a lower grammar production so go traverse that
    if (CPP2_UFCS(empty)(terms)) {
        sample_traverser(CPP2_UFCS(get_primary_expression)(postfix), indent);
    }

    //  Else we're at an actual postfix expression with ops
    else {
        sample_print("postfix expression", indent);

        sample_print("expression", indent + 1);
        sample_traverser(CPP2_UFCS(get_primary_expression)(postfix), indent + 2);

        for ( auto const& term : cpp2::move(terms) ) {
            sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
            if (CPP2_UFCS(is_id_expression)(term)) {
                sample_traverser(CPP2_UFCS(get_id_expression)(term), indent + 1);
            }
            else {if (CPP2_UFCS(is_expression_list)(term)) {
                sample_traverser(CPP2_UFCS(get_expression_list)(term), indent + 1);
            }
            else {if (CPP2_UFCS(is_expression)(term)) {
                sample_traverser(CPP2_UFCS(get_expression)(term), indent + 1);
            }}}
        }
    }
}

#line 4095 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::unqualified_id> uid, cpp2::impl::in<cpp2::i32> indent) -> void
{
    if (CPP2_UFCS(is_identifier)(uid)) {
        sample_print(CPP2_UFCS(get_identifier)(uid), indent);
    }
    else {
        sample_print(CPP2_UFCS(to_string)(uid), indent + 1);
    }
}

#line 4106 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::qualified_id> qid, cpp2::impl::in<cpp2::i32> indent) -> void
{
{
auto first{true};

#line 4109 "source/reflect.h2"
    for ( 
         auto const& term : CPP2_UFCS(get_terms)(qid) ) 
    {
        if (!(first)) {
            sample_print("op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + "", indent + 1);
        }
        first = false;
        sample_print("unqualified:", indent + 1);
        sample_traverser(CPP2_UFCS(get_unqualified)(term), indent + 2);
    }
}
#line 4119 "source/reflect.h2"
}

#line 4122 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::type_id> tid, cpp2::impl::in<cpp2::i32> indent) -> void
{
    if (CPP2_UFCS(is_postfix_expression)(tid)) {
        sample_traverser(CPP2_UFCS(as_postfix_expression)(tid), indent);
    }
    else {if (CPP2_UFCS(is_qualified_id)(tid)) {
        sample_traverser(CPP2_UFCS(as_qualified_id)(tid), indent);
    }
    else {if (CPP2_UFCS(is_unqualified_id)(tid)) {
        sample_traverser(CPP2_UFCS(as_unqualified_id)(tid), indent);
    }
    else {
        sample_print(CPP2_UFCS(to_string)(tid), indent);
    }}}
}

#line 4139 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::primary_expression> primary, cpp2::impl::in<cpp2::i32> indent) -> void
{
    if (CPP2_UFCS(is_identifier)(primary)) {
        sample_print(CPP2_UFCS(as_identifier)(primary), indent + 1);
    }
    else {if (CPP2_UFCS(is_expression_list)(primary)) {
        sample_traverser(CPP2_UFCS(as_expression_list)(primary), indent + 1);
    }
    else {if (CPP2_UFCS(is_literal)(primary)) {
        sample_print(CPP2_UFCS(as_literal)(primary), indent + 1);
    }
    else {if (CPP2_UFCS(is_declaration)(primary)) {
        sample_traverser(CPP2_UFCS(as_declaration)(primary), indent + 1);
    }
    else {
        sample_print(CPP2_UFCS(to_string)(primary), indent + 1);
    }}}}
}

#line 4159 "source/reflect.h2"
auto sample_traverser(cpp2::impl::in<meta::id_expression> idexpr, cpp2::impl::in<cpp2::i32> indent) -> void
{
    if (CPP2_UFCS(is_identifier)(idexpr)) {
        sample_print(CPP2_UFCS(as_identifier)(idexpr), indent + 1);
    }
    else {if (CPP2_UFCS(is_qualified)(idexpr)) {
        sample_traverser(CPP2_UFCS(as_qualified)(idexpr), indent + 1);
    }
    else {if (CPP2_UFCS(is_unqualified)(idexpr)) {
        sample_traverser(CPP2_UFCS(as_unqualified)(idexpr), indent + 1);
    }
    else {
        sample_print(CPP2_UFCS(to_string)(idexpr), indent + 1);
    }}}
}

#line 4176 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  autodiff
//

/*
  @brief Automatic differentiation support for Cpp2 metaprogramming.
 
  This section implements the `@autodiff` metafunction. It traverses a type
  declaration, discovers active variables, and emits differentiated members.
  This is a proof-of-concept implementation; reverse mode is only partially
  implemented and not yet well tested (see docs).
 
  Options are parsed from text template arguments:
  - "reverse" enables reverse-mode adjoints (default suffix `_b`).
  - "order=<n>" enables higher-order derivatives via `cpp2::taylor`.
  - "suffix=<s>" overrides the forward suffix (default `_d`).
  - "rws_suffix=<s>" overrides the reverse suffix.
 
  Pipeline overview:
  - `autodiff(...)` parses the options, builds an `autodiff_context`, sets suffixes,
    and pushes the namespace/type stack so lookups can resolve declarations.
  - `autodiff_declaration_handler` walks declarations and emits new members:
    `f_d` for forward mode and `f_b` for reverse mode. Signatures are expanded
    with `_d` and `_b` parameters and with return storage for the primal value.
  - `autodiff_stmt_handler` walks statements and emits the primal block plus
    a reverse block. It uses `cpp2::ad_stack` to save/restore overwritten locals.
  - `autodiff_expression_handler` converts each expression into three strings:
    `primal_expr`, `fwd_expr`, and `rws_expr` (backprop template). It uses
    placeholders like `_r_`, `_rd_`, `_rb_` and creates temporaries for
    active subexpressions via `gen_temporary()`.
  - `autodiff_diff_code` buffers the output; reverse backprop snippets are
    prepended so they execute in reverse order after the primal pass.
  - Function calls are handled by `handle_function_call()`: it either expands a
    `special_func` template (sin/cos/exp/sqrt/push_back) or emits calls to
    `f_d`/`f_b`. When a call is emitted, `add_for_differentiation()` queues the
    callee so `pop_stack()` can generate its derivative later.
 
  Reverse-mode AST traversal and manipulation:
  - `apply_metafunctions` builds a `meta::type_declaration` and calls `autodiff`.
    In reverse mode, `autodiff_context.reverse` is set and `rws_suffix` is applied.
  - `autodiff_declaration_handler` is a `simple_traverser`; its `pre_traverse`
    drives a depth-first walk of the reflection AST. Each node visit calls the
    handler's `traverse` override, then recurses into children via `pre_traverse`.
  - When a `meta::function_declaration` is visited, the handler constructs a new
    reverse-mode signature (adds `_b` parameters and return adjoint storage) and
    then uses `autodiff_stmt_handler::pre_traverse` on the function body.
  - The statement handler uses `autodiff_activity_check` (also a `simple_traverser`)
    to decide which variables are active, and `autodiff_expression_handler` to
    translate each RHS expression into primal code and a backprop template.
  - The handler emits new code into `autodiff_diff_code` buffers, and mutates the
    reflection AST by calling `decl.add_member(...)` on the enclosing type to add
    the generated `f_b` function (and includes `cpp2ad_stack.h` for save/restore).
  - Reverse-mode accumulation is created by prepending backprop snippets so they
    execute in exact reverse order of the primal statements, mirroring a tape.
    Overwrites inside a compound statement are guarded with `ad_stack::push/pop`.
 
  Reverse-mode pipeline diagram:
  @code
  @autodiff<"reverse"> tag
    |
    v
  apply_metafunctions
    |
    v
  autodiff(type_declaration)
    |
    v
  autodiff_declaration_handler::pre_traverse
    |
    +--> function_declaration:
    |      - build f_b signature (add _b params, return adjoint)
    |      - autodiff_stmt_handler::pre_traverse(body)
    |             |
    |             +--> statement/expr nodes:
    |                   - autodiff_activity_check (is active?)
    |                   - autodiff_expression_handler (primal + backprop)
    |                   - append to diff buffers
    |      - emit f_b into type via decl.add_member(...)
    |
    +--> type/object members (if any)
    |
    v
  autodiff_context.finish()  // process queued callee diffs
  @endcode
 
  Reverse-mode example:
  @code
  f: (x: double, y: double) -> double = {
      z := x  y;
      return z + sin(x);
  }
  @endcode
 
  Tag the enclosing type with `@autodiff<"reverse">`. The reflection pipeline
  parses `f` into `meta::function_declaration` and its statements/expressions
  (via `simple_traverser::pre_traverse`) and emits a reverse function:
  @code
  f_b: (in x: double, inout x_b: double,
        in y: double, inout y_b: double,
        inout r_b: double) -> (r: double) = { ... }
  @endcode
 
  Callers seed the return adjoint and zero the input adjoints:
  @code
  x_b := 0.0; y_b := 0.0; r_b := 1.0;
  r := ad::f_b(x, x_b, y, y_b, r_b);
  // x_b == df/dx, y_b == df/dy
  @endcode
 
  How the reverse body is generated:
  - For `z := x  y`, `autodiff_activity_check` marks `x` and `y` active
    (type `double`), so `z` becomes active. The multiplicative handler sets
    `primal_expr` to `x  y` and `rws_expr` to:
      `x_b += y  _rb_;`
      `y_b += x  _rb_;`
    `gen_declaration("z")` emits:
      `z_b : double = 0.0;`
      `z   : double = x  y;`
    and backprop that substitutes `_rb_` with `z_b` and appends `z_b = 0.0`
    (the prepend order means `z_b` is cleared after it is used).
  - For `return z + sin(x)`, `sin` is handled by `special_funcs`, so its
    reverse template becomes `x_b += cos(x)  _rb_;`. The additive handler
    also adds `z_b += _rb_;`. `gen_assignment("r")` connects the incoming
    `r_b` to both `z_b` and `x_b`, then clears `r_b`.
  - `autodiff_diff_code::add_reverse_backprop` prepends statements so the
    backprop block executes in reverse order of the primal block, yielding
    the correct adjoint accumulation for `x_b` and `y_b`.
 
  Note: There is no explicit graph object. The "graph" is implicit in the
  AST traversal, generated temporaries, and the backprop templates that link
  each temporary's adjoint to its inputs.
 */
/// Special-case function templates used for AD code generation.

    /// Function name to match.

    /// Arity for the special-case entry.

    /// True when matching a member function call.

#line 4318 "source/reflect.h2"
    /// Primal code template.

    /// Forward-mode code template.

    /// Reverse-mode backprop code template.

    /// Higher-order primal template.

    /// Higher-order forward template.

    /// Higher-order reverse template.

#line 4331 "source/reflect.h2"
    /*
      @brief Construct a special-case entry and derive higher-order defaults.
      @param name_ Function name to match.
      @param n_args_ Number of arguments expected.
      @param is_member_ True when matching a member function call.
      @param code_primal_ Primal template code.
      @param code_fwd_ Forward-mode template code.
      @param code_rws_ Reverse-mode backprop template code.
      @param code_primal_higher_order_ Primal template for higher order.
      @param code_fwd_higher_order_ Forward template for higher order.
      @param code_rws_higher_order_ Reverse template for higher order.
      @return No return value.
     */
#line 4344 "source/reflect.h2"
    autodiff_special_func::autodiff_special_func(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, cpp2::impl::in<std::string> code_primal_, cpp2::impl::in<std::string> code_fwd_, 
                          cpp2::impl::in<std::string> code_rws_, cpp2::impl::in<std::string> code_primal_higher_order_, cpp2::impl::in<std::string> code_fwd_higher_order_, 
                          cpp2::impl::in<std::string> code_rws_higher_order_)
        : name{ name_ }
        , n_args{ n_args_ }
        , is_member{ is_member_ }
        , code_primal{ code_primal_ }
        , code_fwd{ code_fwd_ }
        , code_rws{ code_rws_ }
        , code_primal_higher_order{ code_primal_higher_order_ }
        , code_fwd_higher_order{ code_fwd_higher_order_ }
        , code_rws_higher_order{ code_rws_higher_order_ }{

#line 4358 "source/reflect.h2"
        if (CPP2_UFCS(empty)(code_primal_higher_order)) {
            code_primal_higher_order = code_primal;
        }
        if (CPP2_UFCS(empty)(code_fwd_higher_order)) {
            code_fwd_higher_order = code_fwd;
        }
        if (CPP2_UFCS(empty)(code_rws_higher_order)) {
            code_rws_higher_order = code_rws;
        }
    }

    /*
      @brief Copy another special function entry.
      @param that Entry to copy from.
      @return No return value.
     */
#line 4374 "source/reflect.h2"
    autodiff_special_func::autodiff_special_func(autodiff_special_func const& that)
                                   : name{ that.name }
                                   , n_args{ that.n_args }
                                   , is_member{ that.is_member }
                                   , code_primal{ that.code_primal }
                                   , code_fwd{ that.code_fwd }
                                   , code_rws{ that.code_rws }
                                   , code_primal_higher_order{ that.code_primal_higher_order }
                                   , code_fwd_higher_order{ that.code_fwd_higher_order }
                                   , code_rws_higher_order{ that.code_rws_higher_order }{}
#line 4374 "source/reflect.h2"
    auto autodiff_special_func::operator=(autodiff_special_func const& that) -> autodiff_special_func& {
                                   name = that.name;
                                   n_args = that.n_args;
                                   is_member = that.is_member;
                                   code_primal = that.code_primal;
                                   code_fwd = that.code_fwd;
                                   code_rws = that.code_rws;
                                   code_primal_higher_order = that.code_primal_higher_order;
                                   code_fwd_higher_order = that.code_fwd_higher_order;
                                   code_rws_higher_order = that.code_rws_higher_order;
                                   return *this; }
#line 4374 "source/reflect.h2"
    autodiff_special_func::autodiff_special_func(autodiff_special_func&& that) noexcept
                                   : name{ std::move(that).name }
                                   , n_args{ std::move(that).n_args }
                                   , is_member{ std::move(that).is_member }
                                   , code_primal{ std::move(that).code_primal }
                                   , code_fwd{ std::move(that).code_fwd }
                                   , code_rws{ std::move(that).code_rws }
                                   , code_primal_higher_order{ std::move(that).code_primal_higher_order }
                                   , code_fwd_higher_order{ std::move(that).code_fwd_higher_order }
                                   , code_rws_higher_order{ std::move(that).code_rws_higher_order }{}
#line 4374 "source/reflect.h2"
    auto autodiff_special_func::operator=(autodiff_special_func&& that) noexcept -> autodiff_special_func& {
                                   name = std::move(that).name;
                                   n_args = std::move(that).n_args;
                                   is_member = std::move(that).is_member;
                                   code_primal = std::move(that).code_primal;
                                   code_fwd = std::move(that).code_fwd;
                                   code_rws = std::move(that).code_rws;
                                   code_primal_higher_order = std::move(that).code_primal_higher_order;
                                   code_fwd_higher_order = std::move(that).code_fwd_higher_order;
                                   code_rws_higher_order = std::move(that).code_rws_higher_order;
                                   return *this; }// Default copy.

    /*
      @brief Test if this entry matches another by name, arity, and member flag.
      @param o Candidate entry to compare.
      @return True when name, argument count, and member flag match.
     */
#line 4381 "source/reflect.h2"
    [[nodiscard]] auto autodiff_special_func::is_match(cpp2::impl::in<autodiff_special_func> o) const& -> bool{
        return name == o.name && n_args == o.n_args && is_member == o.is_member; 
    }

#line 4386 "source/reflect.h2"
/// Records a declared variable and its AD activity.

    /// Variable name.

    /// Declared type name (string form).
                                        // TODO: Maybe use variant here.
    /// True if this variable participates in AD.

    /// True if this is a member variable of `this`.

#line 4397 "source/reflect.h2"
    /*
      @brief Default initialize the variable record.
      @return No return value.
     */
#line 4401 "source/reflect.h2"
    autodiff_declared_variable::autodiff_declared_variable(){}

    /*
      @brief Construct a declared variable record.
      @param name_ Variable name.
      @param decl_ Declared type string.
      @param is_active_ True if the variable participates in AD.
      @param is_member_ True if the variable is a member of `this`.
      @return No return value.
     */
#line 4411 "source/reflect.h2"
    autodiff_declared_variable::autodiff_declared_variable(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> decl_, cpp2::impl::in<bool> is_active_, cpp2::impl::in<bool> is_member_)
        : name{ name_ }
        , decl{ decl_ }
        , is_active{ is_active_ }
        , is_member{ is_member_ }{

#line 4416 "source/reflect.h2"
    }

    /*
      @brief Copy another variable record.
      @param that Record to copy from.
      @return No return value.
     */
#line 4423 "source/reflect.h2"
    autodiff_declared_variable::autodiff_declared_variable(autodiff_declared_variable const& that)
                                  : name{ that.name }
                                  , decl{ that.decl }
                                  , is_active{ that.is_active }
                                  , is_member{ that.is_member }{}
#line 4423 "source/reflect.h2"
    auto autodiff_declared_variable::operator=(autodiff_declared_variable const& that) -> autodiff_declared_variable& {
                                  name = that.name;
                                  decl = that.decl;
                                  is_active = that.is_active;
                                  is_member = that.is_member;
                                  return *this; }
#line 4423 "source/reflect.h2"
    autodiff_declared_variable::autodiff_declared_variable(autodiff_declared_variable&& that) noexcept
                                  : name{ std::move(that).name }
                                  , decl{ std::move(that).decl }
                                  , is_active{ std::move(that).is_active }
                                  , is_member{ std::move(that).is_member }{}
#line 4423 "source/reflect.h2"
    auto autodiff_declared_variable::operator=(autodiff_declared_variable&& that) noexcept -> autodiff_declared_variable& {
                                  name = std::move(that).name;
                                  decl = std::move(that).decl;
                                  is_active = std::move(that).is_active;
                                  is_member = std::move(that).is_member;
                                  return *this; }

#line 4426 "source/reflect.h2"
/// Stack entry for a type or namespace during AD traversal.

    /// Fully qualified name of the declaration.
                                      // namespace + type name
    /// The declaration itself.

#line 4433 "source/reflect.h2"
    /// Declarations requested for differentiation.

    /// Declarations already differentiated.

#line 4438 "source/reflect.h2"
    /// Nested variable scopes for the current declaration.

#line 4441 "source/reflect.h2"
    /*
      @brief Construct a stack item for a declaration context.
      @param full_name_ Fully qualified name for the declaration.
      @param decl_ Declaration being tracked.
      @return No return value.
     */
#line 4447 "source/reflect.h2"
    autodiff_declaration_stack_item::autodiff_declaration_stack_item(cpp2::impl::in<std::string> full_name_, cpp2::impl::in<meta::type_or_namespace_declaration> decl_)
        : full_name{ full_name_ }
        , decl{ decl_ }{

#line 4450 "source/reflect.h2"
    }

    /*
      @brief Find declarations in the current type or namespace by name.
      @param decl_name Name to look up.
      @return List of matching declarations (overloads are preserved).
     */
#line 4457 "source/reflect.h2"
    [[nodiscard]] auto autodiff_declaration_stack_item::lookup_declaration(cpp2::impl::in<std::string> decl_name) const& -> lookup_declaration_ret{
        std::vector<meta::declaration> r {};
#line 4458 "source/reflect.h2"
        for ( auto const& cur : CPP2_UFCS(get_members)(decl) ) {
            if (CPP2_UFCS(has_name)(cur) && decl_name == CPP2_UFCS(name)(cur)) {
                CPP2_UFCS(push_back)(r, cur);

                // Do not break for overloads. <3
            }
        }return r; 
    }

    /*
      @brief Find a variable declaration in the current scope chain.
      @param decl_name Variable name to look up.
      @return Tuple with `found` flag and the matching variable record.
     */
#line 4472 "source/reflect.h2"
    [[nodiscard]] auto autodiff_declaration_stack_item::lookup_variable_declaration(cpp2::impl::in<std::string> decl_name) const& -> lookup_variable_declaration_ret{
        bool found {false};
        autodiff_declared_variable r {};
{
auto cur_context{CPP2_UFCS(rbegin)(declared_variables_stack)};
        //  Note: Not using "for std::ranges::views::reverse(...)" because
        //  that does not work correctly in Clang 12 + older libstdc++

#line 4476 "source/reflect.h2"
        for( ; cur_context != CPP2_UFCS(rend)(declared_variables_stack); 
              ++cur_context ) 
        {
            for ( auto const& cur : *cpp2::impl::assert_not_null(cur_context) ) {
                if (cur.name == decl_name) {
                    found = true;
                    r = cur;
                    return  { std::move(found), std::move(r) }; 
                }
            }
        }
}
#line 4477 "source/reflect.h2"
        return  { std::move(found), std::move(r) }; 

#line 4487 "source/reflect.h2"
    }

    autodiff_declaration_stack_item::autodiff_declaration_stack_item(autodiff_declaration_stack_item const& that)
                                     : full_name{ that.full_name }
                                     , decl{ that.decl }
                                     , diff_request{ that.diff_request }
                                     , diff_done{ that.diff_done }
                                     , declared_variables_stack{ that.declared_variables_stack }{}
autodiff_declaration_stack_item::autodiff_declaration_stack_item(autodiff_declaration_stack_item&& that) noexcept
                                     : full_name{ std::move(that).full_name }
                                     , decl{ std::move(that).decl }
                                     , diff_request{ std::move(that).diff_request }
                                     , diff_done{ std::move(that).diff_done }
                                     , declared_variables_stack{ std::move(that).declared_variables_stack }{}

#line 4492 "source/reflect.h2"
/*
  @brief Shared state for one autodiff run (order, mode, suffixes, lookup caches).
 */

    /// Counter for generating unique temporary names.

#line 4499 "source/reflect.h2"
    /// Code in special functions is replaced using placeholder tokens:
    /// _o_ object, _od_ object derivative, _ob_ object adjoint,
    /// _aN_ argument, _adN_ derivative argument, _abN_ adjoint, _rb_ incoming adjoint.

                                        /* is_member = */

#line 4512 "source/reflect.h2"
                                        /* is_member = */

#line 4520 "source/reflect.h2"
                                        /* is_member = */

#line 4528 "source/reflect.h2"
                                         /* is_member = */

#line 4536 "source/reflect.h2"
                                              /* is_member = */

#line 4542 "source/reflect.h2"
    /// Suffix for forward-mode values.

    /// Suffix for reverse-mode adjoints.

    /// AD order (1 for standard dual/adjoint).

    /// True for reverse mode; forward mode otherwise.

    /// True to enable debug output during AD processing.

#line 4553 "source/reflect.h2"
    /// Forward-mode AD scalar type for the configured order.

    /// Reverse-mode AD scalar type for the configured order.

#line 4558 "source/reflect.h2"
    /// Cache of declaration lookups by fully qualified name.

    /// Stack of namespace/type contexts.

#line 4563 "source/reflect.h2"
    /*
      @brief Default initialize the autodiff context.
      @return No return value.
     */
#line 4567 "source/reflect.h2"
    autodiff_context::autodiff_context(){}
    /*
      @brief Initialize order and mode and configure AD types.
      @param order_ Differentiation order (1 for standard).
      @param reverse_ True to enable reverse mode.
      @return No return value.
     */
#line 4574 "source/reflect.h2"
    autodiff_context::autodiff_context(cpp2::impl::in<int> order_, cpp2::impl::in<bool> reverse_)
        : order{ order_ }
        , reverse{ reverse_ }{

#line 4578 "source/reflect.h2"
        if (1 != order) {
            if (reverse) {
                fwd_ad_type = "cpp2::taylor<double, " + cpp2::to_string(order - 1) + ">";
                rws_ad_type = "cpp2::taylor<double, " + cpp2::to_string(order) + ">";
            }
            else {
                fwd_ad_type = "cpp2::taylor<double, " + cpp2::to_string(order) + ">";
            }
        }

    }

    /*
      @brief Record a local or member variable and whether it is active.
      @param name Variable name.
      @param type Declared type string.
      @param is_active True if the variable participates in AD.
      @param is_member True if the variable is a member of `this`.
      @return No return value.
     */
#line 4598 "source/reflect.h2"
    auto autodiff_context::add_variable_declaration(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type, cpp2::impl::in<bool> is_active, cpp2::impl::in<bool> is_member) & -> void{
        CPP2_UFCS(push_back)(CPP2_UFCS(back)(CPP2_UFCS(back)(declaration_stack).declared_variables_stack), autodiff_declared_variable(name, type, is_active, is_member));
    }

    /*
      @brief Query whether a variable name is marked active.
      @param name Variable name to look up.
      @return True if the variable is marked active.
     */
#line 4607 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::is_variable_active(cpp2::impl::in<std::string> name) & -> bool{
        return lookup_variable_declaration(name).is_active; 
    }

    /*
      @brief Build the declaration stack for nested namespaces/types.
      @param t Type or namespace declaration to push.
      @return No return value.
     */
#line 4616 "source/reflect.h2"
    auto autodiff_context::create_namespace_stack(cpp2::impl::in<meta::type_or_namespace_declaration> t) & -> void{
        if (CPP2_UFCS(parent_is_nonglobal_namespace)(t)) {
            create_namespace_stack(CPP2_UFCS(as_nonglobal_namespace)(CPP2_UFCS(get_parent)(t)));
        }
        else {if (CPP2_UFCS(parent_is_type)(t)) {
            create_namespace_stack(CPP2_UFCS(as_type)(CPP2_UFCS(get_parent)(t)));
        }}

        std::string full_name {"::"}; 
        if (!(CPP2_UFCS(empty)(declaration_stack))) {
            full_name = CPP2_UFCS(back)(declaration_stack).full_name + "::";
        }
        full_name += CPP2_UFCS(name)(t);

        static_cast<void>(CPP2_UFCS(push_back)(declaration_stack, autodiff_declaration_stack_item(cpp2::move(full_name), t)));
    }

    /*
      @brief Check if forward code should be emitted.
      @return True when forward-mode code is enabled.
     */
#line 4637 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::is_forward() const& -> decltype(auto) { return !(reverse) || (reverse && order != 1);  }
    /*
      @brief Check if reverse code should be emitted.
      @return True when reverse-mode code is enabled.
     */
#line 4642 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::is_reverse() const& -> decltype(auto) { return reverse;  }
    /*
      @brief Check if higher-order Taylor types are used.
      @return True when order is not 1.
     */
#line 4647 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::is_taylor() const& -> decltype(auto) { return order != 1;  }

    /*
      @brief Generate a unique temporary name for intermediate expressions.
      @return Fresh temporary identifier.
     */
#line 4653 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::gen_temporary() & -> std::string{
        temporary_count += 1;
        return "temp_" + cpp2::to_string(temporary_count) + ""; 
    }

    /*
      @brief Determine whether a type is active for AD.
      @param type Type name to check.
      @return True if the type is considered active.
     */
#line 4663 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::is_type_active(cpp2::impl::in<std::string> type) & -> bool{
        auto decls {lookup_type_declaration(type)}; 
        auto r {false}; 

        if (!(CPP2_UFCS(empty)(decls))) {
            if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(ssize)(decls) == 1) ) { cpp2::cpp2_default.report_violation(""); }
            autodiff_activity_check ada {&(*this)}; 
            CPP2_UFCS(pre_traverse)(ada, CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(decls), 0));
            r = cpp2::move(ada).active;
        }

        // TODO: Add template activity lookup.

        if (!(r)) {
            // Declaration lookup did not yield an activity: Apply some heuristics.
            r = CPP2_UFCS(contains)(type, "double");
        }

        return r; 
    }

    /*
      @brief Map a type to its forward-mode AD type and request differentiation if needed.
      @param type Original type name.
      @return Forward-mode AD type name.
     */
#line 4689 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::get_fwd_ad_type(cpp2::impl::in<std::string> type) & -> std::string{
        auto type_d {type}; 

        if ("double" != type) {
            auto type_decls {lookup_type_declaration(type)}; 
            if (!(CPP2_UFCS(empty)(type_decls))) {
                // We found a cpp2 type declaration, mark it for differentiation.
                add_for_differentiation(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(type_decls), 0));

                // Add the AD suffix to the type
                type_d += fwd_suffix;
            }
        }

        // Replace with AD type for the AD order.
        return string_util::replace_all(cpp2::move(type_d), "double", fwd_ad_type); 
    }

    /*
      @brief Map a type to its reverse-mode AD type and request differentiation if needed.
      @param type Original type name.
      @return Reverse-mode AD type name.
     */
#line 4712 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::get_rws_ad_type(cpp2::impl::in<std::string> type) & -> std::string{
        auto type_d {type}; 

        if ("double" != type) {
            auto type_decls {lookup_type_declaration(type)}; 
            if (!(CPP2_UFCS(empty)(type_decls))) {
                // We found a cpp2 type declaration, mark it for differentiation.
                add_for_differentiation(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(type_decls), 0));

                // Add the AD suffix to the type
                type_d += rws_suffix;
            }
        }

        // Replace with AD type for the AD order.
        return string_util::replace_all(cpp2::move(type_d), "double", rws_ad_type); 
    }

    /*
      @brief Normalize parameter passing for reverse-mode adjoint parameters.
      @param p Original passing style.
      @return Passing style to use in reverse mode.
     */
#line 4735 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::get_reverse_passing_style(cpp2::impl::in<passing_style> p) const& -> passing_style{
        // TODO: inspect does not work here: error: error: no matching function for call to ‘is<cpp2::passing_style::in>(const cpp2::passing_style&)’
        // return inspect p -> passing_style  {
        //     is passing_style::in          = passing_style::inout;
        //     is passing_style::in_ref      = passing_style::inout;
        //     is passing_style::copy        = passing_style::inout;
        //     is passing_style::inout       = passing_style::inout;
        //     is passing_style::out         = passing_style::inout;
        //     is passing_style::move        = passing_style::inout;
        //     is passing_style::forward     = passing_style::inout;
        //     is passing_style::forward_ref = passing_style::inout;
        //     is _                          = passing_style::inout;
        // };
        if (p == passing_style::in)          { return  passing_style::inout; }
        if (p == passing_style::in_ref)      { return  passing_style::inout; }
        if (p == passing_style::copy)        { return  passing_style::inout; }
        if (p == passing_style::inout)       { return  passing_style::inout; }
        if (p == passing_style::out)         { return  passing_style::inout; }
        if (p == passing_style::move)        { return  passing_style::inout; }
        if (p == passing_style::forward)     { return  passing_style::inout; }
        if (p == passing_style::forward_ref) { return  passing_style::inout; }

#line 4758 "source/reflect.h2"
        CPP2_UFCS(error)(CPP2_UFCS(back)(declaration_stack).decl, "AD: Do not know how to handle passing style:" + cpp2::to_string(p) + "");

        return  passing_style::inout; 
    }

    /*
      @brief Lookup a declaration by name using the stack of parent scopes.
      @param decl_name Name to resolve.
      @return List of matching declarations.
     */
#line 4768 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::lookup_declaration(cpp2::impl::in<std::string> decl_name) & -> lookup_declaration_ret{
        std::vector<meta::declaration> r {};
{
auto cur{CPP2_UFCS(rbegin)(declaration_stack)};
        //  Note: Not using "for std::ranges::views::reverse(...)" because
        //  that does not work correctly in Clang 12 + older libstdc++

#line 4772 "source/reflect.h2"
        for( ; cur != CPP2_UFCS(rend)(declaration_stack); 
              ++cur ) 
        {
            std::string cur_full_name {(*cpp2::impl::assert_not_null(cur)).full_name + "::" + decl_name}; 
            auto ele {CPP2_UFCS(find)(declaration_map, cur_full_name)}; 
            if (ele == CPP2_UFCS(end)(declaration_map)) {
                ele = CPP2_UFCS(insert_or_assign)(declaration_map, cpp2::move(cur_full_name), CPP2_UFCS(lookup_declaration)((*cpp2::impl::assert_not_null(cur)), decl_name)).first;
            }

            if (!(CPP2_UFCS(empty)((*cpp2::impl::assert_not_null(ele)).second))) {
                // A simple assignment or emplace_back did not work. It tired to use move copy operators.
                for ( auto const& cp : (*cpp2::impl::assert_not_null(cpp2::move(ele))).second ) {
                    CPP2_UFCS(push_back)(r, cp);
                }
                //r = ele*.second;
                break;
                // TODO: For overload resolution we may want to continue here and just add everything for all parent namespaces.
            }
        }
}

#line 4792 "source/reflect.h2"
        return r; 
    }

    /*
      @brief Lookup a variable by name in nested scopes.
      @param name Variable name to resolve.
      @return Matching variable record (or empty record with errors reported).
     */
#line 4800 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::lookup_variable_declaration(cpp2::impl::in<std::string> name) & -> autodiff_declared_variable{
        if (name == "_") {
            return autodiff_declared_variable(name, "_", false, false); 
        }
{
auto cur_context{CPP2_UFCS(rbegin)(declaration_stack)};

        //  Note: Not using "for std::ranges::views::reverse(...)" because
        //  that does not work correctly in Clang 12 + older libstdc++

#line 4808 "source/reflect.h2"
        for( ; cur_context != CPP2_UFCS(rend)(declaration_stack); 
              ++cur_context ) 
        {
            auto r {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(cur_context)), name)}; 
            if (r.found) {
                return cpp2::move(r).r; 
            }
        }
}

#line 4817 "source/reflect.h2"
        CPP2_UFCS(error)(CPP2_UFCS(back)(declaration_stack).decl, "AD: Could not find declaration of variable with name `" + cpp2::to_string(name) + "`.");

        return autodiff_declared_variable(); 
    }

    /*
      @brief Lookup free functions in the current scope.
      @param decl_name Function name.
      @return Matching function declarations.
     */
#line 4827 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::lookup_function_declaration(cpp2::impl::in<std::string> decl_name) & -> lookup_function_declaration_ret{
        std::vector<meta::function_declaration> r {};
#line 4828 "source/reflect.h2"
        auto r_all {lookup_declaration(decl_name)}; 

        for ( auto const& cur : cpp2::move(r_all) ) {
            if (CPP2_UFCS(is_function)(cur)) {
                CPP2_UFCS(push_back)(r, CPP2_UFCS(as_function)(cur));
            }
        }return r; 
    }

    /*
      @brief Lookup member functions on a concrete type declaration.
      @param obj_type Type declaration to search.
      @param decl_name Member function name.
      @return Matching member function declarations.
     */
#line 4843 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::lookup_member_function_declaration(cpp2::impl::in<meta::type_declaration> obj_type, cpp2::impl::in<std::string> decl_name) & -> lookup_member_function_declaration_ret{
        std::vector<meta::function_declaration> r {};
#line 4844 "source/reflect.h2"
        for ( auto const& cur : CPP2_UFCS(get_members)(obj_type) ) {
            if (CPP2_UFCS(is_function)(cur) && CPP2_UFCS(has_name)(cur) && decl_name == CPP2_UFCS(name)(cur)) {
                CPP2_UFCS(push_back)(r, CPP2_UFCS(as_function)(cur));

                // Do not break for overloads. <3
            }
        }return r; 
    }

    /*
      @brief Lookup type declarations in the current scope.
      @param decl_name Type name.
      @return Matching type declarations.
     */
#line 4858 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::lookup_type_declaration(cpp2::impl::in<std::string> decl_name) & -> lookup_type_declaration_ret{
        std::vector<meta::type_declaration> r {};
#line 4859 "source/reflect.h2"
        auto r_all {lookup_declaration(decl_name)}; 

        for ( auto const& cur : cpp2::move(r_all) ) {
            if (CPP2_UFCS(is_type)(cur)) {
                CPP2_UFCS(push_back)(r, CPP2_UFCS(as_type)(cur));
            }
        }return r; 
    }

    /*
      @brief Match and expand a special-case function (sin, cos, etc).
      @param func_name Function name to match.
      @param n_args Number of arguments.
      @param is_member True for member function calls.
      @return Tuple containing match flag and generated templates.
     */
#line 4875 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::lookup_special_function_handling(cpp2::impl::in<std::string> func_name, cpp2::impl::in<int> n_args, cpp2::impl::in<bool> is_member) const& -> lookup_special_function_handling_ret{
            cpp2::impl::deferred_init<bool> m;
            cpp2::impl::deferred_init<std::string> code_primal;
            cpp2::impl::deferred_init<std::string> code_fwd;
            cpp2::impl::deferred_init<std::string> code_rws;
#line 4876 "source/reflect.h2"
        autodiff_special_func lookup {func_name, n_args, is_member}; 

        m.construct(false);
        code_primal.construct("");
        code_fwd.construct("");
        code_rws.construct("");
        for ( auto const& func : special_funcs ) {
            if (CPP2_UFCS(is_match)(func, lookup)) {
                m.value() = true;
                if (is_taylor()) {
                    code_primal.value() = func.code_primal_higher_order;
                    code_fwd.value() = func.code_fwd_higher_order;
                    code_rws.value() = func.code_rws_higher_order;
                }
                else {
                    code_primal.value() = func.code_primal;
                    code_fwd.value() = func.code_fwd;
                    code_rws.value() = func.code_rws;
                }
                return  { std::move(m.value()), std::move(code_primal.value()), std::move(code_fwd.value()), std::move(code_rws.value()) }; 
            }
        }return  { std::move(m.value()), std::move(code_primal.value()), std::move(code_fwd.value()), std::move(code_rws.value()) }; 
    }

    /*
      @brief Mark a declaration as already differentiated in the current context.
      @param t Declaration to mark.
      @return No return value.
     */
#line 4905 "source/reflect.h2"
    auto autodiff_context::add_as_differentiated(cpp2::impl::in<meta::declaration> t) & -> void{
        auto top {&CPP2_UFCS(back)(declaration_stack)}; 

        if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_same)(CPP2_UFCS(get_parent)(t), (*cpp2::impl::assert_not_null(top)).decl)) ) { cpp2::cpp2_default.report_violation(""); }

        CPP2_UFCS(push_back)((*cpp2::impl::assert_not_null(cpp2::move(top))).diff_done, t);
    }

    /*
      @brief Request a declaration to be differentiated by its parent context.
      @param t Declaration to enqueue.
      @return No return value.
     */
#line 4918 "source/reflect.h2"
    auto autodiff_context::add_for_differentiation(cpp2::impl::in<meta::declaration> t) & -> void{
        auto t_parent {CPP2_UFCS(get_parent)(t)}; 

        auto found {false}; 
{
auto cur{CPP2_UFCS(rbegin)(declaration_stack)};

        //  Note: Not using "for std::ranges::views::reverse(...)" because
        //  that does not work correctly in Clang 12 + older libstdc++

#line 4926 "source/reflect.h2"
        for( ; cur != CPP2_UFCS(rend)(declaration_stack); 
              ++cur ) 
        {
            if (CPP2_UFCS(is_same)(t_parent, (*cpp2::impl::assert_not_null(cur)).decl)) {
                if (!(is_in_list(t, (*cpp2::impl::assert_not_null(cur)).diff_request))) {
                    CPP2_UFCS(push_back)((*cpp2::impl::assert_not_null(cur)).diff_request, t);
                }

                found = true;
                break;
            }
        }
}

#line 4939 "source/reflect.h2"
        if (!(cpp2::move(found))) {
            CPP2_UFCS(error)(t, "AD: Could not find parent type/namespace for: " + cpp2::to_string(t) + "");
        }
    }

    /*
      @brief Check whether a declaration is in a list.
      @param v Declaration to check.
      @param list Declarations to search.
      @return True if v is present in list.
     */
#line 4950 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::is_in_list(cpp2::impl::in<meta::declaration> v, cpp2::impl::in<std::vector<meta::declaration>> list) -> bool{
        for ( auto const& cur : list ) {
            if (CPP2_UFCS(is_same)(cur, v)) {
                return true; 
            }
        }

        return false; 
    }

    /*
      @brief Enter a function scope and reset temporary naming.
      @return No return value.
     */
#line 4964 "source/reflect.h2"
    auto autodiff_context::enter_function() & -> void{
        temporary_count = 0;
        CPP2_UFCS(push_back)(CPP2_UFCS(back)(declaration_stack).declared_variables_stack, std::vector<autodiff_declared_variable>());
    }

    /*
      @brief Leave the current function scope.
      @return No return value.
     */
#line 4973 "source/reflect.h2"
    auto autodiff_context::leave_function() & -> void{
        CPP2_UFCS(pop_back)(CPP2_UFCS(back)(declaration_stack).declared_variables_stack);
    }

    /*
      @brief Push a declaration context onto the stack.
      @param decl Declaration to push.
      @return No return value.
     */
#line 4982 "source/reflect.h2"
    auto autodiff_context::push_stack(cpp2::impl::in<meta::type_or_namespace_declaration> decl) & -> void{
        std::string full_name {""}; 

        if (!(CPP2_UFCS(empty)(declaration_stack))) {
            full_name += CPP2_UFCS(back)(declaration_stack).full_name;
        }

        full_name += "::";
        full_name += CPP2_UFCS(name)(decl);

        CPP2_UFCS(push_back)(declaration_stack, autodiff_declaration_stack_item(cpp2::move(full_name), decl));
    }

    /*
      @brief Pop the current declaration context and process queued differentiations.
      @return No return value.
     */
#line 4999 "source/reflect.h2"
    auto autodiff_context::pop_stack() & -> void{
        if (cpp2::cpp2_default.is_active() && !(!(CPP2_UFCS(empty)(declaration_stack))) ) { cpp2::cpp2_default.report_violation(""); }

        auto top {&CPP2_UFCS(back)(declaration_stack)}; 
        autodiff_declaration_handler ad {&(*this), (*cpp2::impl::assert_not_null(top)).decl}; 

        for ( auto const& cur : (*cpp2::impl::assert_not_null(top)).diff_request ) {
            if (!(is_in_list(cur, (*cpp2::impl::assert_not_null(top)).diff_done))) {
                CPP2_UFCS(pre_traverse)(ad, cur);
            }
        }

        CPP2_UFCS(pop_back)(declaration_stack);
    }

    /*
      @brief Pop all remaining contexts and finalize queued differentiations.
      @return No return value.
     */
#line 5018 "source/reflect.h2"
    auto autodiff_context::finish() & -> void{
        while( !(CPP2_UFCS(empty)(declaration_stack)) ) {
            pop_stack();
        }
    }

    /*
      @brief Temporary helper for legacy callers.
      @return Pointer to this context.
     */
#line 5028 "source/reflect.h2"
    [[nodiscard]] auto autodiff_context::get_self() & -> autodiff_context*{
        return &(*this); 
    }

#line 5034 "source/reflect.h2"
/*
  @brief Context for reverse-mode IR construction and naming.
 */

    /// Owning autodiff context.

    /// Function being transformed.

#line 5043 "source/reflect.h2"
    /// Suffix used for value temporaries.

    /// Suffix used for adjoint temporaries.

#line 5048 "source/reflect.h2"
    /*
      @brief Initialize the reverse context.
      @param ctx_ Autodiff context to use.
      @param mf_ Function being transformed.
      @return No return value.
     */
#line 5054 "source/reflect.h2"
    reverse_autodiff_context::reverse_autodiff_context(cpp2::impl::in<autodiff_context*> ctx_, cpp2::impl::in<meta::function_declaration> mf_)
        : ctx{ ctx_ }
        , mf{ mf_ }{

#line 5057 "source/reflect.h2"
    }

    /*
      @brief Create a value name with the configured suffix.
      @param base Base identifier.
      @return Value name with suffix.
     */
#line 5064 "source/reflect.h2"
    [[nodiscard]] auto reverse_autodiff_context::make_value_name(cpp2::impl::in<std::string> base) const& -> std::string{
        if (base == "_") {
            return base; 
        }
        return base + value_suffix; 
    }

    /*
      @brief Create an adjoint name with the configured suffix.
      @param base Base identifier.
      @return Adjoint name with suffix.
     */
#line 5076 "source/reflect.h2"
    [[nodiscard]] auto reverse_autodiff_context::make_adj_name(cpp2::impl::in<std::string> base) const& -> std::string{
        if (base == "_") {
            return base; 
        }
        return base + adj_suffix; 
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
#line 1 "source/reflect.h2"
}}}}}}}}}}}}}}
CPP2_UFCS(report_violation)(cpp2::type_safety, CPP2_UFCS(c_str)(("can't convert string '" + cpp2::to_string(s) + "' to enum of type ad_type_kind")));
return ad_type_kind::auto_; 
}

[[nodiscard]] auto ad_type_kind::from_code(cpp2::impl::in<std::string_view> s) -> ad_type_kind{
std::string str {s}; return from_string(cpp2::string_util::replace_all(cpp2::move(str), "ad_type_kind::", "")); }

#line 5084 "source/reflect.h2"
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

#line 5118 "source/reflect.h2"
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

#line 5133 "source/reflect.h2"
                                                               // For named/template types
                                                               // For const/ref/ptr/array
                                                               // For template types
                                                               // For array types

    /// Default constructor
#line 5139 "source/reflect.h2"
    ad_type::ad_type(){}

    /// Copy constructor
#line 5142 "source/reflect.h2"
    ad_type::ad_type(ad_type const& that)
                                   : kind{ that.kind }
                                   , name{ that.name }
                                   , inner_type{ that.inner_type }
                                   , type_args{ that.type_args }
                                   , array_size{ that.array_size }{}
#line 5142 "source/reflect.h2"
    auto ad_type::operator=(ad_type const& that) -> ad_type& {
                                   kind = that.kind;
                                   name = that.name;
                                   inner_type = that.inner_type;
                                   type_args = that.type_args;
                                   array_size = that.array_size;
                                   return *this; }
#line 5142 "source/reflect.h2"
    ad_type::ad_type(ad_type&& that) noexcept
                                   : kind{ std::move(that).kind }
                                   , name{ std::move(that).name }
                                   , inner_type{ std::move(that).inner_type }
                                   , type_args{ std::move(that).type_args }
                                   , array_size{ std::move(that).array_size }{}
#line 5142 "source/reflect.h2"
    auto ad_type::operator=(ad_type&& that) noexcept -> ad_type& {
                                   kind = std::move(that).kind;
                                   name = std::move(that).name;
                                   inner_type = std::move(that).inner_type;
                                   type_args = std::move(that).type_args;
                                   array_size = std::move(that).array_size;
                                   return *this; }

    // ===== Factory methods for primitive types =====

    /*
      @brief Create an auto type.
      @return auto type node.
     */
#line 5150 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_auto() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::auto_;
        return t; 
    }

    /*
      @brief Create a void type.
      @return void type node.
     */
#line 5160 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_void() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::void_;
        return t; 
    }

    /*
      @brief Create an int type.
      @return int type node.
     */
#line 5170 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_int() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::int_;
        return t; 
    }

    /*
      @brief Create a size_t type.
      @return size_t type node.
     */
#line 5180 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_size_t() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::size_t_;
        return t; 
    }

    /*
      @brief Create a double type.
      @return double type node.
     */
#line 5190 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_double() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::double_;
        return t; 
    }

    /*
      @brief Create a float type.
      @return float type node.
     */
#line 5200 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_float() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::float_;
        return t; 
    }

    /*
      @brief Create a bool type.
      @return bool type node.
     */
#line 5210 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_bool() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::bool_;
        return t; 
    }

    /*
      @brief Create a char type.
      @return char type node.
     */
#line 5220 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_char() -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::char_;
        return t; 
    }

    // ===== Factory methods for composite types =====

    /*
      @brief Create a named type (non-template).
      @param type_name Fully qualified type name.
      @return Named type node.
     */
#line 5233 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_named(cpp2::impl::in<std::string> type_name) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::named;
        t.name = type_name;
        return t; 
    }

    /*
      @brief Create a const-qualified type.
      @param inner The type being const-qualified.
      @return const T type node.
     */
#line 5245 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_const(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::const_;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

    /*
      @brief Create an lvalue reference type.
      @param inner The type being referenced.
      @return T& type node.
     */
#line 5257 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_ref(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::ref;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

    /*
      @brief Create an rvalue reference type.
      @param inner The type being referenced.
      @return T&& type node.
     */
#line 5269 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_rvalue_ref(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::rvalue_ref;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

    /*
      @brief Create a pointer type.
      @param inner The pointed-to type.
      @return T type node.
     */
#line 5281 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_pointer(cpp2::impl::in<ad_type> inner) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::pointer;
        t.inner_type = std::make_shared<ad_type>(inner);
        return t; 
    }

    /*
      @brief Create an array type.
      @param inner Element type.
      @param size Array size (0 for unsized).
      @return T[N] type node.
     */
#line 5294 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_array(cpp2::impl::in<ad_type> inner, cpp2::impl::in<int> size) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::array;
        t.inner_type = std::make_shared<ad_type>(inner);
        t.array_size = size;
        return t; 
    }

    /*
      @brief Create a template instantiation type.
      @param template_name Template name (e.g., "std::vector").
      @param args Template type arguments.
      @return Template type node.
     */
#line 5308 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_template(cpp2::impl::in<std::string> template_name, cpp2::impl::in<std::vector<ad_type>> args) -> ad_type{
        ad_type t {}; 
        t.kind = ad_type_kind::template_;
        t.name = template_name;
        t.type_args = args;
        return t; 
    }

    // ===== Convenience factory methods for common patterns =====

    /*
      @brief Create a const reference type (const T&).
      @param inner The type being const-referenced.
      @return const T& type node.
     */
#line 5323 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_const_ref(cpp2::impl::in<ad_type> inner) -> ad_type{
        return make_const(make_ref(inner)); 
    }

    /*
      @brief Create std::vector<T> type.
      @param elem Element type.
      @return std::vector<T> type node.
     */
#line 5332 "source/reflect.h2"
    [[nodiscard]] auto ad_type::make_std_vector(cpp2::impl::in<ad_type> elem) -> ad_type{
        std::vector<ad_type> args {}; 
        CPP2_UFCS(push_back)(args, elem);
        return make_template("std::vector", cpp2::move(args)); 
    }

    // ===== Type query methods =====

    /*
      @brief Check if this type is const-qualified.
      @return true if const-qualified.
     */
#line 5344 "source/reflect.h2"
    [[nodiscard]] auto ad_type::is_const() const& -> bool{
        return kind == ad_type_kind::const_; 
    }

    /*
      @brief Check if this type is a reference.
      @return true if lvalue or rvalue reference.
     */
#line 5352 "source/reflect.h2"
    [[nodiscard]] auto ad_type::is_reference() const& -> bool{
        return kind == ad_type_kind::ref || kind == ad_type_kind::rvalue_ref; 
    }

    /*
      @brief Check if this type is a pointer.
      @return true if pointer type.
     */
#line 5360 "source/reflect.h2"
    [[nodiscard]] auto ad_type::is_pointer() const& -> bool{
        return kind == ad_type_kind::pointer; 
    }

    /*
      @brief Get the underlying type, stripping qualifiers and modifiers.
      @return Base type (recursive unwrap).
     */
#line 5368 "source/reflect.h2"
    [[nodiscard]] auto ad_type::get_base_type() const& -> ad_type{
        if (inner_type != nullptr) {
            return CPP2_UFCS(get_base_type)((*cpp2::impl::assert_not_null(inner_type))); 
        }
        return (*this); 
    }

#line 5376 "source/reflect.h2"
/*
  @brief Convert ad_type to string representation for code emission.
  @param t Type to convert.
  @return String representation of the type.
 */
#line 5381 "source/reflect.h2"
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
        auto result {t.name + "<"}; 
{
auto first{true};

#line 5428 "source/reflect.h2"
        for ( auto const& arg : t.type_args ) {
            if (!(first)) {result += ", "; }
            first = false;
            result += ad_type_to_string(arg);
        }
}
#line 5433 "source/reflect.h2"
        result += ">";
        return result; 
    }
    return "unknown_type"; 
}

/*
  @brief Convert ad_type_kind to string for debug output.
  @param kind Type kind.
  @return String representation.
 */
#line 5444 "source/reflect.h2"
[[nodiscard]] auto ad_type_kind_to_string(cpp2::impl::in<ad_type_kind> kind) -> std::string{
    if (kind == ad_type_kind::auto_)      { return "auto"; }
    if (kind == ad_type_kind::void_)      { return "void"; }
    if (kind == ad_type_kind::int_)       { return "int"; }
    if (kind == ad_type_kind::size_t_)    { return "size_t"; }
    if (kind == ad_type_kind::double_)    { return "double"; }
    if (kind == ad_type_kind::float_)     { return "float"; }
    if (kind == ad_type_kind::bool_)      { return "bool"; }
    if (kind == ad_type_kind::char_)      { return "char"; }
    if (kind == ad_type_kind::named)      { return "named"; }
    if (kind == ad_type_kind::const_)     { return "const"; }
    if (kind == ad_type_kind::ref)        { return "ref"; }
    if (kind == ad_type_kind::rvalue_ref) {return "rvalue_ref"; }
    if (kind == ad_type_kind::pointer)    { return "pointer"; }
    if (kind == ad_type_kind::array)      { return "array"; }
    if (kind == ad_type_kind::template_)  { return "template"; }
    return "unknown"; 
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
#line 1 "source/reflect.h2"
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
#line 1 "source/reflect.h2"
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
#line 1 "source/reflect.h2"
}}}}}}}}}}}}}}}}}}
CPP2_UFCS(report_violation)(cpp2::type_safety, CPP2_UFCS(c_str)(("can't convert string '" + cpp2::to_string(s) + "' to enum of type ad_stmt_kind")));
return ad_stmt_kind::decl; 
}

[[nodiscard]] auto ad_stmt_kind::from_code(cpp2::impl::in<std::string_view> s) -> ad_stmt_kind{
std::string str {s}; return from_string(cpp2::string_util::replace_all(cpp2::move(str), "ad_stmt_kind::", "")); }

#line 5463 "source/reflect.h2"
//-----------------------------------------------------------------------
//  Operation kinds for AD expressions
//-----------------------------------------------------------------------

/*
  @brief Operation kinds for AD expressions.
 
  These tags identify the operation type for expression nodes in the AD IR.
  Binary operators (+, -, , /) are handled explicitly by the builder.
  Function calls (sin, cos, exp, log, etc.) use the call tag.
 */

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

#line 5539 "source/reflect.h2"
/*
  @brief Expression node kinds for AD IR.
 
  Distinguishes between different expression forms in the typed IR.
  Extended to cover all C++ expression forms needed in autodiff rules.
 */

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

#line 5573 "source/reflect.h2"
/*
  @brief Statement node kinds for AD IR.
 
  Distinguishes between different statement forms in the typed IR.
  Extended to support loops, jumps, and all compound assignment forms.
 */

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

#line 5617 "source/reflect.h2"
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

#line 5639 "source/reflect.h2"
                                                                  // Result type (string form)
                                                                  // Result type (structured form)
                                                                  // For identifiers/literals/calls
                                                                  // Operation kind
                                                                  // Operands/arguments
                                                                  // For member access
                                                                  // Template type arguments
                                                                  // Target type for casts
                                                                                 // Lambda params (name, type)
                                                                      // Lambda body (forward decl workaround)

    /// Default constructor
#line 5651 "source/reflect.h2"
    ad_expr::ad_expr(){}

    /// Copy constructor
#line 5654 "source/reflect.h2"
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
#line 5654 "source/reflect.h2"
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
#line 5654 "source/reflect.h2"
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
#line 5654 "source/reflect.h2"
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

    // ===== Factory methods for basic expressions =====

    /*
      @brief Create a literal expression.
      @param value Literal value as string.
      @param type_name_ Type of the literal.
      @return Literal expression node.
     */
#line 5664 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_literal(cpp2::impl::in<std::string> value, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::literal;
        e.name = value;
        e.type_name = type_name_;
        e.op = ad_op_kind::literal;
        return e; 
    }

    /*
      @brief Create a literal expression with structured type.
      @param value Literal value as string.
      @param t Structured type.
      @return Literal expression node.
     */
#line 5679 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_literal_typed(cpp2::impl::in<std::string> value, cpp2::impl::in<ad_type> t) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::literal;
        e.name = value;
        e.type_name = ad_type_to_string(t);
        e.expr_type = std::make_shared<ad_type>(t);
        e.op = ad_op_kind::literal;
        return e; 
    }

    /*
      @brief Create an identifier expression.
      @param name_ Variable name.
      @param type_name_ Type of the variable.
      @return Identifier expression node.
     */
#line 5695 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_identifier(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::identifier;
        e.name = name_;
        e.type_name = type_name_;
        e.op = ad_op_kind::identifier;
        return e; 
    }

    /*
      @brief Create an identifier expression with structured type.
      @param name_ Variable name.
      @param t Structured type.
      @return Identifier expression node.
     */
#line 5710 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_identifier_typed(cpp2::impl::in<std::string> name_, cpp2::impl::in<ad_type> t) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::identifier;
        e.name = name_;
        e.type_name = ad_type_to_string(t);
        e.expr_type = std::make_shared<ad_type>(t);
        e.op = ad_op_kind::identifier;
        return e; 
    }

    // ===== Factory methods for operations =====

    /*
      @brief Create a unary expression.
      @param op_ Operation kind (e.g., neg, lnot, pre_inc).
      @param operand Operand expression.
      @param type_name_ Result type.
      @return Unary expression node.
     */
#line 5729 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_unary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> operand, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::unary;
        e.op = op_;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, operand);
        return e; 
    }

    /*
      @brief Create a binary expression.
      @param op_ Operation kind (e.g., add, mul, lt, land).
      @param lhs Left operand.
      @param rhs Right operand.
      @param type_name_ Result type.
      @return Binary expression node.
     */
#line 5746 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_binary(cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::binary;
        e.op = op_;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, lhs);
        CPP2_UFCS(push_back)(e.args, rhs);
        return e; 
    }

    /*
      @brief Create a ternary (conditional) expression.
      @param condition Condition expression.
      @param then_expr Expression if condition is true.
      @param else_expr Expression if condition is false.
      @param type_name_ Result type.
      @return Ternary expression node.
     */
#line 5764 "source/reflect.h2"
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

    // ===== Factory methods for access expressions =====

    /*
      @brief Create a member access expression (obj.member or obj->member).
      @param object Object expression.
      @param member Member name.
      @param is_arrow true for ->, false for .
      @param type_name_ Result type.
      @return Member access expression node.
     */
#line 5785 "source/reflect.h2"
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

    /*
      @brief Create a subscript expression (arr[index]).
      @param array Array/container expression.
      @param index Index expression.
      @param type_name_ Result type (element type).
      @return Subscript expression node.
     */
#line 5804 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_subscript(cpp2::impl::in<ad_expr> array, cpp2::impl::in<ad_expr> index, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::subscript;
        e.type_name = type_name_;
        CPP2_UFCS(push_back)(e.args, array);
        CPP2_UFCS(push_back)(e.args, index);
        return e; 
    }

    // ===== Factory methods for calls =====

    /*
      @brief Create a function call expression.
      @param func_name Function name.
      @param op_ Operation kind (call or specific like sin).
      @param call_args Arguments to the function.
      @param type_name_ Result type.
      @return Call expression node.
     */
#line 5823 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_call(cpp2::impl::in<std::string> func_name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<std::vector<ad_expr>> call_args, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::call;
        e.name = func_name;
        e.op = op_;
        e.type_name = type_name_;
        e.args = call_args;
        return e; 
    }

    /*
      @brief Create a function call with template arguments.
      @param func_name Function name.
      @param call_args Arguments to the function.
      @param template_args Template type arguments.
      @param type_name_ Result type.
      @return Call expression node with template arguments.
     */
#line 5841 "source/reflect.h2"
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

    /*
      @brief Create a method call expression (obj.method(args)).
      @param object Object expression.
      @param method_name Method name.
      @param call_args Arguments to the method.
      @param type_name_ Result type.
      @return Method call expression node.
     */
#line 5861 "source/reflect.h2"
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

    // ===== Factory methods for type operations =====

    /*
      @brief Create a type cast expression.
      @param cast_kind Cast kind ("static_cast", "dynamic_cast", "reinterpret_cast", "const_cast", or "").
      @param target_type Target type.
      @param expr Expression to cast.
      @param type_name_ Result type name.
      @return Cast expression node.
     */
#line 5885 "source/reflect.h2"
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

    /*
      @brief Create a constructor call expression (T(args) or T{args}).
      @param type_name_ Type being constructed.
      @param construct_args Constructor arguments.
      @return Constructor expression node.
     */
#line 5902 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_construct(cpp2::impl::in<std::string> type_name_, cpp2::impl::in<std::vector<ad_expr>> construct_args) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::construct;
        e.name = type_name_;
        e.type_name = type_name_;
        e.args = construct_args;
        return e; 
    }

    // ===== Factory methods for special expressions =====

    /*
      @brief Create a parenthesized expression.
      @param inner Inner expression.
      @return Parenthesized expression node.
     */
#line 5918 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_paren(cpp2::impl::in<ad_expr> inner) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::paren;
        e.type_name = inner.type_name;
        CPP2_UFCS(push_back)(e.args, inner);
        return e; 
    }

    /*
      @brief Create an initializer list expression ({a, b, c}).
      @param elements List elements.
      @param type_name_ Result type (e.g., "std::initializer_list<int>").
      @return Initializer list expression node.
     */
#line 5932 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_initializer_list(cpp2::impl::in<std::vector<ad_expr>> elements, cpp2::impl::in<std::string> type_name_) -> ad_expr{
        ad_expr e {}; 
        e.kind = ad_expr_kind::initializer_list;
        e.type_name = type_name_;
        e.args = elements;
        return e; 
    }

    // ===== Convenience factory methods =====

    /*
      @brief Create an integer literal.
      @param value Integer value.
      @return Integer literal expression.
     */
#line 5947 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_int_literal(cpp2::impl::in<int> value) -> ad_expr{
        return make_literal(std::to_string(value), "int"); 
    }

    /*
      @brief Create a double literal.
      @param value Double value.
      @return Double literal expression.
     */
#line 5956 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_double_literal(cpp2::impl::in<double> value) -> ad_expr{
        return make_literal(std::to_string(value), "double"); 
    }

    /*
      @brief Create a boolean literal.
      @param value Boolean value.
      @return Boolean literal expression.
     */
#line 5965 "source/reflect.h2"
    [[nodiscard]] auto ad_expr::make_bool_literal(cpp2::impl::in<bool> value) -> ad_expr{
        if (value) {return make_literal("true", "bool"); }
        return make_literal("false", "bool"); 
    }

#line 5971 "source/reflect.h2"
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

#line 5992 "source/reflect.h2"
                                                               // Variable name for decl/assign
                                                               // Type string for declarations
                                                               // Structured type for declarations
                                                               // For compound_assign
                                                               // Main expression
                                                               // Body statements
                                                               // Else branch for if_stmt

    // Loop-specific fields
                                                               // for(init; ...; ...)
                                                               // for(...; ...; incr)
                                                               // foreach range expression

    // Switch-specific fields (case value expr, case body statements)

                                                               // default case body

    // Exception handling fields
                                                               // catch(Type catch_var)
                                                               // catch type
                                                               // catch body

    /// Default constructor
#line 6015 "source/reflect.h2"
    ad_stmt::ad_stmt(){}

    /// Copy constructor
#line 6018 "source/reflect.h2"
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
#line 6018 "source/reflect.h2"
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
#line 6018 "source/reflect.h2"
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
#line 6018 "source/reflect.h2"
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

    // ===== Factory methods for declarations and assignments =====

    /*
      @brief Create a declaration statement.
      @param name Variable name.
      @param type_name_ Variable type.
      @param init Initializer expression.
      @return Declaration statement node.
     */
#line 6029 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_decl(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<ad_expr> init) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::decl;
        s.target = name;
        s.type_name = type_name_;
        s.expr = init;
        return s; 
    }

    /*
      @brief Create a declaration statement with structured type.
      @param name Variable name.
      @param t Structured type.
      @param init Initializer expression.
      @return Declaration statement node.
     */
#line 6045 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_decl_typed(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_type> t, cpp2::impl::in<ad_expr> init) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::decl;
        s.target = name;
        s.type_name = ad_type_to_string(t);
        s.decl_type = std::make_shared<ad_type>(t);
        s.expr = init;
        return s; 
    }

    /*
      @brief Create an assignment statement.
      @param name Target variable name.
      @param value Value expression.
      @return Assignment statement node.
     */
#line 6061 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::assign;
        s.target = name;
        s.expr = value;
        return s; 
    }

    /*
      @brief Create a compound assignment statement (+=, -=, =, /=, etc.).
      @param name Target variable name.
      @param op_ Compound assignment operator (assign_add, assign_sub, etc.).
      @param value Value expression.
      @return Compound assignment statement node.
     */
#line 6076 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_compound_assign(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_op_kind> op_, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::compound_assign;
        s.target = name;
        s.op = op_;
        s.expr = value;
        return s; 
    }

    /*
      @brief Create an add-assignment statement (+=).
      @param name Target variable name.
      @param value Value expression to add.
      @return Add-assignment statement node.
      @note Legacy method - prefer make_compound_assign for new code.
     */
#line 6092 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_assign_add(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::assign_add;
        s.target = name;
        s.expr = value;
        return s; 
    }

    /*
      @brief Create a subtract-assignment statement (-=).
      @param name Target variable name.
      @param value Value expression to subtract.
      @return Subtract-assignment statement node.
     */
#line 6106 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_assign_sub(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return make_compound_assign(name, ad_op_kind::assign_sub, value); 
    }

    /*
      @brief Create a multiply-assignment statement (=).
      @param name Target variable name.
      @param value Value expression to multiply.
      @return Multiply-assignment statement node.
     */
#line 6116 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_assign_mul(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return make_compound_assign(name, ad_op_kind::assign_mul, value); 
    }

    /*
      @brief Create a divide-assignment statement (/=).
      @param name Target variable name.
      @param value Value expression to divide.
      @return Divide-assignment statement node.
     */
#line 6126 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_assign_div(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return make_compound_assign(name, ad_op_kind::assign_div, value); 
    }

    // ===== Factory methods for expression and return statements =====

    /*
      @brief Create an expression statement.
      @param e Expression to evaluate.
      @return Expression statement node.
     */
#line 6137 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_expr(cpp2::impl::in<ad_expr> e) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::expr;
        s.expr = e;
        return s; 
    }

    /*
      @brief Create a return statement.
      @param value Return value expression.
      @return Return statement node.
     */
#line 6149 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_return(cpp2::impl::in<ad_expr> value) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::return_;
        s.expr = value;
        return s; 
    }

    // ===== Factory methods for control flow =====

    /*
      @brief Create a compound statement.
      @param nested Nested statements.
      @return Compound statement node.
     */
#line 6163 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_compound(cpp2::impl::in<std::vector<ad_stmt>> nested) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::compound;
        s.stmts = nested;
        return s; 
    }

    /*
      @brief Create an if statement.
      @param condition Condition expression.
      @param then_body Statements for the then branch.
      @param else_body Statements for the else branch (may be empty).
      @return If statement node.
     */
#line 6177 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_if(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> then_body, 
              cpp2::impl::in<std::vector<ad_stmt>> else_body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::if_stmt;
        s.expr = condition;
        s.stmts = then_body;
        s.else_stmts = else_body;
        return s; 
    }

    /*
      @brief Create a C-style for loop.
      @param init Initialization statement.
      @param condition Loop condition.
      @param increment Increment expression.
      @param body Loop body statements.
      @return For loop statement node.
     */
#line 6195 "source/reflect.h2"
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

    /*
      @brief Create a range-based for loop (foreach).
      @param var_name Loop variable name.
      @param var_type Loop variable type.
      @param range Range expression.
      @param body Loop body statements.
      @return Foreach loop statement node.
     */
#line 6214 "source/reflect.h2"
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

    /*
      @brief Create a while loop.
      @param condition Loop condition.
      @param body Loop body statements.
      @return While loop statement node.
     */
#line 6231 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_while(cpp2::impl::in<ad_expr> condition, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::while_stmt;
        s.expr = condition;
        s.stmts = body;
        return s; 
    }

    /*
      @brief Create a do-while loop.
      @param body Loop body statements.
      @param condition Loop condition (checked after body).
      @return Do-while loop statement node.
     */
#line 6245 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_do_while(cpp2::impl::in<std::vector<ad_stmt>> body, cpp2::impl::in<ad_expr> condition) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::do_while_stmt;
        s.stmts = body;
        s.expr = condition;
        return s; 
    }

    // ===== Factory methods for jump statements =====

    /*
      @brief Create a break statement.
      @return Break statement node.
     */
#line 6259 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_break() -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::break_stmt;
        return s; 
    }

    /*
      @brief Create a continue statement.
      @return Continue statement node.
     */
#line 6269 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_continue() -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::continue_stmt;
        return s; 
    }

    // ===== Factory methods for switch statement =====

    /*
      @brief Create a switch statement.
      @param switch_expr Expression to switch on.
      @param cases Vector of (case_value, case_body) pairs.
      @param default_body Default case body (may be empty).
      @return Switch statement node.
     */
#line 6284 "source/reflect.h2"
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

    // ===== Factory methods for exception handling =====

    /*
      @brief Create a try-catch statement.
      @param try_body Try block statements.
      @param catch_type_ Exception type to catch.
      @param catch_var_ Variable name for caught exception.
      @param catch_body Catch block statements.
      @return Try-catch statement node.
     */
#line 6305 "source/reflect.h2"
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

    /*
      @brief Create a throw statement.
      @param throw_expr Expression to throw.
      @return Throw statement node.
     */
#line 6322 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_throw(cpp2::impl::in<ad_expr> throw_expr) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::throw_stmt;
        s.expr = throw_expr;
        return s; 
    }

    // ===== Legacy factory methods =====

    /*
      @brief Create a raw code statement for inlined rule bodies.
      @param code Raw Cpp2 code string to emit.
      @return Raw code statement node.
      @deprecated Will be removed after IR-based rule substitution is complete.
     */
#line 6337 "source/reflect.h2"
    [[nodiscard]] auto ad_stmt::make_raw_code(cpp2::impl::in<std::string> code) -> ad_stmt{
        ad_stmt s {}; 
        s.kind = ad_stmt_kind::raw_code;
        s.target = code;  // Store raw code in target field
        return s; 
    }

#line 6345 "source/reflect.h2"
/*
  @brief Typed IR parameter declaration.
 
  Represents a function parameter or return value in the AD IR.
 */

#line 6356 "source/reflect.h2"
    /// Default constructor
#line 6357 "source/reflect.h2"
    ad_param::ad_param(){}

    /// Copy constructor
#line 6360 "source/reflect.h2"
    ad_param::ad_param(ad_param const& that)
                                   : name{ that.name }
                                   , type_name{ that.type_name }
                                   , pass{ that.pass }
                                   , is_active{ that.is_active }{}
#line 6360 "source/reflect.h2"
    auto ad_param::operator=(ad_param const& that) -> ad_param& {
                                   name = that.name;
                                   type_name = that.type_name;
                                   pass = that.pass;
                                   is_active = that.is_active;
                                   return *this; }
#line 6360 "source/reflect.h2"
    ad_param::ad_param(ad_param&& that) noexcept
                                   : name{ std::move(that).name }
                                   , type_name{ std::move(that).type_name }
                                   , pass{ std::move(that).pass }
                                   , is_active{ std::move(that).is_active }{}
#line 6360 "source/reflect.h2"
    auto ad_param::operator=(ad_param&& that) noexcept -> ad_param& {
                                   name = std::move(that).name;
                                   type_name = std::move(that).type_name;
                                   pass = std::move(that).pass;
                                   is_active = std::move(that).is_active;
                                   return *this; }

    /*
      @brief Create a parameter.
      @param name_ Parameter name.
      @param type_name_ Parameter type.
      @param pass_ Passing style.
      @param is_active_ Whether the parameter is active for AD.
      @return Parameter node.
     */
#line 6370 "source/reflect.h2"
    [[nodiscard]] auto ad_param::make(cpp2::impl::in<std::string> name_, cpp2::impl::in<std::string> type_name_, cpp2::impl::in<passing_style> pass_, cpp2::impl::in<bool> is_active_) -> ad_param{
        ad_param p {}; 
        p.name = name_;
        p.type_name = type_name_;
        p.pass = pass_;
        p.is_active = is_active_;
        return p; 
    }

#line 6380 "source/reflect.h2"
/*
  @brief Typed IR for a reverse-mode function.
 
  Contains the complete IR representation of a function being transformed
  for reverse-mode autodiff, including parameters, returns, and the
  forward/reverse pass statements.
 */

#line 6394 "source/reflect.h2"
    /// Default constructor
#line 6395 "source/reflect.h2"
    ad_function_ir::ad_function_ir(){}

    /// Copy constructor
#line 6398 "source/reflect.h2"
    ad_function_ir::ad_function_ir(ad_function_ir const& that)
                                   : name{ that.name }
                                   , params{ that.params }
                                   , returns{ that.returns }
                                   , forward{ that.forward }
                                   , reverse{ that.reverse }{}
#line 6398 "source/reflect.h2"
    auto ad_function_ir::operator=(ad_function_ir const& that) -> ad_function_ir& {
                                   name = that.name;
                                   params = that.params;
                                   returns = that.returns;
                                   forward = that.forward;
                                   reverse = that.reverse;
                                   return *this; }
#line 6398 "source/reflect.h2"
    ad_function_ir::ad_function_ir(ad_function_ir&& that) noexcept
                                   : name{ std::move(that).name }
                                   , params{ std::move(that).params }
                                   , returns{ std::move(that).returns }
                                   , forward{ std::move(that).forward }
                                   , reverse{ std::move(that).reverse }{}
#line 6398 "source/reflect.h2"
    auto ad_function_ir::operator=(ad_function_ir&& that) noexcept -> ad_function_ir& {
                                   name = std::move(that).name;
                                   params = std::move(that).params;
                                   returns = std::move(that).returns;
                                   forward = std::move(that).forward;
                                   reverse = std::move(that).reverse;
                                   return *this; }

#line 6401 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  AD IR Helper Modules - Convenience builders following Stan's pattern
//
//-----------------------------------------------------------------------

/*
  @brief Type helper namespace for creating common types.
 
  Provides convenient factory functions for commonly used types in autodiff.
  Following Stan compiler's MIR pattern of reducing boilerplate.
 */
#line 6413 "source/reflect.h2"
namespace ad_types {

    // ===== Primitive types =====

    /*
      @brief Create a double type.
     */
#line 6420 "source/reflect.h2"
    [[nodiscard]] auto double_() -> ad_type{
        return ad_type::make_double(); 
    }

    /*
      @brief Create an int type.
     */
#line 6427 "source/reflect.h2"
    [[nodiscard]] auto int_() -> ad_type{
        return ad_type::make_int(); 
    }

    /*
      @brief Create a size_t type.
     */
#line 6434 "source/reflect.h2"
    [[nodiscard]] auto size_t_() -> ad_type{
        return ad_type::make_size_t(); 
    }

    /*
      @brief Create a bool type.
     */
#line 6441 "source/reflect.h2"
    [[nodiscard]] auto bool_() -> ad_type{
        return ad_type::make_bool(); 
    }

    /*
      @brief Create a void type.
     */
#line 6448 "source/reflect.h2"
    [[nodiscard]] auto void_() -> ad_type{
        return ad_type::make_void(); 
    }

    /*
      @brief Create an auto type.
     */
#line 6455 "source/reflect.h2"
    [[nodiscard]] auto auto_() -> ad_type{
        return ad_type::make_auto(); 
    }

    // ===== Qualified types =====

    /*
      @brief Create const double type.
     */
#line 6464 "source/reflect.h2"
    [[nodiscard]] auto const_double() -> ad_type{
        return ad_type::make_const(ad_type::make_double()); 
    }

    /*
      @brief Create double reference type (double&).
     */
#line 6471 "source/reflect.h2"
    [[nodiscard]] auto double_ref() -> ad_type{
        return ad_type::make_ref(ad_type::make_double()); 
    }

    /*
      @brief Create const double reference type (const double&).
     */
#line 6478 "source/reflect.h2"
    [[nodiscard]] auto const_double_ref() -> ad_type{
        return ad_type::make_const(ad_type::make_ref(ad_type::make_double())); 
    }

    /*
      @brief Create int reference type (int&).
     */
#line 6485 "source/reflect.h2"
    [[nodiscard]] auto int_ref() -> ad_type{
        return ad_type::make_ref(ad_type::make_int()); 
    }

    /*
      @brief Create const int reference type (const int&).
     */
#line 6492 "source/reflect.h2"
    [[nodiscard]] auto const_int_ref() -> ad_type{
        return ad_type::make_const(ad_type::make_ref(ad_type::make_int())); 
    }

    // ===== Container types =====

    /*
      @brief Create std::vector<T> type.
      @param elem Element type.
     */
#line 6502 "source/reflect.h2"
    [[nodiscard]] auto std_vector(cpp2::impl::in<ad_type> elem) -> ad_type{
        return ad_type::make_std_vector(elem); 
    }

    /*
      @brief Create std::vector<double> type.
     */
#line 6509 "source/reflect.h2"
    [[nodiscard]] auto vector_double() -> ad_type{
        return ad_type::make_std_vector(ad_type::make_double()); 
    }

    /*
      @brief Create std::vector<int> type.
     */
#line 6516 "source/reflect.h2"
    [[nodiscard]] auto vector_int() -> ad_type{
        return ad_type::make_std_vector(ad_type::make_int()); 
    }

    /*
      @brief Create const reference to std::vector<double>.
     */
#line 6523 "source/reflect.h2"
    [[nodiscard]] auto const_vector_double_ref() -> ad_type{
        return ad_type::make_const(ad_type::make_ref(ad_type::make_std_vector(ad_type::make_double()))); 
    }

    // ===== Named types =====

    /*
      @brief Create a named type.
      @param name Type name.
     */
#line 6533 "source/reflect.h2"
    [[nodiscard]] auto named(cpp2::impl::in<std::string> name) -> ad_type{
        return ad_type::make_named(name); 
    }

    /*
      @brief Create a template type.
      @param name Template name.
      @param args Type arguments.
     */
#line 6542 "source/reflect.h2"
    [[nodiscard]] auto template_(cpp2::impl::in<std::string> name, cpp2::impl::in<std::vector<ad_type>> args) -> ad_type{
        return ad_type::make_template(name, args); 
    }
}

/*
  @brief Expression helper namespace for creating common expressions.
 
  Provides convenient factory functions for commonly used expressions in autodiff.
 */
namespace ad_exprs {

    // ===== Literals =====

    /*
      @brief Create a variable reference (identifier).
      @param name Variable name.
     */
#line 6560 "source/reflect.h2"
    [[nodiscard]] auto var(cpp2::impl::in<std::string> name) -> ad_expr{
        return ad_expr::make_identifier(name, "double"); 
    }

    /*
      @brief Create a typed variable reference.
      @param name Variable name.
      @param type_name Type name.
     */
#line 6569 "source/reflect.h2"
    [[nodiscard]] auto var_typed(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name) -> ad_expr{
        return ad_expr::make_identifier(name, type_name); 
    }

    /*
      @brief Create a double literal.
      @param value Numeric value.
     */
#line 6577 "source/reflect.h2"
    [[nodiscard]] auto lit(cpp2::impl::in<double> value) -> ad_expr{
        return ad_expr::make_literal(std::to_string(value), "double"); 
    }

    /*
      @brief Create a string literal.
      @param value String value (as Cpp2 source).
     */
#line 6585 "source/reflect.h2"
    [[nodiscard]] auto lit_str(cpp2::impl::in<std::string> value) -> ad_expr{
        return ad_expr::make_literal(value, "double"); 
    }

    /*
      @brief Create an integer literal.
      @param value Integer value.
     */
#line 6593 "source/reflect.h2"
    [[nodiscard]] auto lit_int(cpp2::impl::in<int> value) -> ad_expr{
        return ad_expr::make_int_literal(value); 
    }

    /*
      @brief Create a boolean literal.
      @param value Boolean value.
     */
#line 6601 "source/reflect.h2"
    [[nodiscard]] auto lit_bool(cpp2::impl::in<bool> value) -> ad_expr{
        return ad_expr::make_bool_literal(value); 
    }

    /*
      @brief Create zero literal (0.0).
     */
#line 6608 "source/reflect.h2"
    [[nodiscard]] auto zero() -> ad_expr{
        return ad_expr::make_literal("0.0", "double"); 
    }

    /*
      @brief Create one literal (1.0).
     */
#line 6615 "source/reflect.h2"
    [[nodiscard]] auto one() -> ad_expr{
        return ad_expr::make_literal("1.0", "double"); 
    }

    // ===== Arithmetic operations =====

    /*
      @brief Create addition expression.
     */
#line 6624 "source/reflect.h2"
    [[nodiscard]] auto add(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::add, lhs, rhs, "double"); 
    }

    /*
      @brief Create subtraction expression.
     */
#line 6631 "source/reflect.h2"
    [[nodiscard]] auto sub(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::sub, lhs, rhs, "double"); 
    }

    /*
      @brief Create multiplication expression.
     */
#line 6638 "source/reflect.h2"
    [[nodiscard]] auto mul(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::mul, lhs, rhs, "double"); 
    }

    /*
      @brief Create division expression.
     */
#line 6645 "source/reflect.h2"
    [[nodiscard]] auto div(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::div, lhs, rhs, "double"); 
    }

    /*
      @brief Create negation expression.
     */
#line 6652 "source/reflect.h2"
    [[nodiscard]] auto neg(cpp2::impl::in<ad_expr> operand) -> ad_expr{
        return ad_expr::make_unary(ad_op_kind::neg, operand, "double"); 
    }

    // ===== Comparison operations =====

    /*
      @brief Create less-than comparison.
     */
#line 6661 "source/reflect.h2"
    [[nodiscard]] auto lt(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::lt, lhs, rhs, "bool"); 
    }

    /*
      @brief Create greater-than comparison.
     */
#line 6668 "source/reflect.h2"
    [[nodiscard]] auto gt(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::gt, lhs, rhs, "bool"); 
    }

    /*
      @brief Create less-or-equal comparison.
     */
#line 6675 "source/reflect.h2"
    [[nodiscard]] auto le(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::le, lhs, rhs, "bool"); 
    }

    /*
      @brief Create greater-or-equal comparison.
     */
#line 6682 "source/reflect.h2"
    [[nodiscard]] auto ge(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::ge, lhs, rhs, "bool"); 
    }

    /*
      @brief Create equality comparison.
     */
#line 6689 "source/reflect.h2"
    [[nodiscard]] auto eq(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::eq, lhs, rhs, "bool"); 
    }

    /*
      @brief Create inequality comparison.
     */
#line 6696 "source/reflect.h2"
    [[nodiscard]] auto ne(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::ne, lhs, rhs, "bool"); 
    }

    // ===== Logical operations =====

    /*
      @brief Create logical AND.
     */
#line 6705 "source/reflect.h2"
    [[nodiscard]] auto land(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::land, lhs, rhs, "bool"); 
    }

    /*
      @brief Create logical OR.
     */
#line 6712 "source/reflect.h2"
    [[nodiscard]] auto lor(cpp2::impl::in<ad_expr> lhs, cpp2::impl::in<ad_expr> rhs) -> ad_expr{
        return ad_expr::make_binary(ad_op_kind::lor, lhs, rhs, "bool"); 
    }

    /*
      @brief Create logical NOT.
     */
#line 6719 "source/reflect.h2"
    [[nodiscard]] auto lnot(cpp2::impl::in<ad_expr> operand) -> ad_expr{
        return ad_expr::make_unary(ad_op_kind::lnot, operand, "bool"); 
    }

    // ===== Increment/Decrement =====

    /*
      @brief Create prefix increment (++x).
     */
#line 6728 "source/reflect.h2"
    [[nodiscard]] auto pre_inc(cpp2::impl::in<ad_expr> operand) -> ad_expr{
        return ad_expr::make_unary(ad_op_kind::pre_inc, operand, operand.type_name); 
    }

    /*
      @brief Create prefix decrement (--x).
     */
#line 6735 "source/reflect.h2"
    [[nodiscard]] auto pre_dec(cpp2::impl::in<ad_expr> operand) -> ad_expr{
        return ad_expr::make_unary(ad_op_kind::pre_dec, operand, operand.type_name); 
    }

    /*
      @brief Create postfix increment (x++).
     */
#line 6742 "source/reflect.h2"
    [[nodiscard]] auto post_inc(cpp2::impl::in<ad_expr> operand) -> ad_expr{
        return ad_expr::make_unary(ad_op_kind::post_inc, operand, operand.type_name); 
    }

    /*
      @brief Create postfix decrement (x--).
     */
#line 6749 "source/reflect.h2"
    [[nodiscard]] auto post_dec(cpp2::impl::in<ad_expr> operand) -> ad_expr{
        return ad_expr::make_unary(ad_op_kind::post_dec, operand, operand.type_name); 
    }

    // ===== Access expressions =====

    /*
      @brief Create member access (obj.member).
     */
#line 6758 "source/reflect.h2"
    [[nodiscard]] auto member(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> member_name) -> ad_expr{
        return ad_expr::make_member(obj, member_name, false, "auto"); 
    }

    /*
      @brief Create pointer member access (obj->member).
     */
#line 6765 "source/reflect.h2"
    [[nodiscard]] auto arrow(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> member_name) -> ad_expr{
        return ad_expr::make_member(obj, member_name, true, "auto"); 
    }

    /*
      @brief Create subscript access (arr[index]).
     */
#line 6772 "source/reflect.h2"
    [[nodiscard]] auto subscript(cpp2::impl::in<ad_expr> arr, cpp2::impl::in<ad_expr> index) -> ad_expr{
        return ad_expr::make_subscript(arr, index, "auto"); 
    }

    /*
      @brief Create subscript with integer index.
     */
#line 6779 "source/reflect.h2"
    [[nodiscard]] auto at(cpp2::impl::in<ad_expr> arr, cpp2::impl::in<int> index) -> ad_expr{
        return ad_expr::make_subscript(arr, ad_expr::make_int_literal(index), "auto"); 
    }

    // ===== Calls =====

    /*
      @brief Create a function call.
      @param fn Function name.
      @param args Call arguments.
     */
#line 6790 "source/reflect.h2"
    [[nodiscard]] auto call(cpp2::impl::in<std::string> fn, cpp2::impl::in<std::vector<ad_expr>> args) -> ad_expr{
        return ad_expr::make_call(fn, ad_op_kind::call, args, "double"); 
    }

    /*
      @brief Create a method call.
      @param obj Object expression.
      @param method Method name.
      @param args Call arguments.
     */
#line 6800 "source/reflect.h2"
    [[nodiscard]] auto method(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> method_name, cpp2::impl::in<std::vector<ad_expr>> args) -> ad_expr{
        return ad_expr::make_method_call(obj, method_name, args, "auto"); 
    }

    /*
      @brief Create a method call with no arguments.
     */
#line 6807 "source/reflect.h2"
    [[nodiscard]] auto method0(cpp2::impl::in<ad_expr> obj, cpp2::impl::in<std::string> method_name) -> ad_expr{
        std::vector<ad_expr> empty_args {}; 
        return ad_expr::make_method_call(obj, method_name, cpp2::move(empty_args), "auto"); 
    }

    // ===== Common math function calls =====

    /*
      @brief Create sin(x) call.
     */
#line 6817 "source/reflect.h2"
    [[nodiscard]] auto sin(cpp2::impl::in<ad_expr> x) -> ad_expr{
        std::vector<ad_expr> args {}; 
        CPP2_UFCS(push_back)(args, x);
        return ad_expr::make_call("std::sin", ad_op_kind::call, cpp2::move(args), "double"); 
    }

    /*
      @brief Create cos(x) call.
     */
#line 6826 "source/reflect.h2"
    [[nodiscard]] auto cos(cpp2::impl::in<ad_expr> x) -> ad_expr{
        std::vector<ad_expr> args {}; 
        CPP2_UFCS(push_back)(args, x);
        return ad_expr::make_call("std::cos", ad_op_kind::call, cpp2::move(args), "double"); 
    }

    /*
      @brief Create exp(x) call.
     */
#line 6835 "source/reflect.h2"
    [[nodiscard]] auto exp(cpp2::impl::in<ad_expr> x) -> ad_expr{
        std::vector<ad_expr> args {}; 
        CPP2_UFCS(push_back)(args, x);
        return ad_expr::make_call("std::exp", ad_op_kind::call, cpp2::move(args), "double"); 
    }

    /*
      @brief Create log(x) call.
     */
#line 6844 "source/reflect.h2"
    [[nodiscard]] auto log(cpp2::impl::in<ad_expr> x) -> ad_expr{
        std::vector<ad_expr> args {}; 
        CPP2_UFCS(push_back)(args, x);
        return ad_expr::make_call("std::log", ad_op_kind::call, cpp2::move(args), "double"); 
    }

    /*
      @brief Create sqrt(x) call.
     */
#line 6853 "source/reflect.h2"
    [[nodiscard]] auto sqrt(cpp2::impl::in<ad_expr> x) -> ad_expr{
        std::vector<ad_expr> args {}; 
        CPP2_UFCS(push_back)(args, x);
        return ad_expr::make_call("std::sqrt", ad_op_kind::call, cpp2::move(args), "double"); 
    }

    /*
      @brief Create pow(x, y) call.
     */
#line 6862 "source/reflect.h2"
    [[nodiscard]] auto pow(cpp2::impl::in<ad_expr> x, cpp2::impl::in<ad_expr> y) -> ad_expr{
        std::vector<ad_expr> args {}; 
        CPP2_UFCS(push_back)(args, x);
        CPP2_UFCS(push_back)(args, y);
        return ad_expr::make_call("std::pow", ad_op_kind::call, cpp2::move(args), "double"); 
    }

    // ===== Ternary and other =====

    /*
      @brief Create a ternary expression (cond ? then : else).
     */
#line 6874 "source/reflect.h2"
    [[nodiscard]] auto ternary(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<ad_expr> then_expr, cpp2::impl::in<ad_expr> else_expr) -> ad_expr{
        return ad_expr::make_ternary(cond, then_expr, else_expr, then_expr.type_name); 
    }

    /*
      @brief Create a parenthesized expression.
     */
#line 6881 "source/reflect.h2"
    [[nodiscard]] auto paren(cpp2::impl::in<ad_expr> inner) -> ad_expr{
        return ad_expr::make_paren(inner); 
    }
}

/*
  @brief Statement helper namespace for creating common statements.
 
  Provides convenient factory functions for commonly used statements in autodiff.
 */
namespace ad_stmts {

    // ===== Declarations =====

    /*
      @brief Create a declaration with initializer.
     */
#line 6898 "source/reflect.h2"
    [[nodiscard]] auto decl_init(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> init) -> ad_stmt{
        return ad_stmt::make_decl(name, init.type_name, init); 
    }

    /*
      @brief Create a double declaration with initializer.
     */
#line 6905 "source/reflect.h2"
    [[nodiscard]] auto decl_double(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> init) -> ad_stmt{
        return ad_stmt::make_decl(name, "double", init); 
    }

    /*
      @brief Create an int declaration with initializer.
     */
#line 6912 "source/reflect.h2"
    [[nodiscard]] auto decl_int(cpp2::impl::in<std::string> name, cpp2::impl::in<ad_expr> init) -> ad_stmt{
        return ad_stmt::make_decl(name, "int", init); 
    }

    /*
      @brief Create a declaration with zero initializer.
     */
#line 6919 "source/reflect.h2"
    [[nodiscard]] auto decl_zero(cpp2::impl::in<std::string> name) -> ad_stmt{
        return ad_stmt::make_decl(name, "double", ad_exprs::zero()); 
    }

    // ===== Assignments =====

    /*
      @brief Create an assignment.
     */
#line 6928 "source/reflect.h2"
    [[nodiscard]] auto assign(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return ad_stmt::make_assign(target, value); 
    }

    /*
      @brief Create an add-assignment (+=).
     */
#line 6935 "source/reflect.h2"
    [[nodiscard]] auto assign_add(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return ad_stmt::make_assign_add(target, value); 
    }

    /*
      @brief Create a subtract-assignment (-=).
     */
#line 6942 "source/reflect.h2"
    [[nodiscard]] auto assign_sub(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return ad_stmt::make_assign_sub(target, value); 
    }

    /*
      @brief Create a multiply-assignment (=).
     */
#line 6949 "source/reflect.h2"
    [[nodiscard]] auto assign_mul(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return ad_stmt::make_assign_mul(target, value); 
    }

    /*
      @brief Create a divide-assignment (/=).
     */
#line 6956 "source/reflect.h2"
    [[nodiscard]] auto assign_div(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return ad_stmt::make_assign_div(target, value); 
    }

    // ===== Control flow =====

    /*
      @brief Create an if-then statement (no else).
     */
#line 6965 "source/reflect.h2"
    [[nodiscard]] auto if_then(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        std::vector<ad_stmt> empty {}; 
        return ad_stmt::make_if(cond, body, cpp2::move(empty)); 
    }

    /*
      @brief Create an if-then-else statement.
     */
#line 6973 "source/reflect.h2"
    [[nodiscard]] auto if_else(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<std::vector<ad_stmt>> then_body, cpp2::impl::in<std::vector<ad_stmt>> else_body) -> ad_stmt{
        return ad_stmt::make_if(cond, then_body, else_body); 
    }

    /*
      @brief Create a for loop with int counter.
      @param var Loop variable name.
      @param start Start value.
      @param end_exclusive End value (exclusive).
      @param body Loop body.
     */
#line 6984 "source/reflect.h2"
    [[nodiscard]] auto for_range(cpp2::impl::in<std::string> var, cpp2::impl::in<int> start, cpp2::impl::in<ad_expr> end_exclusive, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        auto init {ad_stmt::make_decl(var, "int", ad_expr::make_int_literal(start))}; 
        auto cond {ad_exprs::lt(ad_exprs::var_typed(var, "int"), end_exclusive)}; 
        auto incr {ad_exprs::post_inc(ad_exprs::var_typed(var, "int"))}; 
        return ad_stmt::make_for(cpp2::move(init), cpp2::move(cond), cpp2::move(incr), body); 
    }

    /*
      @brief Create a while loop.
     */
#line 6994 "source/reflect.h2"
    [[nodiscard]] auto while_(cpp2::impl::in<ad_expr> cond, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        return ad_stmt::make_while(cond, body); 
    }

    /*
      @brief Create a foreach loop.
     */
#line 7001 "source/reflect.h2"
    [[nodiscard]] auto foreach(cpp2::impl::in<std::string> var, cpp2::impl::in<ad_expr> range, cpp2::impl::in<std::vector<ad_stmt>> body) -> ad_stmt{
        return ad_stmt::make_foreach(var, "auto", range, body); 
    }

    // ===== Jump statements =====

    /*
      @brief Create a return statement.
     */
#line 7010 "source/reflect.h2"
    [[nodiscard]] auto return_(cpp2::impl::in<ad_expr> value) -> ad_stmt{
        return ad_stmt::make_return(value); 
    }

    /*
      @brief Create a break statement.
     */
#line 7017 "source/reflect.h2"
    [[nodiscard]] auto break_() -> ad_stmt{
        return ad_stmt::make_break(); 
    }

    /*
      @brief Create a continue statement.
     */
#line 7024 "source/reflect.h2"
    [[nodiscard]] auto continue_() -> ad_stmt{
        return ad_stmt::make_continue(); 
    }

    // ===== Expression statements =====

    /*
      @brief Create an expression statement.
     */
#line 7033 "source/reflect.h2"
    [[nodiscard]] auto expr(cpp2::impl::in<ad_expr> e) -> ad_stmt{
        return ad_stmt::make_expr(e); 
    }

    /*
      @brief Create a compound statement (block).
     */
#line 7040 "source/reflect.h2"
    [[nodiscard]] auto block(cpp2::impl::in<std::vector<ad_stmt>> stmts) -> ad_stmt{
        return ad_stmt::make_compound(stmts); 
    }
}

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
#line 7056 "source/reflect.h2"
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

/*
  @brief Convert ad_expr_kind to string for debug output.
  @param kind Expression kind.
  @return String representation.
 */
#line 7128 "source/reflect.h2"
[[nodiscard]] auto ad_expr_kind_to_string(cpp2::impl::in<ad_expr_kind> kind) -> std::string{
    if (kind == ad_expr_kind::literal)         { return "literal"; }
    if (kind == ad_expr_kind::identifier)      { return "identifier"; }
    if (kind == ad_expr_kind::unary)           { return "unary"; }
    if (kind == ad_expr_kind::binary)          { return "binary"; }
    if (kind == ad_expr_kind::ternary)         { return "ternary"; }
    if (kind == ad_expr_kind::member)          { return "member"; }
    if (kind == ad_expr_kind::subscript)       { return "subscript"; }
    if (kind == ad_expr_kind::call)            { return "call"; }
    if (kind == ad_expr_kind::method_call)     { return "method_call"; }
    if (kind == ad_expr_kind::cast)            { return "cast"; }
    if (kind == ad_expr_kind::construct)       { return "construct"; }
    if (kind == ad_expr_kind::paren)           { return "paren"; }
    if (kind == ad_expr_kind::lambda)          { return "lambda"; }
    if (kind == ad_expr_kind::initializer_list) {return "initializer_list"; }
    return "unknown"; 
}

/*
  @brief Convert ad_stmt_kind to string for debug output.
  @param kind Statement kind.
  @return String representation.
 */
#line 7151 "source/reflect.h2"
[[nodiscard]] auto ad_stmt_kind_to_string(cpp2::impl::in<ad_stmt_kind> kind) -> std::string{
    if (kind == ad_stmt_kind::decl)           { return "decl"; }
    if (kind == ad_stmt_kind::assign)         { return "assign"; }
    if (kind == ad_stmt_kind::compound_assign) {return "compound_assign"; }
    if (kind == ad_stmt_kind::assign_add)     { return "assign_add"; }
    if (kind == ad_stmt_kind::if_stmt)        { return "if_stmt"; }
    if (kind == ad_stmt_kind::for_stmt)       { return "for_stmt"; }
    if (kind == ad_stmt_kind::foreach_stmt)   { return "foreach_stmt"; }
    if (kind == ad_stmt_kind::while_stmt)     { return "while_stmt"; }
    if (kind == ad_stmt_kind::do_while_stmt)  { return "do_while_stmt"; }
    if (kind == ad_stmt_kind::switch_stmt)    { return "switch_stmt"; }
    if (kind == ad_stmt_kind::return_)        { return "return"; }
    if (kind == ad_stmt_kind::break_stmt)     { return "break_stmt"; }
    if (kind == ad_stmt_kind::continue_stmt)  { return "continue_stmt"; }
    if (kind == ad_stmt_kind::compound)       { return "compound"; }
    if (kind == ad_stmt_kind::expr_stmt)      { return "expr_stmt"; }
    if (kind == ad_stmt_kind::expr)           { return "expr"; }
    if (kind == ad_stmt_kind::raw_code)       { return "raw_code"; }
    if (kind == ad_stmt_kind::try_catch)      { return "try_catch"; }
    if (kind == ad_stmt_kind::throw_stmt)     { return "throw_stmt"; }
    return "unknown"; 
}

/*
  @brief Print indentation for debug output.
  @param indent Indentation level.
 */
#line 7178 "source/reflect.h2"
auto ad_ir_print_indent(cpp2::impl::in<cpp2::i32> indent) -> void{
    auto i {0}; 
    for( ; cpp2::impl::cmp_less(i,indent); ++i ) {
        std::cout << "  ";
    }
}

/*
  @brief Print a readable form of an IR expression.
  @param e Expression to dump.
  @param indent Indentation level.
 */
#line 7190 "source/reflect.h2"
auto ad_ir_debug_dump_expr(cpp2::impl::in<ad_expr> e, cpp2::impl::in<cpp2::i32> indent) -> void{
    ad_ir_print_indent(indent);
    std::cout << "expr(" << ad_expr_kind_to_string(e.kind) << ")";

    if (e.kind == ad_expr_kind::literal) {
        std::cout << " value=" << e.name << " type=" << e.type_name << "\n";
    }
    else {if (e.kind == ad_expr_kind::identifier) {
        std::cout << " name=" << e.name << " type=" << e.type_name << "\n";
    }
    else {if (e.kind == ad_expr_kind::unary) {
        std::cout << " op=" << ad_op_kind_to_string(e.op) << " type=" << e.type_name << "\n";
        for ( auto const& arg : e.args ) {
            ad_ir_debug_dump_expr(arg, indent + 1);
        }
    }
    else {if (e.kind == ad_expr_kind::binary) {
        std::cout << " op=" << ad_op_kind_to_string(e.op) << " type=" << e.type_name << "\n";
        for ( auto const& arg : e.args ) {
            ad_ir_debug_dump_expr(arg, indent + 1);
        }
    }
    else {if (e.kind == ad_expr_kind::ternary) {
        std::cout << " type=" << e.type_name << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "condition:\n";
        if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(e.args),0)) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 0), indent + 2); }
        ad_ir_print_indent(indent + 1);
        std::cout << "then:\n";
        if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(e.args),1)) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 1), indent + 2); }
        ad_ir_print_indent(indent + 1);
        std::cout << "else:\n";
        if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(e.args),2)) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 2), indent + 2); }
    }
    else {if (e.kind == ad_expr_kind::member) {
        std::cout << " member=" << e.member_name << " op=" << ad_op_kind_to_string(e.op) << " type=" << e.type_name << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "object:\n";
        if (!(CPP2_UFCS(empty)(e.args))) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 0), indent + 2); }
    }
    else {if (e.kind == ad_expr_kind::subscript) {
        std::cout << " type=" << e.type_name << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "array:\n";
        if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(e.args),0)) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 0), indent + 2); }
        ad_ir_print_indent(indent + 1);
        std::cout << "index:\n";
        if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(e.args),1)) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 1), indent + 2); }
    }
    else {if (e.kind == ad_expr_kind::call) {
        std::cout << " func=" << e.name << " op=" << ad_op_kind_to_string(e.op) << " type=" << e.type_name << "\n";
        for ( auto const& arg : e.args ) {
            ad_ir_debug_dump_expr(arg, indent + 1);
        }
    }
    else {if (e.kind == ad_expr_kind::method_call) {
        std::cout << " method=" << e.name << " type=" << e.type_name << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "object:\n";
        if (!(CPP2_UFCS(empty)(e.args))) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 0), indent + 2); }
        ad_ir_print_indent(indent + 1);
        std::cout << "arguments:\n";
        auto i {1}; 
        for( ; cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(e.args)); ++i ) {
            ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS(e.args, i), indent + 2);
        }
    }
    else {if (e.kind == ad_expr_kind::cast) {
        std::cout << " cast_kind=" << e.name << " type=" << e.type_name << "\n";
        for ( auto const& arg : e.args ) {
            ad_ir_debug_dump_expr(arg, indent + 1);
        }
    }
    else {if (e.kind == ad_expr_kind::construct) {
        std::cout << " type=" << e.name << "\n";
        for ( auto const& arg : e.args ) {
            ad_ir_debug_dump_expr(arg, indent + 1);
        }
    }
    else {if (e.kind == ad_expr_kind::paren) {
        std::cout << " type=" << e.type_name << "\n";
        if (!(CPP2_UFCS(empty)(e.args))) {ad_ir_debug_dump_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(e.args, 0), indent + 1); }
    }
    else {if (e.kind == ad_expr_kind::initializer_list) {
        std::cout << " type=" << e.type_name << " elements=" << CPP2_UFCS(ssize)(e.args) << "\n";
        for ( auto const& arg : e.args ) {
            ad_ir_debug_dump_expr(arg, indent + 1);
        }
    }
    else {
        std::cout << " type=" << e.type_name << "\n";
    }}}}}}}}}}}}}
}

/*
  @brief Print a readable form of an IR statement.
  @param s Statement to dump.
  @param indent Indentation level.
 */
#line 7289 "source/reflect.h2"
auto ad_ir_debug_dump_stmt(cpp2::impl::in<ad_stmt> s, cpp2::impl::in<cpp2::i32> indent) -> void{
    ad_ir_print_indent(indent);
    std::cout << "stmt(" << ad_stmt_kind_to_string(s.kind) << ")";

    if (s.kind == ad_stmt_kind::decl) {
        std::cout << " target=" << s.target << " type=" << s.type_name << "\n";
        ad_ir_debug_dump_expr(s.expr, indent + 1);
    }
    else {if (s.kind == ad_stmt_kind::assign) {
        std::cout << " target=" << s.target << "\n";
        ad_ir_debug_dump_expr(s.expr, indent + 1);
    }
    else {if (s.kind == ad_stmt_kind::compound_assign) {
        std::cout << " target=" << s.target << " op=" << ad_op_kind_to_string(s.op) << "\n";
        ad_ir_debug_dump_expr(s.expr, indent + 1);
    }
    else {if (s.kind == ad_stmt_kind::assign_add) {
        std::cout << " target=" << s.target << " (+=)\n";
        ad_ir_debug_dump_expr(s.expr, indent + 1);
    }
    else {if (s.kind == ad_stmt_kind::if_stmt) {
        std::cout << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "condition:\n";
        ad_ir_debug_dump_expr(s.expr, indent + 2);
        ad_ir_print_indent(indent + 1);
        std::cout << "then (" << CPP2_UFCS(ssize)(s.stmts) << " statements):\n";
        for ( auto const& nested : s.stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 2);
        }
        if (!(CPP2_UFCS(empty)(s.else_stmts))) {
            ad_ir_print_indent(indent + 1);
            std::cout << "else (" << CPP2_UFCS(ssize)(s.else_stmts) << " statements):\n";
            for ( auto const& nested : s.else_stmts ) {
                ad_ir_debug_dump_stmt(nested, indent + 2);
            }
        }
    }
    else {if (s.kind == ad_stmt_kind::for_stmt) {
        std::cout << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "init:\n";
        if (s.init_stmt != nullptr) {
            ad_ir_debug_dump_stmt(*cpp2::impl::assert_not_null(s.init_stmt), indent + 2);
        }
        ad_ir_print_indent(indent + 1);
        std::cout << "condition:\n";
        ad_ir_debug_dump_expr(s.expr, indent + 2);
        ad_ir_print_indent(indent + 1);
        std::cout << "increment:\n";
        ad_ir_debug_dump_expr(s.incr_expr, indent + 2);
        ad_ir_print_indent(indent + 1);
        std::cout << "body (" << CPP2_UFCS(ssize)(s.stmts) << " statements):\n";
        for ( auto const& nested : s.stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 2);
        }
    }
    else {if (s.kind == ad_stmt_kind::foreach_stmt) {
        std::cout << " var=" << s.target << " type=" << s.type_name << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "range:\n";
        ad_ir_debug_dump_expr(s.range_expr, indent + 2);
        ad_ir_print_indent(indent + 1);
        std::cout << "body (" << CPP2_UFCS(ssize)(s.stmts) << " statements):\n";
        for ( auto const& nested : s.stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 2);
        }
    }
    else {if (s.kind == ad_stmt_kind::while_stmt) {
        std::cout << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "condition:\n";
        ad_ir_debug_dump_expr(s.expr, indent + 2);
        ad_ir_print_indent(indent + 1);
        std::cout << "body (" << CPP2_UFCS(ssize)(s.stmts) << " statements):\n";
        for ( auto const& nested : s.stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 2);
        }
    }
    else {if (s.kind == ad_stmt_kind::do_while_stmt) {
        std::cout << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "body (" << CPP2_UFCS(ssize)(s.stmts) << " statements):\n";
        for ( auto const& nested : s.stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 2);
        }
        ad_ir_print_indent(indent + 1);
        std::cout << "condition:\n";
        ad_ir_debug_dump_expr(s.expr, indent + 2);
    }
    else {if (s.kind == ad_stmt_kind::break_stmt) {
        std::cout << "\n";
    }
    else {if (s.kind == ad_stmt_kind::continue_stmt) {
        std::cout << "\n";
    }
    else {if (s.kind == ad_stmt_kind::expr || s.kind == ad_stmt_kind::expr_stmt) {
        std::cout << "\n";
        ad_ir_debug_dump_expr(s.expr, indent + 1);
    }
    else {if (s.kind == ad_stmt_kind::return_) {
        std::cout << "\n";
        ad_ir_debug_dump_expr(s.expr, indent + 1);
    }
    else {if (s.kind == ad_stmt_kind::compound) {
        std::cout << " (" << CPP2_UFCS(ssize)(s.stmts) << " statements)\n";
        for ( auto const& nested : s.stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 1);
        }
    }
    else {if (s.kind == ad_stmt_kind::try_catch) {
        std::cout << "\n";
        ad_ir_print_indent(indent + 1);
        std::cout << "try (" << CPP2_UFCS(ssize)(s.stmts) << " statements):\n";
        for ( auto const& nested : s.stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 2);
        }
        ad_ir_print_indent(indent + 1);
        std::cout << "catch(" << s.catch_type << " " << s.catch_var << ") (" << CPP2_UFCS(ssize)(s.catch_stmts) << " statements):\n";
        for ( auto const& nested : s.catch_stmts ) {
            ad_ir_debug_dump_stmt(nested, indent + 2);
        }
    }
    else {if (s.kind == ad_stmt_kind::throw_stmt) {
        std::cout << "\n";
        ad_ir_debug_dump_expr(s.expr, indent + 1);
    }
    else {if (s.kind == ad_stmt_kind::raw_code) {
        std::cout << " code='" << s.target << "'\n";
    }
    else {
        std::cout << "\n";
    }}}}}}}}}}}}}}}}}
}

/*
  @brief Print a readable form of a function IR.
  @param ir Function IR to dump.
 */
#line 7428 "source/reflect.h2"
auto ad_ir_debug_dump(cpp2::impl::in<ad_function_ir> ir) -> void{
    std::cout << "=== AD Function IR: " << ir.name << " ===\n";

    std::cout << "Parameters:\n";
    for ( auto const& p : ir.params ) {
        std::cout << "  " << p.name << ": " << p.type_name 
                  << " (active=" << p.is_active << ")\n";
    }

    std::cout << "Returns:\n";
    for ( auto const& r : ir.returns ) {
        std::cout << "  " << r.name << ": " << r.type_name 
                  << " (active=" << r.is_active << ")\n";
    }

    std::cout << "Forward pass (" << CPP2_UFCS(ssize)(ir.forward) << " statements):\n";
    for ( auto const& s : ir.forward ) {
        ad_ir_debug_dump_stmt(s, 1);
    }

    std::cout << "Reverse pass (" << CPP2_UFCS(ssize)(ir.reverse) << " statements):\n";
    for ( auto const& s : ir.reverse ) {
        ad_ir_debug_dump_stmt(s, 1);
    }

    std::cout << "=== End AD Function IR ===\n";
}

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

#line 7471 "source/reflect.h2"
    /// Default constructor
#line 7472 "source/reflect.h2"
    ad_substitution_context::ad_substitution_context(){}

    /// Copy constructor
#line 7475 "source/reflect.h2"
    ad_substitution_context::ad_substitution_context(ad_substitution_context const& that)
                                   : substitutions{ that.substitutions }{}
#line 7475 "source/reflect.h2"
    auto ad_substitution_context::operator=(ad_substitution_context const& that) -> ad_substitution_context& {
                                   substitutions = that.substitutions;
                                   return *this; }
#line 7475 "source/reflect.h2"
    ad_substitution_context::ad_substitution_context(ad_substitution_context&& that) noexcept
                                   : substitutions{ std::move(that).substitutions }{}
#line 7475 "source/reflect.h2"
    auto ad_substitution_context::operator=(ad_substitution_context&& that) noexcept -> ad_substitution_context& {
                                   substitutions = std::move(that).substitutions;
                                   return *this; }

    /*
      @brief Add a substitution mapping.
      @param param_name Parameter name to substitute (e.g., "res_val", "x_adj").
      @param expr IR expression to substitute in place of the parameter.
     */
#line 7482 "source/reflect.h2"
    auto ad_substitution_context::add(cpp2::impl::in<std::string> param_name, cpp2::impl::in<ad_expr> expr) & -> void{
        CPP2_UFCS(push_back)(substitutions, std::make_pair(param_name, expr));
    }

    /*
      @brief Find a substitution for a parameter name.
      @param name Parameter name to look up.
      @param result Output parameter for the found expression.
      @return true if found, false otherwise.
     */
#line 7492 "source/reflect.h2"
    [[nodiscard]] auto ad_substitution_context::find(cpp2::impl::in<std::string> name, ad_expr& result) const& -> bool{
        for ( auto const& sub : substitutions ) {
            if (sub.first == name) {
                result = sub.second;
                return true; 
            }
        }
        return false; 
    }

    /*
      @brief Check if a name has a substitution.
      @param name Parameter name to check.
      @return true if a substitution exists for this name.
     */
#line 7507 "source/reflect.h2"
    [[nodiscard]] auto ad_substitution_context::has(cpp2::impl::in<std::string> name) const& -> bool{
        for ( auto const& sub : substitutions ) {
            if (sub.first == name) {
                return true; 
            }
        }
        return false; 
    }

    /*
      @brief Get the number of substitutions.
      @return Number of substitution mappings.
     */
#line 7520 "source/reflect.h2"
    [[nodiscard]] auto ad_substitution_context::size() const& -> int{
        return CPP2_UFCS(ssize)(substitutions); 
    }

#line 7525 "source/reflect.h2"
/*
  @brief Substitute parameter names in an IR expression.
 
  Recursively walks the expression tree and replaces identifier nodes
  whose names match entries in the substitution context.
 
  @param expr Expression to process.
  @param ctx Substitution context mapping names to replacement expressions.
  @return New expression with substitutions applied.
 */
#line 7535 "source/reflect.h2"
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
            auto new_operand {substitute_expr_params(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0), ctx)}; 
            return ad_expr::make_unary(expr.op, cpp2::move(new_operand), expr.type_name); 
        }
        return expr; 
    }

    // For binary expressions, substitute in both operands
    if (expr.kind == ad_expr_kind::binary) {
        if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
            auto new_lhs {substitute_expr_params(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0), ctx)}; 
            auto new_rhs {substitute_expr_params(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1), ctx)}; 
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

/*
  @brief Substitute parameter names in an IR statement.
 
  Recursively processes the statement and any nested expressions/statements,
  replacing identifier names according to the substitution context.
 
  @param stmt Statement to process.
  @param ctx Substitution context mapping names to replacement expressions.
  @return New statement with substitutions applied.
 */
#line 7591 "source/reflect.h2"
[[nodiscard]] auto substitute_stmt_params(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_stmt{
    if (stmt.kind == ad_stmt_kind::decl) {
        // Substitute in the initializer expression
        auto new_init {substitute_expr_params(stmt.expr, ctx)}; 
        // Also check if the target name should be substituted
        auto new_target {stmt.target}; 
        ad_expr target_expr {}; 
        if (CPP2_UFCS(find)(ctx, stmt.target, target_expr) && target_expr.kind == ad_expr_kind::identifier) {
            new_target = cpp2::move(target_expr).name;
        }
        return ad_stmt::make_decl(cpp2::move(new_target), stmt.type_name, cpp2::move(new_init)); 
    }

    if (stmt.kind == ad_stmt_kind::assign) {
        auto new_value {substitute_expr_params(stmt.expr, ctx)}; 
        // Check if target should be substituted
        auto new_target {stmt.target}; 
        ad_expr target_expr {}; 
        if (CPP2_UFCS(find)(ctx, stmt.target, target_expr) && target_expr.kind == ad_expr_kind::identifier) {
            new_target = cpp2::move(target_expr).name;
        }
        return ad_stmt::make_assign(cpp2::move(new_target), cpp2::move(new_value)); 
    }

    if (stmt.kind == ad_stmt_kind::assign_add) {
        auto new_value {substitute_expr_params(stmt.expr, ctx)}; 
        // Check if target should be substituted
        auto new_target {stmt.target}; 
        ad_expr target_expr {}; 
        if (CPP2_UFCS(find)(ctx, stmt.target, target_expr) && target_expr.kind == ad_expr_kind::identifier) {
            new_target = cpp2::move(target_expr).name;
        }
        return ad_stmt::make_assign_add(cpp2::move(new_target), cpp2::move(new_value)); 
    }

    if (stmt.kind == ad_stmt_kind::expr) {
        auto new_expr {substitute_expr_params(stmt.expr, ctx)}; 
        return ad_stmt::make_expr(cpp2::move(new_expr)); 
    }

    if (stmt.kind == ad_stmt_kind::return_) {
        auto new_value {substitute_expr_params(stmt.expr, ctx)}; 
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
        auto new_cond {substitute_expr_params(stmt.expr, ctx)}; 
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

#line 7678 "source/reflect.h2"
                                          // Type name for debug
                                             // Forward function body (for debug/emit)
                                             // Reverse function body (for debug/emit)

    // NEW: Store AST statements from the reverse() function body for IR-based parsing
    // This enables proper IR-based substitution instead of string manipulation

#line 7687 "source/reflect.h2"
    // DEPRECATED: Stores the reverse() function body string for inlining at code generation time.
    // This is extracted during rule discovery. Will be removed after IR migration is complete.

#line 7692 "source/reflect.h2"
    /// Default constructor
#line 7693 "source/reflect.h2"
    ad_rule_meta::ad_rule_meta(){}

    // ad_rule_meta is move-only because it contains std::vector<statement>
    // and statement has deleted copy assignment (it's @polymorphic_base)

    /// Move constructor
#line 7699 "source/reflect.h2"
    ad_rule_meta::ad_rule_meta(ad_rule_meta&& that) noexcept
        : name{ cpp2::move(that).name }
        , n_args{ cpp2::move(that).n_args }
        , is_member{ cpp2::move(that).is_member }
        , rule_type{ cpp2::move(that).rule_type }
        , forward_body{ cpp2::move(that).forward_body }
        , reverse_body{ cpp2::move(that).reverse_body }
        , reverse_body_stmts{ cpp2::move(that).reverse_body_stmts }
        , has_reverse_body_stmts{ cpp2::move(that).has_reverse_body_stmts }
        , reverse_body_str{ cpp2::move(that).reverse_body_str }
        , has_reverse_body{ cpp2::move(that).has_reverse_body }{

#line 7710 "source/reflect.h2"
    }

    /*
      @brief Create rule metadata.
      @param name_ Rule name (matches function name).
      @param n_args_ Number of arguments.
      @param is_member_ Whether this is a member function rule.
      @param rule_type_ Name of the rule type (for debug).
      @return Rule metadata.
     */
#line 7720 "source/reflect.h2"
    [[nodiscard]] auto ad_rule_meta::make(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_, cpp2::impl::in<std::string> rule_type_) -> ad_rule_meta{
        ad_rule_meta r {}; 
        r.name = name_;
        r.n_args = n_args_;
        r.is_member = is_member_;
        r.rule_type = rule_type_;
        return r; 
    }

#line 7730 "source/reflect.h2"
/*
  @brief Result of applying an AD rule's reverse body.
 
  Contains the generated IR statements.
  All data is owned by this result - no references to registry internals.
  If ir_success is false, the caller MUST fail with an error - there is no fallback.
 */

                                                        // Whether rule exists
                                                        // Generated IR statements
                                                        // Whether IR parsing succeeded
                                                        // For debug messages
                                                        // Error description if parsing failed

#line 7744 "source/reflect.h2"
    ad_reverse_rule_result::ad_reverse_rule_result(){}
#line 7745 "source/reflect.h2"
    ad_reverse_rule_result::ad_reverse_rule_result(ad_reverse_rule_result const& that)
                                   : found{ that.found }
                                   , ir_stmts{ that.ir_stmts }
                                   , ir_success{ that.ir_success }
                                   , rule_type{ that.rule_type }
                                   , error_message{ that.error_message }{}
#line 7745 "source/reflect.h2"
    auto ad_reverse_rule_result::operator=(ad_reverse_rule_result const& that) -> ad_reverse_rule_result& {
                                   found = that.found;
                                   ir_stmts = that.ir_stmts;
                                   ir_success = that.ir_success;
                                   rule_type = that.rule_type;
                                   error_message = that.error_message;
                                   return *this; }
#line 7745 "source/reflect.h2"
    ad_reverse_rule_result::ad_reverse_rule_result(ad_reverse_rule_result&& that) noexcept
                                   : found{ std::move(that).found }
                                   , ir_stmts{ std::move(that).ir_stmts }
                                   , ir_success{ std::move(that).ir_success }
                                   , rule_type{ std::move(that).rule_type }
                                   , error_message{ std::move(that).error_message }{}
#line 7745 "source/reflect.h2"
    auto ad_reverse_rule_result::operator=(ad_reverse_rule_result&& that) noexcept -> ad_reverse_rule_result& {
                                   found = std::move(that).found;
                                   ir_stmts = std::move(that).ir_stmts;
                                   ir_success = std::move(that).ir_success;
                                   rule_type = std::move(that).rule_type;
                                   error_message = std::move(that).error_message;
                                   return *this; }

#line 7747 "source/reflect.h2"
    [[nodiscard]] auto ad_reverse_rule_result::make_not_found() -> ad_reverse_rule_result{
        ad_reverse_rule_result r {}; 
        return r; 
    }

#line 7752 "source/reflect.h2"
    [[nodiscard]] auto ad_reverse_rule_result::make_success(cpp2::impl::in<std::vector<ad_stmt>> stmts, cpp2::impl::in<std::string> rule_type_) -> ad_reverse_rule_result{
        ad_reverse_rule_result r {}; 
        r.found = true;
        r.ir_stmts = stmts;
        r.ir_success = true;
        r.rule_type = rule_type_;
        return r; 
    }

#line 7761 "source/reflect.h2"
    [[nodiscard]] auto ad_reverse_rule_result::make_parse_error(cpp2::impl::in<std::string> rule_type_, cpp2::impl::in<std::string> error_msg) -> ad_reverse_rule_result{
        ad_reverse_rule_result r {}; 
        r.found = true;           // Rule was found
        r.ir_success = false;     // But parsing failed
        r.rule_type = rule_type_;
        r.error_message = error_msg;
        return r; 
    }

#line 7771 "source/reflect.h2"
/*
  @brief Registry of user-defined AD rules.
 
  Rules are discovered by scanning nested types in the annotated type.
  The registry owns all rules and provides methods to apply them.
  Rules never leave the registry - callers receive results, not rule references.
 */

#line 7781 "source/reflect.h2"
    /// Default constructor
#line 7782 "source/reflect.h2"
    ad_rule_registry::ad_rule_registry(){}

    /*
      @brief Register a new rule (takes ownership via move).
      @param rule Rule metadata to register.
     */
#line 7788 "source/reflect.h2"
    auto ad_rule_registry::register_rule(ad_rule_meta&& rule) & -> void{
        CPP2_UFCS(push_back)(rules, cpp2::move(rule));
    }

    /*
      @brief Check if a rule exists.
     */
#line 7795 "source/reflect.h2"
    [[nodiscard]] auto ad_rule_registry::has_rule(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> bool{
        for ( auto const& r : rules ) {
            if (r.name == name_ && r.n_args == n_args_ && r.is_member == is_member_) {
                return true; 
            }
        }
        return false; 
    }

    /*
      @brief Get rule type name for debug messages.
     */
#line 7807 "source/reflect.h2"
    [[nodiscard]] auto ad_rule_registry::get_rule_type(cpp2::impl::in<std::string> name_, cpp2::impl::in<int> n_args_, cpp2::impl::in<bool> is_member_) const& -> std::string{
        for ( auto const& r : rules ) {
            if (r.name == name_ && r.n_args == n_args_ && r.is_member == is_member_) {
                return r.rule_type; 
            }
        }
        return ""; 
    }

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
#line 7829 "source/reflect.h2"
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

    /*
      @brief Get the number of registered rules.
      @return Number of rules.
     */
#line 7857 "source/reflect.h2"
    [[nodiscard]] auto ad_rule_registry::size() const& -> int{
        return CPP2_UFCS(ssize)(rules); 
    }

#line 7862 "source/reflect.h2"
/*
  @brief Debug dump for ad_rule_meta.
  @param rule Rule to dump.
 */
#line 7866 "source/reflect.h2"
auto ad_rule_debug_dump(cpp2::impl::in<ad_rule_meta> rule) -> void{
    std::cout << "  rule: name=" << rule.name 
              << " n_args=" << rule.n_args 
              << " is_member=" << rule.is_member 
              << " type=" << rule.rule_type << "\n";
}

/*
  @brief Debug dump for ad_rule_registry.
  @param reg Registry to dump.
 */
#line 7877 "source/reflect.h2"
auto ad_rule_registry_debug_dump(cpp2::impl::in<ad_rule_registry> reg) -> void{
    std::cout << "=== AD Rule Registry (" << CPP2_UFCS(size)(reg) << " rules) ===\n";
    for ( auto const& r : reg.rules ) {
        ad_rule_debug_dump(r);
    }
    std::cout << "=== End AD Rule Registry ===\n";
}

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
#line 7897 "source/reflect.h2"
[[nodiscard]] auto is_ad_rule_type(cpp2::impl::in<meta::type_declaration> member_type) -> bool{
    auto has_name {false}; 
    auto has_n_args {false}; 
    auto has_forward {false}; 
    auto has_reverse {false}; 

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

/*
  @brief Extract ad_rule metadata from a type declaration.
 
  Assumes is_ad_rule_type() has already returned true.
  Extracts the reverse() function body for later inlining.
 
  @param member_type Pointer to the rule type to extract from.
  @return Extracted rule metadata with reverse_body_str set.
 */
#line 7935 "source/reflect.h2"
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
                auto init_str {CPP2_UFCS(to_string)(CPP2_UFCS(initializer)(obj))}; 
                int val {0}; 
                if (string_util::string_to_int(cpp2::move(init_str), val)) {
                    rule.n_args = cpp2::move(val);
                }
            }
        }
        if (CPP2_UFCS(name)(obj) == "is_member") {
            if (CPP2_UFCS(has_initializer)(obj)) {
                auto init_str {CPP2_UFCS(to_string)(CPP2_UFCS(initializer)(obj))}; 
                rule.is_member = { cpp2::move(init_str) == "true" };
            }
        }
    }

    // Extract the reverse() function body for later inlining
    // Extract the reverse() function body for later inlining
    for ( auto const& func : CPP2_UFCS(get_member_functions)((*cpp2::impl::assert_not_null(member_type))) ) {
        if (CPP2_UFCS(name)(func) == "reverse" && CPP2_UFCS(has_compound_body)(func)) {
            auto body {CPP2_UFCS(get_compound_body)(func)}; 

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
                auto stmt_str {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(stmt))}; 

                // BUG FIX: Trim trailing whitespace before checking last character
                auto trimmed {cpp2::move(stmt_str)}; 
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
            rule.reverse_body_str = cpp2::move(body_stmts);
            rule.has_reverse_body = true;
            std::cout << "AD: Extracted reverse() body for '" << rule.name << "': " << rule.reverse_body_str << "\n";
        }
    }

    return rule; 
}

/*
  @brief Discover ad_rule types inside an annotated type.
 
  Scans all nested types and checks if they conform to the ad_rule pattern.
  Matching rules are registered in the output registry.
 
  @param t Type declaration to scan.
  @param out Registry to populate.
 */
#line 8018 "source/reflect.h2"
auto discover_ad_rules(cpp2::impl::in<meta::type_declaration> t, ad_rule_registry& out) -> void{
    std::cout << "AD: Discovering rules in type " << CPP2_UFCS(name)(t) << "\n";

    // 1. Nested types inside the @autodiff type (highest priority)
    for ( auto& member_type : CPP2_UFCS(get_member_types)(t) ) {
        auto type_name {CPP2_UFCS(name)(member_type)}; 
        std::cout << "AD: Checking nested type: " << cpp2::move(type_name) << "\n";

        if (is_ad_rule_type(member_type)) {
            auto rule {extract_ad_rule_meta(&member_type)}; 
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
                auto type_name {cpp2::impl::as_<std::string>(CPP2_UFCS(name)(m))}; 
                if (CPP2_UFCS(starts_with)(cpp2::move(type_name), "ad_rule_")) {
                    auto sibling_type {CPP2_UFCS(as_type)(m)}; 
                    if (is_ad_rule_type(sibling_type)) {
                        auto rule {extract_ad_rule_meta(&sibling_type)}; 
                        std::cout << "AD: Found sibling rule: " << rule.name << " (n_args=" << rule.n_args << ")\n";
                        CPP2_UFCS(register_rule)(out, cpp2::move(rule));
                    }
                }
            }
        }
    }
}

//-----------------------------------------------------------------------
//
//  Subtask 3b: Rule body extraction and inlining
//
//-----------------------------------------------------------------------

/*
  @brief Result of extracting a rule's reverse() body.
 */

#line 8077 "source/reflect.h2"
    ad_rule_body_result::ad_rule_body_result(){}
#line 8078 "source/reflect.h2"
    ad_rule_body_result::ad_rule_body_result(ad_rule_body_result const& that)
                                   : ok{ that.ok }
                                   , body_str{ that.body_str }{}
#line 8078 "source/reflect.h2"
    auto ad_rule_body_result::operator=(ad_rule_body_result const& that) -> ad_rule_body_result& {
                                   ok = that.ok;
                                   body_str = that.body_str;
                                   return *this; }
#line 8078 "source/reflect.h2"
    ad_rule_body_result::ad_rule_body_result(ad_rule_body_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , body_str{ std::move(that).body_str }{}
#line 8078 "source/reflect.h2"
    auto ad_rule_body_result::operator=(ad_rule_body_result&& that) noexcept -> ad_rule_body_result& {
                                   ok = std::move(that).ok;
                                   body_str = std::move(that).body_str;
                                   return *this; }

#line 8080 "source/reflect.h2"
    [[nodiscard]] auto ad_rule_body_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<std::string> body_) -> ad_rule_body_result{
        ad_rule_body_result r {}; 
        r.ok = ok_;
        r.body_str = body_;
        return r; 
    }

#line 8088 "source/reflect.h2"
/*
  @brief Get the reverse() function body from an ad_rule.
 
  Returns the body string that was extracted during rule discovery.
 
  @param rule The rule metadata (must have has_reverse_body set).
  @return Result with ok=true and body string if available.
 */
#line 8096 "source/reflect.h2"
[[nodiscard]] auto extract_rule_reverse_body(cpp2::impl::in<ad_rule_meta> rule) -> ad_rule_body_result{
    if (rule.has_reverse_body) {
        return ad_rule_body_result::make(true, rule.reverse_body_str); 
    }
    return ad_rule_body_result::make(false, ""); 
}

//-----------------------------------------------------------------------
//
//  AST-to-IR parsing for rule bodies
//
//-----------------------------------------------------------------------

/*
  @brief Result of parsing an AST expression to IR.
 */

#line 8116 "source/reflect.h2"
    ad_parse_expr_result::ad_parse_expr_result(){}
#line 8117 "source/reflect.h2"
    ad_parse_expr_result::ad_parse_expr_result(ad_parse_expr_result const& that)
                                   : ok{ that.ok }
                                   , expr{ that.expr }{}
#line 8117 "source/reflect.h2"
    auto ad_parse_expr_result::operator=(ad_parse_expr_result const& that) -> ad_parse_expr_result& {
                                   ok = that.ok;
                                   expr = that.expr;
                                   return *this; }
#line 8117 "source/reflect.h2"
    ad_parse_expr_result::ad_parse_expr_result(ad_parse_expr_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , expr{ std::move(that).expr }{}
#line 8117 "source/reflect.h2"
    auto ad_parse_expr_result::operator=(ad_parse_expr_result&& that) noexcept -> ad_parse_expr_result& {
                                   ok = std::move(that).ok;
                                   expr = std::move(that).expr;
                                   return *this; }

#line 8119 "source/reflect.h2"
    [[nodiscard]] auto ad_parse_expr_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_expr> expr_) -> ad_parse_expr_result{
        ad_parse_expr_result r {}; 
        r.ok = ok_;
        r.expr = expr_;
        return r; 
    }

#line 8126 "source/reflect.h2"
    [[nodiscard]] auto ad_parse_expr_result::make_fail() -> ad_parse_expr_result{
        ad_parse_expr_result r {}; 
        r.ok = false;
        return r; 
    }

#line 8133 "source/reflect.h2"
/*
  @brief Result of parsing an AST statement to IR.
 */

#line 8140 "source/reflect.h2"
    ad_parse_stmt_result::ad_parse_stmt_result(){}
#line 8141 "source/reflect.h2"
    ad_parse_stmt_result::ad_parse_stmt_result(ad_parse_stmt_result const& that)
                                   : ok{ that.ok }
                                   , stmt{ that.stmt }{}
#line 8141 "source/reflect.h2"
    auto ad_parse_stmt_result::operator=(ad_parse_stmt_result const& that) -> ad_parse_stmt_result& {
                                   ok = that.ok;
                                   stmt = that.stmt;
                                   return *this; }
#line 8141 "source/reflect.h2"
    ad_parse_stmt_result::ad_parse_stmt_result(ad_parse_stmt_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , stmt{ std::move(that).stmt }{}
#line 8141 "source/reflect.h2"
    auto ad_parse_stmt_result::operator=(ad_parse_stmt_result&& that) noexcept -> ad_parse_stmt_result& {
                                   ok = std::move(that).ok;
                                   stmt = std::move(that).stmt;
                                   return *this; }

#line 8143 "source/reflect.h2"
    [[nodiscard]] auto ad_parse_stmt_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_stmt> stmt_) -> ad_parse_stmt_result{
        ad_parse_stmt_result r {}; 
        r.ok = ok_;
        r.stmt = stmt_;
        return r; 
    }

#line 8150 "source/reflect.h2"
    [[nodiscard]] auto ad_parse_stmt_result::make_fail() -> ad_parse_stmt_result{
        ad_parse_stmt_result r {}; 
        r.ok = false;
        return r; 
    }

#line 8157 "source/reflect.h2"
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
#line 8172 "source/reflect.h2"
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

// Assignment expression: = += -= etc.
#line 8195 "source/reflect.h2"
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

// Logical OR: ||
#line 8210 "source/reflect.h2"
[[nodiscard]] auto parse_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    // LHS is first term (with empty operator)
    auto lhs_result {parse_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    // Process remaining terms (which have actual operators)
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_logical_and_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::lor, result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Logical AND: &&
#line 8232 "source/reflect.h2"
[[nodiscard]] auto parse_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_bit_or_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::land, result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Bit OR: |
#line 8252 "source/reflect.h2"
[[nodiscard]] auto parse_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::bor, result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Bit XOR: ^
#line 8272 "source/reflect.h2"
[[nodiscard]] auto parse_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_bit_and_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::bxor, result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Bit AND: &
#line 8292 "source/reflect.h2"
[[nodiscard]] auto parse_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_equality_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::band, result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Equality: == !=
#line 8312 "source/reflect.h2"
[[nodiscard]] auto parse_equality_expr(cpp2::impl::in<meta::equality_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_relational_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        auto op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Relational: < > <= >=
#line 8333 "source/reflect.h2"
[[nodiscard]] auto parse_relational_expr(cpp2::impl::in<meta::relational_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_compare_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        auto op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "bool");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Compare: <=>
#line 8354 "source/reflect.h2"
[[nodiscard]] auto parse_compare_expr(cpp2::impl::in<meta::compare_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_shift_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        result = ad_expr::make_binary(ad_op_kind::spaceship, result, cpp2::move(rhs_result).expr, "auto");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Shift: << >>
#line 8374 "source/reflect.h2"
[[nodiscard]] auto parse_shift_expr(cpp2::impl::in<meta::shift_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_additive_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        auto op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "int");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Additive: + -
#line 8395 "source/reflect.h2"
[[nodiscard]] auto parse_additive_expr(cpp2::impl::in<meta::additive_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto terms {CPP2_UFCS(get_terms)(expr)}; 
    if (CPP2_UFCS(empty)(terms)) {return ad_parse_expr_result::make_fail(); }
    if (CPP2_UFCS(ssize)(terms) == 1) {
        return parse_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx); 
    }
    auto lhs_result {parse_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms)), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto rhs_result {parse_multiplicative_expr(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        auto op_kind {map_op_string(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "double");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Multiplicative: * / %
#line 8416 "source/reflect.h2"
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
    auto lhs_result {parse_postfix_expr(cpp2::move(lhs_pf), ctx)}; 
    if (!(lhs_result.ok)) {return lhs_result; }
    auto result {cpp2::move(lhs_result).expr}; 
    // Process remaining terms (which have actual operators)
    auto i {1}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)) ) {
        auto term {CPP2_ASSERT_IN_BOUNDS(terms, i)}; 
        auto rhs_is_as {CPP2_UFCS(get_term)(term)}; 
        auto rhs_pf_expr {CPP2_UFCS(get_expression)(cpp2::move(rhs_is_as))}; 
        auto rhs_pf {CPP2_UFCS(get_postfix_expression)(cpp2::move(rhs_pf_expr))}; 
        auto rhs_result {parse_postfix_expr(cpp2::move(rhs_pf), ctx)}; 
        if (!(rhs_result.ok)) {return rhs_result; }
        auto op_str {CPP2_UFCS(get_op)(cpp2::move(term))}; 
        std::cout << "AD: multiplicative op = '" << op_str << "'\n";
        auto op_kind {map_op_string(cpp2::move(op_str))}; 
        result = ad_expr::make_binary(cpp2::move(op_kind), result, cpp2::move(rhs_result).expr, "double");
        ++i;
    }
    return ad_parse_expr_result::make(true, cpp2::move(result)); 
}

// Prefix expression: - ! etc.
#line 8455 "source/reflect.h2"
[[nodiscard]] auto parse_prefix_expr(cpp2::impl::in<meta::prefix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    auto ops {CPP2_UFCS(get_ops)(expr)}; 
    auto pf {CPP2_UFCS(get_postfix_expression)(expr)}; 
    auto inner_result {parse_postfix_expr(cpp2::move(pf), ctx)}; 
    if (!(inner_result.ok)) {return inner_result; }

    // Apply prefix operators from right to left
    auto result {cpp2::move(inner_result).expr}; 
    auto i {CPP2_UFCS(ssize)(ops) - 1}; 
    while( cpp2::impl::cmp_greater_eq(i,0) ) {
        auto op_str {CPP2_ASSERT_IN_BOUNDS(ops, i)}; 
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

// Postfix expression: identifiers, literals, function calls, member access
#line 8483 "source/reflect.h2"
[[nodiscard]] auto parse_postfix_expr(cpp2::impl::in<meta::postfix_expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    std::cout << "AD: parse_postfix_expr: '" << CPP2_UFCS(to_string)(expr) << "'\n";

    // Check if it's a simple identifier
    if (CPP2_UFCS(is_identifier)(expr)) {
        auto id_name {CPP2_UFCS(as_identifier)(expr)}; 
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
    auto expr_str {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(expr))}; 
    return ad_parse_expr_result::make(true, ad_expr::make_identifier(cpp2::move(expr_str), "double")); 
}

/*
  @brief Parse an expression from meta::expression into IR.
  Entry point - dispatches to assignment_expression parsing.
 */
#line 8511 "source/reflect.h2"
[[nodiscard]] auto parse_rule_expr(cpp2::impl::in<meta::expression> expr, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_expr_result{
    std::cout << "AD: parse_rule_expr: '" << CPP2_UFCS(to_string)(expr) << "'\n";

    // Check for simple cases first
    if (CPP2_UFCS(is_identifier)(expr)) {
        auto id_name {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(expr))}; 
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
#line 8552 "source/reflect.h2"
[[nodiscard]] auto parse_rule_stmt(cpp2::impl::in<meta::statement> stmt, cpp2::impl::in<ad_substitution_context> ctx) -> ad_parse_stmt_result{
    auto stmt_str {string_util::trim_copy(CPP2_UFCS(to_string)(stmt))}; 

    std::cout << "AD: parse_rule_stmt: '" << stmt_str << "'\n";

    // Check for compound statement
    if (CPP2_UFCS(is_compound_statement)(stmt)) {
        auto compound {CPP2_UFCS(as_compound_statement)(stmt)}; 
        std::vector<ad_stmt> nested_stmts {}; 
        for ( auto const& s : CPP2_UFCS(get_statements)(cpp2::move(compound)) ) {
            auto nested_result {parse_rule_stmt(s, ctx)}; 
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
        auto sel {CPP2_UFCS(as_selection_statement)(stmt)}; 
        // Parse condition - need to convert logical_or_expression to expression
        // For now, use the string representation
        auto cond_str {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(CPP2_UFCS(get_expression)(sel)))}; 
        std::cout << "AD: If condition string: '" << cond_str << "'\n";

        // Create a simple condition expression (for now just use the string)
        auto cond_expr {ad_expr::make_identifier(cpp2::move(cond_str), "bool")}; 

        // Parse then branch
        auto then_compound {CPP2_UFCS(get_true_branch)(sel)}; 
        std::vector<ad_stmt> then_stmts {}; 
        for ( auto const& s : CPP2_UFCS(get_statements)(cpp2::move(then_compound)) ) {
            auto then_result {parse_rule_stmt(s, ctx)}; 
            if (!(then_result.ok)) {
                std::cout << "AD: Failed to parse if then-branch\n";
                return ad_parse_stmt_result::make_fail(); 
            }
            CPP2_UFCS(push_back)(then_stmts, cpp2::move(then_result).stmt);
        }

        // Parse else branch if present
        std::vector<ad_stmt> else_stmts {}; 
        if (CPP2_UFCS(has_false_branch)(sel)) {
            auto else_compound {CPP2_UFCS(get_false_branch)(cpp2::move(sel))}; 
            for ( auto const& s : CPP2_UFCS(get_statements)(cpp2::move(else_compound)) ) {
                auto else_result {parse_rule_stmt(s, ctx)}; 
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
        auto expr_str2 {cpp2::impl::as_<std::string>(CPP2_UFCS(to_string)(expr))}; 

        std::cout << "AD: Expression statement: '" << expr_str2 << "'\n";

        // Check for assignment-add (+=)
        // Format: target += value
        auto plus_eq_pos {CPP2_UFCS(find)(expr_str2, "+=")}; 
        if (plus_eq_pos != std::string::npos) {
            auto target_str {string_util::trim_copy(CPP2_UFCS(substr)(expr_str2, 0, plus_eq_pos))}; 
            auto value_str {string_util::trim_copy(CPP2_UFCS(substr)(expr_str2, cpp2::move(plus_eq_pos) + 2))}; 
            // Remove trailing semicolon if present
            while( !(CPP2_UFCS(empty)(value_str)) && CPP2_UFCS(back)(value_str) == ';' ) {
                CPP2_UFCS(pop_back)(value_str);
            }
            value_str = string_util::trim_copy(value_str);

            std::cout << "AD: Assignment-add: target='" << target_str << "' value='" << value_str << "'\n";

            // DEBUG: Check what the expression actually is
            std::cout << "AD DEBUG: expr.is_assignment_expression() = " << CPP2_UFCS(is_assignment_expression)(expr) << "\n";
            std::cout << "AD DEBUG: expr.is_expression_list() = " << CPP2_UFCS(is_expression_list)(expr) << "\n";
            std::cout << "AD DEBUG: expr.is_identifier() = " << CPP2_UFCS(is_identifier)(expr) << "\n";

            // Substitute the target if needed
            auto new_target {target_str}; 
            ad_expr target_expr {}; 
            if (CPP2_UFCS(find)(ctx, cpp2::move(target_str), target_expr) && target_expr.kind == ad_expr_kind::identifier) {
                new_target = cpp2::move(target_expr).name;
            }

            // For assignment expressions, use get_terms() to get the operator and RHS
            // terms[0] is LHS with empty operator, terms[1] has the actual operator and RHS
            if (CPP2_UFCS(is_assignment_expression)(expr)) {
                auto assign_expr {CPP2_UFCS(as_assignment_expression)(expr)}; 
                auto terms {CPP2_UFCS(get_terms)(cpp2::move(assign_expr))}; 
                std::cout << "AD DEBUG: assignment_expression has " << CPP2_UFCS(ssize)(terms) << " terms\n";

                if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(terms),2)) {
                    // terms[0] = LHS (empty op), terms[1] = RHS (with operator like +=)
                    auto op_str {CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS_LITERAL(terms, 1))}; 
                    std::cout << "AD DEBUG: operator is '" << op_str << "'\n";

                    if (cpp2::move(op_str) == "+=") {
                        // Get the RHS term (logical_or_expression)
                        auto rhs_term {CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(terms), 1))}; 
                        std::cout << "AD DEBUG: RHS term is '" << CPP2_UFCS(to_string)(rhs_term) << "'\n";

                        // Parse the RHS expression using proper AST traversal
                        auto rhs_result {parse_logical_or_expr(cpp2::move(rhs_term), ctx)}; 
                        if (rhs_result.ok) {
                            return ad_parse_stmt_result::make(true, 
                                ad_stmt::make_assign_add(new_target, cpp2::move(rhs_result).expr)); 
                        }
                        std::cout << "AD DEBUG: Failed to parse RHS expression\n";
                    }
                }
            }

            // Try to substitute the value string directly
            ad_expr subst_val {}; 
            if (CPP2_UFCS(find)(ctx, value_str, subst_val)) {
                return ad_parse_stmt_result::make(true, 
                    ad_stmt::make_assign_add(cpp2::move(new_target), cpp2::move(subst_val))); 
            }

            // Could not parse RHS of += expression
            std::cout << "AD: ERROR - Could not parse += RHS value: '" << cpp2::move(value_str) << "'\n";
            return ad_parse_stmt_result::make_fail(); 
        }

        // Check for regular assignment (=)
        auto eq_pos {CPP2_UFCS(find)(expr_str2, '=')}; 
        if (eq_pos != std::string::npos && (eq_pos == 0 || CPP2_ASSERT_IN_BOUNDS(expr_str2, eq_pos - 1) != '+')) {
            // Make sure it's not +=, -=, etc.
            if (cpp2::impl::cmp_greater(eq_pos,0uz) && (CPP2_ASSERT_IN_BOUNDS(expr_str2, eq_pos - 1) == '-' || CPP2_ASSERT_IN_BOUNDS(expr_str2, eq_pos - 1) == '*' || CPP2_ASSERT_IN_BOUNDS(expr_str2, eq_pos - 1) == '/')) {
                // Skip compound assignment
            }else {
                auto target_str {string_util::trim_copy(CPP2_UFCS(substr)(expr_str2, 0, eq_pos))}; 
                auto value_str {string_util::trim_copy(CPP2_UFCS(substr)(cpp2::move(expr_str2), cpp2::move(eq_pos) + 1))}; 
                // Remove trailing semicolon if present
                while( !(CPP2_UFCS(empty)(value_str)) && CPP2_UFCS(back)(value_str) == ';' ) {
                    CPP2_UFCS(pop_back)(value_str);
                }
                value_str = string_util::trim_copy(value_str);

                // Substitute target if needed
                auto new_target {target_str}; 
                ad_expr target_expr {}; 
                if (CPP2_UFCS(find)(ctx, cpp2::move(target_str), target_expr) && target_expr.kind == ad_expr_kind::identifier) {
                    new_target = cpp2::move(target_expr).name;
                }

                // For simple assignment, get the RHS via expression list
                if (CPP2_UFCS(is_expression_list)(expr)) {
                    auto exp_list {CPP2_UFCS(as_expression_list)(expr)}; 
                    auto sub_exprs {CPP2_UFCS(get_expressions)(cpp2::move(exp_list))}; 
                    // The second expression should be the RHS
                    if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(sub_exprs),2)) {
                        auto rhs_result {parse_rule_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(sub_exprs), 1), ctx)}; 
                        if (rhs_result.ok) {
                            return ad_parse_stmt_result::make(true, 
                                ad_stmt::make_assign(new_target, cpp2::move(rhs_result).expr)); 
                        }
                    }
                }

                // Try to substitute the value string directly
                ad_expr subst_val {}; 
                if (CPP2_UFCS(find)(ctx, value_str, subst_val)) {
                    return ad_parse_stmt_result::make(true, 
                        ad_stmt::make_assign(cpp2::move(new_target), cpp2::move(subst_val))); 
                }

                // Could not parse RHS of assignment expression
                std::cout << "AD: ERROR - Could not parse assignment RHS value: '" << cpp2::move(value_str) << "'\n";
                return ad_parse_stmt_result::make_fail(); 
            }
        }

        // General expression statement - just wrap the parsed expression
        auto expr_result {parse_rule_expr(cpp2::move(expr), ctx)}; 
        if (expr_result.ok) {
            return ad_parse_stmt_result::make(true, ad_stmt::make_expr(cpp2::move(expr_result).expr)); 
        }
    }

    std::cout << "AD: Failed to parse statement: '" << cpp2::move(stmt_str) << "'\n";
    return ad_parse_stmt_result::make_fail(); 
}

/*
  @brief Parse all AST statements from a rule body into IR.
 
  This is the main entry point for converting a rule's reverse() body
  from AST to IR with parameter substitution applied.
 
  @param stmts Vector of AST statements from the rule body.
  @param ctx Substitution context mapping parameter names to IR expressions.
  @param out Output vector for the parsed IR statements.
  @return true if all statements were successfully parsed.
 */
#line 8757 "source/reflect.h2"
[[nodiscard]] auto parse_rule_body_stmts(cpp2::impl::in<std::vector<meta::statement>> stmts, cpp2::impl::in<ad_substitution_context> ctx, 
                        std::vector<ad_stmt>& out) -> bool{
    std::cout << "AD DEBUG: parse_rule_body_stmts called with " << CPP2_UFCS(ssize)(stmts) << " statements\n";
    for ( auto const& stmt : stmts ) {
        std::cout << "AD DEBUG: About to call parse_rule_stmt\n";
        auto result {parse_rule_stmt(stmt, ctx)}; 
        std::cout << "AD DEBUG: parse_rule_stmt returned ok=" << result.ok << "\n";
        if (!(result.ok)) {
            return false; 
        }
        CPP2_UFCS(push_back)(out, cpp2::move(result).stmt);
    }
    return true; 
}

/*
  @brief Standard parameter names used in ad_rule reverse() functions.
 
  These are the expected parameter names that will be substituted:
  - res_val: result value from forward pass
  - res_adj: incoming adjoint (to propagate)
  - x_val, y_val, z_val, w_val: argument values
  - x_adj, y_adj, z_adj, w_adj: argument adjoints (inout)
 */

#line 8788 "source/reflect.h2"
/*
  @brief Check if a character is an identifier character (alphanumeric or underscore).
 */
#line 8791 "source/reflect.h2"
[[nodiscard]] auto is_identifier_char(cpp2::impl::in<char> c) -> bool{
    return std::isalnum(cpp2::impl::as_<int>(c)) != 0 || c == '_'; 
}

/*
  @brief Replace all whole-word occurrences of a pattern in a string.
 
  Only replaces when the pattern is not part of a larger identifier.
  For example, replacing "x_val" won't affect "extra_x_val" or "x_value".
 
  @param str The input string.
  @param pattern The pattern to find (must be a whole word/identifier).
  @param replacement The replacement string.
  @return String with all whole-word occurrences replaced.
 */
#line 8806 "source/reflect.h2"
[[nodiscard]] auto replace_word(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> pattern, cpp2::impl::in<std::string> replacement) -> std::string{
    if (CPP2_UFCS(empty)(pattern)) {
        return str; 
    }

    std::string result {""}; 
    size_t pos {0}; 
    auto pattern_len {CPP2_UFCS(size)(pattern)}; 

    while( cpp2::impl::cmp_less(pos,CPP2_UFCS(size)(str)) ) {
        auto found {CPP2_UFCS(find)(str, pattern, pos)}; 
        if (found == std::string::npos) {
            // No more matches, append rest of string
            result += CPP2_UFCS(substr)(str, pos);
            break;
        }

        // Check word boundaries
        auto is_word_start {(found == 0) || !(is_identifier_char(CPP2_ASSERT_IN_BOUNDS(str, found - 1)))}; 
        auto is_word_end {(cpp2::impl::cmp_greater_eq(found + pattern_len,CPP2_UFCS(size)(str))) || !(is_identifier_char(CPP2_ASSERT_IN_BOUNDS(str, found + pattern_len)))}; 

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
#line 8862 "source/reflect.h2"
[[nodiscard]] auto substitute_rule_params(cpp2::impl::in<std::string> body_str, 
                         cpp2::impl::in<std::string> target_val, cpp2::impl::in<std::string> target_adj, 
                         cpp2::impl::in<std::vector<std::string>> arg_vals, 
                         cpp2::impl::in<std::vector<std::string>> arg_adjs) -> std::string{
    auto result {body_str}; 

    // Substitute result value and adjoint using word-boundary-aware replacement
    result = replace_word(result, "res_val", target_val);
    result = replace_word(result, "res_adj", target_adj);

    // Substitute argument values and adjoints
    // BUG FIX: Check both arg_vals and arg_adjs sizes
    std::array<std::string,4> param_names {"x", "y", "z", "w"}; 
    auto i {0}; 
    while( cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(param_names)) && cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(arg_vals)) && cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(arg_adjs)) ) {
        auto val_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_val"}; 
        auto adj_param {CPP2_ASSERT_IN_BOUNDS(param_names, i) + "_adj"}; 

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

//-----------------------------------------------------------------------
//
//  Subtask 4: Operator token mapping for + - * /
//
//-----------------------------------------------------------------------

/*
  @brief Result of mapping an operator or function name to ad_op_kind.
 */

#line 8916 "source/reflect.h2"
    ad_op_mapping_result::ad_op_mapping_result(){}
#line 8917 "source/reflect.h2"
    ad_op_mapping_result::ad_op_mapping_result(ad_op_mapping_result const& that)
                                   : ok{ that.ok }
                                   , kind{ that.kind }{}
#line 8917 "source/reflect.h2"
    auto ad_op_mapping_result::operator=(ad_op_mapping_result const& that) -> ad_op_mapping_result& {
                                   ok = that.ok;
                                   kind = that.kind;
                                   return *this; }
#line 8917 "source/reflect.h2"
    ad_op_mapping_result::ad_op_mapping_result(ad_op_mapping_result&& that) noexcept
                                   : ok{ std::move(that).ok }
                                   , kind{ std::move(that).kind }{}
#line 8917 "source/reflect.h2"
    auto ad_op_mapping_result::operator=(ad_op_mapping_result&& that) noexcept -> ad_op_mapping_result& {
                                   ok = std::move(that).ok;
                                   kind = std::move(that).kind;
                                   return *this; }

#line 8919 "source/reflect.h2"
    [[nodiscard]] auto ad_op_mapping_result::make(cpp2::impl::in<bool> ok_, cpp2::impl::in<ad_op_kind> kind_) -> ad_op_mapping_result{
        ad_op_mapping_result r {}; 
        r.ok = ok_;
        r.kind = kind_;
        return r; 
    }

#line 8927 "source/reflect.h2"
/*
  @brief Map an operator token string to ad_op_kind.
 
  Handles the basic arithmetic operators used in additive and multiplicative
  expressions.
 
  @param op Operator token string ("+", "-", "", "/").
  @return Result with ok=true and kind set if recognized.
 */
#line 8936 "source/reflect.h2"
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

/*
  @brief Map a function name to ad_op_kind.
 
  All function calls use ad_op_kind::call - actual differentiation
  rules are looked up by function name in the ad_rule_registry.
 
  @param name Function name.
  @return Result with ad_op_kind::call.
 */
#line 8961 "source/reflect.h2"
[[nodiscard]] auto map_function_to_op(cpp2::impl::in<std::string_view> name) -> ad_op_mapping_result{
    // All functions use ad_op_kind::call - differentiation is handled by
    // looking up ad_rule_* definitions in the rule registry by name
    return ad_op_mapping_result::make(true, ad_op_kind::call); 
}

/*
  @brief Debug: print operator mapping result.
  @param op Operator string.
  @param ok Whether the operator was recognized.
  @param kind The mapped kind.
 */
#line 8973 "source/reflect.h2"
auto debug_operator_mapping(cpp2::impl::in<std::string_view> op, cpp2::impl::in<bool> ok, cpp2::impl::in<ad_op_kind> kind) -> void{
    std::cout << "AD: map_operator_token(\"" << op << "\") -> ";
    if (ok) {
        std::cout << "ok, " << ad_op_kind_to_string(kind) << "\n";
    }else {
        std::cout << "not recognized\n";
    }
}

//-----------------------------------------------------------------------
//
//  AD IR Error handling
//
//-----------------------------------------------------------------------

/*
  @brief Error information for AD IR processing.
 */

#line 8996 "source/reflect.h2"
    ad_ir_error::ad_ir_error(){}
#line 8997 "source/reflect.h2"
    ad_ir_error::ad_ir_error(ad_ir_error const& that)
                                   : message{ that.message }
                                   , location{ that.location }
                                   , context{ that.context }{}
#line 8997 "source/reflect.h2"
    auto ad_ir_error::operator=(ad_ir_error const& that) -> ad_ir_error& {
                                   message = that.message;
                                   location = that.location;
                                   context = that.context;
                                   return *this; }
#line 8997 "source/reflect.h2"
    ad_ir_error::ad_ir_error(ad_ir_error&& that) noexcept
                                   : message{ std::move(that).message }
                                   , location{ std::move(that).location }
                                   , context{ std::move(that).context }{}
#line 8997 "source/reflect.h2"
    auto ad_ir_error::operator=(ad_ir_error&& that) noexcept -> ad_ir_error& {
                                   message = std::move(that).message;
                                   location = std::move(that).location;
                                   context = std::move(that).context;
                                   return *this; }

#line 8999 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_error::make(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc, cpp2::impl::in<std::string> ctx) -> ad_ir_error{
        ad_ir_error e {}; 
        e.message = msg;
        e.location = loc;
        e.context = ctx;
        return e; 
    }

#line 9008 "source/reflect.h2"
/*
  @brief Print an AD IR error with formatting.
 */
#line 9011 "source/reflect.h2"
auto ad_ir_error_print(cpp2::impl::in<ad_ir_error> err) -> void{
    std::cout << "\n";
    std::cout << "╔═══ AD IR ERROR ═══════════════════════════════════════════════════╗\n";
    std::cout << "║ " << err.message << "\n";
    if (!(CPP2_UFCS(empty)(err.location))) {
        std::cout << "║ Location: " << err.location << "\n";
    }
    if (!(CPP2_UFCS(empty)(err.context))) {
        std::cout << "║ Context: " << err.context << "\n";
    }
    std::cout << "╚════════════════════════════════════════════════════════════════════╝\n";
}

/*
  @brief Collection of errors during AD IR processing.
 */

#line 9030 "source/reflect.h2"
    ad_ir_error_list::ad_ir_error_list(){}
#line 9031 "source/reflect.h2"
    ad_ir_error_list::ad_ir_error_list(ad_ir_error_list const& that)
                                   : errors{ that.errors }{}
#line 9031 "source/reflect.h2"
    auto ad_ir_error_list::operator=(ad_ir_error_list const& that) -> ad_ir_error_list& {
                                   errors = that.errors;
                                   return *this; }
#line 9031 "source/reflect.h2"
    ad_ir_error_list::ad_ir_error_list(ad_ir_error_list&& that) noexcept
                                   : errors{ std::move(that).errors }{}
#line 9031 "source/reflect.h2"
    auto ad_ir_error_list::operator=(ad_ir_error_list&& that) noexcept -> ad_ir_error_list& {
                                   errors = std::move(that).errors;
                                   return *this; }

    /*
      @brief Add an error to the list.
     */
#line 9036 "source/reflect.h2"
    auto ad_ir_error_list::add_error(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc, cpp2::impl::in<std::string> ctx) & -> void{
        CPP2_UFCS(push_back)(errors, ad_ir_error::make(msg, loc, ctx));
    }

    /*
      @brief Check if any errors occurred.
     */
#line 9043 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_error_list::has_errors() const& -> bool{
        return !(CPP2_UFCS(empty)(errors)); 
    }

    /*
      @brief Get number of errors.
     */
#line 9050 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_error_list::count() const& -> int{
        return CPP2_UFCS(ssize)(errors); 
    }

    /*
      @brief Print all errors.
     */
#line 9057 "source/reflect.h2"
    auto ad_ir_error_list::print_all() const& -> void{
        if (CPP2_UFCS(empty)(errors)) {
            return ; 
        }
        std::cout << "\n";
        std::cout << "══════════════════════════════════════════════════════════════════════\n";
        std::cout << "  AD IR encountered " << CPP2_UFCS(ssize)(errors) << " error(s):\n";
        std::cout << "══════════════════════════════════════════════════════════════════════\n";
        for ( auto const& err : errors ) {
            ad_ir_error_print(err);
        }
    }

    /*
      @brief Clear all errors.
     */
#line 9073 "source/reflect.h2"
    auto ad_ir_error_list::clear() & -> void{
        CPP2_UFCS(clear)(errors);
    }

#line 9078 "source/reflect.h2"
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

#line 9097 "source/reflect.h2"
    /// Default constructor
#line 9098 "source/reflect.h2"
    ad_ir_builder::ad_ir_builder()
        : ctx{ nullptr }
        , registry{ nullptr }{

#line 9101 "source/reflect.h2"
    }

    /// Initialize with context and registry
#line 9104 "source/reflect.h2"
    ad_ir_builder::ad_ir_builder(cpp2::impl::in<reverse_autodiff_context*> ctx_, cpp2::impl::in<ad_rule_registry*> registry_)
        : ctx{ ctx_ }
        , registry{ registry_ }{

#line 9107 "source/reflect.h2"
    }

    /*
      @brief Report an error during IR building.
      @param msg Error message.
      @param loc Location string (optional).
      @param context Additional context (optional).
     */
#line 9115 "source/reflect.h2"
    auto ad_ir_builder::report_error(cpp2::impl::in<std::string> msg, cpp2::impl::in<std::string> loc, cpp2::impl::in<std::string> context) & -> void{
        CPP2_UFCS(add_error)(errors, msg, loc, context);
        std::cout << "AD IR Builder Error: " << msg;
        if (!(CPP2_UFCS(empty)(loc))) {std::cout << " at " << loc; }
        if (!(CPP2_UFCS(empty)(context))) {std::cout << " (" << context << ")"; }
        std::cout << "\n";
    }

    /*
      @brief Check if any errors occurred.
     */
#line 9126 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::has_errors() const& -> bool{
        return CPP2_UFCS(has_errors)(errors); 
    }

    /*
      @brief Get error count.
     */
#line 9133 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::error_count() const& -> int{
        return CPP2_UFCS(count)(errors); 
    }

    /*
      @brief Print all accumulated errors.
     */
#line 9140 "source/reflect.h2"
    auto ad_ir_builder::print_errors() const& -> void{
        CPP2_UFCS(print_all)(errors);
    }

    /*
      @brief Generate a unique temporary name.
      @param base Base name for the temporary.
      @return Unique temporary name.
     */
#line 9149 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::gen_temp_name(cpp2::impl::in<std::string> base) & -> std::string{
        auto name {"" + cpp2::to_string(base) + "_t" + cpp2::to_string(temp_counter) + ""}; 
        ++temp_counter;
        CPP2_UFCS(push_back)(temp_names, name);
        return name; 
    }

    /*
      @brief Emit an expression as a Cpp2 string.
     
      Full expression-to-string conversion supporting all expression kinds.
     
      @param expr Expression to emit.
      @return Cpp2 source string.
     */
#line 9164 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string{
        if (expr.kind == ad_expr_kind::literal) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::identifier) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::unary) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                auto operand {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
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
                auto lhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto rhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                auto op_str {ad_op_kind_to_binary_str(expr.op)}; 
                if (CPP2_UFCS(empty)(op_str)) {op_str = " ?? "; }
                return "(" + cpp2::move(lhs) + cpp2::move(op_str) + cpp2::move(rhs) + ")"; 
            }
            return "(binary)"; 
        }
        else {if (expr.kind == ad_expr_kind::ternary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),3)) {
                auto cond {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto then_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                auto else_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 2))}; 
                return "(" + cpp2::move(cond) + " ? " + cpp2::move(then_expr) + " : " + cpp2::move(else_expr) + ")"; 
            }
            return "(ternary)"; 
        }
        else {if (expr.kind == ad_expr_kind::member) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                auto obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto op_str {"->"}; 
                if (expr.op != ad_op_kind::arrow) {op_str = "."; }
                return cpp2::move(obj) + cpp2::move(op_str) + expr.member_name; 
            }
            return "(member)"; 
        }
        else {if (expr.kind == ad_expr_kind::subscript) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                auto arr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto idx {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                return cpp2::move(arr) + "[" + cpp2::move(idx) + "]"; 
            }
            return "(subscript)"; 
        }
        else {if (expr.kind == ad_expr_kind::call) {
            auto result {expr.name}; 
            // Add template args if present
            if (!(CPP2_UFCS(empty)(expr.type_args))) {
                result += "<";
{
auto first{true};

#line 9230 "source/reflect.h2"
                for ( auto const& targ : expr.type_args ) {
                    if (!(first)) {result += ", "; }
                    first = false;
                    result += ad_type_to_string(targ);
                }
}
#line 9235 "source/reflect.h2"
                result += ">";
            }
            result += "(";
{
auto first{true};

#line 9239 "source/reflect.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 9244 "source/reflect.h2"
            result += ")";
            return result; 
        }
        else {if (expr.kind == ad_expr_kind::method_call) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                auto obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto result {cpp2::move(obj) + "." + expr.name + "("}; 
                // Skip first arg (the object), emit remaining args
                if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(expr.args),1)) {
                    result += emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1));
                    auto i {2}; 
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
            auto result {expr.name + "("}; 
{
auto first{true};

#line 9287 "source/reflect.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 9292 "source/reflect.h2"
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
auto first{true};

#line 9304 "source/reflect.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 9309 "source/reflect.h2"
            result += "}";
            return result; 
        }}}}}}}}}}}}}
        return "(??)"; 
    }

    /*
      @brief Derive a readable operation name from op and args.
     
      Creates names like "mul_x_y", "sin_x", "add_z_w" for debugging.
     
      @param op Operation kind.
      @param args Argument expressions.
      @return Derived name.
     */
#line 9324 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::derive_op_name(cpp2::impl::in<ad_op_kind> op, cpp2::impl::in<std::vector<ad_expr>> args) const& -> std::string{
        auto result {ad_op_kind_to_string(op)}; 
        for ( auto const& arg : args ) {
            if (arg.kind == ad_expr_kind::identifier || arg.kind == ad_expr_kind::literal) {
                result += "_" + arg.name;
            }
        }
        return result; 
    }

    /*
      @brief Build an identifier IR node.
      @param name Variable name.
      @param type_name Type of the variable (or empty for unknown).
      @return Identifier expression node.
     */
#line 9340 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_identifier_expr(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> type_name) const& -> ad_expr{
        return ad_expr::make_identifier(name, type_name); 
    }

    /*
      @brief Build a literal IR node.
      @param value Literal value as string.
      @param type_name Type of the literal (default "double").
      @return Literal expression node.
     */
#line 9350 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_literal_expr(cpp2::impl::in<std::string> value, cpp2::impl::in<std::string> type_name) const& -> ad_expr{
        return ad_expr::make_literal(value, type_name); 
    }

    /*
      @brief Build a member-access IR node (obj.field).
     
      Represented as a call expression with the object as first argument.
     
      @param object Object expression.
      @param field Field name.
      @param type_name Result type.
      @return Member access expression node.
     */
#line 9364 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_member_access_expr(cpp2::impl::in<ad_expr> object, cpp2::impl::in<std::string> field, cpp2::impl::in<std::string> type_name) const& -> ad_expr{
        std::vector<ad_expr> args {}; 
        CPP2_UFCS(push_back)(args, object);
        return ad_expr::make_call(field, ad_op_kind::call, cpp2::move(args), type_name); 
    }

    /*
      @brief Build IR from a primary expression.
     
      Handles identifiers, literals, and parenthesized expressions.
     
      @param primary Primary expression from reflection AST.
      @return IR expression node.
     */
#line 9378 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_primary_expr(cpp2::impl::in<meta::primary_expression> primary) & -> ad_expr{
        if (CPP2_UFCS(is_identifier)(primary)) {
            auto name {CPP2_UFCS(as_identifier)(primary)}; 
            std::cout << "AD IR Builder: primary identifier '" << name << "'\n";
            return build_identifier_expr(cpp2::impl::as_<std::string>(cpp2::move(name))); 
        }
        else {if (CPP2_UFCS(is_literal)(primary)) {
            auto value {CPP2_UFCS(as_literal)(primary)}; 
            std::cout << "AD IR Builder: primary literal '" << value << "'\n";
            return build_literal_expr(cpp2::impl::as_<std::string>(cpp2::move(value))); 
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

    /*
      @brief Build IR from a postfix expression.
     
      Handles function calls, member access, and subscript operations.
     
      @param postfix Postfix expression from reflection AST.
      @return IR expression node.
     */
#line 9426 "source/reflect.h2"
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
                result = build_member_access_expr(result, cpp2::impl::as_<std::string>(cpp2::move(field)));
            }}
        }

        return result; 
    }

    /*
      @brief Build IR from a prefix expression.
     
      Handles unary operators like -x and +x.
     
      @param prefix Prefix expression from reflection AST.
      @return IR expression node.
     */
#line 9482 "source/reflect.h2"
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

    /*
      @brief Build IR from an is-as expression.
     
      Handles type checks and casts, but for AD we typically just descend.
     
      @param isas Is-as expression from reflection AST.
      @return IR expression node.
     */
#line 9528 "source/reflect.h2"
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

    /*
      @brief Build IR from a multiplicative expression.
     
      Handles x  y, x / y chains.
     
      @param binexpr Multiplicative expression from reflection AST.
      @return IR expression node.
     */
#line 9549 "source/reflect.h2"
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

    /*
      @brief Build IR from an additive expression.
     
      Handles x + y, x - y chains.
     
      @param binexpr Additive expression from reflection AST.
      @return IR expression node.
     */
#line 9593 "source/reflect.h2"
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

    //-----------------------------------------------------------------------
    // Task 7: Call builder + rule application
    //-----------------------------------------------------------------------

    /*
      @brief Parse call arguments from an expression list.
      @param expr_list Expression list from function call.
      @return Vector of IR expressions for each argument.
     */
#line 9638 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::parse_call_args(cpp2::impl::in<meta::expression_list> expr_list) & -> std::vector<ad_expr>{
        std::vector<ad_expr> args {}; 
        for ( auto const& expr : CPP2_UFCS(get_expressions)(expr_list) ) {
            auto arg_ir {build_expression(expr)}; 
            CPP2_UFCS(push_back)(args, cpp2::move(arg_ir));
        }
        return args; 
    }

    /*
      @brief Build IR from a general expression node.
      @param expr Expression from reflection AST.
      @return IR expression node.
     */
#line 9652 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_expression(cpp2::impl::in<meta::expression> expr) & -> ad_expr{
        // For now, use string representation and try to identify patterns
        auto str {CPP2_UFCS(to_string)(expr)}; 
        std::cout << "AD IR Builder: expression '" << str << "'\n";

        // Check for simple identifier
        if (CPP2_UFCS(is_identifier)(expr)) {
            return build_identifier_expr(cpp2::impl::as_<std::string>(str)); 
        }
        // Check for literal
        if (CPP2_UFCS(is_literal)(expr)) {
            return build_literal_expr(cpp2::impl::as_<std::string>(str), "double"); 
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

    /*
      @brief Build IR from an assignment expression (top-level of most expressions).
      @param assign Assignment expression from reflection AST.
      @return IR expression node.
     */
#line 9686 "source/reflect.h2"
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

    // Traverse down the binary expression chain to get to additive expression
#line 9702 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_logical_or_expr(cpp2::impl::in<meta::logical_or_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle || operators
        return build_logical_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9711 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_logical_and_expr(cpp2::impl::in<meta::logical_and_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle && operators
        return build_bit_or_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9720 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_bit_or_expr(cpp2::impl::in<meta::bit_or_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle | operators
        return build_bit_xor_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9729 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_bit_xor_expr(cpp2::impl::in<meta::bit_xor_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle ^ operators
        return build_bit_and_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9738 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_bit_and_expr(cpp2::impl::in<meta::bit_and_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle & operators
        return build_equality_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9747 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_equality_expr(cpp2::impl::in<meta::equality_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle == != operators
        return build_relational_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9756 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_relational_expr(cpp2::impl::in<meta::relational_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle < > <= >= operators
        return build_compare_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9765 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_compare_expr(cpp2::impl::in<meta::compare_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle <=> operators
        return build_shift_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

#line 9774 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::build_shift_expr(cpp2::impl::in<meta::shift_expression> expr) & -> ad_expr{
        auto terms {CPP2_UFCS(get_terms)(expr)}; 
        if (CPP2_UFCS(ssize)(terms) == 1) {
            return build_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(terms))); 
        }
        // TODO: handle << >> operators
        return build_additive_expr(CPP2_UFCS(get_term)(CPP2_UFCS(front)(cpp2::move(terms)))); 
    }

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
#line 9797 "source/reflect.h2"
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

    //-----------------------------------------------------------------------
    // Task 8: Activity analysis
    //-----------------------------------------------------------------------

    /*
      @brief Check if an expression is active for AD.
      @param expr IR expression to check.
      @return True if the expression is active.
     */
#line 9827 "source/reflect.h2"
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

    //-----------------------------------------------------------------------
    // Task 9: Statement builder (decl + assignment)
    //-----------------------------------------------------------------------

    /*
      @brief Build IR statements for a local object declaration.
      @param decl Declaration to process.
      @param body_stmts Output vector for forward statements.
      @param reverse_stmts Output vector for reverse statements.
     */
#line 9872 "source/reflect.h2"
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

    /*
      @brief Build IR statements for an assignment.
      @param target Target variable name.
      @param value_expr RHS expression IR.
      @param body_stmts Output vector for forward statements.
      @param reverse_stmts Output vector for reverse statements.
     */
#line 9929 "source/reflect.h2"
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

    /*
      @brief Transform expression to use _val suffixes for identifiers.
      @param expr Expression to transform.
      @return Transformed expression with _val suffixes.
     */
#line 9960 "source/reflect.h2"
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

    /*
      @brief Generate reverse (adjoint) statement for an expression.
      @param target Target variable name (whose adjoint receives contribution).
      @param expr Expression IR.
      @return Reverse statement.
     */
#line 10007 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_builder::generate_reverse_for_expr(cpp2::impl::in<std::string> target, cpp2::impl::in<ad_expr> expr) & -> ad_stmt{
        auto target_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), target)}; 

        // For binary ops, generate partial derivative contributions
        if (expr.kind == ad_expr_kind::binary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                auto lhs {CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0)}; 
                auto rhs {CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1)}; 

                if (expr.op == ad_op_kind::add) {
                    // d(a+b)/da = 1, d(a+b)/db = 1
                    // Reverse: lhs_adj += target_adj; rhs_adj += target_adj
                    std::vector<ad_stmt> compound {}; 
                    if (lhs.kind == ad_expr_kind::identifier) {
                        auto lhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(lhs).name)}; 
                        auto adj_ref {ad_expr::make_identifier(target_adj, "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(lhs_adj), cpp2::move(adj_ref)));
                    }
                    if (rhs.kind == ad_expr_kind::identifier) {
                        auto rhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(rhs).name)}; 
                        auto adj_ref {ad_expr::make_identifier(cpp2::move(target_adj), "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(rhs_adj), cpp2::move(adj_ref)));
                    }
                    return ad_stmt::make_compound(cpp2::move(compound)); 
                }
                else {if (expr.op == ad_op_kind::sub) {
                    // d(a-b)/da = 1, d(a-b)/db = -1
                    std::vector<ad_stmt> compound {}; 
                    if (lhs.kind == ad_expr_kind::identifier) {
                        auto lhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(lhs).name)}; 
                        auto adj_ref {ad_expr::make_identifier(target_adj, "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(lhs_adj), cpp2::move(adj_ref)));
                    }
                    if (rhs.kind == ad_expr_kind::identifier) {
                        auto rhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(rhs).name)}; 
                        auto adj_ref {ad_expr::make_identifier(cpp2::move(target_adj), "double")}; 
                        auto neg_adj {ad_expr::make_unary(ad_op_kind::neg, cpp2::move(adj_ref), "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(rhs_adj), cpp2::move(neg_adj)));
                    }
                    return ad_stmt::make_compound(cpp2::move(compound)); 
                }
                else {if (expr.op == ad_op_kind::mul) {
                    // d(a*b)/da = b, d(a*b)/db = a
                    std::vector<ad_stmt> compound {}; 
                    auto adj_ref {ad_expr::make_identifier(cpp2::move(target_adj), "double")}; 

                    // Handle LHS (contribution to lhs_adj)
                    if (lhs.kind == ad_expr_kind::identifier) {
                        auto lhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), lhs.name)}; 
                        // lhs_adj += rhs * target_adj
                        // Need to get rhs value - could be identifier or call result
                        ad_expr rhs_val {}; 
                        if (rhs.kind == ad_expr_kind::identifier) {
                            rhs_val = ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), rhs.name), "double");
                        }else {if (rhs.kind == ad_expr_kind::call) {
                            // Use the call expression itself as the value (forward pass computes it)
                            rhs_val = rhs;
                        }else {
                            // For literals, binary expressions, etc. - use the expression directly
                            rhs_val = rhs;
                        }}
                        auto contrib {ad_expr::make_binary(ad_op_kind::mul, cpp2::move(rhs_val), adj_ref, "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(lhs_adj), cpp2::move(contrib)));
                    }
                    else {if (lhs.kind == ad_expr_kind::call) {
                        // LHS is a call - need chain rule through it
                        // tmp_adj = rhs * target_adj, then apply call's reverse
                        // For now, recursively generate reverse for the call
                        // The call's arguments will receive contributions scaled by lhs_val * target_adj
                        auto call_reverse {generate_reverse_for_call_with_scale(lhs, rhs, adj_ref)}; 
                        CPP2_UFCS(push_back)(compound, cpp2::move(call_reverse));
                    }}

                    // Handle RHS (contribution to rhs_adj)
                    if (rhs.kind == ad_expr_kind::identifier) {
                        auto rhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(rhs).name)}; 
                        // rhs_adj += lhs * target_adj
                        ad_expr lhs_val {}; 
                        if (lhs.kind == ad_expr_kind::identifier) {
                            lhs_val = ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(lhs).name), "double");
                        }else {if (lhs.kind == ad_expr_kind::call) {
                            lhs_val = cpp2::move(lhs);
                        }else {
                            lhs_val = cpp2::move(lhs);
                        }}
                        auto contrib {ad_expr::make_binary(ad_op_kind::mul, cpp2::move(lhs_val), cpp2::move(adj_ref), "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(rhs_adj), cpp2::move(contrib)));
                    }
                    else {if (rhs.kind == ad_expr_kind::call) {
                        // RHS is a call - need chain rule through it
                        // The call's arguments receive: lhs_val * target_adj * d(call)/d(arg)
                        ad_expr lhs_val {}; 
                        if (lhs.kind == ad_expr_kind::identifier) {
                            lhs_val = ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(lhs).name), "double");
                        }else {
                            lhs_val = cpp2::move(lhs);
                        }
                        auto call_reverse {generate_reverse_for_call_with_scale(cpp2::move(rhs), cpp2::move(lhs_val), cpp2::move(adj_ref))}; 
                        CPP2_UFCS(push_back)(compound, cpp2::move(call_reverse));
                    }}

                    return ad_stmt::make_compound(cpp2::move(compound)); 
                }
                else {if (expr.op == ad_op_kind::div) {
                    // d(a/b)/da = 1/b, d(a/b)/db = -a/b^2
                    std::vector<ad_stmt> compound {}; 
                    auto adj_ref {ad_expr::make_identifier(cpp2::move(target_adj), "double")}; 
                    if (lhs.kind == ad_expr_kind::identifier) {
                        auto lhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), lhs.name)}; 
                        // lhs_adj += (1/rhs) * target_adj
                        auto one {ad_expr::make_literal("1.0", "double")}; 
                        auto rhs_val {ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), rhs.name), "double")}; 
                        auto inv_rhs {ad_expr::make_binary(ad_op_kind::div, cpp2::move(one), cpp2::move(rhs_val), "double")}; 
                        auto contrib {ad_expr::make_binary(ad_op_kind::mul, cpp2::move(inv_rhs), adj_ref, "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(lhs_adj), cpp2::move(contrib)));
                    }
                    if (rhs.kind == ad_expr_kind::identifier) {
                        auto rhs_adj {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), rhs.name)}; 
                        // rhs_adj += (-lhs/rhs^2) * target_adj
                        auto lhs_val {ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(lhs).name), "double")}; 
                        auto rhs_val {ad_expr::make_identifier(CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(rhs).name), "double")}; 
                        auto neg_lhs {ad_expr::make_unary(ad_op_kind::neg, cpp2::move(lhs_val), "double")}; 
                        auto rhs_sq {ad_expr::make_binary(ad_op_kind::mul, rhs_val, cpp2::move(rhs_val), "double")}; 
                        auto quot {ad_expr::make_binary(ad_op_kind::div, cpp2::move(neg_lhs), cpp2::move(rhs_sq), "double")}; 
                        auto contrib {ad_expr::make_binary(ad_op_kind::mul, cpp2::move(quot), cpp2::move(adj_ref), "double")}; 
                        CPP2_UFCS(push_back)(compound, ad_stmt::make_assign_add(cpp2::move(rhs_adj), cpp2::move(contrib)));
                    }
                    return ad_stmt::make_compound(cpp2::move(compound)); 
                }}}}
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

    /*
      @brief Generate reverse statement for a function call with scaling factor.
     
      Used when a call is part of a larger expression like x  f(y).
      The derivative is: d(x  f(y))/dy = x  f'(y)
     
      @param call_expr Call expression IR.
      @param scale_expr Expression to multiply the derivative by (e.g., lhs value).
      @param adj_ref The adjoint of the outer expression.
      @return Reverse statement.
     */
#line 10174 "source/reflect.h2"
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

    /*
      @brief Generate reverse statement for a function call.
      @param target Target variable name.
      @param call_expr Call expression IR.
      @return Reverse statement.
     */
#line 10261 "source/reflect.h2"
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
#line 10343 "source/reflect.h2"
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

    //-----------------------------------------------------------------------
    // Full function building
    //-----------------------------------------------------------------------

    /*
      @brief Build complete IR for a function.
      @param mf Function declaration.
      @return Complete function IR.
     */
#line 10368 "source/reflect.h2"
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

    /*
      @brief Process a single statement and add to forward/reverse lists.
      @param stmt Statement to process.
      @param forward_stmts Output vector for forward statements.
      @param reverse_stmts Output vector for reverse statements (collected in forward order).
     */
#line 10429 "source/reflect.h2"
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

#line 10480 "source/reflect.h2"
/*
  @brief Result of applying a rule or default for a function call.
 */

#line 10487 "source/reflect.h2"
    ad_rule_application_result::ad_rule_application_result(){}
#line 10488 "source/reflect.h2"
    ad_rule_application_result::ad_rule_application_result(ad_rule_application_result const& that)
                                   : has_rule{ that.has_rule }
                                   , forward{ that.forward }{}
#line 10488 "source/reflect.h2"
    auto ad_rule_application_result::operator=(ad_rule_application_result const& that) -> ad_rule_application_result& {
                                   has_rule = that.has_rule;
                                   forward = that.forward;
                                   return *this; }
#line 10488 "source/reflect.h2"
    ad_rule_application_result::ad_rule_application_result(ad_rule_application_result&& that) noexcept
                                   : has_rule{ std::move(that).has_rule }
                                   , forward{ std::move(that).forward }{}
#line 10488 "source/reflect.h2"
    auto ad_rule_application_result::operator=(ad_rule_application_result&& that) noexcept -> ad_rule_application_result& {
                                   has_rule = std::move(that).has_rule;
                                   forward = std::move(that).forward;
                                   return *this; }

#line 10491 "source/reflect.h2"
//-----------------------------------------------------------------------
// Task 11 & 12: IR Emitter for forward and reverse passes
//-----------------------------------------------------------------------

/*
  @brief Map ad_op_kind to its binary operator string representation.
  @param op Operation kind.
  @return Operator string with spaces (e.g., " + "), or empty if not a binary op.
 */
#line 10500 "source/reflect.h2"
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

/*
  @brief Emitter for converting AD IR to Cpp2 source code.
 */

#line 10545 "source/reflect.h2"
    ad_ir_emitter::ad_ir_emitter()
        : ctx{ nullptr }{

#line 10547 "source/reflect.h2"
    }

#line 10549 "source/reflect.h2"
    ad_ir_emitter::ad_ir_emitter(cpp2::impl::in<reverse_autodiff_context*> ctx_)
        : ctx{ ctx_ }{

#line 10551 "source/reflect.h2"
    }
#line 10549 "source/reflect.h2"
    auto ad_ir_emitter::operator=(cpp2::impl::in<reverse_autodiff_context*> ctx_) -> ad_ir_emitter& {
        ctx = ctx_;
        return *this;

#line 10551 "source/reflect.h2"
    }

    /*
      @brief Emit Cpp2 code for an IR expression.
      @param expr Expression IR.
      @return Cpp2 source string.
     */
#line 10558 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_expr(cpp2::impl::in<ad_expr> expr) const& -> std::string{
        if (expr.kind == ad_expr_kind::literal) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::identifier) {
            return expr.name; 
        }
        else {if (expr.kind == ad_expr_kind::unary) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                auto operand {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
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
                auto lhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto rhs {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                auto op_str {ad_op_kind_to_binary_str(expr.op)}; 
                if (CPP2_UFCS(empty)(op_str)) {op_str = " ?? "; }
                return "(" + cpp2::move(lhs) + cpp2::move(op_str) + cpp2::move(rhs) + ")"; 
            }
            return "(binary)"; 
        }
        else {if (expr.kind == ad_expr_kind::ternary) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),3)) {
                auto cond {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto then_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                auto else_expr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 2))}; 
                return "(" + cpp2::move(cond) + " ? " + cpp2::move(then_expr) + " : " + cpp2::move(else_expr) + ")"; 
            }
            return "(ternary)"; 
        }
        else {if (expr.kind == ad_expr_kind::member) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                auto obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto op_str {"->"}; 
                if (expr.op != ad_op_kind::arrow) {op_str = "."; }
                return cpp2::move(obj) + cpp2::move(op_str) + expr.member_name; 
            }
            return "(member)"; 
        }
        else {if (expr.kind == ad_expr_kind::subscript) {
            if (cpp2::impl::cmp_greater_eq(CPP2_UFCS(ssize)(expr.args),2)) {
                auto arr {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto idx {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1))}; 
                return cpp2::move(arr) + "[" + cpp2::move(idx) + "]"; 
            }
            return "(subscript)"; 
        }
        else {if (expr.kind == ad_expr_kind::call) {
            auto result {expr.name}; 
            // Add template args if present
            if (!(CPP2_UFCS(empty)(expr.type_args))) {
                result += "<";
{
auto first{true};

#line 10624 "source/reflect.h2"
                for ( auto const& targ : expr.type_args ) {
                    if (!(first)) {result += ", "; }
                    first = false;
                    result += ad_type_to_string(targ);
                }
}
#line 10629 "source/reflect.h2"
                result += ">";
            }
            result += "(";
{
auto first{true};

#line 10633 "source/reflect.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 10638 "source/reflect.h2"
            result += ")";
            return result; 
        }
        else {if (expr.kind == ad_expr_kind::method_call) {
            if (!(CPP2_UFCS(empty)(expr.args))) {
                auto obj {emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 0))}; 
                auto result {cpp2::move(obj) + "." + expr.name + "("}; 
                // Skip first arg (the object), emit remaining args
                if (cpp2::impl::cmp_greater(CPP2_UFCS(ssize)(expr.args),1)) {
                    result += emit_expr(CPP2_ASSERT_IN_BOUNDS_LITERAL(expr.args, 1));
                    auto i {2}; 
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
            auto result {expr.name + "("}; 
{
auto first{true};

#line 10679 "source/reflect.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 10684 "source/reflect.h2"
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
auto first{true};

#line 10696 "source/reflect.h2"
            for ( auto const& arg : expr.args ) {
                if (!(first)) {result += ", "; }
                first = false;
                result += emit_expr(arg);
            }
}
#line 10701 "source/reflect.h2"
            result += "}";
            return result; 
        }}}}}}}}}}}}}
        return "(unknown)"; 
    }

    /*
      @brief Emit Cpp2 code for a single IR statement.
      @param stmt Statement IR.
      @param indent Indentation level.
      @return Cpp2 source string.
     */
#line 10713 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_stmt(cpp2::impl::in<ad_stmt> stmt, cpp2::impl::in<int> indent) const& -> std::string{
        auto ind {std::string(indent * 4, ' ')}; 

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
            auto op_str {ad_op_kind_to_binary_str(stmt.op)}; 
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
            auto result {ind + "if " + emit_expr(stmt.expr) + " {\n"}; 
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
            auto result {ind + "for "}; 
            // Init statement
            if (stmt.init_stmt != nullptr) {
                auto init_code {emit_stmt(*cpp2::impl::assert_not_null(stmt.init_stmt), 0)}; 
                // Remove trailing newline and semicolon for init
                if (CPP2_UFCS(ends_with)(init_code, ";\n")) {
                    init_code = CPP2_UFCS(substr)(init_code, 0, CPP2_UFCS(size)(init_code) - 2);
                }
                result += cpp2::move(init_code);
            }
            result += "; " + emit_expr(stmt.expr) + " next ";
            // Increment - emit without semicolon
            auto incr_code {emit_expr(stmt.incr_expr)}; 
            result += cpp2::move(incr_code) + " {\n";
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "}\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::foreach_stmt) {
            // Range-based for loop
            auto result {ind + "for " + stmt.target}; 
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
            auto result {ind + "while " + emit_expr(stmt.expr) + " {\n"}; 
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "}\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::do_while_stmt) {
            // Do-while loop
            auto result {ind + "do {\n"}; 
            for ( auto const& s : stmt.stmts ) {
                result += emit_stmt(s, indent + 1);
            }
            result += ind + "} while " + emit_expr(stmt.expr) + ";\n";
            return result; 
        }
        else {if (stmt.kind == ad_stmt_kind::try_catch) {
            // Try-catch block
            auto result {ind + "try {\n"}; 
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

    /*
      @brief Emit the forward pass Cpp2 code.
      @param ir Function IR.
      @return Cpp2 source for forward pass.
     */
#line 10858 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_forward(cpp2::impl::in<ad_function_ir> ir) const& -> std::string{
        std::string result {"// Forward pass\n"}; 
        for ( auto const& stmt : ir.forward ) {
            result += emit_stmt(stmt, 1);
        }
        return result; 
    }

    /*
      @brief Emit the reverse pass Cpp2 code in reverse order.
      @param ir Function IR.
      @return Cpp2 source for reverse pass.
     */
#line 10871 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_reverse(cpp2::impl::in<ad_function_ir> ir) const& -> std::string{
        std::string result {"// Reverse pass\n"}; 

        // Seed the output adjoint(s)
        for ( auto const& ret : ir.returns ) {
            auto adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), ret.name)}; 
            // Don't emit seed here - it's passed in as parameter
        }

        // Emit statements (already in correct reverse order from build_function_ir)
        for ( auto const& stmt : ir.reverse ) {
            result += emit_stmt(stmt, 1);
        }

        // Reset adjoints to zero after use
        for ( auto const& ret : ir.returns ) {
            auto adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), ret.name)}; 
            result += std::string("    ") + cpp2::move(adj_name) + " = 0.0;\n";
        }

        return result; 
    }

    /*
      @brief Emit the complete reverse-mode function.
      @param ir Function IR.
      @return Cpp2 source for the _b function.
     */
#line 10899 "source/reflect.h2"
    [[nodiscard]] auto ad_ir_emitter::emit_function(cpp2::impl::in<ad_function_ir> ir) const& -> std::string{
        // Build signature
        auto result {ir.name + "_d: (\n"}; 

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
            auto adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), p.name)}; 
            result += std::string("    inout ") + cpp2::move(adj_name) + ": " + p.type_name + ",\n";
        }

        // Return adjoint parameter
        for ( auto const& r : ir.returns ) {
            auto adj_name {CPP2_UFCS(make_adj_name)((*cpp2::impl::assert_not_null(ctx)), r.name)}; 
            result += std::string("    inout ") + cpp2::move(adj_name) + ": " + r.type_name + ",\n";
        }

        // Return type
        result += ") -> (";
{
auto first{true};

#line 10928 "source/reflect.h2"
        for ( auto const& r : ir.returns ) {
            if (!(first)) {result += ", "; }
            first = false;
            result += std::string("out ") + r.name + ": " + r.type_name + " = 0.0";
        }
}
#line 10933 "source/reflect.h2"
        result += ") = {\n";

        // Create _val variables for input parameters
        result += "// Setup value variables\n";
        for ( auto const& p : ir.params ) {
            auto val_name {CPP2_UFCS(make_value_name)((*cpp2::impl::assert_not_null(ctx)), p.name)}; 
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

#line 10956 "source/reflect.h2"
/*
  @brief Debug dump for ad_ir_builder state.
  @param builder Builder to dump.
 */
#line 10960 "source/reflect.h2"
auto ad_ir_builder_debug_dump(cpp2::impl::in<ad_ir_builder> builder) -> void{
    std::cout << "=== AD IR Builder State ===\n";
    std::cout << "  temp_counter: " << builder.temp_counter << "\n";
    std::cout << "  temp_names: [";
{
auto first{true};

#line 10965 "source/reflect.h2"
    for ( auto const& name : builder.temp_names ) {
        if (!(first)) {std::cout << ", "; }
        first = false;
        std::cout << name;
    }
}
#line 10970 "source/reflect.h2"
    std::cout << "]\n";
    std::cout << "=== End AD IR Builder State ===\n";
}

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
#line 11090 "source/reflect.h2"
auto autodiff_reverse_ir(meta::type_declaration& t, cpp2::impl::in<autodiff_context*> ctx) -> void{
    std::cout << "\n";
    std::cout << "╔══════════════════════════════════════════════════════════════════╗\n";
    std::cout << "║  AD REVERSE IR STAGE: " << CPP2_UFCS(name)(t) << "\n";
    std::cout << "╚══════════════════════════════════════════════════════════════════╝\n";

    // Global error list for this processing run
    ad_ir_error_list global_errors {}; 

    // Print the original AST
    std::cout << "\n┌─── Original AST ───┐\n";
    print(t);
    std::cout << "└────────────────────┘\n";

    //-------------------------------------------------------------------
    // SUBTASK 3: Discover ad_rules in the type
    //-------------------------------------------------------------------
    std::cout << "\n┌─── Subtask 3: Rule Discovery ───┐\n";
    ad_rule_registry rule_registry {}; 
    discover_ad_rules(t, rule_registry);
    ad_rule_registry_debug_dump(rule_registry);
    std::cout << "└──────────────────────────────────┘\n";
{
auto processing_failed{false};

    //-------------------------------------------------------------------
    // SUBTASK 4: Test expression builder on each function
    //-------------------------------------------------------------------

#line 11117 "source/reflect.h2"
    for ( auto const& mf : CPP2_UFCS(get_member_functions)(t) ) {
        // Skip rule types (they have special structure)
        if (CPP2_UFCS(starts_with)(CPP2_UFCS(name)(mf), "ad_rule")) {
            continue;
        }

        // Skip if we've already encountered errors
        if (processing_failed) {
            std::cout << "\n[SKIPPED] " << CPP2_UFCS(name)(mf) << " (previous errors)\n";
            continue;
        }

        std::cout << "\n┌─── Subtask 5: Expression Builder for " << CPP2_UFCS(name)(mf) << " ───┐\n";

        reverse_autodiff_context rc {ctx, mf}; 
        std::cout << "Function: " << CPP2_UFCS(get_signature)(mf) << "\n";
        std::cout << "Suffixes: value=" << rc.value_suffix << " adj=" << rc.adj_suffix << "\n";

        // Create builder with context and registry
        ad_ir_builder builder {&rc, &rule_registry}; 

        // Test manual IR construction
        std::cout << "\n--- Manual IR Construction Tests ---\n";

        std::cout << "\nTest: build_identifier_expr('x')\n";
        auto x_ir {CPP2_UFCS(build_identifier_expr)(builder, "x", "double")}; 
        ad_ir_debug_dump_expr(x_ir, 1);

        std::cout << "\nTest: build_literal_expr('3.14')\n";
        auto lit_ir {CPP2_UFCS(build_literal_expr)(builder, "3.14", "double")}; 
        ad_ir_debug_dump_expr(cpp2::move(lit_ir), 1);

        std::cout << "\nTest: build_member_access_expr(x, 'adj')\n";
        auto member_ir {CPP2_UFCS(build_member_access_expr)(builder, x_ir, "adj", "double")}; 
        ad_ir_debug_dump_expr(cpp2::move(member_ir), 1);

        std::cout << "\nTest: derive_op_name for mul(x, y)\n";
        auto y_ir {CPP2_UFCS(build_identifier_expr)(builder, "y", "double")}; 
        std::vector<ad_expr> mul_args {}; 
        CPP2_UFCS(push_back)(mul_args, cpp2::move(x_ir));
        CPP2_UFCS(push_back)(mul_args, cpp2::move(y_ir));
        auto op_name {CPP2_UFCS(derive_op_name)(builder, ad_op_kind::mul, cpp2::move(mul_args))}; 
        std::cout << "  Derived name: " << cpp2::move(op_name) << "\n";

        std::cout << "\nTest: gen_temp_name('tmp')\n";
        auto tmp1 {CPP2_UFCS(gen_temp_name)(builder, "tmp")}; 
        auto tmp2 {CPP2_UFCS(gen_temp_name)(builder, "tmp")}; 
        std::cout << "  Generated: " << cpp2::move(tmp1) << ", " << cpp2::move(tmp2) << "\n";

        // Dump builder state
        ad_ir_builder_debug_dump(builder);

        // Build the complete function IR using the builder
        std::cout << "\n--- Building Function IR (using build_function_ir) ---\n";
        auto func_ir {CPP2_UFCS(build_function_ir)(builder, mf)}; 

        // Dump the function IR
        ad_ir_debug_dump(func_ir);

        //-------------------------------------------------------------------
        // Task 11 & 12: Test emitter
        //-------------------------------------------------------------------
        std::cout << "\n--- IR Emitter Test ---\n";
        ad_ir_emitter emitter {&rc}; 

        // Emit forward pass
        std::cout << "Forward pass emission:\n";
        auto fwd_code {CPP2_UFCS(emit_forward)(emitter, func_ir)}; 
        std::cout << cpp2::move(fwd_code);

        // Emit reverse pass
        std::cout << "\nReverse pass emission:\n";
        auto rev_code {CPP2_UFCS(emit_reverse)(emitter, func_ir)}; 
        std::cout << cpp2::move(rev_code);

        // Emit complete function
        std::cout << "\nComplete function emission:\n";
        auto func_code {CPP2_UFCS(emit_function)(cpp2::move(emitter), cpp2::move(func_ir))}; 
        std::cout << func_code;

        // Add the backward function to the type
        if (!(CPP2_UFCS(empty)(func_code))) {
            CPP2_UFCS(add_member)(t, cpp2::move(func_code));
            std::cout << "  -> Added backward function to type\n";
        }

        // Test rule lookup
        std::cout << "\n--- Rule Lookup Tests ---\n";
        auto has_softplus {CPP2_UFCS(has_rule)(rule_registry, "softplus", 1, false)}; 
        std::cout << "  has_rule('softplus', 1, false): " << has_softplus << "\n";
        if (cpp2::move(has_softplus)) {
            std::cout << "    rule_type: " << CPP2_UFCS(get_rule_type)(rule_registry, "softplus", 1, false) << "\n";
        }

        auto has_sin {CPP2_UFCS(has_rule)(rule_registry, "sin", 1, false)}; 
        std::cout << "  has_rule('sin', 1, false): " << cpp2::move(has_sin) << "\n";

        // Check for errors from the builder
        if (CPP2_UFCS(has_errors)(builder)) {
            std::cout << "\n";
            std::cout << "╔══════════════════════════════════════════════════════════════════╗\n";
            std::cout << "║  AD IR BUILDER ERRORS in " << CPP2_UFCS(name)(mf) << "\n";
            std::cout << "╚══════════════════════════════════════════════════════════════════╝\n";
            CPP2_UFCS(print_errors)(builder);
            // Merge errors into global list
            for ( auto const& err : cpp2::move(builder).errors.errors ) {
                CPP2_UFCS(add_error)(global_errors, err.message, err.location, err.context);
            }
            processing_failed = true;
        }

        std::cout << "└──────────────────────────────────────────────────┘\n";
    }
}

    // Print final status
#line 11232 "source/reflect.h2"
    if (CPP2_UFCS(has_errors)(global_errors)) {
        std::cout << "\n╔══════════════════════════════════════════════════════════════════╗\n";
        std::cout << "║  AD REVERSE IR STAGE FAILED - " << CPP2_UFCS(count)(global_errors) << " error(s)\n";
        std::cout << "╚══════════════════════════════════════════════════════════════════╝\n";
        std::cout << "\nError Summary:\n";
        CPP2_UFCS(print_all)(cpp2::move(global_errors));
        std::cout << "\n";
    }
    else {
        std::cout << "\n╔══════════════════════════════════════════════════════════════════╗\n";
        std::cout << "║  AD REVERSE IR STAGE COMPLETE - No errors\n";
        std::cout << "╚══════════════════════════════════════════════════════════════════╝\n\n";
    }
}

/*
  @brief Accumulates generated code for forward and reverse passes.
 
  `rws_backprop` is built in reverse order by prepending snippets.
 */

    /// Owning context with mode/order information.

#line 11256 "source/reflect.h2"
    /// Forward-mode code.

    /// Reverse-mode primal pass code.

    /// Reverse-mode backprop pass code (prepended).

#line 11263 "source/reflect.h2"
    /*
      @brief Initialize with an autodiff context.
      @param ctx_ Context to associate with this buffer.
      @return No return value.
     */
#line 11268 "source/reflect.h2"
    autodiff_diff_code::autodiff_diff_code(cpp2::impl::in<autodiff_context*> ctx_)
        : ctx{ ctx_ }{

#line 11270 "source/reflect.h2"
    }
#line 11268 "source/reflect.h2"
    auto autodiff_diff_code::operator=(cpp2::impl::in<autodiff_context*> ctx_) -> autodiff_diff_code& {
        ctx = ctx_;
        fwd = "";
        rws_primal = "";
        rws_backprop = "";
        return *this;

#line 11270 "source/reflect.h2"
    }
    /*
      @brief Copy another diff buffer.
      @param that Buffer to copy from.
      @return No return value.
     */
#line 11276 "source/reflect.h2"
    autodiff_diff_code::autodiff_diff_code(autodiff_diff_code const& that)
                                  : ctx{ that.ctx }
                                  , fwd{ that.fwd }
                                  , rws_primal{ that.rws_primal }
                                  , rws_backprop{ that.rws_backprop }{}
#line 11276 "source/reflect.h2"
    auto autodiff_diff_code::operator=(autodiff_diff_code const& that) -> autodiff_diff_code& {
                                  ctx = that.ctx;
                                  fwd = that.fwd;
                                  rws_primal = that.rws_primal;
                                  rws_backprop = that.rws_backprop;
                                  return *this; }
#line 11276 "source/reflect.h2"
    autodiff_diff_code::autodiff_diff_code(autodiff_diff_code&& that) noexcept
                                  : ctx{ std::move(that).ctx }
                                  , fwd{ std::move(that).fwd }
                                  , rws_primal{ std::move(that).rws_primal }
                                  , rws_backprop{ std::move(that).rws_backprop }{}
#line 11276 "source/reflect.h2"
    auto autodiff_diff_code::operator=(autodiff_diff_code&& that) noexcept -> autodiff_diff_code& {
                                  ctx = std::move(that).ctx;
                                  fwd = std::move(that).fwd;
                                  rws_primal = std::move(that).rws_primal;
                                  rws_backprop = std::move(that).rws_backprop;
                                  return *this; }

    /*
      @brief Append forward code if forward mode is enabled.
      @param v Code snippet to append.
      @return No return value.
     */
#line 11283 "source/reflect.h2"
    auto autodiff_diff_code::add_forward(cpp2::impl::in<std::string> v) & -> void{if (CPP2_UFCS(is_forward)((*cpp2::impl::assert_not_null(ctx)))) {fwd += v;}}
    /*
      @brief Append reverse primal code if reverse mode is enabled.
      @param v Code snippet to append.
      @return No return value.
     */
#line 11289 "source/reflect.h2"
    auto autodiff_diff_code::add_reverse_primal(cpp2::impl::in<std::string> v) & -> void{if (CPP2_UFCS(is_reverse)((*cpp2::impl::assert_not_null(ctx)))) {rws_primal += v;}}
    /*
      @brief Prepend reverse backprop code if reverse mode is enabled.
      @param v Code snippet to prepend.
      @return No return value.
     */
#line 11295 "source/reflect.h2"
    auto autodiff_diff_code::add_reverse_backprop(cpp2::impl::in<std::string> v) & -> void{if (CPP2_UFCS(is_reverse)((*cpp2::impl::assert_not_null(ctx)))) {rws_backprop = v + rws_backprop; }}

    /*
      @brief Clear all generated buffers.
      @return No return value.
     */
#line 11301 "source/reflect.h2"
    auto autodiff_diff_code::reset() & -> void{
        fwd          = "";
        rws_primal   = "";
        rws_backprop = "";
    }

    /*
      @brief Temporary assignment into the forward buffer.
      @param v Forward code string.
      @return No return value.
     */
#line 11312 "source/reflect.h2"
    auto autodiff_diff_code::operator=(cpp2::impl::in<std::string> v) -> autodiff_diff_code& {
        ctx = CPP2_UFCS_NONLOCAL(get_self)((*cpp2::impl::assert_not_null(ctx)));
        fwd = v;
        rws_primal = "";
        rws_backprop = "";
        return *this;

#line 11315 "source/reflect.h2"
    }

    /*
      @brief Temporary forward buffer append.
      @param v Forward code string to append.
      @return No return value.
     */
#line 11322 "source/reflect.h2"
    auto autodiff_diff_code::operator+=(cpp2::impl::in<std::string> v) & -> void{
        fwd += v;
    }

    /*
      @brief Temporary forward buffer append from another diff buffer.
      @param v Buffer to append from.
      @return No return value.
     */
#line 11331 "source/reflect.h2"
    auto autodiff_diff_code::operator+=(cpp2::impl::in<autodiff_diff_code> v) & -> void{
        fwd += v.fwd;
    }

    /*
      @brief Check if the forward buffer is empty.
      @return True if forward code buffer is empty.
     */
#line 11339 "source/reflect.h2"
    [[nodiscard]] auto autodiff_diff_code::empty() const& -> bool{
        return CPP2_UFCS(empty)(fwd); 
    }

#line 11344 "source/reflect.h2"
// // Temporary: TODO: remove when everything has been adapted to primal, fwd, rws pushes.
// to_string: (v: autodiff_diff_code) -> std::string = {
//     return v.fwd;
// }

/*
  @brief Traverser that detects whether a declaration/expression is active.
 */

#line 11355 "source/reflect.h2"
    /// AD context used for lookups.

    /// True if an active term is found.

#line 11360 "source/reflect.h2"
    /*
      @brief Initialize with an autodiff context.
      @param ctx_ Context used for activity queries.
      @return No return value.
     */
#line 11365 "source/reflect.h2"
    autodiff_activity_check::autodiff_activity_check(cpp2::impl::in<autodiff_context*> ctx_)
        : simple_traverser{  }
        , ctx{ ctx_ }{

#line 11367 "source/reflect.h2"
    }

    /*
      @brief Visit type members to determine activity of contained objects.
      @param t Type declaration to inspect.
      @return No return value.
     */
#line 11374 "source/reflect.h2"
    auto autodiff_activity_check::traverse(cpp2::impl::in<meta::type_declaration> t) -> void{
        for ( 
             auto const& m : CPP2_UFCS(get_members)(t) ) 
        {
            if (CPP2_UFCS(is_object)(m) || CPP2_UFCS(is_member_object)(m)) {
                pre_traverse(m);
            }

            // TODO: Maybe also add functions.
        }
    }

    /*
      @brief Visit object declarations and infer activity from type or initializer.
      @param o Object declaration to inspect.
      @return No return value.
     */
#line 11391 "source/reflect.h2"
    auto autodiff_activity_check::traverse(cpp2::impl::in<meta::object_declaration> o) -> void{

        auto type {o.type()}; 

        if ("_" == type) {
            if (CPP2_UFCS(has_initializer)(o)) {
                pre_traverse(CPP2_UFCS(get_initializer)(o));
            }
            else {
                // Assume active
                active = true;
            }
        }
        else {
            active |= CPP2_UFCS(is_type_active)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(type));
        }
    }

    /*
      @brief Visit primary expressions and track active identifiers/literals.
      @param primary Primary expression to inspect.
      @return No return value.
     */
#line 11414 "source/reflect.h2"
    auto autodiff_activity_check::traverse(cpp2::impl::in<meta::primary_expression> primary) -> void
    {
        if (CPP2_UFCS(is_identifier)(primary)) {
            active |= CPP2_UFCS(is_variable_active)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(to_string)(primary));
        }
        else {if (CPP2_UFCS(is_expression_list)(primary)) {
            for ( auto const& cur : CPP2_UFCS(get_expressions)(CPP2_UFCS(as_expression_list)(primary)) ) {
                pre_traverse(cur);
            }
        }
        else {if (CPP2_UFCS(is_literal)(primary)) {
            // TODO: Improve check
            if (CPP2_UFCS(contains)(CPP2_UFCS(to_string)(primary), ".")) {
                active = true;
            }
        }
        else {if (CPP2_UFCS(is_declaration)(primary)) {
            pre_traverse(CPP2_UFCS(as_declaration)(primary));
        }
        else {
            CPP2_UFCS(error)(primary, "AD: Unknown primary expression kind: " + cpp2::to_string(CPP2_UFCS(to_string)(primary)) + "");
        }}}}
    }

    /*
      @brief Visit postfix expressions and check function call arguments.
      @param postfix Postfix expression to inspect.
      @return No return value.
     */
#line 11443 "source/reflect.h2"
    auto autodiff_activity_check::traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(postfix)}; 

        auto is_func {false}; 
{
auto i{0};

#line 11450 "source/reflect.h2"
        for (                     auto const& term : terms )  { do {
            if (CPP2_UFCS(get_op)(term) == ".") {
                continue;
            }
            if (CPP2_UFCS(get_op)(term) == "(" && i + 1 == CPP2_UFCS(ssize)(terms)) {// Function operator has to be the last
                is_func = true;
                continue;
            }
            else {
                CPP2_UFCS(error)(postfix, "AD: Unknown operator for postfix expression. op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + " expr: " + cpp2::to_string(postfix) + "");
            }
        } while (false); i += 1; }
}

        // TODO: Really check for members
#line 11464 "source/reflect.h2"
        if (!(is_func) || CPP2_UFCS(ssize)(terms) != 1) {
            active |= CPP2_UFCS(is_variable_active)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(to_string)(CPP2_UFCS(get_primary_expression)(postfix)));
        }

        if (cpp2::move(is_func)) {
            // Check arguments of function
            for ( auto const& cur : CPP2_UFCS(get_expressions)(CPP2_UFCS(get_expression_list)(CPP2_UFCS(back)(cpp2::move(terms)))) ) {
                pre_traverse(cur);
            }
        }
    }

#line 11477 "source/reflect.h2"
/*
  @brief Base class for AD handlers with shared context and diff buffer.
 */

    /// Current autodiff context.

#line 11484 "source/reflect.h2"
    /// Accumulated output code for this handler.

#line 11487 "source/reflect.h2"
    /*
      @brief Initialize with context and a fresh diff buffer.
      @param ctx_ Context to associate.
      @return No return value.
     */
#line 11492 "source/reflect.h2"
    autodiff_handler_base::autodiff_handler_base(cpp2::impl::in<autodiff_context*> ctx_)
        : ctx{ ctx_ }
        , diff{ ctx }{

#line 11495 "source/reflect.h2"
    }
#line 11492 "source/reflect.h2"
    auto autodiff_handler_base::operator=(cpp2::impl::in<autodiff_context*> ctx_) -> autodiff_handler_base& {
        ctx = ctx_;
        diff = ctx;
        return *this;

#line 11495 "source/reflect.h2"
    }

    /*
      @brief Append another handler's diff buffers.
      @param o Handler to append from.
      @return No return value.
     */
#line 11502 "source/reflect.h2"
    auto autodiff_handler_base::append(autodiff_handler_base const& o) & -> void{
        diff.fwd          += o.diff.fwd;
        diff.rws_primal   += o.diff.rws_primal;
        diff.rws_backprop  = o.diff.rws_backprop + diff.rws_backprop;
    }

#line 11509 "source/reflect.h2"
/*
  @brief Builds primal/forward/reverse expressions for a single expression.
 */

#line 11516 "source/reflect.h2"
    /// Alias to base traverser type.

#line 11519 "source/reflect.h2"
    /// Latest primal expression string.

    /// Latest forward-mode expression string.

    /// Latest reverse-mode backprop code snippet.

#line 11526 "source/reflect.h2"
    /*
      @brief Initialize with context.
      @param ctx_ Autodiff context to use.
      @return No return value.
     */
#line 11531 "source/reflect.h2"
    autodiff_expression_handler::autodiff_expression_handler(cpp2::impl::in<autodiff_context*> ctx_)
        : simple_traverser{  }
        , autodiff_handler_base{ ctx_ }{

#line 11533 "source/reflect.h2"
    }

    /*
      @brief Append suffix unless using wildcard `_`.
      @param lhs Base name.
      @param suffix Suffix to append.
      @return Name with suffix unless lhs is `_`.
     */
#line 11541 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::add_suffix_if_not_wildcard(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> suffix) const& -> std::string{
        if ("_" == lhs) {
            return lhs; 
        }
        else {
            return lhs + suffix; 
        }
    }

    /*
      @brief Replace `_r_`, `_rd_`, `_rb_` placeholders in backprop templates.
      @param rhs_b Backprop template code.
      @param lhs Primal variable name.
      @param lhs_d Forward variable name.
      @param lhs_b Reverse adjoint name.
      @return Backprop code with placeholders substituted.
     */
#line 11558 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::prepare_backprop(cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b) const& -> std::string{
        auto r {rhs_b}; 
        r  = string_util::replace_all(r, "_r_", lhs);
        r  = string_util::replace_all(r, "_rd_", lhs_d);
        r  = string_util::replace_all(r, "_rb_", lhs_b);

        return r; 
    }
    /*
      @brief Replace placeholders using suffix-based names.
      @param rhs_b Backprop template code.
      @param lhs Primal variable name.
      @return Backprop code with placeholders substituted.
     */
#line 11572 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::prepare_backprop(cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> lhs) const& -> std::string { return prepare_backprop(rhs_b, lhs, lhs + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix, lhs + (*cpp2::impl::assert_not_null(ctx)).rws_suffix);  }

    /*
      @brief Emit assignment for primal, forward, and reverse paths.
      @param lhs Primal LHS name.
      @param lhs_d Forward LHS name.
      @param lhs_b Reverse adjoint LHS name.
      @param rhs Primal RHS expression.
      @param rhs_d Forward RHS expression.
      @param rhs_b Reverse backprop template.
      @return No return value.
     */
#line 11584 "source/reflect.h2"
    auto autodiff_expression_handler::gen_assignment(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> rhs, cpp2::impl::in<std::string> rhs_d, cpp2::impl::in<std::string> rhs_b) & -> void{
        CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(lhs_d) + " = " + cpp2::to_string(rhs_d) + ";\n");
        CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(lhs) + "   = " + cpp2::to_string(rhs) + ";\n");

        if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
            CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(lhs_d) + " = " + cpp2::to_string(rhs_d) + ";\n");
        }
        CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(lhs) + "   = " + cpp2::to_string(rhs) + ";\n");
        CPP2_UFCS(add_reverse_backprop)(diff, "" + cpp2::to_string(lhs_b) + " = 0.0;\n");
        CPP2_UFCS(add_reverse_backprop)(diff, prepare_backprop(rhs_b, lhs, lhs_d, lhs_b));
    }
    /*
      @brief Emit assignment for the current expression strings.
      @param lhs Primal LHS name.
      @param lhs_d Forward LHS name.
      @param lhs_b Reverse adjoint LHS name.
      @return No return value.
     */
#line 11602 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::gen_assignment(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b) & -> decltype(auto) { 
        return gen_assignment(lhs, lhs_d, lhs_b, primal_expr, fwd_expr, rws_expr);  }
    /*
      @brief Emit assignment using suffix defaults.
      @param lhs Primal LHS name.
      @return No return value.
     */
#line 11609 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::gen_assignment(cpp2::impl::in<std::string> lhs) & -> decltype(auto) { 
        return gen_assignment(lhs, add_suffix_if_not_wildcard(lhs, (*cpp2::impl::assert_not_null(ctx)).fwd_suffix), add_suffix_if_not_wildcard(lhs, (*cpp2::impl::assert_not_null(ctx)).rws_suffix), primal_expr, fwd_expr, rws_expr);  }

#line 11613 "source/reflect.h2"
    /*
      @brief Emit declaration for primal, forward, and reverse paths.
      @param lhs Primal LHS name.
      @param lhs_d Forward LHS name.
      @param lhs_b Reverse adjoint LHS name.
      @param rhs Primal RHS expression.
      @param rhs_d Forward RHS expression.
      @param rhs_b Reverse backprop template.
      @param type Primal type name.
      @param type_d Forward type name.
      @param type_b Reverse type name.
      @return No return value.
     */
#line 11626 "source/reflect.h2"
    auto autodiff_expression_handler::gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> rhs, cpp2::impl::in<std::string> rhs_d, cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> type, cpp2::impl::in<std::string> type_d, cpp2::impl::in<std::string> type_b) & -> void{
        CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(lhs_d) + ": " + cpp2::to_string(type_d) + " = " + cpp2::to_string(rhs_d) + ";\n");
        CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(lhs) + "  : " + cpp2::to_string(type) + " = " + cpp2::to_string(rhs) + ";\n");

        if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
            CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(lhs_d) + ": " + cpp2::to_string(type_d) + " = " + cpp2::to_string(rhs_d) + ";\n");
        }
        CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(lhs_b) + " : " + cpp2::to_string(type_b) + " = 0.0;\n");
        CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(lhs) + "  : " + cpp2::to_string(type) + " = " + cpp2::to_string(rhs) + ";\n");
        CPP2_UFCS(add_reverse_backprop)(diff, "" + cpp2::to_string(lhs_b) + " = 0.0;\n");
        CPP2_UFCS(add_reverse_backprop)(diff, prepare_backprop(rhs_b, lhs, lhs_d, lhs_b));
    }
    /*
      @brief Emit declaration using context-derived AD types.
      @param lhs Primal LHS name.
      @param lhs_d Forward LHS name.
      @param lhs_b Reverse adjoint LHS name.
      @param rhs Primal RHS expression.
      @param rhs_d Forward RHS expression.
      @param rhs_b Reverse backprop template.
      @param type Primal type name.
      @return No return value.
     */
#line 11649 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> rhs, cpp2::impl::in<std::string> rhs_d, cpp2::impl::in<std::string> rhs_b, cpp2::impl::in<std::string> type) & -> decltype(auto) { 
        return gen_declaration(lhs, lhs_d, lhs_b, rhs, rhs_d, rhs_b, type, CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), type), CPP2_UFCS(get_rws_ad_type)((*cpp2::impl::assert_not_null(ctx)), type));  }
    /*
      @brief Emit declaration using current expression strings.
      @param lhs Primal LHS name.
      @param lhs_d Forward LHS name.
      @param lhs_b Reverse adjoint LHS name.
      @param type Primal type name.
      @return No return value.
     */
#line 11659 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> lhs_d, cpp2::impl::in<std::string> lhs_b, cpp2::impl::in<std::string> type) & -> decltype(auto) { 
        return gen_declaration(lhs, lhs_d, lhs_b, primal_expr, fwd_expr, rws_expr, type);  }
    /*
      @brief Emit declaration using suffix defaults.
      @param lhs Primal LHS name.
      @param type Primal type name.
      @return No return value.
     */
#line 11667 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::gen_declaration(cpp2::impl::in<std::string> lhs, cpp2::impl::in<std::string> type) & -> decltype(auto) { 
        return gen_declaration(lhs, lhs + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix, lhs + (*cpp2::impl::assert_not_null(ctx)).rws_suffix, type);  }

        autodiff_expression_handler::primal_fwd_rws_name::primal_fwd_rws_name(auto const& primal_, auto const& fwd_, auto const& rws_, auto const& active_)
                                                                       : primal{ primal_ }
                                                                       , fwd{ fwd_ }
                                                                       , rws{ rws_ }
                                                                       , active{ active_ }{}
autodiff_expression_handler::primal_fwd_rws_name::primal_fwd_rws_name(){}

#line 11672 "source/reflect.h2"
    /// Bundle of primal/forward/reverse names for an expression.

        /// Primal value name or expression.

        /// Forward value name or expression.

        /// Reverse adjoint name or expression.

        /// True if expression is active.

#line 11684 "source/reflect.h2"
    /*
      @brief Evaluate a list of expression arguments.
      @param list Expression list to evaluate.
      @return List of primal/forward/reverse names for each argument.
     */
#line 11689 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::handle_expression_list(cpp2::impl::in<meta::expression_list> list) & -> std::vector<primal_fwd_rws_name>{
        std::vector<primal_fwd_rws_name> args {}; 
        for ( auto const& expr : CPP2_UFCS(get_expressions)(list) ) {
            CPP2_UFCS(push_back)(args, handle_expression_term(expr));
        }

        return args; 
    }

    /*
      @brief Evaluate a single expression term and map to primal/fwd/rws names.
      @param term Expression term to evaluate.
      @return Name bundle describing the term.
     */
#line 11703 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::handle_expression_term(auto const& term) & -> primal_fwd_rws_name{
        if (CPP2_UFCS(is_identifier)(term)) {
            auto primal {CPP2_UFCS(to_string)(term)}; 
            auto fwd {primal + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix}; 
            auto rws {primal + (*cpp2::impl::assert_not_null(ctx)).rws_suffix}; 

            auto decl {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), primal)}; 
            if (decl.is_member) {
                fwd = "this" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + "." + fwd;
                rws = "this" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + "." + rws;
            }

            if (cpp2::move(decl).is_active) {
                return { cpp2::move(primal), cpp2::move(fwd), cpp2::move(rws), true }; 
            }
            else {
                return { cpp2::move(primal), "", "", false }; 
            }

        }
        else {if (CPP2_UFCS(is_expression_list)(term)) {
            auto exprs {term.as_expression_list().get_expressions()}; 
            if (CPP2_UFCS(ssize)(exprs) != 1) {
                CPP2_UFCS(error)(term, "Can not handle multiple expressions. (term.to_string())");
                return { "error", "", "", false }; 
            }
            auto expr {CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(exprs), 0)}; 
            auto bin_expr {expr.as_assignment_expression()}; 

            if (CPP2_UFCS(terms_size)(bin_expr) != 0) {
                CPP2_UFCS(error)(term, "Can not handle assign expr inside of expression. " + cpp2::to_string(CPP2_UFCS(to_string)(cpp2::move(expr))) + "");
                return { "error", "", "", false }; 
            }

            return handle_expression_term(CPP2_UFCS(get_term)(CPP2_UFCS(front)(CPP2_UFCS(get_terms)(cpp2::move(bin_expr))))); 
        }
        else {
            // Nothing special. A regular expression.
            auto expr {term}; 

            autodiff_activity_check ada {ctx}; 
            CPP2_UFCS(pre_traverse)(ada, expr);

            if (cpp2::move(ada).active) {

                autodiff_expression_handler ad {ctx}; 
                ad.pre_traverse(cpp2::move(expr));
                auto t {CPP2_UFCS(gen_temporary)((*cpp2::impl::assert_not_null(ctx)))}; 
                CPP2_UFCS(gen_declaration)(ad, t, "double");// TODO: get type of expression
                append(cpp2::move(ad));

                primal_fwd_rws_name r {t, t + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix, t + (*cpp2::impl::assert_not_null(ctx)).rws_suffix, true}; // TODO: Check why on return (t, t + ctx*.fwd_suffix) the primal is initialized empty. Probably because of the move(t)
                static_cast<void>(cpp2::move(t));
                return r; 
            }
            else {
                return { CPP2_UFCS(to_string)(cpp2::move(expr)), "", "", false }; 
            }
        }}
    }

    /*
      @brief Handle function or member-function calls, producing primal/fwd/rws code.
      @param postfix Postfix expression describing the call.
      @param has_return True if the call has a return value.
      @return No return value.
     */
#line 11770 "source/reflect.h2"
    auto autodiff_expression_handler::handle_function_call(cpp2::impl::in<meta::postfix_expression> postfix, cpp2::impl::in<bool> has_return) & -> void{
        auto terms {CPP2_UFCS(get_terms)(postfix)}; 

        auto is_func {true}; 
{
auto i{0};

#line 11776 "source/reflect.h2"
        for (                     auto const& term : terms )  { do {
            if (CPP2_UFCS(get_op)(term) == ".") {
                continue;
            }
            if (CPP2_UFCS(get_op)(term) == "(" && i + 1 == CPP2_UFCS(ssize)(terms)) {// Function operator has to be the last
                continue;
            }

            is_func = false;
        } while (false); i += 1; }
}

        // Check for function call, everything else is not handled.
#line 11788 "source/reflect.h2"
        if (!((cpp2::move(is_func)))) {
            CPP2_UFCS(error)(postfix, "AD: Postfix expressions are only handled for function calls, or member function calls. Do not know how to handle: " + cpp2::to_string(CPP2_UFCS(to_string)(postfix)) + "");
            return ; 
        }

        std::string object {""}; 
        std::string object_d {""}; 
        std::string object_b {""}; 
        std::string function_name {""}; 
        std::vector<primal_fwd_rws_name> args {}; 

        auto primary {CPP2_UFCS(get_primary_expression)(postfix)}; 

        if (1 != CPP2_UFCS(ssize)(terms)) {
            object   = CPP2_UFCS(to_string)(primary);
            object_d = CPP2_UFCS(to_string)(primary) + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix;
            object_b = CPP2_UFCS(to_string)(cpp2::move(primary)) + (*cpp2::impl::assert_not_null(ctx)).rws_suffix;
        }
        else {
            function_name = CPP2_UFCS(to_string)(cpp2::move(primary));
        }
{
auto i{0};

#line 11811 "source/reflect.h2"
        for (                     auto const& term : terms )  { do {
            if (CPP2_UFCS(get_op)(term) == ".") {
                if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_id_expression)(term)) ) { cpp2::cpp2_default.report_violation(""); }
                auto name {CPP2_UFCS(to_string)(CPP2_UFCS(get_id_expression)(term))}; 

                if (i + 2 == CPP2_UFCS(ssize)(terms)) {// Second last term is function name, last term is function argument list
                    function_name = cpp2::move(name);
                }
                else {
                    object   += "." + name;
                    object_d += "." + cpp2::move(name) + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix;
                }
            }
            else {if (CPP2_UFCS(get_op)(term) == "(") {
                if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_expression_list)(term)) ) { cpp2::cpp2_default.report_violation(""); }

                args = handle_expression_list(CPP2_UFCS(get_expression_list)(term));
            }
            else {
                CPP2_UFCS(error)(postfix, "AD: Do not know how to handle postfix term: " + cpp2::to_string(CPP2_UFCS(to_string)(term)) + "");
            }}
        } while (false); i += 1; }
}

#line 11834 "source/reflect.h2"
        if (handle_special_function(object, object_d, object_b, function_name, args)) {
            return ; 
        }

        if (CPP2_UFCS(contains)(object, ".")) {
            CPP2_UFCS(error)(postfix, "AD: can not handle nested member function calls: " + cpp2::to_string(CPP2_UFCS(to_string)(postfix)) + "");
            return ; 
        }

        std::string call_primal {""}; 
        std::string call_fwd {""}; 
        std::string call_rws {""}; 

        // All arguments have now been handled. Form the function call
        std::string ret_temp {""}; 
        if (has_return) {
            ret_temp = CPP2_UFCS(gen_temporary)((*cpp2::impl::assert_not_null(ctx)));
            call_fwd += "" + cpp2::to_string(ret_temp) + " := ";
        }

        // TODO: This is untested for functions with no return value. Requires handling of out and inout parameters in functions.
        if (!(CPP2_UFCS(empty)(object))) {// Prepend object call
            call_primal += "" + cpp2::to_string(object) + ".";
            call_fwd    += "" + cpp2::to_string(object) + ".";
            call_rws    += "" + cpp2::to_string(object) + ".";
        }
        call_primal += "" + cpp2::to_string(function_name) + "(";
        call_fwd    += "" + cpp2::to_string(function_name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + "(";
        call_rws    += "" + cpp2::to_string(function_name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + "(";
        if (!(CPP2_UFCS(empty)(object))) {// Add this_d argument.
            call_fwd += "" + cpp2::to_string(cpp2::move(object_d)) + ", ";
            call_rws += "" + cpp2::to_string(cpp2::move(object_b)) + ", ";
        }
        for ( auto const& arg : cpp2::move(args) ) {
            // TODO: Add taylor reverse handling.
            call_primal += "" + cpp2::to_string(arg.primal) + ", ";
            call_fwd    += "" + cpp2::to_string(arg.primal) + ", ";
            call_rws    += "" + cpp2::to_string(arg.primal) + ", ";
            if (arg.active) {
                call_fwd += "" + cpp2::to_string(arg.fwd) + ", ";
                call_rws += "" + cpp2::to_string(arg.rws) + ", ";
            }
        }

        if (has_return) {
            std::vector<meta::function_declaration> functions {}; 
            if (!(CPP2_UFCS(empty)(object))) {
                auto obj_decl {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), object)}; 
                auto obj_decl_types {CPP2_UFCS(lookup_type_declaration)((*cpp2::impl::assert_not_null(ctx)), obj_decl.decl)}; 

                if (CPP2_UFCS(empty)(obj_decl_types)) {
                    CPP2_UFCS(error)(postfix, "AD: Could not find type declaration for `" + cpp2::to_string(cpp2::move(object)) + " with type " + cpp2::to_string(cpp2::move(obj_decl).decl) + "`.\n"
                              "    If cpp2 object: this is an alpha limitation, please declare it befor the current declaration.\n"
                              "    If cpp function: please add a special handling for this member function.");
                    return ; 
                }
                functions = CPP2_UFCS(lookup_member_function_declaration)((*cpp2::impl::assert_not_null(ctx)), CPP2_ASSERT_IN_BOUNDS_LITERAL(obj_decl_types, 0), cpp2::move(function_name));

                CPP2_UFCS(add_for_differentiation)((*cpp2::impl::assert_not_null(ctx)), CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(obj_decl_types), 0));// TODO: Add more fine grained differentiation.
            }
            else {
                functions = CPP2_UFCS(lookup_function_declaration)((*cpp2::impl::assert_not_null(ctx)), function_name);
                if (CPP2_UFCS(ssize)(functions) == 0) {
                    CPP2_UFCS(error)(postfix, "AD: Could not find function declaration for `" + cpp2::to_string(cpp2::move(function_name)) + "`.\n"
                                "    If cpp2 function: this is an alpha limitation, please declare it befor the current declaration.\n"
                                "    If cpp function: please add a special handling for this function.");
                    return ; 
                }
                else {if (CPP2_UFCS(ssize)(functions) != 1) {
                    CPP2_UFCS(error)(postfix, "AD: No handling for overload resultion is currently implemented.");
                    return ; 
                }}

                CPP2_UFCS(add_for_differentiation)((*cpp2::impl::assert_not_null(ctx)), CPP2_ASSERT_IN_BOUNDS_LITERAL(functions, 0));
            }

            std::string ret_name {"r"};   // Default for regular return.
            auto returns {CPP2_UFCS(get_returns)(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(functions), 0))}; 
            if (!(CPP2_UFCS(empty)(returns))) {
                if (CPP2_UFCS(ssize)(returns) != 1) {
                    CPP2_UFCS(error)(postfix, "AD: Expecting single return.");
                }

                for ( auto const& cur : cpp2::move(returns) ) {
                    ret_name = CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(cur));
                }
            }

            std::string ret_name_d {ret_name + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix}; 
            std::string ret_name_b {cpp2::move(ret_name) + (*cpp2::impl::assert_not_null(ctx)).rws_suffix}; 

            call_rws += "_rb_, ";

            call_primal += ")";
            call_fwd    += ");\n";
            call_rws    += ");\n";

            CPP2_UFCS(add_forward)(diff, cpp2::move(call_fwd));

            primal_expr = cpp2::move(call_primal);
            fwd_expr    = "" + cpp2::to_string(cpp2::move(ret_temp)) + "." + cpp2::to_string(cpp2::move(ret_name_d)) + "";
            rws_expr    = "_ = " + cpp2::to_string(cpp2::move(call_rws)) + "";
        }
        else {
            call_primal += ");\n";
            call_fwd    += ");\n";
            call_rws    += ");\n";

            CPP2_UFCS(add_forward)(diff, cpp2::move(call_fwd));
            CPP2_UFCS(add_reverse_primal)(diff, cpp2::move(call_primal));
            CPP2_UFCS(add_reverse_backprop)(diff, cpp2::move(call_rws));
        }

        // TODO: Add function to list of functions/objects for differentiation for the no return case.
    }

    /*
      @brief Try special-case handling for known functions (sin, cos, etc).
      @param object Object name for member calls (empty for free functions).
      @param object_d Object forward name.
      @param object_b Object reverse name.
      @param function_name Function name to match.
      @param args Argument bundles.
      @return True if a special-case handler matched.
     */
#line 11959 "source/reflect.h2"
    [[nodiscard]] auto autodiff_expression_handler::handle_special_function(cpp2::impl::in<std::string> object, cpp2::impl::in<std::string> object_d, cpp2::impl::in<std::string> object_b, cpp2::impl::in<std::string> function_name, cpp2::impl::in<std::vector<primal_fwd_rws_name>> args) & -> bool{

        auto r {CPP2_UFCS(lookup_special_function_handling)((*cpp2::impl::assert_not_null(ctx)), function_name, cpp2::unchecked_narrow<int>(CPP2_UFCS(ssize)(args)), !(CPP2_UFCS(empty)(object)))}; 

        if (!(r.m)) {
            return false; // No match
        }

        // Have a match, do the replacement
        std::string code_primal {r.code_primal}; 
        std::string code_fwd {r.code_fwd}; 
        std::string code_rws {cpp2::move(r).code_rws}; 

        if (!(CPP2_UFCS(empty)(object))) {
            code_primal = string_util::replace_all(code_primal, "_o_", object);
            code_primal = string_util::replace_all(code_primal, "_od_", object_d);

            code_fwd = string_util::replace_all(code_fwd, "_o_", object);
            code_fwd = string_util::replace_all(code_fwd, "_od_", object_d);

            code_rws = string_util::replace_all(code_rws, "_o_", object);
            code_rws = string_util::replace_all(code_rws, "_od_", object_d);
            code_rws = string_util::replace_all(code_rws, "_ob_", object_b);
        }
{
auto i{1};

#line 11985 "source/reflect.h2"
        for ( auto const& arg : args ) {
            code_primal = string_util::replace_all(code_primal, "_a" + cpp2::to_string(i) + "_", arg.primal);
            code_primal = string_util::replace_all(code_primal, "_ad" + cpp2::to_string(i) + "_", arg.fwd);

            code_fwd = string_util::replace_all(code_fwd, "_a" + cpp2::to_string(i) + "_", arg.primal);
            code_fwd = string_util::replace_all(code_fwd, "_ad" + cpp2::to_string(i) + "_", arg.fwd);

            code_rws = string_util::replace_all(code_rws, "_a" + cpp2::to_string(i) + "_", arg.primal);
            code_rws = string_util::replace_all(code_rws, "_ad" + cpp2::to_string(i) + "_", arg.fwd);
            code_rws = string_util::replace_all(code_rws, "_ab" + cpp2::to_string(i) + "_", arg.rws);
        }
}

#line 11997 "source/reflect.h2"
        primal_expr = cpp2::move(code_primal);
        fwd_expr    = cpp2::move(code_fwd);
        rws_expr    = cpp2::move(code_rws);

        return true; 
    }

    /*
      @brief Dispatch expression traversal.
      @param expr Expression node to traverse.
      @return No return value.
     */
#line 12009 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::expression> expr) -> void{
        base::traverse(expr);
    }

    /*
      @brief Report unsupported assignment expressions.
      @param binexpr Assignment expression node.
      @return No return value.
     */
#line 12018 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Assign expressions are not yet handled.");
    }

    /*
      @brief Report unsupported logical-or expressions.
      @param binexpr Logical-or expression node.
      @return No return value.
     */
#line 12027 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Logical or expressions are not yet handled.");
    }

    /*
      @brief Report unsupported logical-and expressions.
      @param binexpr Logical-and expression node.
      @return No return value.
     */
#line 12036 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Logical and expressions are not yet handled.");
    }

    /*
      @brief Report unsupported bitwise-or expressions.
      @param binexpr Bitwise-or expression node.
      @return No return value.
     */
#line 12045 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Bit or expressions are not yet handled.");
    }

    /*
      @brief Report unsupported bitwise-xor expressions.
      @param binexpr Bitwise-xor expression node.
      @return No return value.
     */
#line 12054 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Bit xor expressions are not yet handled.");
    }

    /*
      @brief Report unsupported bitwise-and expressions.
      @param binexpr Bitwise-and expression node.
      @return No return value.
     */
#line 12063 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Bit and expressions are not yet handled.");
    }

    /*
      @brief Report unsupported equality expressions.
      @param binexpr Equality expression node.
      @return No return value.
     */
#line 12072 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Equality or expressions are not yet handled.");
    }

    /*
      @brief Report unsupported relational expressions.
      @param binexpr Relational expression node.
      @return No return value.
     */
#line 12081 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Relational expressions are not yet handled.");
    }

    /*
      @brief Report unsupported compare expressions.
      @param binexpr Compare expression node.
      @return No return value.
     */
#line 12090 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Compare or expressions are not yet handled.");
    }

    /*
      @brief Report unsupported shift expressions.
      @param binexpr Shift expression node.
      @return No return value.
     */
#line 12099 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Shift or expressions are not yet handled.");
    }

    /*
      @brief Handle additive expressions and emit sum/adjoint accumulation.
      @param binexpr Additive expression node.
      @return No return value.
     */
#line 12108 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void{
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        auto first {true}; 
        auto first_fwd {true}; 
        std::string op {"+"}; 
        std::string fwd {""}; 
        std::string rws {""}; 
        std::string primal {""}; 
        for ( auto const& term : cpp2::move(terms) ) {
            if (!(first)) {
                op      = CPP2_UFCS(to_string)(CPP2_UFCS(get_op)(term));
                primal += " " + cpp2::to_string(op) + " ";
            }

            auto var {handle_expression_term(CPP2_UFCS(get_term)(term))}; 
            if (var.active) {
                if (first_fwd) {
                    if (op == "-") {// Special handling for first fwd termn with minus
                        fwd += "-" + cpp2::to_string(var.fwd) + "";
                    }
                    else { // Special handling for first fwd term with plus
                        fwd += var.fwd;
                    }
                }
                else {
                    fwd += "" + cpp2::to_string(op) + " " + cpp2::to_string(var.fwd) + "";
                }
                rws    += "" + cpp2::to_string(var.rws) + " " + cpp2::to_string(op) + "= _rb_;\n";

                first_fwd = false;
            }
            primal += cpp2::move(var).primal;

            first = false;
        }

        primal_expr = cpp2::move(primal);
        fwd_expr    = cpp2::move(fwd);
        rws_expr    = cpp2::move(rws);
    }

    /*
      @brief Handle multiplicative expressions and emit product/quotient derivatives.
      @param binexpr Multiplicative expression node.
      @return No return value.
     */
#line 12155 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void{
        auto terms {CPP2_UFCS(get_terms)(binexpr)}; 

        auto var_a {handle_expression_term(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS_LITERAL(terms, 0)))}; 

        int i {1}; 
        for( ; cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(terms)); i += 1 ) {
            auto var_b {handle_expression_term(CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 

            auto op {CPP2_UFCS(to_string)(CPP2_UFCS(get_op)(CPP2_ASSERT_IN_BOUNDS(terms, i)))}; 

            std::string fwd {""}; 
            std::string rws {""}; 
            std::string primal {""}; 

            if ("*" == op) {
                if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
                    // TODO: Add taylor overloads
                    fwd = "" + cpp2::to_string(var_a.fwd) + "..mul(" + cpp2::to_string(var_b.fwd) + ", " + cpp2::to_string(var_a.primal) + ", " + cpp2::to_string(var_b.primal) + ")";
                    if (var_a.active) {
                        //fwd += "(var_b.primal)$ * (var_a.fwd)$";
                        rws += "" + cpp2::to_string(var_a.rws) + " += " + cpp2::to_string(var_b.fwd) + "..mul(_rb_, " + cpp2::to_string(var_b.primal) + ", _r_);\n";
                    }
                    if (var_b.active) {
                        //if !fwd.empty() { fwd += " + "; }
                        //fwd += "(var_a.primal)$ * (var_b.fwd)$";
                        rws += "" + cpp2::to_string(var_b.rws) + " += " + cpp2::to_string(var_a.fwd) + "..mul(_rb_, " + cpp2::to_string(var_a.primal) + ", _r_);\n";
                    }
                }
                else {
                    if (var_a.active) {
                        fwd += "" + cpp2::to_string(var_b.primal) + " * " + cpp2::to_string(var_a.fwd) + "";
                        rws += "" + cpp2::to_string(var_a.rws) + " += " + cpp2::to_string(var_b.primal) + " * _rb_;\n";
                    }
                    if (var_b.active) {
                        if (!(CPP2_UFCS(empty)(fwd))) {fwd += " + "; }
                        fwd += "" + cpp2::to_string(var_a.primal) + " * " + cpp2::to_string(var_b.fwd) + "";
                        rws += "" + cpp2::to_string(var_b.rws) + " += " + cpp2::to_string(var_a.primal) + " * _rb_;\n";
                    }
                }
                primal = "" + cpp2::to_string(var_a.primal) + " * " + cpp2::to_string(var_b.primal) + "";
            }
            else {if ("/" == op) {
                if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
                    // TODO: Add taylor overloads
                    fwd = "" + cpp2::to_string(var_a.fwd) + ".div(" + cpp2::to_string(var_b.fwd) + ", " + cpp2::to_string(var_a.primal) + ", " + cpp2::to_string(var_b.primal) + ")";
                    if (var_a.active) {
                        rws += "" + cpp2::to_string(var_a.rws) + " += _rb_.div(" + cpp2::to_string(var_b.fwd) + ", _r_, " + cpp2::to_string(var_b.primal) + ");\n";
                    }
                    if (var_b.active) {
                        rws += "" + cpp2::to_string(var_b.rws) + " -= " + cpp2::to_string(var_a.fwd) + ".mul(_rb_, " + cpp2::to_string(var_a.primal) + ", _r_).div(" + cpp2::to_string(var_b.fwd) + ".mul(" + cpp2::to_string(var_b.fwd) + ", " + cpp2::to_string(var_b.primal) + ", " + cpp2::to_string(var_b.primal) + "), " + cpp2::to_string(var_a.primal) + " * _r_, " + cpp2::to_string(var_b.primal) + " * " + cpp2::to_string(var_b.primal) + ");\n";
                    }
                }
                else {
                    if (var_a.active) {
                        fwd += "" + cpp2::to_string(var_a.fwd) + " / " + cpp2::to_string(var_b.primal) + "";
                        rws = "" + cpp2::to_string(var_a.rws) + " += _rb_ / " + cpp2::to_string(var_b.primal) + ";\n";
                    }
                    if (var_b.active) {
                        if (!(CPP2_UFCS(empty)(fwd))) {fwd += " + "; }
                        fwd += "-" + cpp2::to_string(var_a.primal) + " * " + cpp2::to_string(var_b.fwd) + " / (" + cpp2::to_string(var_b.primal) + " * " + cpp2::to_string(var_b.primal) + ")";
                        rws += "" + cpp2::to_string(var_b.rws) + " -= " + cpp2::to_string(var_a.primal) + " * _rb_ / (" + cpp2::to_string(var_b.primal) + " * " + cpp2::to_string(var_b.primal) + ");\n";
                    }
                }
                primal = "" + cpp2::to_string(var_a.primal) + " / " + cpp2::to_string(var_b.primal) + "";
            }
            else {
                CPP2_UFCS(error)(binexpr, "unkown multiplicative operator '" + cpp2::to_string(cpp2::move(op)) + "'");
            }}

#line 12226 "source/reflect.h2"
            if (i + 1 == CPP2_UFCS(ssize)(terms)) {
                primal_expr = cpp2::move(primal);
                fwd_expr    = cpp2::move(fwd);
                rws_expr    = cpp2::move(rws);
            }
            else {
                // Temporary
                var_a.primal = CPP2_UFCS(gen_temporary)((*cpp2::impl::assert_not_null(ctx)));
                var_a.fwd    = var_a.primal + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix;
                var_a.rws    = var_a.primal + (*cpp2::impl::assert_not_null(ctx)).rws_suffix;
                var_a.active = var_a.active | cpp2::move(var_b).active;
                gen_declaration(var_a.primal, var_a.fwd, var_a.rws, primal, cpp2::move(fwd), cpp2::move(rws), "", "", "");
            }
        }
    }

    /*
      @brief Report unsupported is/as expressions.
      @param isas is/as expression node.
      @return No return value.
     */
#line 12247 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void{
        CPP2_UFCS(error)(isas, "AD: Is as expressions are not yet handled.");
    }

    /*
      @brief Handle prefix operations as unary transforms.
      @param prefix Prefix expression node.
      @return No return value.
     */
#line 12256 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void
    {
        auto ops {CPP2_UFCS(get_ops)(prefix)}; 

        if (CPP2_UFCS(ssize)(ops) != 1) {
            CPP2_UFCS(error)(prefix, "AD: Can only handle one prefix operation. Expression is: " + cpp2::to_string(CPP2_UFCS(to_string)(prefix)) + "");
        }

        autodiff_expression_handler ad {ctx}; 
        CPP2_UFCS(pre_traverse)(ad, CPP2_UFCS(get_postfix_expression)(prefix));
        append(ad);

        primal_expr = CPP2_ASSERT_IN_BOUNDS_LITERAL(ops, 0) + ad.primal_expr;
        fwd_expr    = CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(ops), 0) + cpp2::move(ad).fwd_expr;
    }

    /*
      @brief Handle postfix expressions for calls or member access.
      @param postfix Postfix expression node.
      @return No return value.
     */
#line 12277 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(postfix)}; 

        auto is_func {false}; 
{
auto i{0};

#line 12284 "source/reflect.h2"
        for (                     auto const& term : terms )  { do {
            if (CPP2_UFCS(get_op)(term) == ".") {
                continue;
            }
            if (CPP2_UFCS(get_op)(term) == "(" && i + 1 == CPP2_UFCS(ssize)(terms)) {// Function operator has to be the last
                is_func = true;
                continue;
            }
            else {
                CPP2_UFCS(error)(postfix, "AD: Unknown operator for postfix expression. op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + " expr: " + cpp2::to_string(postfix) + "");
            }
        } while (false); i += 1; }
}

#line 12297 "source/reflect.h2"
        if (cpp2::move(is_func)) {
            handle_function_call(postfix, true);
        }
        else {
            // Member access

            auto primary {CPP2_UFCS(get_primary_expression)(postfix)}; 
            std::string obj_access {CPP2_UFCS(to_string)(cpp2::move(primary))}; 
            std::string obj_access_d {obj_access + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix}; 

            for (         auto const& term : cpp2::move(terms) ) {
                obj_access   += CPP2_UFCS(get_op)(term) + CPP2_UFCS(to_string)(CPP2_UFCS(get_id_expression)(term));
                obj_access_d += CPP2_UFCS(get_op)(term) + CPP2_UFCS(to_string)(CPP2_UFCS(get_id_expression)(term)) + (*cpp2::impl::assert_not_null(ctx)).fwd_suffix;
            }

            primal_expr = cpp2::move(obj_access);
            fwd_expr    = cpp2::move(obj_access_d);
        }
    }

    /*
      @brief Handle primary expressions (identifiers, literals, empty tuple).
      @param primary Primary expression node.
      @return No return value.
     */
#line 12322 "source/reflect.h2"
    auto autodiff_expression_handler::traverse(cpp2::impl::in<meta::primary_expression> primary) -> void
    {
        if (CPP2_UFCS(is_identifier)(primary)) {
            primal_expr = CPP2_UFCS(to_string)(primary);
            fwd_expr    = add_suffix_if_not_wildcard(primal_expr, (*cpp2::impl::assert_not_null(ctx)).fwd_suffix);
            rws_expr    = add_suffix_if_not_wildcard(primal_expr, (*cpp2::impl::assert_not_null(ctx)).rws_suffix);

            auto decl {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), primal_expr)}; 
            if (cpp2::move(decl).is_member) {
                fwd_expr = "this" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + "." + fwd_expr;
                rws_expr = "this" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + "." + rws_expr;
            }
        }
        else {if (CPP2_UFCS(is_expression_list)(primary)) {
            if (CPP2_UFCS(is_empty)(CPP2_UFCS(as_expression_list)(primary))) {
                primal_expr = "()";
                fwd_expr    = "()";
                rws_expr    = "()";   // TODO: Check for reverse
            }
            else {
                CPP2_UFCS(error)(primary, "AD: Do not know how to handle non empty expression list inside of primary_expression: " + cpp2::to_string(CPP2_UFCS(to_string)(primary)) + "");
            }
        }
        else {if (CPP2_UFCS(is_literal)(primary)) {
            primal_expr = CPP2_UFCS(to_string)(primary);
            fwd_expr    = "()";
            rws_expr    = "()";  // TODO: Check for reverse
        }
        else {if (CPP2_UFCS(is_declaration)(primary)) {
            CPP2_UFCS(error)(primary, "AD: Do not know how to handle declaration inside of primary_expression: " + cpp2::to_string(CPP2_UFCS(to_string)(primary)) + "");
        }
        else {
            CPP2_UFCS(error)(primary, "AD: Unknown primary expression kind: " + cpp2::to_string(CPP2_UFCS(to_string)(primary)) + "");
        }}}}
    }

#line 12359 "source/reflect.h2"
/*
  @brief Builds differentiated code for statements inside a function body.
 */

#line 12366 "source/reflect.h2"
    /// Alias to base traverser type.

#line 12369 "source/reflect.h2"
    /// Function being differentiated.

#line 12372 "source/reflect.h2"
    /// Cached statement parameters (used for loops).

    /// Variables overwritten in this block (used for save/restore).

#line 12377 "source/reflect.h2"
    /// When true, emit push/pop around overwrites (used in reverse mode).

#line 12380 "source/reflect.h2"
    /*
      @brief Initialize with context and function.
      @param ctx_ Autodiff context.
      @param mf_ Function being differentiated.
      @return No return value.
     */
#line 12386 "source/reflect.h2"
    autodiff_stmt_handler::autodiff_stmt_handler(cpp2::impl::in<autodiff_context*> ctx_, cpp2::impl::in<meta::function_declaration> mf_)
        : simple_traverser{  }
        , autodiff_handler_base{ ctx_ }
        , mf{ mf_ }{

#line 12389 "source/reflect.h2"
    }

    /*
      @brief Emit parameter declarations for loop/statement parameter scopes.
      @param params Parameter declarations for the current statement scope.
      @return Diff buffer containing parameter declarations.
     */
#line 12396 "source/reflect.h2"
    [[nodiscard]] auto autodiff_stmt_handler::handle_stmt_parameters(cpp2::impl::in<std::vector<parameter_declaration>> params) & -> autodiff_diff_code{
        autodiff_diff_code r {ctx}; 
        if (CPP2_UFCS(empty)(params)) {
            return r; 
        }

        for ( auto const& param : params ) {
            std::string name {CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(param))}; 
            std::string type {CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(param))}; 

            auto fwd_pass_style {to_string_view(CPP2_UFCS(get_passing_style)(param))}; 

            autodiff_activity_check ada {ctx}; 
            CPP2_UFCS(pre_traverse)(ada, param);

            std::string init {""}; 
            std::string init_d {""}; 
            // TODO: Add handling for reverse expressions

            if (CPP2_UFCS(has_initializer)(CPP2_UFCS(get_declaration)(param))) {
                autodiff_expression_handler ad {ctx}; 
                CPP2_UFCS(pre_traverse)(ad, CPP2_UFCS(get_initializer)(CPP2_UFCS(get_declaration)(param)));
                init = " = " + cpp2::to_string(ad.primal_expr) + "";

                if (ada.active) {
                    init_d = " = " + cpp2::to_string(cpp2::move(ad).fwd_expr) + "";
                }
            }

#line 12426 "source/reflect.h2"
            CPP2_UFCS(add_forward)(r, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(type) + cpp2::to_string(init) + ", ");
            CPP2_UFCS(add_reverse_primal)(r, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(type) + cpp2::to_string(cpp2::move(init)) + ", ");
            if (ada.active) {
                CPP2_UFCS(add_forward)(r, "" + cpp2::to_string(cpp2::move(fwd_pass_style)) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + " : " + cpp2::to_string(CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)) + cpp2::to_string(cpp2::move(init_d)) + ", ");
            }

            CPP2_UFCS(add_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(name), cpp2::move(type), cpp2::move(ada).active);
        }

        return r; 
    }

    /*
      @brief Dispatch declaration traversal.
      @param decl Declaration node to traverse.
      @return No return value.
     */
#line 12443 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::declaration> decl) -> void{
        base::traverse(decl);
    }

#line 12448 "source/reflect.h2"
    /*
      @brief Report unsupported function declarations in statement context.
      @param f Function declaration node.
      @return No return value.
     */
#line 12453 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::function_declaration> f) -> void{
        CPP2_UFCS(error)(f, "AD: Do not know how to handle function_declaration: " + cpp2::to_string(CPP2_UFCS(to_string)(f)) + "");
    }

#line 12458 "source/reflect.h2"
    /*
      @brief Handle local variable declarations and initialize AD variables.
      @param o Object declaration node.
      @return No return value.
     */
#line 12463 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::object_declaration> o) -> void{
        std::string lhs {CPP2_UFCS(name)(o)}; 
        auto type {o.type()}; 

        auto active {false}; 
        if ("_" != type) {
            active = CPP2_UFCS(is_type_active)((*cpp2::impl::assert_not_null(ctx)), type);
        }
        else {
            if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(has_initializer)(o)) ) { cpp2::cpp2_default.report_violation(""); }

            autodiff_activity_check ada {ctx}; 
            CPP2_UFCS(pre_traverse)(ada, CPP2_UFCS(get_initializer)(o));
            active = cpp2::move(ada).active;
        }

        if (active) {

            auto fwd_ad_type {CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)}; 
            auto rws_ad_type {CPP2_UFCS(get_rws_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)}; 

            std::string prim_init {""}; 
            std::string fwd_init {""}; 
            std::string rws_init {""}; 

            if (CPP2_UFCS(has_initializer)(o)) {
                autodiff_expression_handler ad {ctx}; 
                CPP2_UFCS(pre_traverse)(ad, CPP2_UFCS(get_initializer)(o));
                append(ad);

                prim_init = " = " + ad.primal_expr;
                fwd_init  = " = " + ad.fwd_expr;
                rws_init  = " = ()"; // TODO: Proper initialization.

                if (ad.rws_expr != "()") {
                    CPP2_UFCS(add_reverse_backprop)(diff, CPP2_UFCS(prepare_backprop)(ad, ad.rws_expr, lhs));
                }

                if (type == "_" && cpp2::move(ad).fwd_expr == "()") {
                    // Special handling for auto initialization from a literal.
                    fwd_init = " = " + CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), "double") + "()";
                }
            }

            CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(lhs) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + " : " + cpp2::to_string(cpp2::move(fwd_ad_type)) + cpp2::to_string(cpp2::move(fwd_init)) + ";\n");
            CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(lhs) + "   : " + cpp2::to_string(type) + cpp2::to_string(prim_init) + ";\n");

            CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(lhs) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + " : " + cpp2::to_string(cpp2::move(rws_ad_type)) + cpp2::to_string(cpp2::move(rws_init)) + ";\n");
            CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(lhs) + "   : " + cpp2::to_string(type) + cpp2::to_string(cpp2::move(prim_init)) + ";\n");
        }
        else {
            diff += "" + cpp2::to_string(lhs) + ": " + cpp2::to_string(type) + "";
            if (CPP2_UFCS(has_initializer)(o)) {
                diff += " = " + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_initializer)(o))) + "";
            }
            diff += ";\n";
        }

        CPP2_UFCS(add_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(lhs), cpp2::move(type), cpp2::move(active));
    }

#line 12525 "source/reflect.h2"
    /*
      @brief Report unsupported type declarations in statement context.
      @param t Type declaration node.
      @return No return value.
     */
#line 12530 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::type_declaration> t) -> void{
        CPP2_UFCS(error)(t, "AD: Do not know how to handle type_declaration: " + cpp2::to_string(CPP2_UFCS(to_string)(t)) + "");
    }

#line 12535 "source/reflect.h2"
    /*
      @brief Report unsupported parameter declarations in statement context.
      @param t Parameter declaration node.
      @return No return value.
     */
#line 12540 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void{
        CPP2_UFCS(error)(t, "AD: Do not know how to handle parameter_declaration: " + cpp2::to_string(CPP2_UFCS(to_string)(t)) + "");
    }

#line 12545 "source/reflect.h2"
    /*
      @brief Cache statement parameters and traverse sub-statements.
      @param stmt Statement node.
      @return No return value.
     */
#line 12550 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::statement> stmt) -> void{
        // TODO: Remove this hack when statements like compound_statement can access their root statement.
        last_params = CPP2_UFCS(get_parameters)(stmt);
        base::traverse(stmt);
    }

#line 12557 "source/reflect.h2"
    /*
      @brief Handle compound statements with save/restore for overwritten variables.
      @param stmt Compound statement node.
      @return No return value.
     */
#line 12562 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::compound_statement> stmt) -> void{
        autodiff_stmt_handler ad {ctx, mf}; 
        autodiff_stmt_handler ad_push_pop {ctx, mf}; 
        ad_push_pop.overwrite_push_pop = true;

        CPP2_UFCS(add_forward)(diff, "{\n");
        CPP2_UFCS(add_reverse_primal)(diff, "{\n");
        CPP2_UFCS(add_reverse_backprop)(diff, "}\n");

        for ( auto const& cur : CPP2_UFCS(get_statements)(stmt) ) {
            CPP2_UFCS(pre_traverse)(ad, cur);
            CPP2_UFCS(pre_traverse)(ad_push_pop, cur);
        }

        for ( auto const& cur : ad.overwritten ) {
            auto r {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), cur)}; 
            CPP2_UFCS(add_reverse_primal)(diff, "cpp2::ad_stack::push<" + cpp2::to_string(cpp2::move(r).decl) + ">(" + cpp2::to_string(cur) + ");");
        }

        CPP2_UFCS(add_forward)(diff, ad.diff.fwd);
        CPP2_UFCS(add_reverse_primal)(diff, ad.diff.rws_primal);
        CPP2_UFCS(add_reverse_backprop)(diff, ad_push_pop.diff.rws_backprop);
        CPP2_UFCS(add_reverse_backprop)(diff, cpp2::move(ad_push_pop).diff.rws_primal);

        for ( auto const& cur : cpp2::move(ad).overwritten ) {
            auto r {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), cur)}; 
            CPP2_UFCS(add_reverse_backprop)(diff, "" + cpp2::to_string(cur) + " = cpp2::ad_stack::pop<" + cpp2::to_string(cpp2::move(r).decl) + ">();");
        }

        CPP2_UFCS(add_forward)(diff, "}\n");
        CPP2_UFCS(add_reverse_primal)(diff, "}\n");
        CPP2_UFCS(add_reverse_backprop)(diff, "{\n");
    }

#line 12597 "source/reflect.h2"
    /*
      @brief Handle return statements and assign into AD return storage.
      @param stmt Return statement node.
      @return No return value.
     */
#line 12602 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::return_statement> stmt) -> void{
        if (CPP2_UFCS(has_expression)(stmt)) {
            // Return with expression.
            // TODO: Remove assumptions
            //     - Return expression is always active. (Look this up in mf or so.)
            //     - Return was converted to a two parameter return with the name r.
            autodiff_expression_handler ad {ctx}; 
            ad.pre_traverse(CPP2_UFCS(get_expression)(stmt));
            CPP2_UFCS(gen_assignment)(ad, "r");
            append(cpp2::move(ad));
        }
        else {
            diff += "return;\n";
        }
    }

    /*
      @brief Reverse the sign of `+=` and `-=` for reverse-mode loop rewrites.
      @param expr Increment/decrement expression to reverse.
      @return Rewritten expression string.
     */
#line 12623 "source/reflect.h2"
    [[nodiscard]] auto autodiff_stmt_handler::reverse_next(cpp2::impl::in<std::string> expr) const& -> std::string{
        if (CPP2_UFCS(contains)(expr, "+=")) {
            return string_util::replace_all(expr, "+=", "-="); 
        }
        else {if (CPP2_UFCS(contains)(expr, "-=")) {
            return string_util::replace_all(expr, "-=", "+="); 
        }}

        CPP2_UFCS(error)(mf, "AD: Do not know how to reverse: " + cpp2::to_string(expr) + "");

        return "Error"; 

    }

#line 12638 "source/reflect.h2"
    /*
      @brief Handle `while`, `do`, and `for` loops, including reverse-mode rewrites.
      @param stmt Iteration statement node.
      @return No return value.
     */
#line 12643 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::iteration_statement> stmt) -> void{
        auto diff_params {handle_stmt_parameters(last_params)}; 

        if (CPP2_UFCS(is_reverse)((*cpp2::impl::assert_not_null(ctx))) && (CPP2_UFCS(is_while)(stmt) || CPP2_UFCS(is_do)(stmt))) {
            CPP2_UFCS(error)(stmt, "AD: Alpha limitiation now reverse mode for while or do while.");
        }

        if (CPP2_UFCS(is_while)(stmt)) {
            if (!(CPP2_UFCS(empty)(last_params))) {
                CPP2_UFCS(add_forward)(diff, "(" + cpp2::move(diff_params).fwd + ")");
            }
            // TODO: Assumption is here that nothing is in the condition
            diff += "while " + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_do_while_condition)(stmt))) + " ";
            if (CPP2_UFCS(has_next)(stmt)) {
                // TODO: Assumption is here that nothing is in the next expression
                diff += "next " + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_next_expression)(stmt))) + " ";
            }

            pre_traverse(CPP2_UFCS(get_do_while_body)(stmt));
        }
        else {if (CPP2_UFCS(is_do)(stmt)) {
            if (!(CPP2_UFCS(empty)(last_params))) {
                CPP2_UFCS(add_forward)(diff, "(" + cpp2::move(diff_params).fwd + ")");
            }

            // TODO: Assumption is here that nothing is in the condition
            diff += "do ";
            pre_traverse(CPP2_UFCS(get_do_while_body)(stmt));

            if (CPP2_UFCS(has_next)(stmt)) {
                // TODO: Assumption is here that nothing is in the next expression
                diff += "next " + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_next_expression)(stmt))) + " ";
            }
            diff += "while " + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_do_while_condition)(stmt))) + ";";
        }
        else {
            if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_for)(stmt)) ) { cpp2::cpp2_default.report_violation(""); }
            // No zip view available in cpp 20 do a piggy back for range

            // TODO: Assumption that this is just an id expression.
            auto range {CPP2_UFCS(to_string)(CPP2_UFCS(get_for_range)(stmt))}; 

            auto param {CPP2_UFCS(get_for_parameter)(stmt)}; 
            auto param_style {to_string_view(CPP2_UFCS(get_passing_style)(param))}; 
            auto param_decl {CPP2_UFCS(get_declaration)(cpp2::move(param))}; 

            std::string rws {"("}; 
            std::string rws_restore {""}; 
            CPP2_UFCS(add_forward)(diff, "(");// Open statment parameter scope. If the loop has parameters, they are alrady handled and the brace is left open.
            CPP2_UFCS(add_reverse_primal)(diff, "{\n");
            if (!(CPP2_UFCS(empty)(last_params))) {
                for ( auto const& cur : last_params ) {
                    if (CPP2_UFCS(has_initializer)(CPP2_UFCS(get_declaration)(cur))) {
                        // TODO: Handle no type and no initializer. Handle passing style.
                        CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(cur))) + ": " + cpp2::to_string(CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(cur))) + " = " + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_initializer)(CPP2_UFCS(get_declaration)(cur)))) + ";\n");
                        rws_restore += "cpp2::ad_stack::push<" + cpp2::to_string(CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(cur))) + ">(" + cpp2::to_string(CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(cur))) + ");\n";
                        rws += "" + cpp2::to_string(to_string_view(CPP2_UFCS(get_passing_style)(cur))) + " " + cpp2::to_string(CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(cur))) + ": " + cpp2::to_string(CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(cur))) + " = cpp2::ad_stack::pop<" + cpp2::to_string(CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(cur))) + ">(), ";
                    }
                }
                CPP2_UFCS(add_forward)(diff, cpp2::move(diff_params).fwd);
            }
            CPP2_UFCS(add_forward)(diff, "copy " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + "_iter := " + cpp2::to_string(range) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ".begin())\n");
            CPP2_UFCS(add_forward)(diff, "for " + cpp2::to_string(range) + " next (");

            rws += "copy " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + "_iter := " + cpp2::to_string(range) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + ".rbegin())\n";
            rws += "for std::ranges::reverse_view(" + cpp2::to_string(range) + ") next (";
            CPP2_UFCS(add_reverse_primal)(diff, "for " + cpp2::to_string(cpp2::move(range)) + " next (");
            if (CPP2_UFCS(has_next)(stmt)) {
                // TODO: Assumption is here that nothing is in the next expression
                CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_next_expression)(stmt))) + ", ");
                CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_next_expression)(stmt))) + ", ");
                rws += "" + cpp2::to_string(reverse_next(CPP2_UFCS(to_string)(CPP2_UFCS(get_next_expression)(stmt)))) + ", ";
            }
            CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + "_iter++");
            CPP2_UFCS(add_forward)(diff, ") do (" + cpp2::to_string(param_style) + " " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + ": " + cpp2::to_string(CPP2_UFCS(type)(param_decl)) + ") {\n");
            rws += "" + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + "_iter++";
            rws += ") do (" + cpp2::to_string(param_style) + " " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + ": " + cpp2::to_string(CPP2_UFCS(type)(param_decl)) + ") {\n";
            rws +=  "(inout " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + " := " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + "_iter*)\n";

            CPP2_UFCS(add_reverse_primal)(diff, ") do (" + cpp2::to_string(param_style) + " " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + ": " + cpp2::to_string(CPP2_UFCS(type)(param_decl)) + ")");
            CPP2_UFCS(add_forward)(diff, "(" + cpp2::to_string(cpp2::move(param_style)) + " " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ": " + cpp2::to_string(CPP2_UFCS(type)(param_decl)) + " = " + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + "_iter*)");

            CPP2_UFCS(add_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), "" + cpp2::to_string(CPP2_UFCS(name)(param_decl)) + "", "" + cpp2::to_string(CPP2_UFCS(type)(param_decl)) + "", true);// TODO: Handle loop/compound context variable declarations.
            CPP2_UFCS(add_reverse_backprop)(diff, "}\n");

            pre_traverse(CPP2_UFCS(get_for_body)(stmt));
            CPP2_UFCS(add_forward)(diff, "}\n");

            if (CPP2_UFCS(has_next)(stmt)) {
                CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(reverse_next(CPP2_UFCS(to_string)(CPP2_UFCS(get_next_expression)(stmt)))) + ";\n");
            }
            CPP2_UFCS(add_reverse_primal)(diff, cpp2::move(rws_restore));
            CPP2_UFCS(add_reverse_primal)(diff, "}\n");
            CPP2_UFCS(add_reverse_backprop)(diff, cpp2::move(rws));
        }}
    }

#line 12741 "source/reflect.h2"
    /*
      @brief Handle `if`/`else` statements (condition assumed passive).
      @param stmt Selection statement node.
      @return No return value.
     */
#line 12746 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::selection_statement> stmt) -> void{
        // TODO: Currently assuming that nothing bad happens in the condition
        diff += "if " + cpp2::to_string(CPP2_UFCS(to_string)(CPP2_UFCS(get_expression)(stmt))) + "";
        pre_traverse(CPP2_UFCS(get_true_branch)(stmt));

        if (CPP2_UFCS(has_false_branch)(stmt)) {
            diff += "else ";
            pre_traverse(CPP2_UFCS(get_false_branch)(stmt));
        }
    }

    /*
      @brief Dispatch expression traversal.
      @param expr Expression node to traverse.
      @return No return value.
     */
#line 12762 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::expression> expr) -> void{
        base::traverse(expr);
    }

    /*
      @brief Handle assignments, including reverse-mode overwrite tracking.
      @param binexpr Assignment expression node.
      @return No return value.
     */
#line 12771 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::assignment_expression> binexpr) -> void{
        autodiff_activity_check ada {ctx}; 
        CPP2_UFCS(pre_traverse)(ada, CPP2_UFCS(get_lhs_postfix_expression)(binexpr));
        if ("_" == CPP2_UFCS(to_string)(CPP2_UFCS(get_lhs_postfix_expression)(binexpr))) {
            CPP2_UFCS(pre_traverse)(ada, CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS_LITERAL(CPP2_UFCS(get_terms)(binexpr), 1)));
        }

        if (cpp2::move(ada).active) {
            autodiff_expression_handler h_lhs {ctx}; 
            CPP2_UFCS(pre_traverse)(h_lhs, CPP2_UFCS(get_lhs_postfix_expression)(binexpr));

            //  Cpp2 doesn't allow chained assignment, so rhs must be a single logical_or_expression
            auto assignment_terms {CPP2_UFCS(get_terms)(binexpr)}; 

            autodiff_expression_handler h {ctx}; 
            CPP2_UFCS(pre_traverse)(h, CPP2_UFCS(get_term)(CPP2_ASSERT_IN_BOUNDS_LITERAL(cpp2::move(assignment_terms), 1)));

            auto is_overwrite {CPP2_UFCS(contains)(h.primal_expr, h_lhs.primal_expr)}; 
            if (overwrite_push_pop && is_overwrite) {
                auto r {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), h_lhs.primal_expr)}; 
                CPP2_UFCS(add_reverse_primal)(diff, "cpp2::ad_stack::push<" + cpp2::to_string(cpp2::move(r).decl) + ">(" + cpp2::to_string(h_lhs.primal_expr) + ");");
            }

            if (is_overwrite && CPP2_UFCS(is_reverse)((*cpp2::impl::assert_not_null(ctx)))) {
                auto t_b {CPP2_UFCS(gen_temporary)((*cpp2::impl::assert_not_null(ctx))) + (*cpp2::impl::assert_not_null(ctx)).rws_suffix}; 
                CPP2_UFCS(gen_assignment)(h, h_lhs.primal_expr, h_lhs.fwd_expr, t_b);
                append(cpp2::move(h));
                CPP2_UFCS(add_reverse_backprop)(diff, "" + cpp2::to_string(h_lhs.rws_expr) + " = 0.0;\n");
                CPP2_UFCS(add_reverse_backprop)(diff, "" + cpp2::to_string(cpp2::move(t_b)) + " := " + cpp2::to_string(h_lhs.rws_expr) + ";\n");
            }
            else {
                CPP2_UFCS(gen_assignment)(h, h_lhs.primal_expr, h_lhs.fwd_expr, h_lhs.rws_expr);
                append(cpp2::move(h));
            }

            if (overwrite_push_pop && is_overwrite) {
                auto r {CPP2_UFCS(lookup_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), h_lhs.primal_expr)}; 
                CPP2_UFCS(add_reverse_backprop)(diff, "" + cpp2::to_string(h_lhs.primal_expr) + " = cpp2::ad_stack::pop<" + cpp2::to_string(cpp2::move(r).decl) + ">();");
            }

            // Simple overwrite check
            if (cpp2::move(is_overwrite)) {
                CPP2_UFCS(push_back)(overwritten, cpp2::move(h_lhs).primal_expr);
            }
        }
        else {
            CPP2_UFCS(add_forward)(diff, CPP2_UFCS(to_string)(binexpr) + ";\n");
            CPP2_UFCS(add_reverse_primal)(diff, CPP2_UFCS(to_string)(binexpr) + ";\n");
        }
    }

    /*
      @brief Report unsupported logical-or as a standalone statement.
      @param binexpr Logical-or expression node.
      @return No return value.
     */
#line 12827 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::logical_or_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Logical or expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported logical-and as a standalone statement.
      @param binexpr Logical-and expression node.
      @return No return value.
     */
#line 12836 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::logical_and_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Logical and expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported bitwise-or as a standalone statement.
      @param binexpr Bitwise-or expression node.
      @return No return value.
     */
#line 12845 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::bit_or_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Bit or expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported bitwise-xor as a standalone statement.
      @param binexpr Bitwise-xor expression node.
      @return No return value.
     */
#line 12854 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::bit_xor_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Bit xor expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported bitwise-and as a standalone statement.
      @param binexpr Bitwise-and expression node.
      @return No return value.
     */
#line 12863 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::bit_and_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Bit and expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported equality as a standalone statement.
      @param binexpr Equality expression node.
      @return No return value.
     */
#line 12872 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::equality_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Equality or expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported relational expressions as a standalone statement.
      @param binexpr Relational expression node.
      @return No return value.
     */
#line 12881 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::relational_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Relational expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported compare expressions as a standalone statement.
      @param binexpr Compare expression node.
      @return No return value.
     */
#line 12890 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::compare_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Compare or expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported shift expressions as a standalone statement.
      @param binexpr Shift expression node.
      @return No return value.
     */
#line 12899 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::shift_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Shift or expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported additive expressions as standalone statements.
      @param binexpr Additive expression node.
      @return No return value.
     */
#line 12908 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::additive_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Additive expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported multiplicative expressions as standalone statements.
      @param binexpr Multiplicative expression node.
      @return No return value.
     */
#line 12917 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::multiplicative_expression> binexpr) -> void{
        CPP2_UFCS(error)(binexpr, "AD: Multiplicative expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported is/as expressions as standalone statements.
      @param isas is/as expression node.
      @return No return value.
     */
#line 12926 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::is_as_expression> isas) -> void{
        CPP2_UFCS(error)(isas, "AD: Is as expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Report unsupported prefix expressions as standalone statements.
      @param prefix Prefix expression node.
      @return No return value.
     */
#line 12935 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::prefix_expression> prefix) -> void
    {
        CPP2_UFCS(error)(prefix, "AD: Prefix expressions are not yet handled as standalone statements.");
    }

    /*
      @brief Handle postfix expressions only for function calls.
      @param postfix Postfix expression node.
      @return No return value.
     */
#line 12945 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::postfix_expression> postfix) -> void
    {
        auto terms {CPP2_UFCS(get_terms)(postfix)}; 

        auto is_func {false}; 
{
auto i{0};

#line 12952 "source/reflect.h2"
        for (                     auto const& term : terms )  { do {
            if (CPP2_UFCS(get_op)(term) == ".") {
                continue;
            }
            if (CPP2_UFCS(get_op)(term) == "(" && i + 1 == CPP2_UFCS(ssize)(terms)) {// Function operator has to be the last
                is_func = true;
                continue;
            }else {
                CPP2_UFCS(error)(postfix, "AD: Unknown operator for standalone postfix expression. op: " + cpp2::to_string(CPP2_UFCS(get_op)(term)) + " expr: " + cpp2::to_string(postfix) + "");
            }
        } while (false); i += 1; }
}

        // Check for function call, everything else is not handled.
#line 12965 "source/reflect.h2"
        if (!((cpp2::move(is_func)))) {
            CPP2_UFCS(error)(postfix, "AD: Postfix expressions are only handled for function calls, or member function calls. Do not know how to handle: " + cpp2::to_string(CPP2_UFCS(to_string)(postfix)) + "");
            return ; 
        }

        autodiff_expression_handler ad {ctx}; 
        CPP2_UFCS(handle_function_call)(ad, postfix, false);
        ad.diff += ad.fwd_expr + "\n";
        ad.diff += ad.primal_expr + "\n";
        append(cpp2::move(ad));
    }

    /*
      @brief Report unsupported primary expressions as standalone statements.
      @param primary Primary expression node.
      @return No return value.
     */
#line 12982 "source/reflect.h2"
    auto autodiff_stmt_handler::traverse(cpp2::impl::in<meta::primary_expression> primary) -> void
    {
        CPP2_UFCS(error)(primary, "AD: Primary expressions are not yet handled as standalone statements.");
    }

#line 12988 "source/reflect.h2"
/*
  @brief Traverses declarations and emits differentiated types and functions.
 */

#line 12995 "source/reflect.h2"
    /// Alias to base traverser type.

#line 12998 "source/reflect.h2"
    /// Current declaration context.

#line 13001 "source/reflect.h2"
    /// True when generating members of a derived AD type.

    /// Accumulated members for an AD type definition.

#line 13006 "source/reflect.h2"
    /*
      @brief Initialize with context and declaration.
      @param ctx_ Autodiff context.
      @param decl_ Declaration context to operate on.
      @return No return value.
     */
#line 13012 "source/reflect.h2"
    autodiff_declaration_handler::autodiff_declaration_handler(cpp2::impl::in<autodiff_context*> ctx_, cpp2::impl::in<meta::type_or_namespace_declaration> decl_)
        : simple_traverser{  }
        , autodiff_handler_base{ ctx_ }
        , decl{ decl_ }{

#line 13015 "source/reflect.h2"
    }

    /*
      @brief Dispatch declaration traversal.
      @param decl_ Declaration node to traverse.
      @return No return value.
     */
#line 13022 "source/reflect.h2"
    auto autodiff_declaration_handler::traverse(cpp2::impl::in<meta::declaration> decl_) -> void{
        base::traverse(decl_);
    }

#line 13027 "source/reflect.h2"
    /*
      @brief Generate forward and/or reverse differentiated function members.
      @param f Function declaration node.
      @return No return value.
     */
#line 13032 "source/reflect.h2"
    auto autodiff_declaration_handler::traverse(cpp2::impl::in<meta::function_declaration> f) -> void{
        CPP2_UFCS(enter_function)((*cpp2::impl::assert_not_null(ctx)));

        // TODO: Add activity for member functions

        CPP2_UFCS(add_forward)(diff, "    " + cpp2::to_string(CPP2_UFCS(name)(f)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ": (");
        CPP2_UFCS(add_reverse_primal)(diff, "    " + cpp2::to_string(CPP2_UFCS(name)(f)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + ": (");

        //  1. Generate the modified signature
        //  a) Parameters

        for ( auto const& param : CPP2_UFCS(get_parameters)(f) ) {
            std::string name {CPP2_UFCS(name)(CPP2_UFCS(get_declaration)(param))}; 

            auto fwd_pass_style {to_string_view(CPP2_UFCS(get_passing_style)(param))}; 
            auto rws_pass_style {to_string_view(CPP2_UFCS(get_reverse_passing_style)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(get_passing_style)(param)))}; 

            if ("this" ==  name) {
                auto fwd_ad_type {CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), std::string(CPP2_UFCS(name)(decl)))}; 
                auto rws_ad_type {CPP2_UFCS(get_rws_ad_type)((*cpp2::impl::assert_not_null(ctx)), std::string(CPP2_UFCS(name)(decl)))}; 

                CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + ", ");
                CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ": " + cpp2::to_string(fwd_ad_type) + ", ");

                CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + ", ");
                if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {// Add forward type for higher order
                    CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(cpp2::move(fwd_pass_style)) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ": " + cpp2::to_string(cpp2::move(fwd_ad_type)) + ", ");
                }
                CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(cpp2::move(rws_pass_style)) + " " + cpp2::to_string(cpp2::move(name)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + ": " + cpp2::to_string(cpp2::move(rws_ad_type)) + ", ");
            }
            else {
                auto type {CPP2_UFCS(get_declaration)(param).type()}; 

                autodiff_activity_check ada {ctx}; 
                CPP2_UFCS(pre_traverse)(ada, param);

                if (ada.active) {
                    CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(type) + ", ");
                    CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + " : " + cpp2::to_string(CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)) + ", ");

                    CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(type) + ", ");
                    if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
                        CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(cpp2::move(fwd_pass_style)) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + " : " + cpp2::to_string(CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)) + ", ");
                    }
                    CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(cpp2::move(rws_pass_style)) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + " : " + cpp2::to_string(CPP2_UFCS(get_rws_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)) + ", ");
                }
                else {
                    CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(type) + ", ");
                    CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(cpp2::move(fwd_pass_style)) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(type) + ", ");
                }

                CPP2_UFCS(add_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(name), cpp2::move(type), cpp2::move(ada).active);
            }
        }

        //  b) Add arguments for returns that become inputs

        if (CPP2_UFCS(has_non_void_return_type)(f) && CPP2_UFCS(empty)(CPP2_UFCS(get_returns)(f))) {// TODO: has_non_void_return_type is true for return lists: (r: double) bug/feature?
            // TODO: check if name "r" is available. (Also needs inspection of functions at call sides.)
            if (CPP2_UFCS(has_deduced_return_type)(f)) {
                // TODO: Take care of initialization order error.
                CPP2_UFCS(add_reverse_primal)(diff, "inout r" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + ", ");
            }
            else {
                CPP2_UFCS(add_reverse_primal)(diff, "inout r" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + ": " + cpp2::to_string(CPP2_UFCS(get_rws_ad_type)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(get_unnamed_return_type)(f))) + ", ");
            }
        }
        else {
            for ( auto const& param : CPP2_UFCS(get_returns)(f) ) {
                auto name {CPP2_UFCS(get_declaration)(param).name()}; 
                auto type {CPP2_UFCS(get_declaration)(param).type()}; 

                auto rws_pass_style {to_string_view(CPP2_UFCS(get_reverse_passing_style)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(get_passing_style)(param)))}; 
                CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(cpp2::move(rws_pass_style)) + " " + cpp2::to_string(cpp2::move(name)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).rws_suffix) + " : " + cpp2::to_string(CPP2_UFCS(get_rws_ad_type)((*cpp2::impl::assert_not_null(ctx)), cpp2::move(type))) + " , ");
            }
        }

        CPP2_UFCS(add_forward)(diff, ") -> (");
        CPP2_UFCS(add_reverse_primal)(diff, ") -> (");

        //  c) Returns

        if (CPP2_UFCS(has_non_void_return_type)(f) && CPP2_UFCS(empty)(CPP2_UFCS(get_returns)(f))) {// TODO: has_non_void_return_type is true for return lists: (r: double) bug/feature?
            // TODO: check if name "r" is available. (Also needs inspection of functions at call sides.)
            if (CPP2_UFCS(has_deduced_return_type)(f)) {
                // TODO: Take care of initialization order error.
                CPP2_UFCS(add_forward)(diff, "r, r" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ", ");
                CPP2_UFCS(add_reverse_primal)(diff, "r, ");
                if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
                    CPP2_UFCS(add_reverse_primal)(diff, "r" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ",");
                }
            }
            else {
                CPP2_UFCS(add_forward)(diff, "r: " + cpp2::to_string(CPP2_UFCS(get_unnamed_return_type)(f)) + " = (), r" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ": " + cpp2::to_string(CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(get_unnamed_return_type)(f))) + " = (), ");
                CPP2_UFCS(add_reverse_primal)(diff, "r: " + cpp2::to_string(CPP2_UFCS(get_unnamed_return_type)(f)) + " = (), ");
                if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
                    CPP2_UFCS(add_reverse_primal)(diff, "r" + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ": " + cpp2::to_string(CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(get_unnamed_return_type)(f))) + " = (), ");
                }
            }
        }
        else {
            for ( auto const& param : CPP2_UFCS(get_returns)(f) ) {
                auto name {CPP2_UFCS(get_declaration)(param).name()}; 
                auto type {CPP2_UFCS(get_declaration)(param).type()}; 

                auto fwd_pass_style {to_string_view(CPP2_UFCS(get_passing_style)(param))}; 
                //rws_pass_style := to_string_view(ctx*.get_reverse_passing_style(param.get_passing_style()));
                CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(param))) + " = 0.0, ");
                CPP2_UFCS(add_forward)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + " : " + cpp2::to_string(CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)) + " = 0.0, ");

                CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(fwd_pass_style) + " " + cpp2::to_string(name) + " : " + cpp2::to_string(CPP2_UFCS(type)(CPP2_UFCS(get_declaration)(param))) + " = 0.0, ");
                if (CPP2_UFCS(is_taylor)((*cpp2::impl::assert_not_null(ctx)))) {
                    CPP2_UFCS(add_reverse_primal)(diff, "" + cpp2::to_string(cpp2::move(fwd_pass_style)) + " " + cpp2::to_string(name) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + " : " + cpp2::to_string(CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), type)) + " = 0.0, ");
                }

                CPP2_UFCS(add_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), "" + cpp2::to_string(cpp2::move(name)) + "", "" + cpp2::to_string(cpp2::move(type)) + "", true);// TODO_a: Add acitivty check
            }
        }

        CPP2_UFCS(add_forward)(diff, ") = {");
        CPP2_UFCS(add_reverse_primal)(diff, ") = {");

        //  Generate the body

        if (!(CPP2_UFCS(has_compound_body)(f))) {
            CPP2_UFCS(error)(f, "temporary alpha limitation: a differentiable function must have a {}-enclosed body");
            return ; 
        }

#line 13162 "source/reflect.h2"
        autodiff_stmt_handler ad_impl {&*cpp2::impl::assert_not_null(ctx), f}; 

#line 13165 "source/reflect.h2"
        for ( auto const& stmt : CPP2_UFCS(get_statements)(CPP2_UFCS(get_compound_body)(f)) ) 
        {
            ad_impl.pre_traverse(stmt);
        }
        CPP2_UFCS(add_forward)(diff, ad_impl.diff.fwd);
        CPP2_UFCS(add_reverse_primal)(diff, ad_impl.diff.rws_primal);
        CPP2_UFCS(add_reverse_primal)(diff, cpp2::move(ad_impl).diff.rws_backprop);

        CPP2_UFCS(add_forward)(diff, "}");
        CPP2_UFCS(add_reverse_primal)(diff, "}");

        CPP2_UFCS(leave_function)((*cpp2::impl::assert_not_null(ctx)));

        if (CPP2_UFCS(is_forward)((*cpp2::impl::assert_not_null(ctx)))) {
            CPP2_UFCS(add_member)(decl, diff.fwd);
        }
        if (CPP2_UFCS(is_reverse)((*cpp2::impl::assert_not_null(ctx)))) {
            CPP2_UFCS(add_member)(decl, diff.rws_primal);
        }
        CPP2_UFCS(reset)(diff);

        CPP2_UFCS(add_as_differentiated)((*cpp2::impl::assert_not_null(ctx)), f);
    }

#line 13190 "source/reflect.h2"
    /*
      @brief Generate AD member fields for object declarations.
      @param o Object declaration node.
      @return No return value.
     */
#line 13195 "source/reflect.h2"
    auto autodiff_declaration_handler::traverse(cpp2::impl::in<meta::object_declaration> o) -> void{
        std::string ad_name {"" + cpp2::to_string(CPP2_UFCS(name)(o)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + ""}; 
        std::string fwd_ad_type {CPP2_UFCS(get_fwd_ad_type)((*cpp2::impl::assert_not_null(ctx)), CPP2_UFCS(type)(o))}; 
        std::string ad_init {""}; 

        if (CPP2_UFCS(has_initializer)(o)) {
            autodiff_expression_handler ad {ctx}; 
            CPP2_UFCS(pre_traverse)(ad, CPP2_UFCS(get_initializer)(o));

            if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(empty)(ad.diff)) ) { cpp2::cpp2_default.report_violation(""); }
            ad_init = " = " + cpp2::move(ad).fwd_expr;
        }

        diff = "" + cpp2::to_string(cpp2::move(ad_name)) + " : " + cpp2::to_string(cpp2::move(fwd_ad_type)) + cpp2::to_string(cpp2::move(ad_init)) + ";";

        if (is_type_context) {

            diff_ad_type += "public " + cpp2::to_string(diff.fwd) + "\n";
        }
        else {
            CPP2_UFCS(add_member)(decl, diff.fwd);
        }
        diff = "";

        CPP2_UFCS(add_variable_declaration)((*cpp2::impl::assert_not_null(ctx)), "" + cpp2::to_string(CPP2_UFCS(name)(o)) + "", "" + cpp2::to_string(CPP2_UFCS(type)(o)) + "", true, true);// TODO_a: Add acitivty check
    }

#line 13223 "source/reflect.h2"
    /*
      @brief Generate AD type wrappers for nested types.
      @param t Type declaration node.
      @return No return value.
     */
#line 13228 "source/reflect.h2"
    auto autodiff_declaration_handler::traverse(cpp2::impl::in<meta::type_declaration> t) -> void{
        CPP2_UFCS(push_stack)((*cpp2::impl::assert_not_null(ctx)), t);
        autodiff_declaration_handler ad {ctx, t}; 
        ad.is_type_context = true;

        for ( 
             auto const& m : CPP2_UFCS(get_members)(t) ) 
        {
            CPP2_UFCS(pre_traverse)(ad, m);
        }

        CPP2_UFCS(pop_stack)((*cpp2::impl::assert_not_null(ctx)));

        if (!(CPP2_UFCS(empty)(ad.diff_ad_type))) {
            diff = "" + cpp2::to_string(CPP2_UFCS(name)(t)) + cpp2::to_string((*cpp2::impl::assert_not_null(ctx)).fwd_suffix) + " : type = {\n";
            diff += "" + cpp2::to_string(cpp2::move(ad).diff_ad_type) + "";
            diff += "}";

            CPP2_UFCS(add_member)(decl, diff.fwd);
            diff = "";
        }
    }

#line 13252 "source/reflect.h2"
    /*
      @brief Report unsupported parameter declarations in declaration context.
      @param t Parameter declaration node.
      @return No return value.
     */
#line 13257 "source/reflect.h2"
    auto autodiff_declaration_handler::traverse(cpp2::impl::in<meta::parameter_declaration> t) -> void{
        CPP2_UFCS(error)(t, "AD: Do not know how to handle parameter_declaration: " + cpp2::to_string(CPP2_UFCS(to_string)(t)) + "");
    }

#line 13262 "source/reflect.h2"
    /*
      @brief Report unsupported statements in declaration context.
      @param stmt Statement node.
      @return No return value.
     */
#line 13267 "source/reflect.h2"
    auto autodiff_declaration_handler::traverse(cpp2::impl::in<meta::statement> stmt) -> void{
        CPP2_UFCS(error)(stmt, "AD: Do not know how to handle statement in declaration context: " + cpp2::to_string(CPP2_UFCS(to_string)(stmt)) + "");
    }

#line 13273 "source/reflect.h2"
/*
  @brief Entry point for `@autodiff` metafunction - Automatic Differentiation for Cpp2.
 
  ═══════════════════════════════════════════════════════════════════════════════
                          REVERSE-MODE AUTOMATIC DIFFERENTIATION
  ═══════════════════════════════════════════════════════════════════════════════
 
  This metafunction transforms a Cpp2 type to support automatic differentiation.
  For reverse mode (`@autodiff<"reverse">`), it generates backward (adjoint) functions
  that compute gradients via the chain rule.
 
  ┌─────────────────────────────────────────────────────────────────────────────┐
  │                              PIPELINE OVERVIEW                              │
  └─────────────────────────────────────────────────────────────────────────────┘
 
    User Code (Cpp2)                      Generated Code (Cpp1)
    ───────────────                       ─────────────────────
 
    @autodiff<"reverse">                  // Original function
    my_math: type = {                     f: (x: double) -> double = { ... }
        f: (x: double) -> double = {
            return sin(x)  x;            // Generated backward function
        }                         ──►     f_backward: (x_val: double, r_adj: double,
    }                                                  inout x_adj: double) = {
                                              // Adjoint accumulation via chain rule
                                              x_adj += cos(x_val)  x_val  r_adj;
                                              x_adj += sin(x_val)  r_adj;
                                          }
 
  ┌─────────────────────────────────────────────────────────────────────────────┐
  │                           DETAILED PIPELINE STAGES                          │
  └─────────────────────────────────────────────────────────────────────────────┘
 
    ┌──────────────┐    ┌──────────────┐    ┌──────────────┐    ┌──────────────┐
    │  1. PARSE    │    │  2. RULE     │    │  3. IR       │    │  4. ACTIVITY │
    │  ARGUMENTS   │───►│  DISCOVERY   │───►│  BUILDING    │───►│  ANALYSIS    │
    └──────────────┘    └──────────────┘    └──────────────┘    └──────────────┘
           │                   │                   │                   │
           ▼                   ▼                   ▼                   ▼
    Parse metafunction   Scan nested         Walk reflection     Mark variables
    args: suffix,        ad_rule_ types     AST, build typed    as active if
    order, reverse       into registry       IR expressions      they depend on
                                             and statements      inputs
 
    ┌──────────────┐    ┌──────────────┐    ┌──────────────┐    ┌──────────────┐
    │  5. FORWARD  │    │  6. REVERSE  │    │  7. CODE     │    │  8. CODE     │
    │  PASS GEN    │───►│  PASS GEN    │───►│  EMISSION    │───►│  INJECTION   │
    └──────────────┘    └──────────────┘    └──────────────┘    └──────────────┘
           │                   │                   │                   │
           ▼                   ▼                   ▼                   ▼
    Generate IR for      Apply chain rule    Convert IR to       Add generated
    value computation    to generate         Cpp1 code           functions to
    (x_val = x, etc.)    adjoint stmts       strings             the type
 
  ┌─────────────────────────────────────────────────────────────────────────────┐
  │                         DIFFERENTIATION RULES (ad_rule_)                   │
  └─────────────────────────────────────────────────────────────────────────────┘
 
  Rules define how to differentiate specific functions. Each rule is a type with:
 
    ad_rule_<function_name>: type = {
        name      : std::string = "<function_name>";   // Function to match
        n_args    : int = <N>;                         // Number of arguments
        is_member : bool = false;                      // Member function?
 
        // Forward pass: compute the primal value (optional, for documentation)
        forward: (<args>) -> <return_type> = { ... }
 
        // Reverse pass: accumulate adjoints using chain rule (REQUIRED)
        reverse: (res_val: T, res_adj: T,              // Result value & adjoint
                  x_val: T, inout x_adj: T,            // Arg 1 value & adjoint
                  [y_val: T, inout y_adj: T, ...]) = { // Additional args...
            // Accumulate: arg_adj += d(f)/d(arg)  res_adj
            x_adj += <partial_derivative_wrt_x>  res_adj;
        }
    }
 
  Rule Discovery Priority:
    1. Nested types inside the @autodiff type (highest priority)
    2. Types in std::reverse_ad namespace (from cpp2ad_rules.h2)
 
  Example - Custom Rule for GELU:
 
    my_nn: @autodiff<"reverse"> type = {
        ad_rule_gelu: type = {
            name: std::string = "gelu";
            n_args: int = 1;
            is_member: bool = false;
 
            reverse: (res_val: double, res_adj: double,
                      x_val: double, inout x_adj: double) = {
                // GELU: 0.5  x  (1 + tanh(sqrt(2/pi)  (x + 0.044715  x^3)))
                // Derivative approximation
                cdf := 0.5  (1.0 + std::tanh(0.797885  (x_val + 0.044715  x_val  x_val  x_val)));
                x_adj += cdf  res_adj;  // Simplified
            }
        }
 
        f: (x: double) -> double = { return gelu(x); }
    }
 
  ┌─────────────────────────────────────────────────────────────────────────────┐
  │                              IR TYPE HIERARCHY                              │
  └─────────────────────────────────────────────────────────────────────────────┘
 
    ad_func_ir                           Top-level function IR
        │
        ├── name: string                 Function name
        ├── params: vector<ad_param>     Parameter list (with value/adjoint names)
        ├── return_type: string          Return type
        ├── body_stmts: vector<ad_stmt>  Forward pass statements
        └── reverse_stmts: vector<ad_stmt>  Reverse pass statements
 
    ad_stmt (Statement IR)               Represents a single statement
        │
        ├── ad_stmt_kind::decl           Variable declaration: "x_val: double = expr"
        ├── ad_stmt_kind::assign         Assignment: "x_val = expr"
        ├── ad_stmt_kind::assign_add     Adjoint accumulation: "x_adj += expr"
        ├── ad_stmt_kind::expr           Expression statement
        ├── ad_stmt_kind::return_        Return statement
        ├── ad_stmt_kind::compound       Block of statements { ... }
        └── ad_stmt_kind::if_stmt        Conditional statement
 
    ad_expr (Expression IR)              Represents an expression
        │
        ├── ad_expr_kind::literal        Numeric literal: "3.14"
        ├── ad_expr_kind::identifier     Variable reference: "x_val"
        ├── ad_expr_kind::unary          Unary operation: "-x"
        ├── ad_expr_kind::binary         Binary operation: "x + y"
        └── ad_expr_kind::call           Function call: "sin(x)"
 
    ad_op_kind                           Operation types
        │
        ├── add, sub, mul, div           Arithmetic operators
        ├── neg                          Unary negation
        └── call                         Function call (rule lookup by name)
 
  ┌─────────────────────────────────────────────────────────────────────────────┐
  │                           CHAIN RULE APPLICATION                            │
  └─────────────────────────────────────────────────────────────────────────────┘
 
  The reverse pass applies the chain rule to propagate adjoints backward:
 
    Forward:  y = f(x)           Compute value
    Reverse:  x_adj += dy/dx  y_adj    Accumulate adjoint
 
  For composite expressions, the chain rule composes:
 
    Forward:  t1 = sin(x)        Forward pass stores intermediate values
              t2 = x  t1
              r  = t2
 
    Reverse:  t2_adj = r_adj     Seed with output adjoint (typically 1.0)
              x_adj  += t1  t2_adj     d(xt1)/dx = t1
              t1_adj += x  t2_adj      d(xt1)/dt1 = x
              x_adj  += cos(x)  t1_adj d(sin(x))/dx = cos(x)
 
  The reverse statements are executed in reverse order of the forward statements.
 
  ┌─────────────────────────────────────────────────────────────────────────────┐
  │                              ERROR HANDLING                                 │
  └─────────────────────────────────────────────────────────────────────────────┘
 
  The pipeline uses HARD FAILURES - no guessing or fallback recovery:
 
    - If no rule exists for a function → Compilation error with message:
      "@autodiff: No rule found for function 'foo'. Define ad_rule_foo with reverse()."
 
    - If an expression can't be parsed → Compilation error with context
 
    - If a rule exists but has no reverse() body → Compilation error
 
  This ensures generated code is always correct - no silent wrong gradients.
 
  ┌─────────────────────────────────────────────────────────────────────────────┐
  │                           NAMING CONVENTIONS                                │
  └─────────────────────────────────────────────────────────────────────────────┘
 
    Original variable: x
    Value storage:     x_val    (stores primal value for reverse pass)
    Adjoint storage:   x_adj    (accumulates gradient contribution)
 
    Original function: f
    Backward function: f_backward
 
    Suffixes are configurable via metafunction arguments.
 
  ═══════════════════════════════════════════════════════════════════════════════
                               METAFUNCTION ARGUMENTS
  ═══════════════════════════════════════════════════════════════════════════════
 
  @param t Type declaration to differentiate (modified in place).
 
  Arguments (passed as strings in angle brackets):
    - "reverse"           Enable reverse-mode AD (required for backward functions)
    - "suffix=<str>"      Override forward suffix (default: "_d")
    - "rws_suffix=<str>"  Override reverse suffix (default: "_b")
    - "order=<n>"         Set Taylor order (default: 1, for higher-order AD)
 
  Example usage:
    @autodiff<"reverse"> my_type: type = { ... }
    @autodiff<"reverse", "suffix=_fwd", "rws_suffix=_bwd"> my_type: type = { ... }
 
  @see ad_rule_registry      Rule storage and lookup
  @see ad_ir_builder         IR construction from AST
  @see ad_ir_emitter         Code generation from IR
  @see discover_ad_rules     Rule discovery logic
  @see std::reverse_ad       Standard library of differentiation rules
 */
#line 13482 "source/reflect.h2"
auto autodiff(meta::type_declaration& t) -> void
{

    std::string_view constexpr suffix_token{ "suffix=" };
    std::string_view constexpr rws_suffix_token{ "rws_suffix=" };
    std::string_view constexpr order_token{ "order=" };
    std::string_view constexpr reverse_token{ "reverse" };

    auto args {CPP2_UFCS(get_arguments)(t)}; 

    std::string suffix {"_d"}; 
    std::string rws_suffix {"_b"}; 
    int order {1}; 
    bool reverse {false}; 
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
            else {if (cpp2::move(arg) == reverse_token) {
                reverse = true;
                continue;
            }}}}
        }

        CPP2_UFCS(error)(t, "AD: Unknown argument: " + cpp2::to_string(arg_str) + "");
        return ; 
    }

    if (reverse) {
        std::cout << "AD: Warning - reverse mode differentiation is very experimental\n";
    }

    autodiff_context ad_ctx {order, reverse}; 
    ad_ctx.fwd_suffix = cpp2::move(suffix);
    ad_ctx.rws_suffix = cpp2::move(rws_suffix);

    if (reverse) {
        autodiff_reverse_ir(t, &ad_ctx);
    }

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
    if (cpp2::move(reverse)) {
        CPP2_UFCS(add_runtime_support_include)(t, "cpp2ad_stack.h");
    }

    CPP2_UFCS(finish)(ad_ctx);

    static_cast<void>(cpp2::move(ad_ctx));
}


constexpr expression_flags::expression_flags(cpp2::impl::in<cpp2::i64> _val)
                                                          : _value{ cpp2::unchecked_narrow<cpp2::u8>(_val) } {  }

constexpr auto expression_flags::operator=(cpp2::impl::in<cpp2::i64> _val) -> expression_flags&  { 
                                                          _value = cpp2::unchecked_narrow<cpp2::u8>(_val);
                                                          return *this; }
constexpr auto expression_flags::operator|=(expression_flags const& that) & -> decltype(auto) { return _value |= that._value; }
constexpr auto expression_flags::operator&=(expression_flags const& that) & -> decltype(auto) { return _value &= that._value; }
constexpr auto expression_flags::operator^=(expression_flags const& that) & -> decltype(auto) { return _value ^= that._value; }
[[nodiscard]] constexpr auto expression_flags::operator|(expression_flags const& that) const& -> expression_flags { return _value | that._value; }
[[nodiscard]] constexpr auto expression_flags::operator&(expression_flags const& that) const& -> expression_flags { return _value & that._value; }
[[nodiscard]] constexpr auto expression_flags::operator^(expression_flags const& that) const& -> expression_flags { return _value ^ that._value; }
[[nodiscard]] constexpr auto expression_flags::has(expression_flags const& that) const& -> bool { return _value & that._value; }
constexpr auto expression_flags::set(expression_flags const& that) & -> void{_value |= that._value;}
constexpr auto expression_flags::clear(expression_flags const& that) & -> void{_value &= ~that._value;}
inline CPP2_CONSTEXPR expression_flags expression_flags::case_insensitive{ 1 };

inline CPP2_CONSTEXPR expression_flags expression_flags::multiple_lines{ 2 };

inline CPP2_CONSTEXPR expression_flags expression_flags::single_line{ 4 };

inline CPP2_CONSTEXPR expression_flags expression_flags::no_group_captures{ 8 };

inline CPP2_CONSTEXPR expression_flags expression_flags::perl_code_syntax{ 16 };

inline CPP2_CONSTEXPR expression_flags expression_flags::perl_code_syntax_in_classes{ 32 };

inline CPP2_CONSTEXPR expression_flags expression_flags::none{ 0 };

[[nodiscard]] constexpr auto expression_flags::get_raw_value() const& -> cpp2::u8 { return _value; }
constexpr expression_flags::expression_flags()
                                        : _value{ none._value }{}
constexpr expression_flags::expression_flags(expression_flags const& that)
                                              : _value{ that._value }{}
constexpr auto expression_flags::operator=(expression_flags const& that) -> expression_flags& {
                                              _value = that._value;
                                              return *this;}
constexpr expression_flags::expression_flags(expression_flags&& that) noexcept
                                              : _value{ std::move(that)._value }{}
constexpr auto expression_flags::operator=(expression_flags&& that) noexcept -> expression_flags& {
                                              _value = std::move(that)._value;
                                              return *this;}
[[nodiscard]] auto expression_flags::to_string_impl(cpp2::impl::in<std::string_view> prefix, cpp2::impl::in<std::string_view> separator) const& -> std::string{

std::string ret {"("}; 

std::string sep {}; 
if ((*this) == none) {return "(none)"; }

auto pref {cpp2::to_string(prefix)}; 
if (((*this) & expression_flags::case_insensitive) == expression_flags::case_insensitive) {ret += sep + pref + "case_insensitive";sep = separator;}
if (((*this) & expression_flags::multiple_lines) == expression_flags::multiple_lines) {ret += sep + pref + "multiple_lines";sep = separator;}
if (((*this) & expression_flags::single_line) == expression_flags::single_line) {ret += sep + pref + "single_line";sep = separator;}
if (((*this) & expression_flags::no_group_captures) == expression_flags::no_group_captures) {ret += sep + pref + "no_group_captures";sep = separator;}
if (((*this) & expression_flags::perl_code_syntax) == expression_flags::perl_code_syntax) {ret += sep + pref + "perl_code_syntax";sep = separator;}
if (((*this) & expression_flags::perl_code_syntax_in_classes) == expression_flags::perl_code_syntax_in_classes) {ret += sep + cpp2::move(pref) + "perl_code_syntax_in_classes";sep = separator;}
return cpp2::move(ret) + ")"; 
}

[[nodiscard]] auto expression_flags::to_string() const& -> std::string { return to_string_impl("", ", "); }
[[nodiscard]] auto expression_flags::to_code() const& -> std::string { return to_string_impl("expression_flags::", " | "); }
[[nodiscard]] auto expression_flags::from_string(cpp2::impl::in<std::string_view> s) -> expression_flags{

auto ret {none}; 
do {{
for ( auto const& x : cpp2::string_util::split_string_list(s) ) {
if ("case_insensitive" == x) {ret |= expression_flags::case_insensitive;}
else {if ("multiple_lines" == x) {ret |= expression_flags::multiple_lines;}
else {if ("single_line" == x) {ret |= expression_flags::single_line;}
else {if ("no_group_captures" == x) {ret |= expression_flags::no_group_captures;}
else {if ("perl_code_syntax" == x) {ret |= expression_flags::perl_code_syntax;}
else {if ("perl_code_syntax_in_classes" == x) {ret |= expression_flags::perl_code_syntax_in_classes;}
else {if ("none" == x) {ret |= expression_flags::none;}
else {goto BREAK_outer;}
#line 1 "source/reflect.h2"
}}}}}}
}

return ret; 
} CPP2_CONTINUE_BREAK(outer) }
 while ( 
false
);
CPP2_UFCS(report_violation)(cpp2::type_safety, CPP2_UFCS(c_str)(("can't convert string '" + cpp2::to_string(s) + "' to flag_enum of type expression_flags")));
return expression_flags::none; 
}

[[nodiscard]] auto expression_flags::from_code(cpp2::impl::in<std::string_view> s) -> expression_flags{
std::string str {s}; return from_string(cpp2::string_util::replace_all(cpp2::move(str), "expression_flags::", "")); }

#line 13586 "source/reflect.h2"
//-----------------------------------------------------------------------
//
//  regex - creates regular expressions from members
//
//  Each member that starts with `regex` is replaced by a regular expression
//  of the initializer string. E.g.:
//  ```
//    regex := "ab";
//  ```
//  is replaced with
//  ```
//    regex := ::cpp2::regex::regular_expression<...>;
//  ```
//

#line 13602 "source/reflect.h2"
//  Possible modifiers for a regular expression.
//

#line 13606 "source/reflect.h2"
                                  // mod: i
                                  // mod: m
                                  // mod: s
                                  // mod: n
                                  // mod: x
                                  // mod: xx

#line 13615 "source/reflect.h2"
//  Tokens for regular expressions.
//

// Basic class for a regex token.
//

#line 13624 "source/reflect.h2"
    regex_token::regex_token(cpp2::impl::in<std::string> str)
        : string_rep{ str }{

#line 13626 "source/reflect.h2"
    }

#line 13628 "source/reflect.h2"
    regex_token::regex_token()
        : string_rep{ "" }{

#line 13630 "source/reflect.h2"
    }

    //parse: (inout ctx: parse_context) -> token_ptr;
                                                                       // Generate the matching code.
                                                                       // Create a reverse token for look behind expressions.

#line 13636 "source/reflect.h2"
    auto regex_token::add_groups([[maybe_unused]] std::set<int>& unnamed_param_2) const -> void{}// Adds all group indices to the set.
#line 13637 "source/reflect.h2"
    [[nodiscard]] auto regex_token::to_string() const& -> std::string{return string_rep; }// Create a string representation.
#line 13638 "source/reflect.h2"
    auto regex_token::set_string(cpp2::impl::in<std::string> s) & -> void{string_rep = s; }

    regex_token::~regex_token() noexcept{}// Set the string representation.

#line 13653 "source/reflect.h2"
    regex_token_check::regex_token_check(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> check_)
        : regex_token{ str }
        , check{ check_ }{

#line 13656 "source/reflect.h2"
    }

#line 13658 "source/reflect.h2"
    auto regex_token_check::generate_code(generation_context& ctx) const -> void{
        ctx.add_check(check + "(" + ctx.match_parameters() + ")");
    }

#line 13662 "source/reflect.h2"
    [[nodiscard]] auto regex_token_check::reverse() const -> token_ptr { return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, CPP2_UFCS(to_string)((*this)), (*this).check);  }

    regex_token_check::~regex_token_check() noexcept{}

#line 13674 "source/reflect.h2"
    regex_token_code::regex_token_code(cpp2::impl::in<std::string> str, cpp2::impl::in<std::string> code_)
        : regex_token{ str }
        , code{ code_ }{

#line 13677 "source/reflect.h2"
    }

#line 13679 "source/reflect.h2"
    auto regex_token_code::generate_code(generation_context& ctx) const -> void{
        ctx.add(code);
    }

#line 13683 "source/reflect.h2"
    [[nodiscard]] auto regex_token_code::reverse() const -> token_ptr { return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_code>)(cpp2::shared, CPP2_UFCS(to_string)((*this)), (*this).code);  }

    regex_token_code::~regex_token_code() noexcept{}

#line 13693 "source/reflect.h2"
    regex_token_empty::regex_token_empty(cpp2::impl::in<std::string> str)
        : regex_token{ str }{

#line 13695 "source/reflect.h2"
    }

#line 13697 "source/reflect.h2"
    auto regex_token_empty::generate_code([[maybe_unused]] generation_context& unnamed_param_2) const -> void{
        // Nothing.
    }

#line 13701 "source/reflect.h2"
    [[nodiscard]] auto regex_token_empty::reverse() const -> token_ptr { return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_empty>)(cpp2::shared, CPP2_UFCS(to_string)((*this)));  }

    regex_token_empty::~regex_token_empty() noexcept{}

#line 13713 "source/reflect.h2"
    regex_token_list::regex_token_list(cpp2::impl::in<token_vec> t)
        : regex_token{ gen_string(t) }
        , tokens{ t }{

#line 13716 "source/reflect.h2"
    }

#line 13718 "source/reflect.h2"
    auto regex_token_list::generate_code(generation_context& ctx) const -> void{
        for ( auto const& token : tokens ) {
            (*cpp2::impl::assert_not_null(token)).generate_code(ctx);
        }
    }

#line 13724 "source/reflect.h2"
    auto regex_token_list::add_groups(std::set<int>& groups) const -> void{
        for ( auto const& token : tokens ) {
            (*cpp2::impl::assert_not_null(token)).add_groups(groups);
        }
    }

#line 13730 "source/reflect.h2"
    [[nodiscard]] auto regex_token_list::gen_string(cpp2::impl::in<token_vec> vec) -> std::string{
        std::string r {""}; 
        for ( auto const& token : vec ) {
            r += (*cpp2::impl::assert_not_null(token)).to_string();
        }
        return r; 
    }

#line 13738 "source/reflect.h2"
    [[nodiscard]] auto regex_token_list::reverse() const -> token_ptr{
        int s {cpp2::unchecked_narrow<int>(tokens.size())}; 

        token_vec reverse_vec {}; 
        reverse_vec.resize(s);

        int i {0}; 
        for( ; cpp2::impl::cmp_less(i,CPP2_UFCS(ssize)(tokens)); (i += 1) ) {
            CPP2_ASSERT_IN_BOUNDS(reverse_vec, s - 1 - i) = CPP2_UFCS(reverse)((*cpp2::impl::assert_not_null(CPP2_ASSERT_IN_BOUNDS(tokens, i))));
        }
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_list>)(cpp2::shared, cpp2::move(reverse_vec)); 
    }

    regex_token_list::~regex_token_list() noexcept{}

#line 13766 "source/reflect.h2"
    auto parse_context_group_state::next_alternative() & -> void{
        token_vec new_list {}; 
        std::swap(new_list, cur_match_list);
        post_process_list(new_list);
        static_cast<void>(alternate_match_lists.insert(alternate_match_lists.end(), CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_list>)(cpp2::shared, cpp2::move(new_list))));
    }

#line 13774 "source/reflect.h2"
    auto parse_context_group_state::swap(parse_context_group_state& t) & -> void{// NOLINT(performance-noexcept-swap)
        std::swap(cur_match_list, t.cur_match_list);
        std::swap(alternate_match_lists, t.alternate_match_lists);
        std::swap(modifiers, t.modifiers);
    }

#line 13781 "source/reflect.h2"
    [[nodiscard]] auto parse_context_group_state::get_as_token() & -> token_ptr{
        if (alternate_match_lists.empty()) {
            post_process_list(cur_match_list);
            return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_list>)(cpp2::shared, cur_match_list); 
        }
        else {
            next_alternative();
            return CPP2_UFCS_TEMPLATE(cpp2_new<alternative_token_gen>)(cpp2::shared, alternate_match_lists); 
        }
    }

#line 13793 "source/reflect.h2"
    auto parse_context_group_state::add(cpp2::impl::in<token_ptr> token) & -> void{
        cur_match_list.push_back(token);
    }

#line 13798 "source/reflect.h2"
    [[nodiscard]] auto parse_context_group_state::empty() const& -> bool { return cur_match_list.empty();  }

#line 13802 "source/reflect.h2"
    auto parse_context_group_state::post_process_list(token_vec& list) -> void{
        // Merge all characters
        auto merge_pos {list.begin()}; 
        for( ; merge_pos != list.end(); (++merge_pos) ) {
            if (cpp2::impl::is<char_token>(*cpp2::impl::assert_not_null(*cpp2::impl::assert_not_null(merge_pos)))) {
                auto combine_pos {merge_pos + 1}; 
                while( combine_pos != list.end() && cpp2::impl::is<char_token>(*cpp2::impl::assert_not_null(*cpp2::impl::assert_not_null(combine_pos))) ) {// The erase advances combine_pos
                    (cpp2::impl::as_<char_token>(*cpp2::impl::assert_not_null(*cpp2::impl::assert_not_null(merge_pos)))).append(cpp2::impl::as_<char_token>(*cpp2::impl::assert_not_null(*cpp2::impl::assert_not_null(combine_pos))));
                    combine_pos = list.erase(combine_pos);
                }
            }
        }
    }

    parse_context_group_state::parse_context_group_state(auto const& cur_match_list_, auto const& alternate_match_lists_, auto const& modifiers_)
                                                                                              : cur_match_list{ cur_match_list_ }
                                                                                              , alternate_match_lists{ alternate_match_lists_ }
                                                                                              , modifiers{ modifiers_ }{}
parse_context_group_state::parse_context_group_state(){}

#line 13828 "source/reflect.h2"
    [[nodiscard]] auto parse_context_branch_reset_state::next() & -> int{
        auto g {cur_group}; 
        cur_group += 1;
        max_group = max(max_group, cur_group);

        return g; 
    }

#line 13837 "source/reflect.h2"
    auto parse_context_branch_reset_state::set_next(cpp2::impl::in<int> g) & -> void{
        cur_group = g;
        max_group = max(max_group, g);
    }

#line 13843 "source/reflect.h2"
    auto parse_context_branch_reset_state::next_alternative() & -> void{
        if (is_active) {
            cur_group = from;
        }
    }

#line 13850 "source/reflect.h2"
    auto parse_context_branch_reset_state::set_active_reset(cpp2::impl::in<int> restart) & -> void{
        is_active = true;
        cur_group = restart;
        from      = restart;
        max_group = restart;
    }

    parse_context_branch_reset_state::parse_context_branch_reset_state(auto const& is_active_, auto const& cur_group_, auto const& max_group_, auto const& from_)
                                                                                    : is_active{ is_active_ }
                                                                                    , cur_group{ cur_group_ }
                                                                                    , max_group{ max_group_ }
                                                                                    , from{ from_ }{}
parse_context_branch_reset_state::parse_context_branch_reset_state(){}

#line 13880 "source/reflect.h2"
    parse_context::parse_context(cpp2::impl::in<std::string_view> r, auto const& e)
        : regex{ r }
        , root{ CPP2_UFCS_TEMPLATE_NONLOCAL(cpp2_new<regex_token_empty>)(cpp2::shared, "") }
        , error_out{ e }{

#line 13884 "source/reflect.h2"
    }

#line 13890 "source/reflect.h2"
    [[nodiscard]] auto parse_context::start_group() & -> parse_context_group_state
    {
        parse_context_group_state old_state {}; 
        old_state.swap(cur_group_state);
        cur_group_state.modifiers = old_state.modifiers;

        return old_state; 
    }

#line 13900 "source/reflect.h2"
    [[nodiscard]] auto parse_context::end_group(cpp2::impl::in<parse_context_group_state> old_state) & -> token_ptr
    {
        auto inner {cur_group_state.get_as_token()}; 
        cur_group_state = old_state;
        return inner; 
    }

#line 13907 "source/reflect.h2"
    [[nodiscard]] auto parse_context::get_modifiers() const& -> expression_flags{
        return cur_group_state.modifiers; 
    }

#line 13911 "source/reflect.h2"
    auto parse_context::set_modifiers(cpp2::impl::in<expression_flags> mod) & -> void{
        cur_group_state.modifiers = mod;
    }

#line 13918 "source/reflect.h2"
    [[nodiscard]] auto parse_context::branch_reset_new_state() & -> parse_context_branch_reset_state
    {
        parse_context_branch_reset_state old_state {}; 
        std::swap(old_state, cur_branch_reset_state);

        cur_branch_reset_state.set_active_reset(old_state.cur_group);
        return old_state; 
    }

#line 13927 "source/reflect.h2"
    auto parse_context::branch_reset_restore_state(cpp2::impl::in<parse_context_branch_reset_state> old_state) & -> void
    {
        auto max_group {cur_branch_reset_state.max_group}; 
        cur_branch_reset_state = old_state;
        cur_branch_reset_state.set_next(cpp2::move(max_group));
    }

#line 13934 "source/reflect.h2"
    auto parse_context::next_alternative() & -> void
    {
        cur_group_state.next_alternative();
        cur_branch_reset_state.next_alternative();
    }

#line 13942 "source/reflect.h2"
    auto parse_context::add_token(cpp2::impl::in<token_ptr> token) & -> void{
        cur_group_state.add(token);
    }

#line 13946 "source/reflect.h2"
    [[nodiscard]] auto parse_context::has_token() const& -> bool{
        return !(cur_group_state.empty()); 
    }

#line 13950 "source/reflect.h2"
    [[nodiscard]] auto parse_context::pop_token() & -> token_ptr
    {
        token_ptr r {nullptr}; 
        if (has_token()) {
            r = cur_group_state.cur_match_list.back();
            cur_group_state.cur_match_list.pop_back();
        }

        return r; 
    }

#line 13961 "source/reflect.h2"
    [[nodiscard]] auto parse_context::get_as_token() & -> token_ptr{
        return root; 
    }

#line 13967 "source/reflect.h2"
    [[nodiscard]] auto parse_context::get_cur_group() const& -> int{
        return cur_branch_reset_state.cur_group; 
    }

#line 13971 "source/reflect.h2"
    [[nodiscard]] auto parse_context::next_group() & -> int{
        return cur_branch_reset_state.next(); 
    }

#line 13975 "source/reflect.h2"
    auto parse_context::set_named_group(cpp2::impl::in<std::string> name, cpp2::impl::in<int> id) & -> void
    {
        if (!(named_groups.contains(name))) {// Redefinition of group name is not an error. The left most one is retained.
            CPP2_ASSERT_IN_BOUNDS(named_groups, name) = id;
        }
    }

#line 13982 "source/reflect.h2"
    [[nodiscard]] auto parse_context::get_named_group(cpp2::impl::in<std::string> name) const& -> int
    {
        auto iter {named_groups.find(name)}; 
        if (iter == named_groups.end()) {
             return -1; 
        }
        else {
            return (*cpp2::impl::assert_not_null(cpp2::move(iter))).second; 
        }
    }

#line 13995 "source/reflect.h2"
    [[nodiscard]] auto parse_context::current() const& -> char{return CPP2_ASSERT_IN_BOUNDS(regex, pos); }

#line 13998 "source/reflect.h2"
    [[nodiscard]] auto parse_context::get_next_position(cpp2::impl::in<bool> in_class, cpp2::impl::in<bool> no_skip) const& -> size_t
    {
        auto perl_syntax {false}; 
        if (!(no_skip)) {
            if (in_class) {
                perl_syntax = get_modifiers().has(expression_flags::perl_code_syntax) && get_modifiers().has(expression_flags::perl_code_syntax_in_classes);
            }
            else {
                perl_syntax = get_modifiers().has(expression_flags::perl_code_syntax);
            }
        }
        auto cur {pos + 1}; 
        if (cpp2::move(perl_syntax)) {
            for( ; cpp2::impl::cmp_less(cur,regex.size()); (cur += 1) ) {
                auto n {CPP2_ASSERT_IN_BOUNDS(regex, cur)}; 

                if (space_class<char>::includes(n)) {
                    continue;
                }
                else {if (!(in_class) && '#' == cpp2::move(n)) {
                    cur = regex.find('\n', cur);
                    if (std::string::npos == cur) {
                        // No new line, comment runs until the end of the pattern
                        cur = regex.size();
                    }
                }
                else { // None space none comment char
                    break;
                }}
            }
        }

        //  Check for end of file.
        if (cpp2::impl::cmp_greater(cur,regex.size())) {
            cur = regex.size();
        }
        return cur; 
    }

#line 14038 "source/reflect.h2"
    [[nodiscard]] auto parse_context::next_impl(cpp2::impl::in<bool> in_class, cpp2::impl::in<bool> no_skip) & -> bool
    {
        pos = get_next_position(in_class, no_skip);
        if (pos != regex.size()) {
            return true; 
        }
        else {
            return false; 
        }
    }

#line 14049 "source/reflect.h2"
    [[nodiscard]] auto parse_context::next() & -> decltype(auto) { return next_impl(false, false); }
#line 14050 "source/reflect.h2"
    [[nodiscard]] auto parse_context::next_in_class() & -> decltype(auto) { return next_impl(true, false);  }
#line 14051 "source/reflect.h2"
    [[nodiscard]] auto parse_context::next_no_skip() & -> decltype(auto) { return next_impl(false, true); }

#line 14053 "source/reflect.h2"
    [[nodiscard]] auto parse_context::next_n(cpp2::impl::in<int> n) & -> bool{
        auto r {true}; 
        auto cur {0}; 
        for( ; r && cpp2::impl::cmp_less(cur,n); (r = next()) ) {
            cur += 1;
        }
        return r; 
    }

#line 14062 "source/reflect.h2"
    [[nodiscard]] auto parse_context::has_next() const& -> bool{return cpp2::impl::cmp_less(pos,regex.size()); }

#line 14064 "source/reflect.h2"
    [[nodiscard]] auto parse_context::grab_until_impl(cpp2::impl::in<std::string> e, cpp2::impl::out<std::string> r, cpp2::impl::in<bool> any) & -> bool
    {
        auto end {pos}; // NOLINT(clang-analyzer-deadcode.DeadStores)
        if (any) {
            end = regex.find_first_of(e, pos);
        }
        else {
            end = regex.find(e, pos);
        }

        if (end != std::string_view::npos) {
            r.construct(regex.substr(pos, end - pos));
            pos = cpp2::move(end);
            return true; 
        }
        else {
            r.construct("");
            return false; 
        }
    }

#line 14085 "source/reflect.h2"
    [[nodiscard]] auto parse_context::grab_until(cpp2::impl::in<std::string> e, cpp2::impl::out<std::string> r) & -> decltype(auto) { return grab_until_impl(e, cpp2::impl::out(&r), false); }
#line 14086 "source/reflect.h2"
    [[nodiscard]] auto parse_context::grab_until(cpp2::impl::in<char> e, cpp2::impl::out<std::string> r) & -> decltype(auto) { return grab_until_impl(std::string(1, e), cpp2::impl::out(&r), false); }
#line 14087 "source/reflect.h2"
    [[nodiscard]] auto parse_context::grab_until_one_of(cpp2::impl::in<std::string> e, cpp2::impl::out<std::string> r) & -> decltype(auto) { return grab_until_impl(e, cpp2::impl::out(&r), true);  }

#line 14089 "source/reflect.h2"
    [[nodiscard]] auto parse_context::grab_n(cpp2::impl::in<int> n, cpp2::impl::out<std::string> r) & -> bool
    {
        if (cpp2::impl::cmp_less_eq(pos + cpp2::impl::as_<size_t>(n),regex.size())) {
            r.construct(regex.substr(pos, cpp2::impl::as_<size_t>(n)));
            pos += (cpp2::impl::as_<size_t>(n)) - 1;
            return true; 
        }
        else {
            r.construct("");
            return false; 
        }
    }

#line 14102 "source/reflect.h2"
    [[nodiscard]] auto parse_context::grab_number() & -> std::string
    {
        auto start {pos}; 
        auto start_search {pos}; 
        if (CPP2_ASSERT_IN_BOUNDS(regex, start_search) == '-') {
            start_search += 1;
        }
        auto end {regex.find_first_not_of("1234567890", cpp2::move(start_search))}; 

        cpp2::impl::deferred_init<std::string> r; 
        if (end != std::string::npos) {
            r.construct(regex.substr(start, end - start));
            pos = cpp2::move(end) - 1;
        }
        else {
            r.construct(regex.substr(cpp2::move(start)));
            pos = regex.size() - 1;
        }
        return cpp2::move(r.value()); 
    }

#line 14123 "source/reflect.h2"
    [[nodiscard]] auto parse_context::peek_impl(cpp2::impl::in<bool> in_class) const& -> char{
        auto next_pos {get_next_position(in_class, false)}; 
        if (cpp2::impl::cmp_less(next_pos,regex.size())) {
            return CPP2_ASSERT_IN_BOUNDS(regex, cpp2::move(next_pos)); 
        }
        else {
            return '\0'; 
        }
    }

#line 14133 "source/reflect.h2"
    [[nodiscard]] auto parse_context::peek() const& -> decltype(auto) { return peek_impl(false); }
#line 14134 "source/reflect.h2"
    [[nodiscard]] auto parse_context::peek_in_class() const& -> decltype(auto) { return peek_impl(true);  }

#line 14139 "source/reflect.h2"
    [[nodiscard]] auto parse_context::parser_group_modifiers(cpp2::impl::in<std::string> change_str, expression_flags& parser_modifiers) & -> bool
    {
        auto is_negative {false}; 
        auto is_reset {false}; 

        auto apply {[&, _1 = (&is_negative), _2 = (&parser_modifiers)](cpp2::impl::in<expression_flags> flag) mutable -> void{
            if (*cpp2::impl::assert_not_null(_1)) {
                (*cpp2::impl::assert_not_null(_2)).clear(flag);
            }
            else {
                (*cpp2::impl::assert_not_null(_2)).set(flag);
            }
        }}; 

        auto iter {change_str.begin()}; 
        for( ; iter != change_str.end(); (++iter) ) 
        {
            auto cur {*cpp2::impl::assert_not_null(iter)}; 
            if (cur == '^') {
                is_reset = true;
                parser_modifiers = expression_flags::none;
            }
            else {if (cur == '-') {
                if (is_reset) {static_cast<void>(error("No negative modifier allowed.")); return false; }
                is_negative = true;
            }
            else {if (cur == 'i') {apply(expression_flags::case_insensitive); }
            else {if (cur == 'm') {apply(expression_flags::multiple_lines); }
            else {if (cur == 's') {apply(expression_flags::single_line); }
            else {if (cur == 'n') {apply(expression_flags::no_group_captures); }
            else {if (cur == 'x') {
                if ((iter + 1) == change_str.end() || *cpp2::impl::assert_not_null((iter + 1)) != 'x') {
                    // x modifier
                    apply(expression_flags::perl_code_syntax);

                    // Just x unsets xx and remove x also removes xx
                    parser_modifiers.clear(expression_flags::perl_code_syntax_in_classes);
                }
                else { // xx modifier
                    // xx also sets or unsets x
                    apply(expression_flags::perl_code_syntax);
                    apply(expression_flags::perl_code_syntax_in_classes);

                    ++iter; // Skip the second x
                }
            }
            else {
                static_cast<void>(error("Unknown modifier: " + cpp2::to_string(cpp2::move(cur)) + "")); return false; 
            }}}}}}}
        }

        return true; 
    }

#line 14193 "source/reflect.h2"
    [[nodiscard]] auto parse_context::parse_until(cpp2::impl::in<char> term) & -> bool{
        token_ptr cur_token {}; 

        for( ; valid(); static_cast<void>(next()) ) 
        {
            if (term == current()) {break; }

            cur_token = nullptr;

            if (!(cur_token) && valid()) {cur_token = alternative_token::parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = any_token::parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = class_token::parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = escape_token_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = global_group_reset_token_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = group_ref_token::parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = group_token::parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = hexadecimal_token_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = line_end_token_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = line_start_token_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = named_class_token_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = octal_token_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = range_token::parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = special_range_token::parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = start_match_parse((*this)); }
            if (!(cur_token) && valid()) {cur_token = word_boundary_token_parse((*this)); }

            // Everything else is matched as it is.
            if (!(cur_token) && valid()) {cur_token = char_token::parse((*this)); }

            if (cur_token && valid()) {
                add_token(cur_token);
            }else {
                return false; 
            }
        }

        return true; 
    }

#line 14232 "source/reflect.h2"
    [[nodiscard]] auto parse_context::parse(cpp2::impl::in<std::string> modifiers) & -> bool
    {

        expression_flags flags {}; 
        if (!(parser_group_modifiers(modifiers, flags))) {return false; }
        set_modifiers(cpp2::move(flags));

        auto r {parse_until('\0')}; 
        if (r) {
            root = cur_group_state.get_as_token();
        }

        return r; 
    }

#line 14249 "source/reflect.h2"
    [[nodiscard]] auto parse_context::get_pos() const& -> decltype(auto) { return pos; }
#line 14250 "source/reflect.h2"
    [[nodiscard]] auto parse_context::get_range(cpp2::impl::in<size_t> start, cpp2::impl::in<size_t> end) const& -> decltype(auto) { return std::string(regex.substr(start, end - start + 1));  }
#line 14251 "source/reflect.h2"
    [[nodiscard]] auto parse_context::valid() const& -> bool{return has_next() && !(has_error); }

#line 14253 "source/reflect.h2"
    [[nodiscard]] auto parse_context::error(cpp2::impl::in<std::string> err) & -> token_ptr{
        has_error = true;
        error_out("Error during parsing of regex '" + cpp2::to_string(regex) + "' at position '" + cpp2::to_string(pos) + "': " + cpp2::to_string(err) + "");
        return nullptr; 
    }

#line 14268 "source/reflect.h2"
    auto generation_function_context::add_tabs(cpp2::impl::in<int> c) & -> void{
        int i {0}; 
        for( ; cpp2::impl::cmp_less(i,c); i += 1 ) {
            tabs += "  ";
        }
    }

#line 14275 "source/reflect.h2"
    auto generation_function_context::remove_tabs(cpp2::impl::in<int> c) & -> void{
        tabs = tabs.substr(0, (cpp2::impl::as_<size_t>(c)) * 2);
    }

    generation_function_context::generation_function_context(auto const& code_, auto const& tabs_)
                                                       : code{ code_ }
                                                       , tabs{ tabs_ }{}
generation_function_context::generation_function_context(){}

#line 14293 "source/reflect.h2"
    [[nodiscard]] auto generation_context::match_parameters() const& -> std::string{return "r.pos, ctx"; }

#line 14298 "source/reflect.h2"
    auto generation_context::add(cpp2::impl::in<std::string> s) & -> void{
        auto cur {get_current()}; 
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + cpp2::to_string(s) + "\n";
    }

#line 14304 "source/reflect.h2"
    auto generation_context::add_check(cpp2::impl::in<std::string> check) & -> void{
        auto cur {get_current()}; 
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "if !cpp2::regex::" + cpp2::to_string(check) + " { r.matched = false; break; }\n";
    }

#line 14310 "source/reflect.h2"
    auto generation_context::add_statefull(cpp2::impl::in<std::string> next_func, cpp2::impl::in<std::string> check) & -> void
    {
        end_func_statefull(check);

        auto name {next_func.substr(0, next_func.size() - 2)}; 
        start_func_named(cpp2::move(name));
    }

#line 14318 "source/reflect.h2"
    auto generation_context::start_func_named(cpp2::impl::in<std::string> name) & -> void
    {
        auto cur {new_context()}; 

        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + cpp2::to_string(name) + ": @struct<noforward> type = {\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "  operator(): <Iter> (this, cur: Iter, forward ctx, other) -> cpp2::regex::match_return<Iter> = {\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    r := ctx..pass(cur);\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    do {\n";
        (*cpp2::impl::assert_not_null(cpp2::move(cur))).add_tabs(3);
    }

#line 14329 "source/reflect.h2"
    [[nodiscard]] auto generation_context::start_func() & -> std::string
    {
        auto name {gen_func_name()}; 
        start_func_named(name);
        return cpp2::move(name) + "()"; 
    }

#line 14336 "source/reflect.h2"
    auto generation_context::end_func_statefull(cpp2::impl::in<std::string> s) & -> void
    {
        auto cur {get_current()}; 
        (*cpp2::impl::assert_not_null(cur)).remove_tabs(3);
        (*cpp2::impl::assert_not_null(cur)).code += "\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    } while false;\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    if r.matched {\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "      r = " + cpp2::to_string(s) + ";\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    }\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    else {\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "      r.pos = ctx.end;\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    }\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    _ = ctx;\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "    return r;\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "  }\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "}\n";

        finish_context();
    }

#line 14357 "source/reflect.h2"
    [[nodiscard]] auto generation_context::generate_func(cpp2::impl::in<token_ptr> token) & -> std::string
    {
        auto name {start_func()}; 
        (*cpp2::impl::assert_not_null(token)).generate_code((*this));
        end_func_statefull("other(" + cpp2::to_string(match_parameters()) + ")");

        return name; 
    }

#line 14367 "source/reflect.h2"
    [[nodiscard]] auto generation_context::generate_reset(cpp2::impl::in<std::set<int>> groups) & -> std::string
    {
        if (groups.empty()) {
            return "cpp2::regex::no_reset()"; 
        }

        auto name {gen_reset_func_name()}; 
        auto cur {new_context()}; 

        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + cpp2::to_string(name) + ": @struct<noforward> type = {\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "  operator(): (this, inout ctx) = {\n";
        for ( auto const& g : groups ) {
            (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "  ctx..set_group_invalid(" + cpp2::to_string(g) + ");\n";
        }
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "  }\n";
        (*cpp2::impl::assert_not_null(cur)).code += "" + cpp2::to_string((*cpp2::impl::assert_not_null(cur)).tabs) + "}\n";

        finish_context();

        return cpp2::move(name) + "()"; 
    }

#line 14391 "source/reflect.h2"
    [[nodiscard]] auto generation_context::gen_func_name() & -> std::string{
        auto cur_id {matcher_func}; 
        matcher_func += 1;
        return "func_" + cpp2::to_string(cpp2::move(cur_id)) + ""; 
    }

#line 14397 "source/reflect.h2"
    [[nodiscard]] auto generation_context::next_func_name() & -> std::string{
        return gen_func_name() + "()"; 
    }

#line 14401 "source/reflect.h2"
    [[nodiscard]] auto generation_context::gen_reset_func_name() & -> std::string{
        auto cur_id {reset_func}; 
        reset_func += 1;
        return "reset_" + cpp2::to_string(cpp2::move(cur_id)) + ""; 
    }

#line 14407 "source/reflect.h2"
    [[nodiscard]] auto generation_context::gen_temp() & -> std::string{
        auto cur_id {temp_name}; 
        temp_name += 1;
        return "tmp_" + cpp2::to_string(cpp2::move(cur_id)) + ""; 
    }

#line 14415 "source/reflect.h2"
    [[nodiscard]] auto generation_context::new_context() & -> generation_function_context*{
        gen_stack.push_back(generation_function_context());
        auto cur {get_current()}; 
        (*cpp2::impl::assert_not_null(cur)).tabs = "    ";

        return cur; 
    }

#line 14423 "source/reflect.h2"
    auto generation_context::finish_context() & -> void{
        auto cur {get_current()}; 
        auto base {get_base()}; 
        (*cpp2::impl::assert_not_null(base)).code += (*cpp2::impl::assert_not_null(cpp2::move(cur))).code;

        gen_stack.pop_back();
    }

#line 14433 "source/reflect.h2"
    [[nodiscard]] auto generation_context::get_current() & -> generation_function_context*{
        return &gen_stack.back(); 
    }

#line 14437 "source/reflect.h2"
    [[nodiscard]] auto generation_context::get_base() & -> generation_function_context*{
        return &CPP2_ASSERT_IN_BOUNDS_LITERAL(gen_stack, 0); 
    }

#line 14441 "source/reflect.h2"
    [[nodiscard]] auto generation_context::get_entry_func() const& -> std::string{
        return entry_func; 
    }

#line 14445 "source/reflect.h2"
    [[nodiscard]] auto generation_context::create_named_group_lookup(cpp2::impl::in<std::map<std::string,int>> named_groups) const& -> std::string
    {
        std::string res {"get_named_group_index: (name) -> int = {\n"}; 

        //  Generate if selection.
        std::string sep {""}; 
        for ( auto const& cur : named_groups ) {
            res += "" + cpp2::to_string(sep) + "if name == \"" + cpp2::to_string(cur.first) + "\" { return " + cpp2::to_string(cur.second) + "; }";
            sep = "else ";
        }

        //  Generate else branch or return if list is empty.
        if (named_groups.empty()) {
            res += "  _ = name;\n";
            res += "  return -1;\n";
        }
        else {
            res += "  else { return -1; }\n";
        }
        res += "}\n";
        return res; 
    }

#line 14470 "source/reflect.h2"
    [[nodiscard]] auto generation_context::run(cpp2::impl::in<token_ptr> token) & -> std::string{
        entry_func = generate_func(token);

        return (*cpp2::impl::assert_not_null(get_base())).code; 
    }

#line 14485 "source/reflect.h2"
    alternative_token::alternative_token()
                            : regex_token_empty{ "" }{}

#line 14487 "source/reflect.h2"
    [[nodiscard]] auto alternative_token::parse(parse_context& ctx) -> token_ptr{
        if (ctx.current() != '|') {return nullptr; }

        if (!(ctx.has_token())) {return ctx.error("Alternative with no content."); }
        ctx.next_alternative();
        return CPP2_UFCS_TEMPLATE(cpp2_new<alternative_token>)(cpp2::shared); 
    }

    alternative_token::~alternative_token() noexcept{}

#line 14502 "source/reflect.h2"
    alternative_token_gen::alternative_token_gen(cpp2::impl::in<token_vec> a)
        : regex_token{ gen_string(a) }
        , alternatives{ a }{

#line 14505 "source/reflect.h2"
    }

#line 14507 "source/reflect.h2"
    auto alternative_token_gen::generate_code(generation_context& ctx) const -> void
    {
        std::string functions {""}; 

        for ( auto const& cur : alternatives ) {
            std::set<int> groups {}; 
            (*cpp2::impl::assert_not_null(cur)).add_groups(groups);

            functions += ", " + ctx.generate_func(cur);
            functions += ", " + ctx.generate_reset(cpp2::move(groups));
        }

        auto next_name {ctx.next_func_name()}; 

        ctx.add_statefull(next_name, "cpp2::regex::alternative_token_matcher<char>::match(" + cpp2::to_string(ctx.match_parameters()) + ", other, " + cpp2::to_string(next_name) + " " + cpp2::to_string(cpp2::move(functions)) + ")");
    }

#line 14524 "source/reflect.h2"
    auto alternative_token_gen::add_groups(std::set<int>& groups) const -> void
    {
        for ( auto const& cur : alternatives ) {
            (*cpp2::impl::assert_not_null(cur)).add_groups(groups);
        }
    }

#line 14531 "source/reflect.h2"
    [[nodiscard]] auto alternative_token_gen::gen_string(cpp2::impl::in<token_vec> a) -> std::string
    {
        std::string r {""}; 
        std::string sep {""}; 

        for ( auto const& cur : a ) {
            r += sep + (*cpp2::impl::assert_not_null(cur)).to_string();
            sep = "|";
        }

        return r; 
    }

#line 14544 "source/reflect.h2"
    [[nodiscard]] auto alternative_token_gen::reverse() const -> token_ptr{
        int s {cpp2::unchecked_narrow<int>(alternatives.size())}; 

        token_vec reverse_vec {}; 
        reverse_vec.resize(s);

        int i {0}; 
        for( ; cpp2::impl::cmp_less(i,s); (i += 1) ) {
            CPP2_ASSERT_IN_BOUNDS(reverse_vec, i) = CPP2_UFCS(reverse)((*cpp2::impl::assert_not_null(CPP2_ASSERT_IN_BOUNDS(alternatives, i))));// We only reverse the alternatives, not the order in which they are checked.
        }
        return CPP2_UFCS_TEMPLATE(cpp2_new<alternative_token_gen>)(cpp2::shared, cpp2::move(reverse_vec)); 
    }

    alternative_token_gen::~alternative_token_gen() noexcept{}

#line 14565 "source/reflect.h2"
    any_token::any_token(cpp2::impl::in<bool> single_line)
        : regex_token_check{ ".", "any_token_matcher<char, " + cpp2::to_string(single_line) + ">" }{

#line 14567 "source/reflect.h2"
    }

#line 14569 "source/reflect.h2"
    [[nodiscard]] auto any_token::parse(parse_context& ctx) -> token_ptr{
        if ('.' != ctx.current()) {return nullptr; }

        return CPP2_UFCS_TEMPLATE(cpp2_new<any_token>)(cpp2::shared, ctx.get_modifiers().has(expression_flags::single_line)); 
    }

    any_token::~any_token() noexcept{}

#line 14584 "source/reflect.h2"
    atomic_group_token::atomic_group_token()
                             : regex_token{ "" }{}

#line 14586 "source/reflect.h2"
    [[nodiscard]] auto atomic_group_token::reverse() const -> token_ptr{
        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<atomic_group_token>)(cpp2::shared)}; 
        (*cpp2::impl::assert_not_null(r)).inner_token = CPP2_UFCS(reverse)((*cpp2::impl::assert_not_null(inner_token)));

        return r; 
    }

#line 14593 "source/reflect.h2"
    auto atomic_group_token::generate_code(generation_context& ctx) const -> void
    {
        auto inner_name {ctx.generate_func(inner_token)}; 

        auto next_name {ctx.next_func_name()}; 
        ctx.add_statefull(next_name, "cpp2::regex::atomic_group_matcher<char>(" + cpp2::to_string(ctx.match_parameters()) + ", " + cpp2::to_string(cpp2::move(inner_name)) + ", other, " + cpp2::to_string(next_name) + ")");
    }

#line 14601 "source/reflect.h2"
    auto atomic_group_token::add_groups(std::set<int>& groups) const -> void{
        (*cpp2::impl::assert_not_null(inner_token)).add_groups(groups);
    }

    atomic_group_token::~atomic_group_token() noexcept{}

#line 14615 "source/reflect.h2"
    char_token::char_token(cpp2::impl::in<char> t, cpp2::impl::in<bool> ignore_case_)
        : regex_token{ std::string(1, t) }
        , token{ t }
        , ignore_case{ ignore_case_ }{

#line 14619 "source/reflect.h2"
    }

#line 14621 "source/reflect.h2"
    char_token::char_token(cpp2::impl::in<std::string> t, cpp2::impl::in<bool> ignore_case_)
        : regex_token{ t }
        , token{ t }
        , ignore_case{ ignore_case_ }{

#line 14625 "source/reflect.h2"
    }

#line 14627 "source/reflect.h2"
    [[nodiscard]] auto char_token::parse(parse_context& ctx) -> token_ptr{
        return CPP2_UFCS_TEMPLATE(cpp2_new<char_token>)(cpp2::shared, ctx.current(), ctx.get_modifiers().has(expression_flags::case_insensitive)); 
    }

#line 14631 "source/reflect.h2"
    auto char_token::generate_code(generation_context& ctx) const -> void
    {
        if (ignore_case) {
            std::string upper {token}; 
            std::string lower {token}; 
{
size_t i{0};

#line 14637 "source/reflect.h2"
            for( ; cpp2::impl::cmp_less(i,token.size()); i += 1 ) {
                CPP2_ASSERT_IN_BOUNDS(lower, i) = string_util::safe_tolower(CPP2_ASSERT_IN_BOUNDS(token, i));
                CPP2_ASSERT_IN_BOUNDS(upper, i) = string_util::safe_toupper(CPP2_ASSERT_IN_BOUNDS(token, i));
            }
}

#line 14642 "source/reflect.h2"
            if (upper != lower) {
                gen_case_insensitive(cpp2::move(lower), cpp2::move(upper), ctx);
            }
            else {
                gen_case_sensitive(ctx);
            }
        }
        else {
            gen_case_sensitive(ctx);
        }
    }

#line 14654 "source/reflect.h2"
    auto char_token::gen_case_insensitive(cpp2::impl::in<std::string> lower, cpp2::impl::in<std::string> upper, generation_context& ctx) const& -> void
    {
        std::string name {"str_" + cpp2::to_string(ctx.gen_temp()) + ""}; 
        std::string lower_name {"lower_" + cpp2::to_string(name) + ""}; 
        std::string upper_name {"upper_" + cpp2::to_string(cpp2::move(name)) + ""}; 
        auto size {token.size()}; 
        ctx.add("" + cpp2::to_string(lower_name) + " : std::array<char, " + cpp2::to_string(size) + " + 1> = \"" + cpp2::to_string(add_escapes(lower)) + "\";");  // TODO: Add constexpr when Issue https://github.com/hsutter/cppfront/issues/1104 is resolved.
        ctx.add("" + cpp2::to_string(upper_name) + " : std::array<char, " + cpp2::to_string(size) + " + 1> = \"" + cpp2::to_string(add_escapes(upper)) + "\";");  // TODO: Add constexpr when Issue https://github.com/hsutter/cppfront/issues/1104 is resolved.
        ctx.add("if std::distance(r.pos, ctx.end) < " + cpp2::to_string(size) + " {");
        ctx.add("    r.matched = false;");
        ctx.add("    break;");
        ctx.add("}");
        ctx.add("");
        ctx.add("(copy i : int = 0) while i < " + cpp2::to_string(size) + " next (i += 1) {");
        ctx.add("    if !(" + cpp2::to_string(cpp2::move(lower_name)) + "[i] == r.pos[i] || " + cpp2::to_string(cpp2::move(upper_name)) + "[i] == r.pos[i]) { r.matched = false; }");
        ctx.add("}");
        ctx.add("");
        ctx.add("if r.matched { r.pos += " + cpp2::to_string(cpp2::move(size)) + "; }");
        ctx.add("else { break; }");
    }

#line 14675 "source/reflect.h2"
    auto char_token::gen_case_sensitive(generation_context& ctx) const& -> void
    {
        std::string name {"str_" + cpp2::to_string(ctx.gen_temp()) + ""}; 
        auto size {token.size()}; 
        ctx.add("" + cpp2::to_string(name) + " : std::array<char, " + cpp2::to_string(size) + " + 1> = \"" + cpp2::to_string(add_escapes(token)) + "\";");  // TODO: Add constexpr when Issue https://github.com/hsutter/cppfront/issues/1104 is resolved.
        ctx.add("if std::distance(r.pos, ctx.end) < " + cpp2::to_string(size) + " {");
        ctx.add("    r.matched = false;");
        ctx.add("    break;");
        ctx.add("}");
        ctx.add("");
        ctx.add("(copy i : int = 0) while i < " + cpp2::to_string(size) + " next (i += 1) {");
        ctx.add("    if " + cpp2::to_string(cpp2::move(name)) + "[i] != r.pos[i] { r.matched = false; }");
        ctx.add("}");
        ctx.add("");
        ctx.add("if r.matched { r.pos += " + cpp2::to_string(cpp2::move(size)) + "; }");
        ctx.add("else { break; }");
    }

#line 14693 "source/reflect.h2"
    [[nodiscard]] auto char_token::add_escapes(std::string str) const& -> std::string
    {
        str = string_util::replace_all(str, "\\", "\\\\");
        str = string_util::replace_all(str, "\a", "\\a");
        str = string_util::replace_all(str, "\f", "\\f");
        str = string_util::replace_all(str, "\x1b", "\" \"\\x1b\" \""); // Generate a separated string. This prevents
                                                                        // situations like `\x1bblub` from generating
                                                                        // wrong hex characters.
        str = string_util::replace_all(str, "\n", "\\n");
        str = string_util::replace_all(str, "\r", "\\r");
        str = string_util::replace_all(str, "\t", "\\t");

        return cpp2::move(str); 
    }

#line 14708 "source/reflect.h2"
    [[nodiscard]] auto char_token::reverse() const -> token_ptr{
        std::string reverse_str {token}; 
        std::reverse(reverse_str.begin(), reverse_str.end());
        return CPP2_UFCS_TEMPLATE(cpp2_new<char_token>)(cpp2::shared, cpp2::move(reverse_str), ignore_case); 
    }

#line 14714 "source/reflect.h2"
    auto char_token::append(char_token const& that) & -> void{
        (*this).token += that.token;
        (*this).string_rep += that.string_rep;
    }

    char_token::~char_token() noexcept{}

#line 14731 "source/reflect.h2"
    class_token::class_token(cpp2::impl::in<bool> negate_, cpp2::impl::in<bool> case_insensitive_, cpp2::impl::in<std::string> class_str_, cpp2::impl::in<std::string> str)
        : regex_token{ str }
        , negate{ negate_ }
        , case_insensitive{ case_insensitive_ }
        , class_str{ class_str_ }
#line 14732 "source/reflect.h2"
    {

#line 14737 "source/reflect.h2"
    }

#line 14740 "source/reflect.h2"
    [[nodiscard]] auto class_token::parse(parse_context& ctx) -> token_ptr
    {
        if (ctx.current() != '[') {return nullptr; }

        auto start_pos {ctx.get_pos()}; 

        std::vector<std::string> supported_classes {"alnum", "alpha", "ascii", "blank", "cntrl", "digits", "graph", 
                                                       "lower", "print", "punct", "space", "upper", "word", "xdigit"}; 

        std::vector<std::string> classes {}; 

        //  First step: parse until the end bracket and push single chars, ranges or groups on the class stack.
        auto is_negate {false}; 
        auto first {true}; 
        auto range {false}; 
        while( ctx.next_in_class() && (ctx.current() != ']' || first) ) 
        {
            if (ctx.current() == '^') 
            {
                is_negate = true;
                continue; // Skip rest of the loop. Also the first update.
            }

            if (ctx.current() == '[' && ctx.peek_in_class() == ':') 
            {
                //  We have a character class.
                static_cast<void>(ctx.next_n(2));// Skip [:

                std::string name {""}; 
                if (!(ctx.grab_until(":]", cpp2::impl::out(&name)))) {return ctx.error("Could not find end of character class."); }
                if (supported_classes.end() == std::find(supported_classes.begin(), supported_classes.end(), name)) {
                    return ctx.error("Unsupported character class. Supported ones are: " + cpp2::to_string(string_util::join(supported_classes)) + ""); 
                }

                classes.push_back("[:" + cpp2::to_string(cpp2::move(name)) + ":]");

                static_cast<void>(ctx.next());// Skip ':' pointing to the ending ']'.
            }
            else {if (ctx.current() == '\\') 
            {
                if (ctx. next_no_skip()  && (ctx. current() != ']')) 
                {
                    if ( ' ' == ctx. current() 
                        && ctx.get_modifiers().has(expression_flags::perl_code_syntax) 
                        && ctx.get_modifiers().has(expression_flags::perl_code_syntax_in_classes)) 
                    {
                        classes.push_back(std::string(1, ctx.current()));
                    }
                    else {
                        auto name {""}; 
                        if (     'd' == ctx. current()) { name = "short_digits"; }
                        else {if ('D' == ctx.current()) {name = "short_not_digits"; }
                        else {if ('h' == ctx.current()) {name = "short_hor_space"; }
                        else {if ('H' == ctx.current()) {name = "short_not_hor_space"; }
                        else {if ('s' == ctx.current()) {name = "short_space"; }
                        else {if ('S' == ctx.current()) {name = "short_not_space"; }
                        else {if ('v' == ctx.current()) {name = "short_ver_space"; }
                        else {if ('V' == ctx.current()) {name = "short_not_ver_space"; }
                        else {if ('w' == ctx.current()) {name = "short_word"; }
                        else {if ('W' == ctx.current()) {name = "short_not_word"; }
                        else {
                            return ctx.error("Unknown group escape."); 
                        }}}}}}}}}}
                        classes.push_back("[:" + cpp2::to_string(cpp2::move(name)) + ":]");
                    }
                }else {
                    return ctx.error("Escape without a following character."); 
                }
            }
            else {if (ctx.current() == '-') 
            {
                if (first) {// Literal if first entry.
                    classes.push_back("" + cpp2::to_string(ctx.current()) + "");
                }else {
                    range = true;
                }
            }
            else 
            {
                if (range) {// Modify last element to be a range.
                    classes.back() += "-" + cpp2::to_string(ctx.current()) + "";
                    range = false;
                }
                else {
                    classes.push_back("" + cpp2::to_string(ctx.current()) + "");
                }
            }}}

            first = false;
        }

        if (ctx.current() != ']') {
            return ctx.error("Error end of character class definition before terminating ']'."); 
        }
        auto end_pos {ctx.get_pos()}; 

        if (cpp2::move(range)) {// If '-' is last entry treat it as a literal char.
            classes.push_back("-");
        }

        // Second step: Wrap the item on the class stack with corresponding class implementation.
        for ( auto& cur : classes ) 
        {
            if (cur.starts_with("[:")) {
                auto name {cur.substr(2, cur.size() - 4)}; 
                cur = create_matcher("" + cpp2::to_string(cpp2::move(name)) + "_class", "");
            }
            else {if (1 != cur.size()) {
                cur = create_matcher("range_class_entry", "'" + cpp2::to_string(CPP2_ASSERT_IN_BOUNDS_LITERAL(cur, 0)) + "', '" + cpp2::to_string(CPP2_ASSERT_IN_BOUNDS_LITERAL(cur, 2)) + "'");
            }
            else {
                cur = create_matcher("single_class_entry", "'" + cpp2::to_string(cur) + "'");
            }}
        }

        auto inner {string_util::join(cpp2::move(classes))}; 
        auto string_rep {ctx.get_range(cpp2::move(start_pos), cpp2::move(end_pos))}; 
        return CPP2_UFCS_TEMPLATE(cpp2_new<class_token>)(cpp2::shared, 
            cpp2::move(is_negate), 
            ctx.get_modifiers().has(expression_flags::case_insensitive), 
            cpp2::move(inner), 
            cpp2::move(string_rep)
            ); 
    }

#line 14865 "source/reflect.h2"
    [[nodiscard]] auto class_token::reverse() const -> token_ptr{
        return CPP2_UFCS_TEMPLATE(cpp2_new<class_token>)(cpp2::shared, 
            negate, 
            case_insensitive, 
            class_str, 
            to_string()
            ); 
    }

#line 14874 "source/reflect.h2"
    auto class_token::generate_code(generation_context& ctx) const -> void
    {
        ctx.add_check("class_token_matcher<char, " + cpp2::to_string(negate) + ", " + cpp2::to_string(case_insensitive) + ", " + cpp2::to_string(class_str) + ">::match(" + cpp2::to_string(ctx.match_parameters()) + ")");
    }

#line 14879 "source/reflect.h2"
    [[nodiscard]] auto class_token::create_matcher(cpp2::impl::in<std::string> name, cpp2::impl::in<std::string> template_arguments) -> std::string
    {
        auto sep {", "}; 
        if (template_arguments.empty()) {sep = ""; }

        return "::cpp2::regex::" + cpp2::to_string(name) + "<char" + cpp2::to_string(cpp2::move(sep)) + cpp2::to_string(template_arguments) + ">"; 
    }

    class_token::~class_token() noexcept{}

#line 14891 "source/reflect.h2"
[[nodiscard]] auto escape_token_parse(parse_context& ctx) -> token_ptr
{
    if (ctx.current() != '\\') {return nullptr; }

#line 14896 "source/reflect.h2"
    if (std::string::npos == std::string("afenrt^.[]()*{}?+|\\").find(ctx.peek())) {
        return nullptr; 
    }

    static_cast<void>(ctx.next());// Skip escape

    if (std::string::npos != std::string("afenrt\\").find(ctx.current())) 
    {
        // Escape of string special char
        char t {'\0'}; 
        if (     'a' == ctx. current()) { t = '\a'; }
        else {if ('f' == ctx.current()) {t = '\f'; }
        else {if ('e' == ctx.current()) {t = '\x1b'; }
        else {if ('n' == ctx.current()) {t = '\n'; }
        else {if ('r' == ctx.current()) {t = '\r'; }
        else {if ('t' == ctx.current()) {t = '\t'; }
        else {if ('\\' == ctx.current()) {t = '\\'; }
        else {return ctx.error("Internal: missing switch case for special escape."); }}}}}}}

        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<char_token>)(cpp2::shared, cpp2::move(t), false)}; 
        (*cpp2::impl::assert_not_null(r)).set_string("\\" + cpp2::to_string(ctx.current()) + "");
        return r; 
    }
    else 
    {
        // Escape of regex special char
        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<char_token>)(cpp2::shared, ctx.current(), false)}; 
        (*cpp2::impl::assert_not_null(r)).set_string("\\" + cpp2::to_string(ctx.current()) + "");
        return r; 
    }

}

#line 14932 "source/reflect.h2"
[[nodiscard]] auto global_group_reset_token_parse(parse_context& ctx) -> token_ptr
{
    if (!((ctx.current() == '\\' && ctx.peek() == 'K'))) {return nullptr; }

    static_cast<void>(ctx.next());// Skip escape.
    return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_code>)(cpp2::shared, "\\K", "ctx..set_group_start(0, r.pos);"); 
}

#line 14955 "source/reflect.h2"
    group_ref_token::group_ref_token(cpp2::impl::in<int> id_, cpp2::impl::in<bool> case_insensitive_, cpp2::impl::in<bool> reverse_, cpp2::impl::in<std::string> str)
        : regex_token{ str }
        , id{ id_ }
        , case_insensitive{ case_insensitive_ }
        , reverse_eval{ reverse_ }
#line 14956 "source/reflect.h2"
    {

#line 14961 "source/reflect.h2"
    }

#line 14963 "source/reflect.h2"
    [[nodiscard]] auto group_ref_token::parse(parse_context& ctx) -> token_ptr
    {
        if (ctx.current() != '\\') {return nullptr; }

        std::string str {"\\"}; 
        std::string group {""}; 

        if ([_0 = '0', _1 = ctx.peek(), _2 = '9']{ return cpp2::impl::cmp_less_eq(_0,_1) && cpp2::impl::cmp_less_eq(_1,_2); }()) 
        {
            static_cast<void>(ctx.next());// Skip escape
            group = ctx.grab_number();

            if (cpp2::impl::cmp_greater_eq(group.size(),cpp2::impl::as_<size_t, 3>())) 
            {
                // Octal syntax (\000) not a group ref matcher.
                auto number {0}; 
                if (!(string_util::string_to_int(group, number, 8))) {return ctx.error("Could not convert octal to int."); }

                char number_as_char {cpp2::unchecked_narrow<char>(cpp2::move(number))}; 

                auto token {CPP2_UFCS_TEMPLATE(cpp2_new<char_token>)(cpp2::shared, number_as_char, ctx.get_modifiers().has(expression_flags::case_insensitive))}; 
                (*cpp2::impl::assert_not_null(token)).set_string("\\" + cpp2::to_string(string_util::int_to_string<8>(cpp2::impl::as_<int>(cpp2::move(number_as_char)))) + "");

                return token; 
            }

            str += group;
            // Regular group ref
        }
        else {if ('g' == ctx.peek()) 
        {
            static_cast<void>(ctx.next());// Skip escape
            if (!(ctx.next())) {return ctx.error("Group escape without a following char."); }// Skip g

            str += "g";

            if (ctx.current() == '{') {
                str += "{";
                if (!((ctx.next() && ctx.grab_until('}', cpp2::impl::out(&group))))) {return ctx.error("No ending bracket."); }

                str += group + "}";
            }
            else {
                group = ctx.grab_number();
                str += group;
            }
        }
        else {if ('k' == ctx.peek()) 
        {
            static_cast<void>(ctx.next());// Skip escape
            if (!(ctx.next())) {return ctx.error("Group escape without a following char."); }// Skip k

            str += "k";

            auto term_char {'\0'}; 
            if (ctx.current() == '{') {term_char = '}'; }
            else {if (ctx.current() == '<') {term_char = '>'; }
            else {if (ctx.current() == '\'') {term_char = '\''; }
            else {
                return ctx.error("Group escape has wrong operator."); 
            }}}

            str += ctx.current();

            if (!((ctx.next() && ctx.grab_until(term_char, cpp2::impl::out(&group))))) {return ctx.error("No ending bracket."); }

            str += group + cpp2::move(term_char);
        }
        else 
        {
            // No group ref matcher
            return nullptr; 
        }}}

        // Parse the group
        group = string_util::trim_copy(group);
        int group_id {0}; 
        if (string_util::string_to_int(group, group_id)) 
        {
            if (cpp2::impl::cmp_less(group_id,0)) {
                group_id = ctx.get_cur_group() + group_id;

                if (cpp2::impl::cmp_less(group_id,1)) {// Negative and zero are no valid groups.
                    return ctx.error("Relative group reference does not reference a valid group. (Would be " + cpp2::to_string(group_id) + ".)"); 
                }
            }

            if (cpp2::impl::cmp_greater_eq(group_id,ctx.get_cur_group())) {
                return ctx.error("Group reference is used before the group is declared."); 
            }
        }
        else 
        {
            // Named group
            group_id = ctx.get_named_group(group);
            if (-1 == group_id) {return ctx.error("Group names does not exist. (Name is: " + cpp2::to_string(cpp2::move(group)) + ")"); }
        }

        return CPP2_UFCS_TEMPLATE(cpp2_new<group_ref_token>)(cpp2::shared, cpp2::move(group_id), ctx.get_modifiers().has(expression_flags::case_insensitive), false, cpp2::move(str)); 
    }

#line 15064 "source/reflect.h2"
    [[nodiscard]] auto group_ref_token::reverse() const -> token_ptr{
        return CPP2_UFCS_TEMPLATE(cpp2_new<group_ref_token>)(cpp2::shared, id, case_insensitive, !(reverse_eval), to_string()); 
    }

#line 15068 "source/reflect.h2"
    auto group_ref_token::generate_code(generation_context& ctx) const -> void{
        ctx.add_check("group_ref_token_matcher<char, " + cpp2::to_string(id) + ", " + cpp2::to_string(case_insensitive) + ", " + cpp2::to_string(reverse_eval) + ">(" + cpp2::to_string(ctx.match_parameters()) + ")");
    }

    group_ref_token::~group_ref_token() noexcept{}

#line 15092 "source/reflect.h2"
    [[nodiscard]] auto group_token::parse_lookahead_lookbehind(parse_context& ctx, cpp2::impl::in<std::string> syntax, cpp2::impl::in<bool> lookahead, cpp2::impl::in<bool> positive) -> token_ptr
    {
        static_cast<void>(ctx.next());// Skip last token defining the syntax

        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<lookahead_lookbehind_token>)(cpp2::shared, lookahead, positive)}; 

        auto old_state {ctx.start_group()}; 
        if (!(ctx.parse_until(')'))) {return ctx.error("Group without a closing bracket."); }
        (*cpp2::impl::assert_not_null(r)).inner = ctx.end_group(cpp2::move(old_state));
        (*cpp2::impl::assert_not_null(r)).set_string("(" + cpp2::to_string(syntax) + cpp2::to_string((*cpp2::impl::assert_not_null((*cpp2::impl::assert_not_null(r)).inner)).to_string()) + ")");

        if (!(lookahead)) {
            (*cpp2::impl::assert_not_null(r)).inner = (*cpp2::impl::assert_not_null((*cpp2::impl::assert_not_null(r)).inner)).reverse();
        }

        return r; 
    }

#line 15110 "source/reflect.h2"
    [[nodiscard]] auto group_token::parse_atomic_pattern(parse_context& ctx, cpp2::impl::in<std::string> syntax) -> token_ptr
    {
        static_cast<void>(ctx.next());// Skip last token defining the syntax

        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<atomic_group_token>)(cpp2::shared)}; 

        auto old_state {ctx.start_group()}; 
        if (!(ctx.parse_until(')'))) {return ctx.error("Group without a closing bracket."); }
        (*cpp2::impl::assert_not_null(r)).inner_token = ctx.end_group(cpp2::move(old_state));
        (*cpp2::impl::assert_not_null(r)).set_string("(" + cpp2::to_string(syntax) + cpp2::to_string((*cpp2::impl::assert_not_null((*cpp2::impl::assert_not_null(r)).inner_token)).to_string()) + ")");

        return r; 
    }

#line 15124 "source/reflect.h2"
    [[nodiscard]] auto group_token::parse(parse_context& ctx) -> token_ptr
    {
        if (ctx.current() != '(') {return nullptr; }

        auto has_id {!(ctx.get_modifiers().has(expression_flags::no_group_captures))}; 
        auto has_pattern {true}; 
        std::string group_name {""}; 
        auto group_name_brackets {true}; 
        std::string modifiers {""}; 
        auto modifiers_change_to {ctx.get_modifiers()}; 

        //  Skip the '('
        if (!(ctx.next())) {return ctx.error("Group without closing bracket."); }

        if (ctx.current() == '?') 
        {
            //  Special group
            if (!(ctx.next_no_skip())) {return ctx.error("Missing character after group opening."); }

            if ( CPP2_UFCS(current)(ctx) == '<' && (CPP2_UFCS(peek)(ctx) == '=' || CPP2_UFCS(peek)(ctx) == '!')) 
            {
                // Lookbehind
                static_cast<void>(CPP2_UFCS(next)(ctx));// Skip the '<'

                return parse_lookahead_lookbehind(ctx, "?<" + cpp2::to_string(ctx.current()) + "", false, ctx.current() == '='); 
            }
            else {if (ctx.current() == '<' || ctx.current() == '\'') 
            {
                //  Named group
                auto end_char {ctx.current()}; 
                if (end_char == '<') {
                    end_char = '>';
                }else {
                    group_name_brackets = false;
                }
                has_id = true; // Force id for named groups.
                if (!(ctx.next()))            { return ctx. error("Missing ending bracket for named group.");  }/* skip '<' */
                if (!(ctx.grab_until(cpp2::move(end_char), cpp2::impl::out(&group_name)))) {return ctx.error("Missing ending bracket for named group."); }
                if (!(ctx.next())) {return ctx.error("Group without closing bracket."); }
            }
            else {if (ctx.current() == '#') 
            {
                //  Comment
                std::string comment_str {""}; 
                static_cast<void>(ctx.next());// Skip #
                if (!(ctx.grab_until(")", cpp2::impl::out(&comment_str)))) {return ctx.error("Group without closing bracket."); }
                //  Do not add comment. Has problems with ranges.

                //  Pop token and add a list. This fixes comments between a token and a range
                if (ctx.has_token()) {
                    token_vec list {}; 
                    list.push_back(ctx.pop_token());
                    list.push_back(CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_empty>)(cpp2::shared, "(?#" + cpp2::to_string(cpp2::move(comment_str)) + ")"));

                    return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_list>)(cpp2::shared, cpp2::move(list)); 
                }
                else {
                    return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_empty>)(cpp2::shared, "(?#" + cpp2::to_string(cpp2::move(comment_str)) + ")"); 
                }
            }
            else {if (ctx.current() == '|') 
            {
                //  Branch reset group

                if (!(ctx.next()))            { return ctx. error("Missing ending bracket for named group.");  }/* skip '|' */

                auto old_parser_state {ctx.start_group()}; 
                auto old_branch_state {ctx.branch_reset_new_state()}; 
                if (!(ctx.parse_until(')'))) {return nullptr; }
                ctx.branch_reset_restore_state(cpp2::move(old_branch_state));
                auto inner_ {ctx.end_group(cpp2::move(old_parser_state))}; 

                token_vec list {CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_empty>)(cpp2::shared, "(?|"), cpp2::move(inner_), CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_empty>)(cpp2::shared, ")")}; 
                return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_list>)(cpp2::shared, cpp2::move(list)); 
            }
            else {if (ctx.current() == '=' || ctx.current() == '!') 
            {
                // Lookahead
                return parse_lookahead_lookbehind(ctx, "?" + cpp2::to_string(ctx.current()) + "", true, ctx.current() == '='); 
            }
            else {if (ctx.current() == '>') 
            {
                // Atomic pattern
                return parse_atomic_pattern(ctx, "?" + cpp2::to_string(ctx.current()) + ""); 
            }
            else 
            {
                //  Simple modifier
                has_id = false;
                if (!(ctx.grab_until_one_of("):", cpp2::impl::out(&modifiers)))) {return ctx.error("Missing ending bracket for group."); }
                if (!(ctx.parser_group_modifiers(modifiers, modifiers_change_to))) {
                     return nullptr; 
                }

                if (')' == ctx.current()) {
                    has_pattern = false;
                }
                else {
                    if (!(ctx.next()))            { return ctx. error("Missing ending bracket for group.");  }/* skip ':' */
                }
            }}}}}}
        }
        else {if (ctx.current() == '*') 
        {
            //  Named pattern
            static_cast<void>(ctx.next());// Skip *.
            std::string name {""}; 
            if (!(ctx.grab_until(':', cpp2::impl::out(&name)))) {return ctx.error("Missing colon for named pattern."); }

            if (name == "pla" || name == "positive_lookahead") {
                return parse_lookahead_lookbehind(ctx, "*" + cpp2::to_string(cpp2::move(name)) + ":", true, true); 
            }
            else {if (name == "nla" || name == "negative_lookahead") {
                return parse_lookahead_lookbehind(ctx, "*" + cpp2::to_string(cpp2::move(name)) + ":", true, false); 
            }
            else {if (name == "plb" || name == "positive_lookbehind") {
                return parse_lookahead_lookbehind(ctx, "*" + cpp2::to_string(cpp2::move(name)) + ":", false, true); 
            }
            else {if (name == "nlb" || name == "negative_lookbehind") {
                return parse_lookahead_lookbehind(ctx, "*" + cpp2::to_string(cpp2::move(name)) + ":", false, false); 
            }
            else {if (name == "atomic") {
                return parse_atomic_pattern(ctx, "*" + cpp2::to_string(cpp2::move(name)) + ":"); 
            }
            else {
                return ctx.error("Unknown named group pattern: '" + cpp2::to_string(cpp2::move(name)) + "'"); 
            }}}}}
        }}

        if (cpp2::move(has_pattern)) 
        {
            //  Regular group

            auto r {CPP2_UFCS_TEMPLATE(cpp2_new<group_token>)(cpp2::shared)}; 
            if (has_id) {
                (*cpp2::impl::assert_not_null(r)).number = ctx.next_group();

                if (0 != group_name.size()) {
                    ctx.set_named_group(group_name, (*cpp2::impl::assert_not_null(r)).number);
                }
            }

            auto old_state {ctx.start_group()}; 
            ctx.set_modifiers(cpp2::move(modifiers_change_to));
            if (!(ctx.parse_until(')'))) {return nullptr; }
            (*cpp2::impl::assert_not_null(r)).inner = ctx.end_group(cpp2::move(old_state));
            (*cpp2::impl::assert_not_null(r)).set_string(gen_string(cpp2::move(group_name), cpp2::move(group_name_brackets), !(cpp2::move(has_id)), cpp2::move(modifiers), (*cpp2::impl::assert_not_null(r)).inner));

            return r; 
        }
        else 
        {
            //  Only a modifier
            ctx.set_modifiers(cpp2::move(modifiers_change_to));

            return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_empty>)(cpp2::shared, "(?" + cpp2::to_string(cpp2::move(modifiers)) + ")"); 
        }
    }

#line 15283 "source/reflect.h2"
    [[nodiscard]] auto group_token::reverse() const -> token_ptr{
        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<group_token>)(cpp2::shared)}; 
        (*cpp2::impl::assert_not_null(r)).number = number;
        (*cpp2::impl::assert_not_null(r)).reverse_eval = !(reverse_eval);
        (*cpp2::impl::assert_not_null(r)).inner = CPP2_UFCS(reverse)((*cpp2::impl::assert_not_null(inner)));
        return r; 
    }

#line 15291 "source/reflect.h2"
    [[nodiscard]] auto group_token::gen_string(cpp2::impl::in<std::string> name, cpp2::impl::in<bool> name_brackets, cpp2::impl::in<bool> has_modifier, cpp2::impl::in<std::string> modifiers, cpp2::impl::in<token_ptr> inner_) -> std::string
    {
        std::string start {"("}; 
        if (0 != name.size()) {
            if (name_brackets) {
                start += "?<" + cpp2::to_string(name.data()) + ">";
            }
            else {
                start += "?'" + cpp2::to_string(name.data()) + "'";
            }
        }
        else {if (has_modifier) {
            start += "?" + modifiers + ":";
        }}

        return cpp2::move(start) + (*cpp2::impl::assert_not_null(inner_)).to_string() + ")"; 
    }

#line 15309 "source/reflect.h2"
    auto group_token::generate_code(generation_context& ctx) const -> void
    {
        if (-1 != number) {
            if (reverse_eval) {
                ctx.add("ctx..set_group_end(" + cpp2::to_string(number) + ", r.pos);");
            }
            else {
                ctx.add("ctx..set_group_start(" + cpp2::to_string(number) + ", r.pos);");
            }
        }

        (*cpp2::impl::assert_not_null(inner)).generate_code(ctx);
        if (-1 != number) {
            if (reverse_eval) {
                ctx.add("ctx..set_group_start(" + cpp2::to_string(number) + ", r.pos);");
            }
            else {
                ctx.add("ctx..set_group_end(" + cpp2::to_string(number) + ", r.pos);");
            }

            auto tmp_name {ctx.gen_temp()}; 
            ctx.add("" + cpp2::to_string(tmp_name) + "_func :=  :() = {");
            ctx.add("  if !r&$*.matched {");
            ctx.add("    ctx&$*..set_group_invalid(" + cpp2::to_string(number) + ");");
            ctx.add("  }");
            ctx.add("};");
            ctx.add("" + cpp2::to_string(tmp_name) + " :=  cpp2::regex::make_on_return(" + cpp2::to_string(tmp_name) + "_func);");
            ctx.add("_ = " + cpp2::to_string(cpp2::move(tmp_name)) + ";");// Logic is done in the destructor. Same behavior as for guard objects.
        }
    }

#line 15340 "source/reflect.h2"
    auto group_token::add_groups(std::set<int>& groups) const -> void
    {
        (*cpp2::impl::assert_not_null(inner)).add_groups(groups);
        if (-1 != number) {
            static_cast<void>(groups.insert(number));
        }
    }

    group_token::~group_token() noexcept{}

#line 15352 "source/reflect.h2"
[[nodiscard]] auto hexadecimal_token_parse(parse_context& ctx) -> token_ptr
{
    if (!((ctx.current() == '\\' && ctx.peek() == 'x'))) {return nullptr; }

    static_cast<void>(ctx.next());// Skip escape.

    if (!(ctx.next())) {return ctx.error("x escape without number."); }

    auto has_brackets {false}; 
    std::string number_str {""}; 
    if ('{' == ctx.current()) {
        //  Bracketed
        has_brackets = true;
        static_cast<void>(ctx.next());// Skip '{'
        if (!(ctx.grab_until('}', cpp2::impl::out(&number_str)))) {return ctx.error("No ending bracket for \\x"); }
    }
    else {
        //  Grab two chars
        if (!(ctx.grab_n(2, cpp2::impl::out(&number_str)))) {return ctx.error("Missing hexadecimal digits after \\x."); }
    }

    auto number {0}; 
    if (!(string_util::string_to_int(cpp2::move(number_str), number, 16))) {return ctx.error("Could not convert hexadecimal to int."); }

    // TODO: Change for unicode.
    char number_as_char {cpp2::unchecked_narrow<char>(cpp2::move(number))}; 

    std::string syntax {string_util::int_to_string<16>(cpp2::impl::as_<int>(number_as_char))}; 
    if (cpp2::move(has_brackets)) {
        syntax = "{" + cpp2::to_string(syntax) + "}";
    }
    syntax = "\\x" + cpp2::to_string(syntax) + "";

    auto r {CPP2_UFCS_TEMPLATE(cpp2_new<char_token>)(cpp2::shared, cpp2::move(number_as_char), ctx.get_modifiers().has(expression_flags::case_insensitive))}; 
    (*cpp2::impl::assert_not_null(r)).set_string(cpp2::move(syntax));
    return r; 
}

#line 15393 "source/reflect.h2"
[[nodiscard]] auto line_end_token_parse(parse_context& ctx) -> token_ptr
{
    if (ctx.current() == '$' || (ctx.current() == '\\' && ctx.peek() == '$')) {
        if ((ctx.current() == '\\')) {static_cast<void>(ctx.next()); }// Skip escape
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, "$", "line_end_token_matcher<char, " + cpp2::to_string(ctx.get_modifiers().has(expression_flags::multiple_lines)) + ", true>"); 
    }
    else {if (ctx.current() == '\\' && (ctx.peek() == 'z' || ctx.peek() == 'Z')) {
        static_cast<void>(ctx.next());// Skip escape

        auto negate {ctx.current() == 'Z'}; 
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, "\\" + cpp2::to_string(ctx.current()) + "", "line_end_token_matcher<char, false, " + cpp2::to_string(cpp2::move(negate)) + ">"); 
    }
    else {
        return nullptr; 
    }}
}

#line 15413 "source/reflect.h2"
[[nodiscard]] auto line_start_token_parse(parse_context& ctx) -> token_ptr
{
    if (ctx.current() != '^' && !((ctx.current() == '\\' && ctx.peek() == 'A'))) {return nullptr; }

    if (ctx.current() == '\\') {
        static_cast<void>(ctx.next());
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, "\\A", "line_start_token_matcher<char, false>"); 
    }
    else {
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, "^", "line_start_token_matcher<char, " + cpp2::to_string(ctx.get_modifiers().has(expression_flags::multiple_lines)) + ">"); 
    }
}

#line 15439 "source/reflect.h2"
    lookahead_lookbehind_token::lookahead_lookbehind_token(cpp2::impl::in<bool> lookahead_, cpp2::impl::in<bool> positive_)
        : regex_token{ "" }
        , lookahead{ lookahead_ }
        , positive{ positive_ }{

#line 15442 "source/reflect.h2"
    }

#line 15444 "source/reflect.h2"
    auto lookahead_lookbehind_token::generate_code(generation_context& ctx) const -> void{
        auto inner_name {ctx.generate_func(inner)}; 

        if (lookahead) {
            ctx.add_check("lookahead_token_matcher<char, " + cpp2::to_string(positive) + ">(" + cpp2::to_string(ctx.match_parameters()) + ", " + cpp2::to_string(cpp2::move(inner_name)) + ")");
        }
        else {
            ctx.add_check("lookbehind_token_matcher<char, " + cpp2::to_string(positive) + ">(" + cpp2::to_string(ctx.match_parameters()) + ", " + cpp2::to_string(cpp2::move(inner_name)) + ")");
        }
    }

#line 15455 "source/reflect.h2"
    [[nodiscard]] auto lookahead_lookbehind_token::reverse() const -> token_ptr{
        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<lookahead_lookbehind_token>)(cpp2::shared, lookahead, positive)}; 
        (*cpp2::impl::assert_not_null(r)).inner = inner;// We do not reverse here. Nested lookahead and lookbehind stay as they are.

        return r; 
    }

#line 15462 "source/reflect.h2"
    auto lookahead_lookbehind_token::add_groups(std::set<int>& groups) const -> void{
        (*cpp2::impl::assert_not_null(inner)).add_groups(groups);
    }

    lookahead_lookbehind_token::~lookahead_lookbehind_token() noexcept{}

#line 15470 "source/reflect.h2"
[[nodiscard]] auto named_class_token_parse(parse_context& ctx) -> token_ptr
{
    if (ctx.current() != '\\') {return nullptr; }

    auto name {""}; 
    auto c_next {ctx.peek()}; 

    if (     'd' == c_next) { name = "named_class_digits"; }
    else {if ('D' == c_next) {name = "named_class_not_digits"; }
    else {if ('h' == c_next) {name = "named_class_hor_space"; }
    else {if ('H' == c_next) {name = "named_class_not_hor_space"; }
    else {if ('N' == c_next) {name = "named_class_no_new_line"; }
    else {if ('s' == c_next) {name = "named_class_space"; }
    else {if ('S' == c_next) {name = "named_class_not_space"; }
    else {if ('v' == c_next) {name = "named_class_ver_space"; }
    else {if ('V' == c_next) {name = "named_class_not_ver_space"; }
    else {if ('w' == c_next) {name = "named_class_word"; }
    else {if ('W' == cpp2::move(c_next)) {name = "named_class_not_word"; }
    else                  { return nullptr; }}}}}}}}}}}

    static_cast<void>(ctx.next());// Skip escape

    return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, "\\" + cpp2::to_string(ctx.current()) + "", "" + cpp2::to_string(cpp2::move(name)) + "<char, " + cpp2::to_string(ctx.get_modifiers().has(expression_flags::case_insensitive)) + ">::match"); 
}

#line 15498 "source/reflect.h2"
[[nodiscard]] auto octal_token_parse(parse_context& ctx) -> token_ptr
{
    if (!((ctx.current() == '\\' && ctx.peek() == 'o'))) {return nullptr; }

    static_cast<void>(ctx.next());// Skip escape.

    if (!(ctx.next()))      { return ctx. error("o escape without number."); }
    if (ctx.current() != '{') {return ctx.error("Missing opening bracket for \\o."); }

    std::string number_str {""}; 
    static_cast<void>(ctx.next());// Skip '{'
    if (!(ctx.grab_until('}', cpp2::impl::out(&number_str)))) {return ctx.error("No ending bracket for \\o"); }

    auto number {0}; 
    if (!(string_util::string_to_int(cpp2::move(number_str), number, 8))) {return ctx.error("Could not convert octal to int."); }

    // TODO: Change for unicode.
    char number_as_char {cpp2::unchecked_narrow<char>(cpp2::move(number))}; 

    std::string syntax {"\\o{" + cpp2::to_string(string_util::int_to_string<8>(cpp2::impl::as_<int>(number_as_char))) + "}"}; 
    auto r {CPP2_UFCS_TEMPLATE(cpp2_new<char_token>)(cpp2::shared, cpp2::move(number_as_char), ctx.get_modifiers().has(expression_flags::case_insensitive))}; 
    (*cpp2::impl::assert_not_null(r)).set_string(cpp2::move(syntax));
    return r; 
}

#line 15535 "source/reflect.h2"
    range_token::range_token()
                             : regex_token{ "" }{}

#line 15537 "source/reflect.h2"
    [[nodiscard]] auto range_token::parse(parse_context& ctx) -> token_ptr
    {
        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<range_token>)(cpp2::shared)}; 
        if (ctx.current() == '{') 
        {
            if (!(ctx.has_token())) {return ctx.error("'{' without previous element."); }

            std::string inner {""}; 
            if (!(ctx.grab_until('}', cpp2::impl::out(&inner)))) {return ctx.error("Missing closing bracket '}'."); }

            inner = string_util::trim_copy(inner.substr(1));  // Remove '{' and white spaces.
            if (inner.empty()) {return ctx.error("Empty range specifier. Either '{n}', '{n,}', '{,m}' '{n,m}'"); }

            // Non-greedy or possessive
            (*cpp2::impl::assert_not_null(r)).parse_modifier(ctx);

            // Get range arguments
            std::string min_count_str {"-1"}; 
            std::string max_count_str {"-1"}; 

            size_t sep {inner.find(',')}; 
            if (sep == std::string::npos) 
            {
                min_count_str = inner;
                max_count_str = inner;
                if (!(string_util::string_to_int(cpp2::move(inner), (*cpp2::impl::assert_not_null(r)).min_count))) {return ctx.error("Could not convert range to number."); }
                (*cpp2::impl::assert_not_null(r)).max_count = (*cpp2::impl::assert_not_null(r)).min_count;
            }
            else 
            {
                std::string inner_first {string_util::trim_copy(inner.substr(0, sep))}; 
                std::string inner_last {string_util::trim_copy(cpp2::move(inner).substr(cpp2::move(sep) + 1))}; 

                if ((inner_first.empty() && inner_last.empty())) {
                    return ctx.error("Empty range specifier. Either '{n}', '{n,}', '{,m}' '{n,m}'"); 
                }

                if (!(inner_first.empty())) {
                    min_count_str = inner_first;
                    if (!(string_util::string_to_int(cpp2::move(inner_first), (*cpp2::impl::assert_not_null(r)).min_count))) {return ctx.error("Could not convert range to number."); }
                }
                if (!(inner_last.empty())) {
                    max_count_str = inner_last;
                    if (!(string_util::string_to_int(cpp2::move(inner_last), (*cpp2::impl::assert_not_null(r)).max_count))) {return ctx.error("Could not convert range to number."); }
                }
            }

            // Check validity of the range.
            if (-1 != (*cpp2::impl::assert_not_null(r)).min_count) {
                if (!((cpp2::impl::cmp_less_eq(0,(*cpp2::impl::assert_not_null(r)).min_count)))) {
                    return ctx.error("Min value in range is negative. Have " + cpp2::to_string((*cpp2::impl::assert_not_null(r)).min_count) + ")"); 
                }
            }
            if (-1 != (*cpp2::impl::assert_not_null(r)).max_count) {
                if (!((cpp2::impl::cmp_less_eq(0,(*cpp2::impl::assert_not_null(r)).max_count)))) {
                    return ctx.error("Max value in range is negative. Have " + cpp2::to_string((*cpp2::impl::assert_not_null(r)).max_count) + ")"); 
                }
                if (-1 != (*cpp2::impl::assert_not_null(r)).min_count) {
                    if (!((cpp2::impl::cmp_less_eq((*cpp2::impl::assert_not_null(r)).min_count,(*cpp2::impl::assert_not_null(r)).max_count)))) {
                        return ctx.error("Min and max values in range are wrong it should hold 0 <= min <= max. Have 0 <= " + cpp2::to_string((*cpp2::impl::assert_not_null(r)).min_count) + " <= " + cpp2::to_string((*cpp2::impl::assert_not_null(r)).max_count) + ""); 
                    }
                }
            }

            (*cpp2::impl::assert_not_null(r)).inner_token = ctx.pop_token();
            (*cpp2::impl::assert_not_null(r)).string_rep = (*cpp2::impl::assert_not_null((*cpp2::impl::assert_not_null(r)).inner_token)).to_string() + (*cpp2::impl::assert_not_null(r)).gen_range_string() + (*cpp2::impl::assert_not_null(r)).gen_mod_string();

            return r; 
        }

        return nullptr; 
    }

#line 15610 "source/reflect.h2"
    auto range_token::parse_modifier(parse_context& ctx) & -> void
    {
        if (ctx.peek() == '?') {
            kind = range_flags::not_greedy;
            static_cast<void>(ctx.next());
        }
        else {if (ctx.peek() == '+') {
            kind = range_flags::possessive;
            static_cast<void>(ctx.next());
        }}
    }

#line 15622 "source/reflect.h2"
    [[nodiscard]] auto range_token::gen_mod_string() const& -> std::string
    {
        if (kind == range_flags::not_greedy) {
            return "?"; 
        }
        else {if (kind == range_flags::possessive) {
            return "+"; 
        }
        else {
            return ""; 
        }}
    }

#line 15635 "source/reflect.h2"
    [[nodiscard]] auto range_token::gen_range_string() const& -> std::string
    {
        std::string r {""}; 
        if (min_count == max_count) {
            r += "{" + cpp2::to_string(min_count) + "}";
        }
        else {if (min_count == -1) {
            r += "{," + cpp2::to_string(max_count) + "}";
        }
        else {if (max_count == -1) {
            r += "{" + cpp2::to_string(min_count) + ",}";
        }
        else {
            r += "{" + cpp2::to_string(min_count) + "," + cpp2::to_string(max_count) + "}";
        }}}

        return r; 
    }

#line 15654 "source/reflect.h2"
    [[nodiscard]] auto range_token::reverse() const -> token_ptr{
        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<range_token>)(cpp2::shared)}; 
        (*cpp2::impl::assert_not_null(r)).min_count = min_count;
        (*cpp2::impl::assert_not_null(r)).max_count = max_count;
        (*cpp2::impl::assert_not_null(r)).kind = kind;
        (*cpp2::impl::assert_not_null(r)).inner_token = CPP2_UFCS(reverse)((*cpp2::impl::assert_not_null(inner_token)));

        return r; 
    }

#line 15664 "source/reflect.h2"
    auto range_token::generate_code(generation_context& ctx) const -> void
    {
        auto inner_name {ctx.generate_func(inner_token)}; 
        std::set<int> groups {}; 
        (*cpp2::impl::assert_not_null(inner_token)).add_groups(groups);
        auto reset_name {ctx.generate_reset(cpp2::move(groups))}; 

        auto next_name {ctx.next_func_name()}; 
        ctx.add_statefull(next_name, "cpp2::regex::range_token_matcher<char, " + cpp2::to_string(min_count) + ", " + cpp2::to_string(max_count) + ", " + cpp2::to_string(kind) + ">::match(" + cpp2::to_string(ctx.match_parameters()) + ", " + cpp2::to_string(cpp2::move(inner_name)) + ", " + cpp2::to_string(cpp2::move(reset_name)) + ", other, " + cpp2::to_string(next_name) + ")");
    }

#line 15675 "source/reflect.h2"
    auto range_token::add_groups(std::set<int>& groups) const -> void{
        (*cpp2::impl::assert_not_null(inner_token)).add_groups(groups);
    }

    range_token::~range_token() noexcept{}

#line 15687 "source/reflect.h2"
    [[nodiscard]] auto special_range_token::parse(parse_context& ctx) -> token_ptr
    {
        auto r {CPP2_UFCS_TEMPLATE(cpp2_new<special_range_token>)(cpp2::shared)}; 
        char symbol {'\0'}; 
        if (ctx.current() == '*') {
            (*cpp2::impl::assert_not_null(r)).min_count = 0;
            (*cpp2::impl::assert_not_null(r)).max_count = -1;
            symbol = '*';
        }
        else {if (ctx.current() == '+') {
            (*cpp2::impl::assert_not_null(r)).min_count = 1;
            (*cpp2::impl::assert_not_null(r)).max_count = -1;
            symbol = '+';
        }else {if (ctx.current() == '?') {
            (*cpp2::impl::assert_not_null(r)).min_count = 0;
            (*cpp2::impl::assert_not_null(r)).max_count = 1;
            symbol = '?';
        }else {
            return nullptr; 
        }}}

        if (!(ctx.has_token())) {return ctx.error("'" + cpp2::to_string(ctx.current()) + "' without previous element."); }

#line 15711 "source/reflect.h2"
        (*cpp2::impl::assert_not_null(r)).parse_modifier(ctx);

        (*cpp2::impl::assert_not_null(r)).inner_token = ctx.pop_token();
        (*cpp2::impl::assert_not_null(r)).string_rep = (*cpp2::impl::assert_not_null((*cpp2::impl::assert_not_null(r)).inner_token)).to_string() + cpp2::move(symbol) + (*cpp2::impl::assert_not_null(r)).gen_mod_string();
        return r; 
    }

    special_range_token::~special_range_token() noexcept{}

#line 15723 "source/reflect.h2"
[[nodiscard]] auto start_match_parse(parse_context& ctx) -> token_ptr
{
    if (ctx.current() != '\\') {return nullptr; }

    if (ctx.peek() == 'G') {
        if (0 != ctx.get_pos()) {return ctx.error("\\G is only supported at the first position in the regex."); }
        static_cast<void>(ctx.next());
        ctx.is_start_match = true;
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_empty>)(cpp2::shared, "\\G"); 
    }
    else {
        return nullptr; 
    }
}

#line 15743 "source/reflect.h2"
[[nodiscard]] auto word_boundary_token_parse(parse_context& ctx) -> token_ptr
{
    if (ctx.current() != '\\') {return nullptr; }

    if (ctx.peek() == 'b') {
        static_cast<void>(ctx.next());
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, "\\b", "word_boundary_token_matcher<char, false>"); 
    }
    else {if (ctx.peek() == 'B') {
        static_cast<void>(ctx.next());
        return CPP2_UFCS_TEMPLATE(cpp2_new<regex_token_check>)(cpp2::shared, "\\B", "word_boundary_token_matcher<char, true>"); 
    }
    else {
        return nullptr; 
    }}
}

#line 15779 "source/reflect.h2"
    template <typename Error_out> regex_generator<Error_out>::regex_generator(cpp2::impl::in<std::string_view> r, Error_out const& e)
        : regex{ r }
        , error_out{ e }{

#line 15782 "source/reflect.h2"
    }

#line 15784 "source/reflect.h2"
    template <typename Error_out> [[nodiscard]] auto regex_generator<Error_out>::parse() & -> std::string
    {
        // Extract modifiers and adapt regex.
        extract_modifiers();

        parse_context parse_ctx {regex, error_out}; 
        if (!(parse_ctx.parse(modifier))) {
            return ""; 
        }

        source += "{\n";
        source += "  context: <Iter> type == cpp2::regex::match_context<CharT, Iter, " + cpp2::to_string(parse_ctx.get_cur_group()) + ">;";

        generation_context gen_ctx {}; 
        source += gen_ctx.run(parse_ctx.get_as_token());
        source += "  entry: <Iter> (cur: Iter, inout ctx: context<Iter>) -> cpp2::regex::match_return<Iter> = {\n";
        source += "    ctx..set_group_start(0, cur);\n";
        source += "    r := " + cpp2::to_string(gen_ctx.get_entry_func()) + "(cur, ctx, cpp2::regex::true_end_func());\n";
        source += "    if r.matched { ctx..set_group_end(0, r.pos); }\n";
        source += "    return r;\n";
        source += "  }\n";

        source += cpp2::move(gen_ctx).create_named_group_lookup(parse_ctx.named_groups);
        source += "  is_start_match: () -> bool == " + cpp2::to_string(parse_ctx.is_start_match) + ";";

        auto string {(*cpp2::impl::assert_not_null(parse_ctx.get_as_token())).to_string()}; 
        source += "  to_string: () -> std::string = { return R\"(" + cpp2::to_string(modifier_escape) + cpp2::to_string(cpp2::move(string)) + cpp2::to_string(modifier_escape) + cpp2::to_string(modifier) + ")\"; }\n";

        source += "}\n";

        static_cast<void>(cpp2::move(parse_ctx));

        return source; 
    }

#line 15819 "source/reflect.h2"
    template <typename Error_out> auto regex_generator<Error_out>::extract_modifiers() & -> void
    {
        if (regex.find_first_of("'/") == 0) {
            char mod_token {CPP2_ASSERT_IN_BOUNDS_LITERAL(regex, 0)}; 

            auto end_pos {regex.rfind(mod_token)}; 
            if (end_pos != 0) {
                // Found valid start end escape
                modifier = regex.substr(end_pos + 1);
                modifier_escape = cpp2::move(mod_token);
                regex = regex.substr(1, cpp2::move(end_pos) - 1);
            }
        }
    }

#line 15835 "source/reflect.h2"
template<typename Err> [[nodiscard]] auto generate_regex(cpp2::impl::in<std::string_view> regex, Err const& err) -> std::string
{
    regex_generator<Err> parser {regex, err}; 
    auto r {parser.parse()}; 
    static_cast<void>(cpp2::move(parser));
    return r; 
}

#line 15845 "source/reflect.h2"
auto regex_gen(meta::type_declaration& t) -> void
{
    auto has_default {false}; 
    auto exact_name {"regex"}; 
    auto prefix {"regex_"}; 
    std::map<std::string,std::string> expressions {}; 

    for ( auto& m : CPP2_UFCS(get_member_objects)(t) ) 
    {
        std::string name {CPP2_UFCS(name)(m)}; 

        if (CPP2_UFCS(starts_with)(name, prefix) || name == exact_name) 
        {
            if (!(CPP2_UFCS(has_initializer)(m))) {
                CPP2_UFCS(error)(t, "Regular expression must have an initializer.");
            }
            CPP2_UFCS(mark_for_removal_from_enclosing_type)(m);

            if (name == exact_name) {
                if (has_default) {
                    CPP2_UFCS(error)(t, "Type can only contain one default named regular expression.");
                }
                has_default = true;
            }

            std::string expr {CPP2_UFCS(initializer)(m)}; 
            if (CPP2_UFCS(starts_with)(expr, "R\"(") && CPP2_UFCS(ends_with)(expr, ")\"")) {
                expr = CPP2_UFCS(substr)(expr, 3, CPP2_UFCS(size)(expr) - 5);
            }
            else {if (string_util::is_escaped(expr)) {
                expr = CPP2_UFCS(substr)(expr, 1, CPP2_UFCS(size)(expr) - 2);
            }
            else {
                CPP2_UFCS(error)(t, "Unknown string format '" + cpp2::to_string(expr) + "'");
            }}

            CPP2_ASSERT_IN_BOUNDS(expressions, name) = cpp2::move(expr);
        }
    }

    CPP2_UFCS(remove_marked_members)(t);

    for ( auto const& expr : cpp2::move(expressions) ) {
        auto regular_expression {generate_regex(expr.second, [_0 = t](auto const& message) mutable -> decltype(auto) { return CPP2_UFCS(error)(_0, message);  })}; 

        if (!(regular_expression.empty())) {
            CPP2_UFCS(add_member)(t, "public " + cpp2::to_string(expr.first) + "_matcher: <CharT> type = " + cpp2::to_string(cpp2::move(regular_expression)) + "");
            CPP2_UFCS(add_member)(t, "public " + cpp2::to_string(expr.first) + ": cpp2::regex::regular_expression<char, " + cpp2::to_string(expr.first) + "_matcher<char>> = ();\n");
        }
    }

    CPP2_UFCS(add_runtime_support_include)(t, "cpp2regex.h");
}

#line 15904 "source/reflect.h2"
[[nodiscard]] auto apply_metafunctions(
    declaration_node& n, 
    type_declaration& rtype, 
    auto const& error
    ) -> bool

{
    if (cpp2::cpp2_default.is_active() && !(CPP2_UFCS(is_type)(n)) ) { cpp2::cpp2_default.report_violation(""); }

    //  Check for _names reserved for the metafunction implementation
    if (!(CPP2_UFCS(empty)(n.metafunctions))) 
    {
        for ( 
              auto const& m : CPP2_UFCS(get_members)(rtype) ) 
        {
            CPP2_UFCS(require)(m, 
                !(CPP2_UFCS(starts_with)(CPP2_UFCS(name)(m), "_")) || CPP2_UFCS(ssize)(CPP2_UFCS(name)(m)) == 1, 
                "a type that applies a metafunction cannot have a body that declares "
                "a name that starts with '_' - those names are reserved for the "
                "metafunction implementation"
            );
        }
    }

    //  For each metafunction, apply it
    for ( 
         auto const& meta : n.metafunctions ) 
    {
        //  Convert the name and any template arguments to strings
        //  and record that in rtype
        auto name {CPP2_UFCS(to_string)((*cpp2::impl::assert_not_null(meta)))}; 
        name = CPP2_UFCS(substr)(name, 0, CPP2_UFCS(find)(name, '<'));

        std::vector<std::string> args {}; 
        for ( 
             auto const& arg : CPP2_UFCS(template_arguments)((*cpp2::impl::assert_not_null(meta))) ) 
            CPP2_UFCS(push_back)(args, CPP2_UFCS(to_string)(arg));

        CPP2_UFCS(set_metafunction_name)(rtype, name, cpp2::move(args));

        //  Dispatch
        //
        if (name == "interface") {
            interface(rtype);
        }
        else {if (name == "polymorphic_base") {
            polymorphic_base(rtype);
        }
        else {if (name == "ordered") {
            ordered(rtype);
        }
        else {if (name == "weakly_ordered") {
            weakly_ordered(rtype);
        }
        else {if (name == "partially_ordered") {
            partially_ordered(rtype);
        }
        else {if (name == "copyable") {
            copyable(rtype);
        }
        else {if (name == "copy_constructible") {
            copy_constructible(rtype);
        }
        else {if (name == "hashable") {
            hashable(rtype);
        }
        else {if (name == "basic_value") {
            basic_value(rtype);
        }
        else {if (name == "value") {
            value(rtype);
        }
        else {if (name == "weakly_ordered_value") {
            weakly_ordered_value(rtype);
        }
        else {if (name == "partially_ordered_value") {
            partially_ordered_value(rtype);
        }
        else {if (name == "cpp1_rule_of_zero") {
            cpp1_rule_of_zero(rtype);
        }
        else {if (name == "struct") {
            cpp2_struct(rtype);
        }
        else {if (name == "enum") {
            cpp2_enum(rtype);
        }
        else {if (name == "flag_enum") {
            flag_enum(rtype);
        }
        else {if (name == "union") {
            cpp2_union(rtype);
        }
        else {if (name == "encapsulated") {
            encapsulated(rtype);
        }
        else {if (name == "noncopyable") {
            noncopyable(rtype);
        }
        else {if (name == "singleton") {
            singleton(rtype);
        }
        else {if (name == "print") {
            print(rtype);
        }
        else {if (name == "noisy") {
            noisy(rtype);
        }
        else {if (name == "python") {
            python(rtype);
        }
        else {if (name == "javascript") {
            javascript(rtype);
        }
        else {if (name == "autodiff") {
            autodiff(rtype);
        }
        else {if (name == "regex") {
            regex_gen(rtype);
        }
        else {if (name == "sample_traverser") {
            sample_traverser(rtype);
        }
        else {
            error("unrecognized metafunction name: " + cpp2::move(name));
            error(
                "the current supported names are listed at "
                "https://hsutter.github.io/cppfront/cpp2/metafunctions/#built-in-metafunctions"
            );
            return false; 
        }}}}}}}}}}}}}}}}}}}}}}}}}}}
    }

    return true; 
}

#line 16041 "source/reflect.h2"
}

}

#endif
