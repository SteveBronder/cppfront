
#include "cpp2ad_stack.h"

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "./experimental/autodiff-reverse-ast.cpp2"

#line 3 "./experimental/autodiff-reverse-ast.cpp2"
class ad;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "./experimental/autodiff-reverse-ast.cpp2"
// compile: ./source/cppfront ./experimental/autodiff-reverse-ast.cpp2

#line 3 "./experimental/autodiff-reverse-ast.cpp2"
class ad {
    public: [[nodiscard]] static auto f(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;
using f_b_ret = double;

    public: [[nodiscard]] static auto f_b(cpp2::impl::in<double> x, double& x_b, cpp2::impl::in<double> y, double& y_b, double& r_b) -> f_b_ret;

    public: ad() = default;
    public: ad(ad const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad const&) -> void = delete;


#line 8 "./experimental/autodiff-reverse-ast.cpp2"
};

auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "./experimental/autodiff-reverse-ast.cpp2"

#line 4 "./experimental/autodiff-reverse-ast.cpp2"
    [[nodiscard]] auto ad::f(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double{
        auto z {x * y}; 
        return cpp2::move(z) + sin(x); 
    }

    [[nodiscard]] auto ad::f_b(cpp2::impl::in<double> x, double& x_b, cpp2::impl::in<double> y, double& y_b, double& r_b) -> f_b_ret{
                                                                                                                              double r {};
auto z_b {}; 

    auto z {x * y}; 

    double temp_1_b {0.0}; 

    double temp_1 {sin(x)}; 
    r = cpp2::move(z) + cpp2::move(temp_1);
    z_b += r_b;
    temp_1_b += r_b;
    r_b = 0.0;
    x_b += cos(x) * temp_1_b;
    temp_1_b = 0.0;
    x_b += y * z_b;
    y_b += x * cpp2::move(z_b);
    return r; }

#line 10 "./experimental/autodiff-reverse-ast.cpp2"
auto main() -> int{}

