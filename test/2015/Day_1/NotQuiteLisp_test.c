#include <stdio.h>
#include <stdbool.h>

#include "../../../source/2015/Day_1/NotQuiteLisp.h"
#include "../../../source/testing/asserts.h"

struct TestOutput {
    const char * function_name;
    const bool result;
};

struct TestSuite {
    struct TestOutput (*fptr)();
};

void test__calculate_santas_final_destination__good_weather__up_up_down_down() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination("(())"), 0);
}

void test__calculate_santas_final_destination__good_weather__up_down_up_down() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination("()()"), 0);
}

void test__calculate_santas_final_destination__good_weather__up_up_up() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination("((("), 3);
}

void test__calculate_santas_final_destination__good_weather__up_up_down_up_up_down_up() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination("(()(()("), 3);
}

void test__calculate_santas_final_destination__good_weather__down_down_up_up_up_up_up() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination("))((((("), 3);
}

void test__calculate_santas_final_destination__good_weather__up_down_down() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination("())"), -1);
}

void test__caculate_santas_final_destination__good_weather__down_down_up() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination("))("), -1);
}

void test__calculate_santas_final_destination__good_weather__down_down_down() {
    printf("%s ", __func__);
    assert_equal(calculate_santas_final_destination(")))"), -3);
}

 struct TestOutput test__calculate_santas_final_destination__good_weather__down_up_down_down_up_down_down() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_santas_final_destination(")())())"),-3)
    };
    return output;
}

int main() {
    struct TestSuite my_suite;
    my_suite.fptr = &test__calculate_santas_final_destination__good_weather__down_up_down_down_up_down_down;

    struct TestOutput output = my_suite.fptr();
    if (output.result == true) {
        printf("%s: PASS\n", output.function_name);
    } else {
        printf("%s: FAIL\n", output.function_name);
    }
}