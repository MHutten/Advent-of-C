#include <stdbool.h>

struct TestOutput {
    const char * function_name;
    const bool result;
};

typedef struct TestOutput (*test_function)();

void run(test_function *test_functions, int length);