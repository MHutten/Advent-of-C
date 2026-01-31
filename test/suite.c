#include <stdio.h>

#include "suite.h"

void run(test_function *test_functions, int length) {
    
    int index;
    for (index = 0; index < length; index++) {
        struct TestOutput output = test_functions[index]();
        if (output.result == true) {
            printf("%s: PASS\n", output.function_name);
        } else {
            printf("%s: FAIL\n", output.function_name);
        }
    }

}