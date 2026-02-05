

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/test_include_multiple.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/test_include_multiple.cpp2"
#include "headers/simple_type.h"
#include "headers/ad_rules_basic.h"

#line 4 "experimental/test_include/test_include_multiple.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/test_include_multiple.cpp2"

#line 4 "experimental/test_include/test_include_multiple.cpp2"
[[nodiscard]] auto main() -> int{
    // Type from first include
    simple_included_type obj {}; 

    // Verify both are accessible
    if (CPP2_UFCS(get_value)(cpp2::move(obj)) == 42) {
        std::cout << "PASS: multiple includes\n";
        return 0; 
    }
    return 1; 
}

