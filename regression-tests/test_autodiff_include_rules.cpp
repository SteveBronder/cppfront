
#include "cpp2ad_stack.h"

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "regression-tests/test_autodiff_include_rules.cpp2"

#line 10 "regression-tests/test_autodiff_include_rules.cpp2"
namespace test_ns {

#line 14 "regression-tests/test_autodiff_include_rules.cpp2"
class my_func;
    

#line 20 "regression-tests/test_autodiff_include_rules.cpp2"
}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "regression-tests/test_autodiff_include_rules.cpp2"
#include "headers/ad_test_rules.h"

// Free function wrapper so the user code can call subtract(x, y) directly.
// The @autodiff metafunction resolves the rule by matching the function name "subtract"
// in the ad_rule_registry (populated from the included header's meta::ad namespace).
#line 6 "regression-tests/test_autodiff_include_rules.cpp2"
[[nodiscard]] auto subtract(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;

#line 10 "regression-tests/test_autodiff_include_rules.cpp2"
namespace test_ns {

// This type uses @autodiff<"reverse"> and calls subtract(),
// which is a custom rule defined in the included header.
class my_func {
using f_ret = double;

#line 15 "regression-tests/test_autodiff_include_rules.cpp2"
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


#line 18 "regression-tests/test_autodiff_include_rules.cpp2"
};

} // namespace test_ns

[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "regression-tests/test_autodiff_include_rules.cpp2"

#line 6 "regression-tests/test_autodiff_include_rules.cpp2"
[[nodiscard]] auto subtract(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double{
    return meta::ad::subtract::forward(x, y); 
}

namespace test_ns {

#line 15 "regression-tests/test_autodiff_include_rules.cpp2"
    [[nodiscard]] auto my_func::f(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> f_ret{
            cpp2::impl::deferred_init<double> r;
#line 16 "regression-tests/test_autodiff_include_rules.cpp2"
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

#line 20 "regression-tests/test_autodiff_include_rules.cpp2"
}

#line 22 "regression-tests/test_autodiff_include_rules.cpp2"
[[nodiscard]] auto main() -> int{
    // If we get here, the metafunction successfully:
    // 1. Discovered the "subtract" rule from the included header
    // 2. Generated the backward function using the custom reverse() body
    std::cout << "PASS: @autodiff<reverse> found custom rules from included header\n";
    return 0; 
}

