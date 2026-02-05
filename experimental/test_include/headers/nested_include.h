
#ifndef EXPERIMENTAL_TEST_INCLUDE_HEADERS_NESTED_INCLUDE_H_CPP2
#define EXPERIMENTAL_TEST_INCLUDE_HEADERS_NESTED_INCLUDE_H_CPP2


//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/headers/nested_include.h2"

#line 3 "experimental/test_include/headers/nested_include.h2"
class derived_type;
    

//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/headers/nested_include.h2"
#include "nested_base.h"

#line 3 "experimental/test_include/headers/nested_include.h2"
class derived_type {
    private: base_type base {}; 
    public: [[nodiscard]] auto get_base_value() const& -> int;
    public: derived_type() = default;
    public: derived_type(derived_type const&) = delete; /* No 'that' constructor, suppress copy */
    public: auto operator=(derived_type const&) -> void = delete;

#line 6 "experimental/test_include/headers/nested_include.h2"
};


//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/headers/nested_include.h2"

#line 5 "experimental/test_include/headers/nested_include.h2"
    [[nodiscard]] auto derived_type::get_base_value() const& -> int { return CPP2_UFCS(get_base_value)(base);  }
#endif

