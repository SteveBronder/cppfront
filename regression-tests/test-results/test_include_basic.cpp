

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "test_include_basic.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "test_include_basic.cpp2"
#include "headers/simple_type.h"

#line 3 "test_include_basic.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "test_include_basic.cpp2"

#line 3 "test_include_basic.cpp2"
[[nodiscard]] auto main() -> int{
    // TEST: Type from include should be visible
    simple_included_type obj {}; 

    // TEST: Member access should work
    auto result {CPP2_UFCS(get_value)(cpp2::move(obj))}; 

    // Verify expected behavior
    if (result == 42) {
        std::cout << "PASS: basic include\n";
        return 0; 
    }
    std::cout << "FAIL: basic include - got " << cpp2::move(result) << "\n";
    return 1; 
}

