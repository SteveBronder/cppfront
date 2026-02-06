
#include "cpp2ad_stack.h"

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "regression-tests/test_autodiff_include_rules.cpp2"

#line 9 "regression-tests/test_autodiff_include_rules.cpp2"
namespace test_ns {

#line 13 "regression-tests/test_autodiff_include_rules.cpp2"
class my_func;
    

#line 19 "regression-tests/test_autodiff_include_rules.cpp2"
}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "regression-tests/test_autodiff_include_rules.cpp2"
#include "headers/ad_test_rules.h"

// Wrapper so user code can call subtract(x, y) directly.
// @autodiff resolves the rule by matching "subtract" in the ad_rule_registry.
#line 5 "regression-tests/test_autodiff_include_rules.cpp2"
[[nodiscard]] auto subtract(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;

#line 9 "regression-tests/test_autodiff_include_rules.cpp2"
namespace test_ns {

// This type uses @autodiff<"reverse"> and calls subtract(),
// which is a custom rule defined in the included header.
class my_func {
using f_ret = double;

#line 14 "regression-tests/test_autodiff_include_rules.cpp2"
    public: [[nodiscard]] static auto f(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> f_ret;
using f_d_ret = double;

    public: [[nodiscard]] static auto f_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> f_d_ret;

    public: my_func() = default;
    public: my_func(my_func const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(my_func const&) -> void = delete;


#line 17 "regression-tests/test_autodiff_include_rules.cpp2"
};

} // namespace test_ns

[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "regression-tests/test_autodiff_include_rules.cpp2"

#line 5 "regression-tests/test_autodiff_include_rules.cpp2"
[[nodiscard]] auto subtract(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double{
    return meta::ad::subtract::forward(x, y); 
}

namespace test_ns {

#line 14 "regression-tests/test_autodiff_include_rules.cpp2"
    [[nodiscard]] auto my_func::f(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> f_ret{
            cpp2::impl::deferred_init<double> r;
#line 15 "regression-tests/test_autodiff_include_rules.cpp2"
        r.construct(subtract(x, y));
    return std::move(r.value()); }

    [[nodiscard]] auto my_func::f_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> f_d_ret
    {
    double r {0.0};

    auto x_val {x}; 

    auto y_val {y}; 

    double r_val {subtract(cpp2::move(x_val), cpp2::move(y_val))}; 
    r = cpp2::move(r_val);
    x_adj += r_adj;
    y_adj -= r_adj;
    r_adj = 0.0;
    return r; 
    }

#line 19 "regression-tests/test_autodiff_include_rules.cpp2"
}

#line 21 "regression-tests/test_autodiff_include_rules.cpp2"
[[nodiscard]] auto main() -> int{
    // If we get here, the metafunction successfully:
    // 1. Discovered the "subtract" rule from the included header
    // 2. Generated the backward function using the custom reverse() body
    std::cout << "PASS: @autodiff<reverse> found custom rules from included header\n";
    return 0; 
}

