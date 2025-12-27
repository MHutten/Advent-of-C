#include <stdio.h>
#include <stdbool.h>

#include "../../../include/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.h"
#include "../../../include/testing/asserts.h"
#include "../../../include/testing/suite.h"

struct TestOutput test__calculate_area_of_wrapping_paper__good_weather__2x3x4() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_area_of_wrapping_paper(2, 3, 4), 58)
    };
    return output;
}

struct TestOutput test__calculate_area_of_wrapping_paper__good_weather__1x1x10() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_area_of_wrapping_paper(1, 1, 10), 43)
    };
    return output;
}

struct TestOutput test__calculate_ribbon_length__good_weather__2x3x4() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_ribbon_length(2, 3, 4), 34)
    };
    return output;
}

struct TestOutput test__calculate_ribbon_length__good_weather__1x1x10() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_ribbon_length(1, 1, 10), 14)
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__calculate_area_of_wrapping_paper__good_weather__2x3x4,
        &test__calculate_area_of_wrapping_paper__good_weather__1x1x10,
        &test__calculate_ribbon_length__good_weather__2x3x4,
        &test__calculate_ribbon_length__good_weather__1x1x10
    };
    run(test_functions, 4);
}