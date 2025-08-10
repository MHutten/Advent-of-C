#include <stdbool.h>
#include <stdio.h>

bool assert_equal(int first, int second) {

    if (first == second) {
        return true;
    } else {
        return false;
    }

}