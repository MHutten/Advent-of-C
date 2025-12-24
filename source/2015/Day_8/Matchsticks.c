#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int calculate_difference_between_code_and_memory_characters(char *string) {

    int difference = 2;

    size_t index = 1;

    while (string[index + 1] != '\0') {

        int step;

        if (string[index] != '\\') {
            step = 1;
        } else if (string[index + 1] == '\\' || string[index + 1] == '\"') {
            step = 2;
        } else if (string[index + 1] == 'x' && isxdigit(string[index + 2]) && isxdigit(string[index + 3])) {
            step = 4;
        } else {
            printf("Unexpected next characters '%c', '%c', and '%c' in string \"%s\"", string[index + 1], string[index + 2], string[index + 3], string);
            exit(-1);
        }

        difference += step - 1;
        index += step;

    }

    return difference;

}