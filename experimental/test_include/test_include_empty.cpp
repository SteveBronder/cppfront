

//=== Cpp2 type declarations ====================================================


#include "cpp2util.h"

#line 1 "experimental/test_include/test_include_empty.cpp2"


//=== Cpp2 type definitions and function declarations ===========================

#line 1 "experimental/test_include/test_include_empty.cpp2"
#include "headers/empty.h"

#line 3 "experimental/test_include/test_include_empty.cpp2"
[[nodiscard]] auto main() -> int;

//=== Cpp2 function definitions =================================================

#line 1 "experimental/test_include/test_include_empty.cpp2"

#line 3 "experimental/test_include/test_include_empty.cpp2"
[[nodiscard]] auto main() -> int{
    std::cout << "PASS: empty include handled\n";
    return 0; 
}

