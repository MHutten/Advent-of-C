#include <stdio.h>
#include <stdbool.h>

#include "../../../include/2015/Day_1/NotQuiteLisp.h"
#include "../../../include/testing/asserts.h"
#include "../../../include/testing/suite.h"

struct TestOutput test__calculate_santas_final_destination__good_weather__up_up_down_down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination("(())"), 0)
    };
    return output;
}

struct TestOutput test__calculate_santas_final_destination__good_weather__up_down_up_down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination("()()"), 0)
    };
    return output;
}

struct TestOutput test__calculate_santas_final_destination__good_weather__up_up_up() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination("((("), 3)
    };
    return output;
}

struct TestOutput test__calculate_santas_final_destination__good_weather__up_up_down_up_up_down_up() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination("(()(()("), 3)
    };
    return output;
}

struct TestOutput test__calculate_santas_final_destination__good_weather__down_down_up_up_up_up_up() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination("))((((("), 3)
    };
    return output;
}

struct TestOutput test__calculate_santas_final_destination__good_weather__up_down_down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination("())"), -1)
    };
    return output;
}

struct TestOutput test__calculate_santas_final_destination__good_weather__down_down_up() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination("))("), -1)
    };
    return output;
}

struct TestOutput test__calculate_santas_final_destination__good_weather__down_down_down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination(")))"), -3)
    };
    return output;        
}

struct TestOutput test__calculate_santas_final_destination__good_weather__down_up_down_down_up_down_down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination(")())())"),-3)
    };
    return output;
}

struct TestOutput test__calculate_basement_entering_instruction_position__good_weather__down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_basement_entering_instruction_position(")"), 1)
    };
    return output;
}

struct TestOutput test__calculate_basement_entering_instruction_position__good_weather__up_down_up_down_down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_basement_entering_instruction_position("()())"), 5)
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__calculate_santas_final_destination__good_weather__up_up_down_down,
        &test__calculate_santas_final_destination__good_weather__up_down_up_down,
        &test__calculate_santas_final_destination__good_weather__up_up_up,
        &test__calculate_santas_final_destination__good_weather__up_up_down_up_up_down_up,
        &test__calculate_santas_final_destination__good_weather__down_down_up_up_up_up_up,
        &test__calculate_santas_final_destination__good_weather__up_down_down,
        &test__calculate_santas_final_destination__good_weather__down_down_up,
        &test__calculate_santas_final_destination__good_weather__down_down_down,
        &test__calculate_santas_final_destination__good_weather__down_up_down_down_up_down_down,
        &test__calculate_basement_entering_instruction_position__good_weather__down,
        &test__calculate_basement_entering_instruction_position__good_weather__up_down_up_down_down
    };
    run(test_functions, 11);
}