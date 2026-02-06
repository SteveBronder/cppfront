
#ifndef INCLUDE_CPP2AD_RULES_H_CPP2
#define INCLUDE_CPP2AD_RULES_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "include/cpp2ad_rules.h2"

#line 11 "include/cpp2ad_rules.h2"
namespace meta {
namespace ad {

#line 19 "include/cpp2ad_rules.h2"
class ad_rule_add;
    

#line 34 "include/cpp2ad_rules.h2"
class ad_rule_sub;
    

#line 49 "include/cpp2ad_rules.h2"
class ad_rule_mul;
    

#line 64 "include/cpp2ad_rules.h2"
class ad_rule_div;
    

#line 83 "include/cpp2ad_rules.h2"
class ad_rule_exp;
    

#line 95 "include/cpp2ad_rules.h2"
class ad_rule_log;
    

#line 107 "include/cpp2ad_rules.h2"
class ad_rule_sqrt;
    

#line 123 "include/cpp2ad_rules.h2"
class ad_rule_sin;
    

#line 135 "include/cpp2ad_rules.h2"
class ad_rule_cos;
    

#line 147 "include/cpp2ad_rules.h2"
class ad_rule_tan;
    

#line 163 "include/cpp2ad_rules.h2"
class ad_rule_tanh;
    

#line 175 "include/cpp2ad_rules.h2"
class ad_rule_pow;
    

#line 189 "include/cpp2ad_rules.h2"
}
}


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "include/cpp2ad_rules.h2"
// =============================================================================
// Standard Autodiff Rules for Reverse-Mode AD
// =============================================================================
//
// Rules in meta::ad are discovered by @autodiff<"reverse"> via
// get_tu_declarations(). Each uses @register_autodiff for validation.
//
// Reverse parameter convention: x, y, z, w for 1st-4th args.
// =============================================================================

#line 11 "include/cpp2ad_rules.h2"
namespace meta {
namespace ad {

// =============================================================================
// Basic Arithmetic Operators
// =============================================================================

// Rule for addition: d/dx (x + y) = 1, d/dy (x + y) = 1
class ad_rule_add {
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


#line 31 "include/cpp2ad_rules.h2"
};

// Rule for subtraction: d/dx (x - y) = 1, d/dy (x - y) = -1
class ad_rule_sub {
    private: std::string name {"-"}; 
    private: int n_args {2}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void;
    public: ad_rule_sub() = default;
    public: ad_rule_sub(ad_rule_sub const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_sub const&) -> void = delete;


#line 46 "include/cpp2ad_rules.h2"
};

// Rule for multiplication: d/dx (x * y) = y, d/dy (x * y) = x
class ad_rule_mul {
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


#line 61 "include/cpp2ad_rules.h2"
};

// Rule for division: d/dx (x / y) = 1/y, d/dy (x / y) = -x/y^2
class ad_rule_div {
    private: std::string name {"/"}; 
    private: int n_args {2}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void;
    public: ad_rule_div() = default;
    public: ad_rule_div(ad_rule_div const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_div const&) -> void = delete;


#line 76 "include/cpp2ad_rules.h2"
};

// =============================================================================
// Exponential and Logarithmic Functions
// =============================================================================

// Rule for exp(x): d/dx exp(x) = exp(x)
class ad_rule_exp {
    private: std::string name {"exp"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_exp() = default;
    public: ad_rule_exp(ad_rule_exp const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_exp const&) -> void = delete;


#line 92 "include/cpp2ad_rules.h2"
};

// Rule for log(x): d/dx log(x) = 1/x
class ad_rule_log {
    private: std::string name {"log"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_log() = default;
    public: ad_rule_log(ad_rule_log const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_log const&) -> void = delete;


#line 104 "include/cpp2ad_rules.h2"
};

// Rule for sqrt(x): d/dx sqrt(x) = 1/(2*sqrt(x))
class ad_rule_sqrt {
    private: std::string name {"sqrt"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_sqrt() = default;
    public: ad_rule_sqrt(ad_rule_sqrt const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_sqrt const&) -> void = delete;


#line 116 "include/cpp2ad_rules.h2"
};

// =============================================================================
// Trigonometric Functions
// =============================================================================

// Rule for sin(x): d/dx sin(x) = cos(x)
class ad_rule_sin {
    private: std::string name {"sin"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_sin() = default;
    public: ad_rule_sin(ad_rule_sin const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_sin const&) -> void = delete;


#line 132 "include/cpp2ad_rules.h2"
};

// Rule for cos(x): d/dx cos(x) = -sin(x)
class ad_rule_cos {
    private: std::string name {"cos"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_cos() = default;
    public: ad_rule_cos(ad_rule_cos const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_cos const&) -> void = delete;


#line 144 "include/cpp2ad_rules.h2"
};

// Rule for tan(x): d/dx tan(x) = 1 + tan^2(x)
class ad_rule_tan {
    private: std::string name {"tan"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_tan() = default;
    public: ad_rule_tan(ad_rule_tan const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_tan const&) -> void = delete;


#line 156 "include/cpp2ad_rules.h2"
};

// =============================================================================
// Hyperbolic Functions
// =============================================================================

// Rule for tanh(x): d/dx tanh(x) = 1 - tanh^2(x)
class ad_rule_tanh {
    private: std::string name {"tanh"}; 
    private: int n_args {1}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void;
    public: ad_rule_tanh() = default;
    public: ad_rule_tanh(ad_rule_tanh const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_tanh const&) -> void = delete;


#line 172 "include/cpp2ad_rules.h2"
};

// Rule for pow(x, y): d/dx = y*x^(y-1), d/dy = x^y * log(x)
class ad_rule_pow {
    private: std::string name {"pow"}; 
    private: int n_args {2}; 
    private: bool is_member {false}; 

    public: [[nodiscard]] static auto forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;
    public: static auto reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void;
    public: ad_rule_pow() = default;
    public: ad_rule_pow(ad_rule_pow const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad_rule_pow const&) -> void = delete;


#line 187 "include/cpp2ad_rules.h2"
};

}
}


//=== Cpp2 function definitions =================================================

#line 1 "include/cpp2ad_rules.h2"

#line 11 "include/cpp2ad_rules.h2"
namespace meta {
namespace ad {

#line 24 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_add::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double { return x + y;  }
#line 25 "include/cpp2ad_rules.h2"
    auto ad_rule_add::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void{
        x_adj += res_adj;
        y_adj += res_adj;
    }

#line 39 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_sub::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double { return x - y;  }
#line 40 "include/cpp2ad_rules.h2"
    auto ad_rule_sub::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void{
        x_adj += res_adj;
        y_adj -= res_adj;
    }

#line 54 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_mul::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double { return x * y;  }
#line 55 "include/cpp2ad_rules.h2"
    auto ad_rule_mul::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void{
        x_adj += y_val * res_adj;
        y_adj += x_val * res_adj;
    }

#line 69 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_div::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double { return x / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(x),y);  }
#line 70 "include/cpp2ad_rules.h2"
    auto ad_rule_div::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void{
        x_adj += res_adj / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(res_adj),y_val);
        y_adj -= x_val / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(x_val),(y_val * y_val)) * res_adj;
    }

#line 88 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_exp::forward(cpp2::impl::in<double> x) -> double{return std::exp(x); }
#line 89 "include/cpp2ad_rules.h2"
    auto ad_rule_exp::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj += res_val * res_adj;
    }

#line 100 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_log::forward(cpp2::impl::in<double> x) -> double{return log(x); }
#line 101 "include/cpp2ad_rules.h2"
    auto ad_rule_log::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj += res_adj / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(res_adj),x_val);
    }

#line 112 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_sqrt::forward(cpp2::impl::in<double> x) -> double{return std::sqrt(x); }
#line 113 "include/cpp2ad_rules.h2"
    auto ad_rule_sqrt::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj += 0.5 * res_adj / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(res_adj),res_val);
    }

#line 128 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_sin::forward(cpp2::impl::in<double> x) -> double{return std::sin(x); }
#line 129 "include/cpp2ad_rules.h2"
    auto ad_rule_sin::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj += std::cos(x_val) * res_adj;
    }

#line 140 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_cos::forward(cpp2::impl::in<double> x) -> double{return std::cos(x); }
#line 141 "include/cpp2ad_rules.h2"
    auto ad_rule_cos::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj -= std::sin(x_val) * res_adj;
    }

#line 152 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_tan::forward(cpp2::impl::in<double> x) -> double{return std::tan(x); }
#line 153 "include/cpp2ad_rules.h2"
    auto ad_rule_tan::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj += (1.0 + res_val * res_val) * res_adj;
    }

#line 168 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_tanh::forward(cpp2::impl::in<double> x) -> double{return std::tanh(x); }
#line 169 "include/cpp2ad_rules.h2"
    auto ad_rule_tanh::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, cpp2::impl::in<double> x_val, double& x_adj) -> void{
        x_adj += (1.0 - res_val * res_val) * res_adj;
    }

#line 180 "include/cpp2ad_rules.h2"
    [[nodiscard]] auto ad_rule_pow::forward(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double{return std::pow(x, y); }
#line 181 "include/cpp2ad_rules.h2"
    auto ad_rule_pow::reverse(cpp2::impl::in<double> res_val, cpp2::impl::in<double> res_adj, 
              cpp2::impl::in<double> x_val, double& x_adj, 
              cpp2::impl::in<double> y_val, double& y_adj) -> void{
        x_adj += y_val * res_val / CPP2_ASSERT_NOT_ZERO(CPP2_TYPEOF(res_val),x_val) * res_adj;
        y_adj += res_val * std::log(x_val) * res_adj;
    }

#line 189 "include/cpp2ad_rules.h2"
}
}

#endif
