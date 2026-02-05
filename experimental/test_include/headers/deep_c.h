
#ifndef EXPERIMENTAL_TEST_INCLUDE_HEADERS_DEEP_C_H_CPP2
#define EXPERIMENTAL_TEST_INCLUDE_HEADERS_DEEP_C_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/headers/deep_c.h2"

#line 2 "experimental/test_include/headers/deep_c.h2"
class deep_type_c;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/headers/deep_c.h2"
// Deepest level of nesting
#line 2 "experimental/test_include/headers/deep_c.h2"
class deep_type_c {
    public: explicit deep_type_c();
    public: [[nodiscard]] auto get_value() const& -> int;
    public: deep_type_c(deep_type_c const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(deep_type_c const&) -> void = delete;

#line 5 "experimental/test_include/headers/deep_c.h2"
};


//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/headers/deep_c.h2"

#line 3 "experimental/test_include/headers/deep_c.h2"
    deep_type_c::deep_type_c(){}
#line 4 "experimental/test_include/headers/deep_c.h2"
    [[nodiscard]] auto deep_type_c::get_value() const& -> int { return 300;  }
#endif

