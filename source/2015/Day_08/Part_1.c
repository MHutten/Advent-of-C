#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Matchsticks.h"
#include "../../file.h"

int main (int argc, char *argv[]) {

    char **lines = read_lines(argv[1]);
    size_t difference = 0;
    int index = 0;

    while (lines[index] != NULL) {

        difference += strlen(lines[index]) - calculate_memory_length(lines[index]);
        index++;

    }

    printf("%ld\n", difference);

    return 0;
}
