
#ifndef REGRESSION_TESTS_HEADERS_AD_TEST_RULES_H_CPP2
#define REGRESSION_TESTS_HEADERS_AD_TEST_RULES_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "regression-tests/headers/ad_test_rules.h2"

#line 3 "regression-tests/headers/ad_test_rules.h2"
namespace meta {
namespace ad {

class subtract;
    

#line 20 "regression-tests/headers/ad_test_rules.h2"
class my_binary;
    

#line 34 "regression-tests/headers/ad_test_rules.h2"
}
}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "regression-tests/headers/ad_test_rules.h2"

#line 3 "regression-tests/headers/ad_test_rules.h2"
namespace meta {
namespace ad {

class subtract {
    private: std::string name {"subtract"}; 
    private: int n_args {2}; 
    private: bool is_member {false}; 
    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;

#line 13 "regression-tests/headers/ad_test_rules.h2"
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void;
    public: subtract() = default;
    public: subtract(subtract const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(subtract const&) -> void = delete;


#line 19 "regression-tests/headers/ad_test_rules.h2"
};
class my_binary {
    private: std::string name {"my_binary"}; 
    private: int n_args {2}; 
    private: bool is_member {false}; 
    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;

#line 27 "regression-tests/headers/ad_test_rules.h2"
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void;
    public: my_binary() = default;
    public: my_binary(my_binary const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(my_binary const&) -> void = delete;


#line 33 "regression-tests/headers/ad_test_rules.h2"
};
}
}


//=== Cpp2 function definitions =================================================

#line 1 "regression-tests/headers/ad_test_rules.h2"

#line 3 "regression-tests/headers/ad_test_rules.h2"
namespace meta {
namespace ad {

#line 10 "regression-tests/headers/ad_test_rules.h2"
    [[nodiscard]] auto subtract::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double{
      return x - y; 
    }
#line 13 "regression-tests/headers/ad_test_rules.h2"
    auto subtract::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void{
        x_adj += res_adj;
        y_adj -= res_adj;
    }

#line 24 "regression-tests/headers/ad_test_rules.h2"
    [[nodiscard]] auto my_binary::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double{
      return x * y; 
    }
#line 27 "regression-tests/headers/ad_test_rules.h2"
    auto my_binary::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void{
        x_adj += y_val * res_adj;
        y_adj += x_val * res_adj;
    }

}
}

#endif
