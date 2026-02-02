#include <stdio.h>
#include <stdbool.h>

#include "../../../asserts.h"
#include "../../../suite.h"

#include "../../../../source/2015/Day_11/Corporate_Policy.h"

struct TestOutput test__is_secure__good_weather__hijklmmn() {

    char *password = (char *) malloc(9 * sizeof(char));
    strcpy(password, "hijklmmn");

    bool result = assert_is_true(includes_increasing_straight_of_three(password));
    result &= assert_is_false(does_not_contain_i_o_or_l(password));
    result &= assert_is_false(is_secure(password));

    free(password);

    struct TestOutput output = {
        __func__,
        result
    };
    return output;

}

struct TestOutput test__is_secure__good_weather__abbceffg() {

    char *password = (char *) malloc(9 * sizeof(char));
    strcpy(password, "abbceffg");

    bool result = assert_is_true(contains_two_non_overlapping_pairs(password));
    result &= assert_is_false(includes_increasing_straight_of_three(password));
    result &= assert_is_false(is_secure(password));

    free(password);

    struct TestOutput output = {
        __func__,
        result
    };
    return output;

}

struct TestOutput test__is_secure__good_weather__abbcegjk() {

    char *password = (char *) malloc(9 * sizeof(char));
    strcpy(password, "abbcegjk");

    bool result = assert_is_false(contains_two_non_overlapping_pairs(password));
    result &= assert_is_false(is_secure(password));

    free(password);

    struct TestOutput output = {
        __func__,
        result
    };
    return output;

}

struct TestOutput test__generate_new_secure_password__good_weather__abcdefgh() {

    char *password = (char *) malloc(9 * sizeof(char));
    strcpy(password, "abcdefgh");

    generate_new_secure_password(password);

    bool result = assert_equal(password, "abcdffaa");

    free(password);

    struct TestOutput output = {
        __func__,
        result
    };
    return output;

}

struct TestOutput test__generate_new_secure_password__good_weather__ghijklmn() {

    char *password = (char *) malloc(9 * sizeof(char));
    strcpy(password, "ghijklmn");

    generate_new_secure_password(password);

    bool result = assert_equal(password, "ghjaabcc");

    free(password);

    struct TestOutput output = {
        __func__,
        result
    };
    return output;

}

int main() {
    test_function test_functions[] = {
        &test__is_secure__good_weather__hijklmmn,
        &test__is_secure__good_weather__abbceffg,
        &test__is_secure__good_weather__abbcegjk,
        &test__generate_new_secure_password__good_weather__abcdefgh,
        &test__generate_new_secure_password__good_weather__ghijklmn
    };
    run(test_functions, 5);
}