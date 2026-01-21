

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "../experimental/autodiff-ast-dump.cpp2"

#line 9 "../experimental/autodiff-ast-dump.cpp2"
class ad;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "../experimental/autodiff-ast-dump.cpp2"
// Simple program to print the reflection AST during compilation.
//
// Compile with:
//   ./source/cppfront experimental/autodiff-ast-dump.cpp2
//
// To print after autodiff has run, use:
//   ad: @autodiff<"reverse"> @sample_traverser type = { ... }

#line 9 "../experimental/autodiff-ast-dump.cpp2"
class ad {
    public: [[nodiscard]] static auto f(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double;
    public: ad() = default;
    public: ad(ad const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(ad const&) -> void = delete;


#line 14 "../experimental/autodiff-ast-dump.cpp2"
};

auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "../experimental/autodiff-ast-dump.cpp2"

#line 10 "../experimental/autodiff-ast-dump.cpp2"
    [[nodiscard]] auto ad::f(cpp2::impl::in<double> x, cpp2::impl::in<double> y) -> double{
        auto z {x * y}; 
        return cpp2::move(z) + sin(x); 
    }

#line 16 "../experimental/autodiff-ast-dump.cpp2"
auto main() -> int{
    // No runtime behavior; compile-time AST print only.
}

