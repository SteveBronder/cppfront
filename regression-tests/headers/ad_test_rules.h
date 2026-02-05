
#ifndef _HOME_SBRONDER_OPEN_SOURCE_CPPFRONT_REGRESSION_TESTS_HEADERS_AD_TEST_RULES_H_CPP2
#define _HOME_SBRONDER_OPEN_SOURCE_CPPFRONT_REGRESSION_TESTS_HEADERS_AD_TEST_RULES_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"

#line 3 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
namespace meta {
namespace ad {

class subtract;
    

#line 14 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
class my_binary;
    

#line 19 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
}
}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"

#line 3 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
namespace meta {
namespace ad {

class subtract {
    private: std::string name {"subtract"}; 
    private: int n_args {2}; 
    private: bool is_member {false}; 
    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x0, cpp2::impl::in<double> x1) -> double;
    public: subtract() = default;
    public: subtract(subtract const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(subtract const&) -> void = delete;


#line 13 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
};
class my_binary {
    private: std::string name {"my_binary"}; 
    private: int n_args {2}; 
    private: bool is_member {false}; 
    public: my_binary() = default;
    public: my_binary(my_binary const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(my_binary const&) -> void = delete;

#line 18 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
};
}
}


//=== Cpp2 function definitions =================================================

#line 1 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"

#line 3 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
namespace meta {
namespace ad {

#line 10 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
    [[nodiscard]] auto subtract::forward(cpp2::impl::in<double> x0, cpp2::impl::in<double> x1) -> double{
      return x0 - x1; 
    }

#line 19 "/home/sbronder/open_source/cppfront/regression-tests/headers/ad_test_rules.h2"
}
}

#endif
