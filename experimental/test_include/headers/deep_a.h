
#ifndef EXPERIMENTAL_TEST_INCLUDE_HEADERS_DEEP_A_H_CPP2
#define EXPERIMENTAL_TEST_INCLUDE_HEADERS_DEEP_A_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/headers/deep_a.h2"

#line 4 "experimental/test_include/headers/deep_a.h2"
class deep_type_a;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/headers/deep_a.h2"
#include "deep_b.h"

// Top level - includes deep_b.h2 (which includes deep_c.h2)
#line 4 "experimental/test_include/headers/deep_a.h2"
class deep_type_a {
    private: deep_type_b b {}; 
    public: explicit deep_type_a();
    public: [[nodiscard]] auto get_value() const& -> int;
    public: [[nodiscard]] auto get_b_value() const& -> int;
    public: [[nodiscard]] auto get_c_value() const& -> int;
    public: deep_type_a(deep_type_a const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(deep_type_a const&) -> void = delete;

#line 10 "experimental/test_include/headers/deep_a.h2"
};


//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/headers/deep_a.h2"

#line 6 "experimental/test_include/headers/deep_a.h2"
    deep_type_a::deep_type_a(){}
#line 7 "experimental/test_include/headers/deep_a.h2"
    [[nodiscard]] auto deep_type_a::get_value() const& -> int { return 100;  }
#line 8 "experimental/test_include/headers/deep_a.h2"
    [[nodiscard]] auto deep_type_a::get_b_value() const& -> int { return CPP2_UFCS(get_value)(b);  }
#line 9 "experimental/test_include/headers/deep_a.h2"
    [[nodiscard]] auto deep_type_a::get_c_value() const& -> int { return CPP2_UFCS(get_c_value)(b);  }
#endif

