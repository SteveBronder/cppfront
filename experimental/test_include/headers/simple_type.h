
#ifndef EXPERIMENTAL_TEST_INCLUDE_HEADERS_SIMPLE_TYPE_H_CPP2
#define EXPERIMENTAL_TEST_INCLUDE_HEADERS_SIMPLE_TYPE_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/headers/simple_type.h2"

#line 2 "experimental/test_include/headers/simple_type.h2"
class simple_included_type;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/headers/simple_type.h2"
// A simple type that should be visible after include
#line 2 "experimental/test_include/headers/simple_type.h2"
class simple_included_type {
    private: int value {42}; 
    public: [[nodiscard]] auto get_value() const& -> int;
    public: simple_included_type() = default;
    public: simple_included_type(simple_included_type const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(simple_included_type const&) -> void = delete;

#line 5 "experimental/test_include/headers/simple_type.h2"
};


//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/headers/simple_type.h2"

#line 4 "experimental/test_include/headers/simple_type.h2"
    [[nodiscard]] auto simple_included_type::get_value() const& -> int { return value;  }
#endif

