struct TestOutput {
    const char * function_name;
    const bool result;
};

struct TestSuite {
    const struct TestOutput * (*test_functions)();
};

struct TestSuite construct_test_suite(struct TestOutput * (*test_functions)());

