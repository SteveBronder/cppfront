

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "regression-tests/test_include_reflection.cpp2"

#line 3 "regression-tests/test_include_reflection.cpp2"
namespace test_ns {

#line 6 "regression-tests/test_include_reflection.cpp2"
class test_type;
    

#line 13 "regression-tests/test_include_reflection.cpp2"
}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "regression-tests/test_include_reflection.cpp2"
#include "headers/ad_test_rules.h"

#line 3 "regression-tests/test_include_reflection.cpp2"
namespace test_ns {

// Tests that @find_ad_rules can see types from included .h2 files.
class test_type {
    private: int data {0}; 
    public: [[nodiscard]] static auto subsub(cpp2::impl::in<double> x0, cpp2::impl::in<double> x1) -> double;
    public: [[nodiscard]] static auto subtract(
    cpp2::impl::in<double> x, 
    cpp2::impl::in<double> y
    )
     -> double;
public: [[nodiscard]] static auto my_binary(
    cpp2::impl::in<double> x, 
    cpp2::impl::in<double> y
    )
     -> double;

    public: test_type() = default;
    public: test_type(test_type const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(test_type const&) -> void = delete;


#line 11 "regression-tests/test_include_reflection.cpp2"
};

} // namespace test_ns

[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "regression-tests/test_include_reflection.cpp2"

#line 3 "regression-tests/test_include_reflection.cpp2"
namespace test_ns {

#line 8 "regression-tests/test_include_reflection.cpp2"
    [[nodiscard]] auto test_type::subsub(cpp2::impl::in<double> x0, cpp2::impl::in<double> x1) -> double{
      return subtract(x0, x1); 
    }

    [[nodiscard]] auto test_type::subtract(
    cpp2::impl::in<double> x, 
    cpp2::impl::in<double> y
    )
     -> double
    {
    return x - y; 
    }

    [[nodiscard]] auto test_type::my_binary(
    cpp2::impl::in<double> x, 
    cpp2::impl::in<double> y
    )
     -> double
    {
    return x * y; 
    }

#line 13 "regression-tests/test_include_reflection.cpp2"
}

#line 15 "regression-tests/test_include_reflection.cpp2"
[[nodiscard]] auto main() -> int{
    test_ns::test_type obj {}; 

    std::cout << "PASS: reflection found ad_rule_* types from include\n";
    return 0; 
}

