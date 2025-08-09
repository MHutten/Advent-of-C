#include <stdio.h>

void assert_equal(int first, int second) {

    if (first == second) {
        printf("PASS\n");
    } else {
        printf("FAIL\n");
    }

}