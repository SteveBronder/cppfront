

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "test_include_nested.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "test_include_nested.cpp2"
#include "headers/nested_include.h"

#line 3 "test_include_nested.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "test_include_nested.cpp2"

#line 3 "test_include_nested.cpp2"
[[nodiscard]] auto main() -> int{
    // TEST: Type from nested include chain should be visible
    derived_type obj {}; 

    // TEST: base_type (from nested_base.h2) should also be accessible
    base_type base_obj {}; 

    auto result {CPP2_UFCS(get_base_value)(cpp2::move(obj))}; 

    if (cpp2::move(result) == 100 && CPP2_UFCS(get_base_value)(cpp2::move(base_obj)) == 100) {
        std::cout << "PASS: nested includes\n";
        return 0; 
    }
    std::cout << "FAIL: nested includes\n";
    return 1; 
}

