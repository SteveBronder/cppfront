
#ifndef EXPERIMENTAL_TEST_INCLUDE_HEADERS_AD_RULES_BASIC_H_CPP2
#define EXPERIMENTAL_TEST_INCLUDE_HEADERS_AD_RULES_BASIC_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/headers/ad_rules_basic.h2"

#line 2 "experimental/test_include/headers/ad_rules_basic.h2"
class ad_rule_double;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/headers/ad_rules_basic.h2"
// AD rule for doubling - should be discoverable by @autodiff
#line 2 "experimental/test_include/headers/ad_rules_basic.h2"
class ad_rule_double {
    private: std::string name {"double_it"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_double() = default;
    public: ad_rule_double(ad_rule_double const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_double const&) -> void = delete;


#line 12 "experimental/test_include/headers/ad_rules_basic.h2"
};


//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/headers/ad_rules_basic.h2"

#line 7 "experimental/test_include/headers/ad_rules_basic.h2"
    [[nodiscard]] auto ad_rule_double::forward(cpp2::impl::in<double> x) -> double { return x * 2.0;  }
#line 8 "experimental/test_include/headers/ad_rules_basic.h2"
    auto ad_rule_double::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj += res_adj * 2.0;  // d/dx(2x) = 2
    }
#endif

