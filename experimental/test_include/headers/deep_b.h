
#ifndef EXPERIMENTAL_TEST_INCLUDE_HEADERS_DEEP_B_H_CPP2
#define EXPERIMENTAL_TEST_INCLUDE_HEADERS_DEEP_B_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/headers/deep_b.h2"

#line 4 "experimental/test_include/headers/deep_b.h2"
class deep_type_b;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/headers/deep_b.h2"
#include "deep_c.h"

// Middle level - includes deep_c.h2
#line 4 "experimental/test_include/headers/deep_b.h2"
class deep_type_b {
    private: deep_type_c c {}; 
    public: explicit deep_type_b();
    public: [[nodiscard]] auto get_value() const& -> int;
    public: [[nodiscard]] auto get_c_value() const& -> int;
    public: deep_type_b(deep_type_b const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(deep_type_b const&) -> void = delete;

#line 9 "experimental/test_include/headers/deep_b.h2"
};


//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/headers/deep_b.h2"

#line 6 "experimental/test_include/headers/deep_b.h2"
    deep_type_b::deep_type_b(){}
#line 7 "experimental/test_include/headers/deep_b.h2"
    [[nodiscard]] auto deep_type_b::get_value() const& -> int { return 200;  }
#line 8 "experimental/test_include/headers/deep_b.h2"
    [[nodiscard]] auto deep_type_b::get_c_value() const& -> int { return CPP2_UFCS(get_value)(c);  }
#endif

