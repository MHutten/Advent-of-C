#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "../../../include/2015/Day_06/Probably_a_Fire_Hazard.h"
#include "../../../include/testing/asserts.h"
#include "../../../include/testing/suite.h"

struct TestOutput test__turn_on__good_weather__0_0_trough_999_999() {

    bool ** lights = initialize_lights(false);

    int start[] = {0, 0};
    int end[] = {999, 999};

    turn_on(start, end, lights);

    bool output_bool = assert_equal(get_number_of_lit_lights(lights), 1000000);

    for (int i = 0; i < 1000; i++) {

        for (int j = 0; j < 1000; j++) {

            output_bool = output_bool && assert_is_true(lights[i][j]);

        }

    }

    struct TestOutput output = {
        __func__,
        output_bool
    };
    return output;
}

struct TestOutput test__toggle__good_weather__0_0_trough_999_0() {

    bool ** lights = initialize_lights(false);

    for (int index = 0; index < 1000; index++) {

        if (index % 2 == 0) {

            lights[index][0] = true;

        }

    }

    int start[] = {0, 0};
    int end[] = {999, 0};

    toggle(start, end, lights);

    bool output_bool = assert_equal(get_number_of_lit_lights(lights), 500);

    for (int index = 0; index < 1000; index++) {

        if (index % 2 == 0) {
            output_bool = output_bool && assert_is_false(lights[index][0]);
        } else {
            output_bool = output_bool && assert_is_true(lights[index][0]);
        }

        for (int j = 1; j < 1000; j++) {

            output_bool = output_bool && assert_is_false(lights[index][j]);

        }

    }

    struct TestOutput output = {
        __func__,
        output_bool
    };
    return output;
}

struct TestOutput test__turn_off__good_weather__499_499_trough_500_500() {

    bool ** lights = initialize_lights(true);

    int start[] = {499, 499};
    int end[] = {500, 500};

    turn_off(start, end, lights);

    bool output_bool = assert_equal(get_number_of_lit_lights(lights), 999996);

    for (int i = 0; i < 1000; i++) {

        for (int j = 0; j < 1000; j++) {

            if (i >= 499 && i <= 500 && j >= 499 && j <= 500) {

                output_bool = output_bool && assert_is_false(lights[i][j]);

            } else {

                output_bool = output_bool && assert_is_true(lights[i][j]);

            }

        }

    }

    struct TestOutput output = {
        __func__,
        output_bool
    };
    return output;
}

struct TestOutput test__turn_on_ancient_nordic_elvish__good_weather__0_0_trough_0_0() {

    int ** lights = initialize_lights_with_brightness_controls(0);

    int start[] = {0, 0};
    int end[] = {0, 0};

    turn_on_ancient_nordic_elvish(start, end, lights);

    bool output_bool = assert_equal(calculate_total_brightness(lights), 1);

    for (int i = 0; i < 1000; i++) {

        for (int j = 0; j < 1000; j++) {

            if (i == 0 && j == 0) {
                output_bool = output_bool && assert_equal(lights[i][j], 1);
            } else {
                output_bool = output_bool && assert_equal(lights[i][j], 0);
            }

        }

    }

    struct TestOutput output = {
        __func__,
        output_bool
    };
    return output;
}

struct TestOutput test__toggle_ancient_nordic_elvish__good_weather__0_0_trough_999_999() {

    int ** lights = initialize_lights_with_brightness_controls(0);

    int start[] = {0, 0};
    int end[] = {999, 999};

    toggle_ancient_nordic_elvish(start, end, lights);

    bool output_bool = assert_equal(calculate_total_brightness(lights), 2000000);

    for (int i = 0; i < 1000; i++) {

        for (int j = 0; j < 1000; j++) {

            output_bool = output_bool && assert_equal(lights[i][j], 2);

        }

    }

    struct TestOutput output = {
        __func__,
        output_bool
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__turn_on__good_weather__0_0_trough_999_999,
        &test__toggle__good_weather__0_0_trough_999_0,
        &test__turn_off__good_weather__499_499_trough_500_500,
        &test__turn_on_ancient_nordic_elvish__good_weather__0_0_trough_0_0,
        &test__toggle_ancient_nordic_elvish__good_weather__0_0_trough_999_999
    };
    run(test_functions, 5);
}