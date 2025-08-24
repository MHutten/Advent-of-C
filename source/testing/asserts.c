#include <stdbool.h>
#include <stdio.h>

bool fail() {
    return false;
}

bool assert_equal_int(int first, int second) {

    if (first == second) {
        return true;
    } else {
        return false;
    }

}