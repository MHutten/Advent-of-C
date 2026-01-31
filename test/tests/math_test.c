#include <stdio.h>
#include <stdbool.h>

#include "../include/math.h"
#include "../include/testing/asserts.h"
#include "../include/testing/suite.h"

struct TestOutput test__min__good_weather__first_less_than_second() {
    struct TestOutput output = {
        __func__,
        assert_equal(min(0, 1), 0)
    };
    return output;
}

struct TestOutput test__min__good_weather__second_less_than_first() {
    struct TestOutput output = {
        __func__,
        assert_equal(min(1, 0), 0)
    };
    return output;
}

struct TestOutput test__min__good_weather__equivalent() {
    struct TestOutput output = {
        __func__,
        assert_equal(min(1, 1), 1)
    };
    return output;
}

struct TestOutput test__max__good_weather__first_greater_than_second() {
    struct TestOutput output = {
        __func__,
        assert_equal(max(0, 1), 1)
    };
    return output;
}

struct TestOutput test__max__good_weather__second_greater_than_first() {
    struct TestOutput output = {
        __func__,
        assert_equal(max(1, 0), 1)
    };
    return output;
}

struct TestOutput test__max__good_weather__equivalent() {
    struct TestOutput output = {
        __func__,
        assert_equal(max(1, 1), 1)
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__min__good_weather__first_less_than_second,
        &test__min__good_weather__second_less_than_first,
        &test__min__good_weather__equivalent,
        &test__max__good_weather__first_greater_than_second,
        &test__max__good_weather__second_greater_than_first,
        &test__max__good_weather__equivalent
    };
    run(test_functions, 6);
}