#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_05/Doesnt_He_Have_Intern-Elves_For_This.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char ** lines = read_lines(argv[1]);
    int number_of_nice_strings = 0;
    int index = 0;

    while (lines[index] != NULL) {

        number_of_nice_strings += is_nice_now(lines[index]);
        index++;

    }

    printf("%d\n", number_of_nice_strings);

    return 0;
}
