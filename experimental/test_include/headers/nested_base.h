
#ifndef EXPERIMENTAL_TEST_INCLUDE_HEADERS_NESTED_BASE_H_CPP2
#define EXPERIMENTAL_TEST_INCLUDE_HEADERS_NESTED_BASE_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/headers/nested_base.h2"
class base_type;
#line 2 "experimental/test_include/headers/nested_base.h2"
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/headers/nested_base.h2"
class base_type {
#line 2 "experimental/test_include/headers/nested_base.h2"
    public: explicit base_type();
    public: [[nodiscard]] auto get_base_value() const& -> int;
    public: base_type(base_type const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(base_type const&) -> void = delete;

#line 4 "experimental/test_include/headers/nested_base.h2"
};


//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/headers/nested_base.h2"

#line 2 "experimental/test_include/headers/nested_base.h2"
    base_type::base_type(){}
#line 3 "experimental/test_include/headers/nested_base.h2"
    [[nodiscard]] auto base_type::get_base_value() const& -> int { return 100;  }
#endif

