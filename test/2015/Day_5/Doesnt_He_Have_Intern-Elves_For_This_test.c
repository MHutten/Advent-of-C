#include <stdio.h>
#include <stdbool.h>

#include "../../../include/2015/Day_5/Doesnt_He_Have_Intern-Elves_For_This.h"
#include "../../../include/testing/asserts.h"
#include "../../../include/testing/suite.h"

struct TestOutput test__is_nice__good_weather__ugknbfddgicrmopn() {
    struct TestOutput output = {
        __func__,
        assert_is_true(is_nice("ugknbfddgicrmopn"))
    };
    return output;
}

struct TestOutput test__is_nice__good_weather__aaa() {
    struct TestOutput output = {
        __func__,
        assert_is_true(is_nice("aaa"))
    };
    return output;
}

struct TestOutput test__is_nice__good_weather__jchzalrnumimnmhp() {
    struct TestOutput output = {
        __func__,
        assert_is_false(is_nice("jchzalrnumimnmhp"))
    };
    return output;
}

struct TestOutput test__is_nice__good_weather__haegwjzuvuyypxyu() {
    struct TestOutput output = {
        __func__,
        assert_is_false(is_nice("haegwjzuvuyypxyu"))
    };
    return output;
}

struct TestOutput test__is_nice__good_weather__dvszwmarrgswjxmb() {
    struct TestOutput output = {
        __func__,
        assert_is_false(is_nice("dvszwmarrgswjxmb"))
    };
    return output;
}

struct TestOutput test__is_nice_now__good_weather__qjhvhtzxzqqjkmpb() {
    struct TestOutput output = {
        __func__,
        assert_is_true(is_nice_now("qjhvhtzxzqqjkmpb"))
    };
    return output;
}

struct TestOutput test__is_nice_now__good_weather__xxyxx() {
    struct TestOutput output = {
        __func__,
        assert_is_true(is_nice_now("xxyxx"))
    };
    return output;
}

struct TestOutput test__is_nice_now__good_weather__uurcxstgmygtbstg() {
    struct TestOutput output = {
        __func__,
        assert_is_false(is_nice_now("uurcxstgmygtbstg"))
    };
    return output;
}

struct TestOutput test__is_nice_now__good_weather__ieodomkazucvgmuy() {
    struct TestOutput output = {
        __func__,
        assert_is_false(is_nice_now("ieodomkazucvgmuy"))
    };
    return output;
}

int main() {
    test_function test_functions[] = {
        &test__is_nice__good_weather__ugknbfddgicrmopn,
        &test__is_nice__good_weather__aaa,
        &test__is_nice__good_weather__jchzalrnumimnmhp,
        &test__is_nice__good_weather__haegwjzuvuyypxyu,
        &test__is_nice__good_weather__dvszwmarrgswjxmb,
        &test__is_nice_now__good_weather__qjhvhtzxzqqjkmpb,
        &test__is_nice_now__good_weather__xxyxx,
        &test__is_nice_now__good_weather__uurcxstgmygtbstg,
        &test__is_nice_now__good_weather__ieodomkazucvgmuy
    };
    run(test_functions, 9);
}