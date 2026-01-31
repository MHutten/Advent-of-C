#include <stdio.h>
#include <stdbool.h>

#include "../include/file.h"
#include "../include/testing/asserts.h"
#include "../include/testing/suite.h"

struct TestOutput test__read__good_weather__file_contents_read_successfully() {
    struct TestOutput output = {
        __func__,
        assert_equal(read("C:\\Users\\milan\\Documents\\Advent Of Code\\Advent-of-C\\resource\\testing\\mock_file.txt"), "mock_content")
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__read__good_weather__file_contents_read_successfully
    };
    run(test_functions, 1);
}