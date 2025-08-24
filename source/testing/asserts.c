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

bool assert_equal_string(char * first, char * second) {

    int index = 0;

    while (true) {
        
        if (first[index] != second[index]) {
            return false;
        }

        if (first[index] == '\0') {
            break;
        }

        index++;
    }

    return true;

}