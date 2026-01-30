#line 6 "experimental/test_ad_stages.cpp2"
#include <iostream>

#include "cpp2ad_stack.h"

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_ad_stages.cpp2"

#line 7 "experimental/test_ad_stages.cpp2"
namespace test_ns {

#line 10 "experimental/test_ad_stages.cpp2"
class test_ad_stages;
    

#line 75 "experimental/test_ad_stages.cpp2"
}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_ad_stages.cpp2"
// Test file for AD IR stages 3, 4, 5 debug output
// This file tests:
// - Subtask 3: ad_rule registry and discovery
// - Subtask 4: Operator token mapping
// - Subtask 5: Base expression builder

#line 7 "experimental/test_ad_stages.cpp2"
namespace test_ns {

// Test type with reverse-mode autodiff and custom ad_rules
class test_ad_stages {
    // Rule for addition: d/dx (x + y) = 1, d/dy (x + y) = 1
    public: class ad_rule_add {
        private: std::string name {"+"}; 
        private: int n_args {2}; 
        private: bool is_member {false}; 

        public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;
        public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
                  cpp2::impl::in<double> x_val, double& x_adj, 
                  cpp2::impl::in<double> y_val, double& y_adj) -> void;
        public: ad_rule_add() = default;
        public: ad_rule_add(ad_rule_add const&) = delete; /* No 'that' constructor, suppress copy */
        public: auto operator=(ad_rule_add const&) -> void = delete;


#line 24 "experimental/test_ad_stages.cpp2"
    };

    // Rule for multiplication: d/dx (x * y) = y, d/dy (x * y) = x
    public: class ad_rule_mul {
        private: std::string name {"*"}; 
        private: int n_args {2}; 
        private: bool is_member {false}; 

        public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;
        public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
                  cpp2::impl::in<double> x_val, double& x_adj, 
                  cpp2::impl::in<double> y_val, double& y_adj) -> void;
        public: ad_rule_mul() = default;
        public: ad_rule_mul(ad_rule_mul const&) = delete; /* No 'that' constructor, suppress copy */
        public: auto operator=(ad_rule_mul const&) -> void = delete;


#line 39 "experimental/test_ad_stages.cpp2"
    };

    // Custom ad_rule for log function
    public: class ad_rule_log {
        private: std::string name {"log"}; 
        private: int n_args {1}; 
        private: bool is_member {false}; 

        public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
        public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
        public: ad_rule_log() = default;
        public: ad_rule_log(ad_rule_log const&) = delete; /* No 'that' constructor, suppress copy */
        public: auto operator=(ad_rule_log const&) -> void = delete;


#line 51 "experimental/test_ad_stages.cpp2"
    };

using add_xy_ret = double;
#line 53 "experimental/test_ad_stages.cpp2"
    // Simple addition function
#line 54 "experimental/test_ad_stages.cpp2"
    public: [[nodiscard]] static auto add_xy(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> add_xy_ret;
using mul_xy_ret = double;


#line 58 "experimental/test_ad_stages.cpp2"
    // Multiplication function
#line 59 "experimental/test_ad_stages.cpp2"
    public: [[nodiscard]] static auto mul_xy(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> mul_xy_ret;
using combined_ret = double;


#line 63 "experimental/test_ad_stages.cpp2"
    // Combined operations
#line 64 "experimental/test_ad_stages.cpp2"
    public: [[nodiscard]] static auto combined(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> combined_ret;
using simple_log_ret = double;


#line 69 "experimental/test_ad_stages.cpp2"
    // Simple log function (not scaled) to test user rule lookup
#line 70 "experimental/test_ad_stages.cpp2"
    public: [[nodiscard]] static auto simple_log(cpp2::impl::in<double> x) -> simple_log_ret;
using add_xy_d_ret = double;

    public: [[nodiscard]] static auto add_xy_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> add_xy_d_ret;

using mul_xy_d_ret = double;
public: [[nodiscard]] static auto mul_xy_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> mul_xy_d_ret;

using combined_d_ret = double;
public: [[nodiscard]] static auto combined_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> combined_d_ret;

using simple_log_d_ret = double;
public: [[nodiscard]] static auto simple_log_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    double& r_adj
    )
     -> simple_log_d_ret;

    public: test_ad_stages() = default;
    public: test_ad_stages(test_ad_stages const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(test_ad_stages const&) -> void = delete;


#line 73 "experimental/test_ad_stages.cpp2"
};

} // namespace test_ns

auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_ad_stages.cpp2"

#line 7 "experimental/test_ad_stages.cpp2"
namespace test_ns {

#line 17 "experimental/test_ad_stages.cpp2"
        [[nodiscard]] auto test_ad_stages::ad_rule_add::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double { return x + y;  }
#line 18 "experimental/test_ad_stages.cpp2"
        auto test_ad_stages::ad_rule_add::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
                  cpp2::impl::in<double> x_val, double& x_adj, 
                  cpp2::impl::in<double> y_val, double& y_adj) -> void{
            x_adj += res_adj;
            y_adj += res_adj;
        }

#line 32 "experimental/test_ad_stages.cpp2"
        [[nodiscard]] auto test_ad_stages::ad_rule_mul::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double { return x * y;  }
#line 33 "experimental/test_ad_stages.cpp2"
        auto test_ad_stages::ad_rule_mul::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
                  cpp2::impl::in<double> x_val, double& x_adj, 
                  cpp2::impl::in<double> y_val, double& y_adj) -> void{
            x_adj += y_val * res_adj;
            y_adj += x_val * res_adj;
        }

#line 47 "experimental/test_ad_stages.cpp2"
        [[nodiscard]] auto test_ad_stages::ad_rule_log::forward(cpp2::impl::in<double> x) -> double{return log(x); }
#line 48 "experimental/test_ad_stages.cpp2"
        auto test_ad_stages::ad_rule_log::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
            x_adj += res_adj / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(res_adj),x_val);
        }

#line 54 "experimental/test_ad_stages.cpp2"
    [[nodiscard]] auto test_ad_stages::add_xy(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> add_xy_ret{
            cpp2::impl::deferred_init<double> r;
#line 55 "experimental/test_ad_stages.cpp2"
        r.construct(x + y);
    return std::move(r.value()); }

#line 59 "experimental/test_ad_stages.cpp2"
    [[nodiscard]] auto test_ad_stages::mul_xy(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> mul_xy_ret{
            cpp2::impl::deferred_init<double> r;
#line 60 "experimental/test_ad_stages.cpp2"
        r.construct(x * y);
    return std::move(r.value()); }

#line 64 "experimental/test_ad_stages.cpp2"
    [[nodiscard]] auto test_ad_stages::combined(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> combined_ret{
            cpp2::impl::deferred_init<double> r;
#line 65 "experimental/test_ad_stages.cpp2"
        auto z {x * log(y)}; 
        r.construct(cpp2::move(z) + x);
    return std::move(r.value()); }

#line 70 "experimental/test_ad_stages.cpp2"
    [[nodiscard]] auto test_ad_stages::simple_log(cpp2::impl::in<double> x) -> simple_log_ret{
            cpp2::impl::deferred_init<double> r;
#line 71 "experimental/test_ad_stages.cpp2"
        r.construct(log(x));
    return std::move(r.value()); }

    [[nodiscard]] auto test_ad_stages::add_xy_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> add_xy_d_ret
    {
    double r {0.0};

    auto x_val {x}; 

    auto y_val {y}; 

    double r_val {cpp2::move(x_val) + cpp2::move(y_val)}; 
    r = cpp2::move(r_val);
    x_adj += r_adj;
    y_adj += r_adj;
    r_adj = 0.0;
    return r; 
    }

    [[nodiscard]] auto test_ad_stages::mul_xy_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> mul_xy_d_ret
    {
    double r {0.0};

    auto x_val {x}; 

    auto y_val {y}; 

    double r_val {x_val * y_val}; 
    r = cpp2::move(r_val);
    x_adj += (cpp2::move(y_val) * r_adj);
    y_adj += (cpp2::move(x_val) * r_adj);
    r_adj = 0.0;
    return r; 
    }

    [[nodiscard]] auto test_ad_stages::combined_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    cpp2::impl::in<double> y, 
    double& y_adj, 
    double& r_adj
    )
     -> combined_d_ret
    {
    double r {0.0};

    auto x_val {x}; 

    auto y_val {y}; 

    auto z_val {x_val * log(y_val)}; 

    auto z_adj {0.0}; 

    double r_val {cpp2::move(z_val) + x_val}; 
    r = cpp2::move(r_val);
    z_adj += r_adj;
    x_adj += r_adj;
    x_adj += (log(y) * z_adj);
    y_adj += ((cpp2::move(x_val) * cpp2::move(z_adj)) / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF((cpp2::move(x_val) * cpp2::move(z_adj))),cpp2::move(y_val)));
    r_adj = 0.0;
    return r; 
    }

    [[nodiscard]] auto test_ad_stages::simple_log_d(
    cpp2::impl::in<double> x, 
    double& x_adj, 
    double& r_adj
    )
     -> simple_log_d_ret
    {
    double r {0.0};

    auto x_val {x}; 

    double r_val {log(x_val)}; 
    r = cpp2::move(r_val);
    x_adj += (r_adj / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(r_adj),cpp2::move(x_val)));
    r_adj = 0.0;
    return r; 
    }

#line 75 "experimental/test_ad_stages.cpp2"
}

#line 77 "experimental/test_ad_stages.cpp2"
auto main() -> int{
  auto x {3.0}; 
  auto y {4.0}; 
  auto x_adj {0.0}; 
  auto y_adj {0.0}; 
  double res {test_ns::test_ad_stages::combined(x, y)}; 
  auto r_adj {1.0}; // Seed the output adjoint
  auto grad_res {test_ns::test_ad_stages::combined_d(cpp2::move(x), x_adj, cpp2::move(y), y_adj, r_adj)}; 
  // Use r_adj to prevent move semantics
  static_cast<void>(cpp2::move(r_adj));
  std::cout << "x_adj = " << x_adj << ", y_adj = " << y_adj << "\n";
  if (((cpp2::impl::cmp_less((cpp2::move(x_adj) - 2.38629),1e-4)) && (cpp2::impl::cmp_less((cpp2::move(y_adj) - 0.75),1e-4)))) {
      std::cout << "PASS\n";
  }else {
      std::cout << "FAIL\n";
  }

}

