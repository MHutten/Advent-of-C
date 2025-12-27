#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_08/Matchsticks.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char **lines = read_lines(argv[1]);
    size_t difference = 0;
    int index = 0;

    while (lines[index] != NULL) {

        difference += calculate_encoded_length(lines[index]) - strlen(lines[index]);
        index++;

    }

    printf("%ld\n", difference);

    return 0;
}
