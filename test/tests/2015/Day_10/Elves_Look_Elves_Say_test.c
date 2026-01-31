#include <stdio.h>
#include <stdbool.h>

#include "../../../asserts.h"
#include "../../../suite.h"

#include "../../../../source/2015/Day_10/Elves_Look_Elves_Say.h"

struct TestOutput test__look_and_say__good_weather__1() {
    struct TestOutput output = {
        __func__,
        assert_equal(look_and_say("1"), "11")
    };
    return output;
}

struct TestOutput test__look_and_say__good_weather__11() {
    struct TestOutput output = {
        __func__,
        assert_equal(look_and_say("11"), "21")
    };
    return output;
}

struct TestOutput test__look_and_say__good_weather__21() {
    struct TestOutput output = {
        __func__,
        assert_equal(look_and_say("21"), "1211")
    };
    return output;
}

struct TestOutput test__look_and_say__good_weather__1211() {
    struct TestOutput output = {
        __func__,
        assert_equal(look_and_say("1211"), "111221")
    };
    return output;
}

struct TestOutput test__look_and_say__good_weather__111221() {
    struct TestOutput output = {
        __func__,
        assert_equal(look_and_say("111221"), "312211")
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__look_and_say__good_weather__1,
        &test__look_and_say__good_weather__11,
        &test__look_and_say__good_weather__21,
        &test__look_and_say__good_weather__1211,
        &test__look_and_say__good_weather__111221
    };
    run(test_functions, 5);
}