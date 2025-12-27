#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int calculate_memory_length(char *string) {

    int length = 0;
    size_t index = 1;

    while (string[index + 1] != '\0') {

        if (string[index] != '\\') {
            index++; 
        } else if (string[index + 1] == '\\' || string[index + 1] == '\"') {
            index += 2;
        } else if (string[index + 1] == 'x' && isxdigit(string[index + 2]) && isxdigit(string[index + 3])) {
            index += 4;
        } else {
            printf("Unexpected next characters '%c', '%c', and '%c' in string \"%s\"", string[index + 1], string[index + 2], string[index + 3], string);
            exit(-1);
        }

        length++;

    }

    return length;

}

int calculate_encoded_length(char *string) {

    int length = 6;
    size_t index = 1;

    while (string[index + 1] != '\0') {

        if (string[index] == '\"' || string[index] == '\\') {
            length += 2;
        } else {
            length++;
        }

        index++;

    }

    return length;

}