#include <ctype.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char *integer_to_ascii(int integer) {

    int digit_count = 1;

    if (integer > 0) {
        digit_count = (int) log10(integer) + 1;
    }

    int index = 0;
    int remainder = integer;
    char *ascii = (char *) malloc((digit_count + 1) * sizeof(char));

    while (index < digit_count) {

        ascii[index] = (char) (remainder / (int) pow(10, digit_count - 1 - index)) + 48;
        remainder %= (int) pow(10, digit_count - 1 - index);
        index++;

    }

    ascii[index] = '\0';

    return ascii;

}

char *look_and_say(char *string) {

    size_t length = 1;
    char *output = (char *) malloc(length * sizeof(char));
    output[0] = '\0';
    size_t string_index = 0;

    while (string[string_index] != '\0') {

        if (!isdigit(string[string_index])) {
            printf("'%c' is not a digit\n", string[string_index]);
            exit(1);
        }

        char digit = string[string_index];
        int count = 1;

        while (string[string_index + count] == digit) {
            count++;
        }

        char *count_string = integer_to_ascii(count);
        size_t previous_length = length;
        length += strlen(count_string) + 1;
        output = realloc(output, length);
        strcat(output, count_string);
        output[length - 2] = digit;
        output[length - 1] = '\0';

        free(count_string);
        string_index += count;

    }

    return output;

}