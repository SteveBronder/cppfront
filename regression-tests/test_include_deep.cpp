

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "test_include_deep.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "test_include_deep.cpp2"
#include "headers/deep_a.h"

#line 3 "test_include_deep.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "test_include_deep.cpp2"

#line 3 "test_include_deep.cpp2"
[[nodiscard]] auto main() -> int{
    // TEST: Types from deep nested includes should all be visible
    deep_type_a a {}; 
    deep_type_b b {}; 
    deep_type_c c {}; 

    auto val_a {CPP2_UFCS(get_value)(a)}; 
    auto val_b {CPP2_UFCS(get_b_value)(a)}; 
    auto val_c {CPP2_UFCS(get_c_value)(cpp2::move(a))}; 

    if (cpp2::move(val_a) == 100 && cpp2::move(val_b) == 200 && cpp2::move(val_c) == 300) {
        std::cout << "PASS: deep recursive includes\n";
        return 0; 
    }
    std::cout << "FAIL: deep recursive includes\n";
    return 1; 
}

