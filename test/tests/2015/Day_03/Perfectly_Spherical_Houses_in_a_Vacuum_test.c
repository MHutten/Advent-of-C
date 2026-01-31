#include <stdio.h>
#include <stdbool.h>

#include "../../../asserts.h"
#include "../../../suite.h"

#include "../../../../source/2015/Day_03/Perfectly_Spherical_Houses_in_a_Vacuum.h"

struct TestOutput test__calculate_number_of_visited_houses__good_weather__east() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_number_of_visited_houses(">"), 2)
    };
    return output;
}

struct TestOutput test__calculate_number_of_visited_houses__good_weather__north_east_south_west() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_number_of_visited_houses("^>v<"), 4)
    };
    return output;
}

struct TestOutput test__calculate_number_of_visited_houses__good_weather__north_south_repeated_5_times() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_number_of_visited_houses("^v^v^v^v^v"), 2)
    };
    return output;
}

struct TestOutput test__calculate_number_of_visited_houses_with_robo_santa__good_weather__north_south() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_number_of_visited_houses_with_robo_santa("^v"), 3)
    };
    return output;
}

struct TestOutput test__calculate_number_of_visited_houses_with_robo_santa__good_weather__north_east_south_west() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_number_of_visited_houses_with_robo_santa("^>v<"), 3)
    };
    return output;
}

struct TestOutput test__calculate_number_of_visited_houses_with_robo_santa__good_weather__north_south_repeated_5_times() {
    struct TestOutput output = {
        __func__,
        assert_equal(calculate_number_of_visited_houses_with_robo_santa("^v^v^v^v^v"), 11)
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__calculate_number_of_visited_houses__good_weather__east,
        &test__calculate_number_of_visited_houses__good_weather__north_east_south_west,
        &test__calculate_number_of_visited_houses__good_weather__north_south_repeated_5_times,
        &test__calculate_number_of_visited_houses_with_robo_santa__good_weather__north_south,
        &test__calculate_number_of_visited_houses_with_robo_santa__good_weather__north_east_south_west,
        &test__calculate_number_of_visited_houses_with_robo_santa__good_weather__north_south_repeated_5_times
    };
    run(test_functions, 6);
}