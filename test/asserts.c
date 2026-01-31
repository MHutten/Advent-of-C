#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool fail() {
    return false;
}

bool assert_equal_int(int first, int second) {
    return first == second;
}

bool assert_equal_string(char * first, char * second) {
    return strcmp(first, second) == 0;
}

bool assert_is_true(bool condition) {
    return condition;
}

bool assert_is_false(bool condition) {
    return !condition;
}