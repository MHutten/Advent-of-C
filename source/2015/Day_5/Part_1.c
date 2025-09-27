#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_5/Doesnt_He_Have_Intern-Elves_For_This.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char * file_content = read(argv[1]);
    int number_of_nice_strings = 0;
    char * string = strtok(file_content, "\n");

    while (string != NULL) {
        number_of_nice_strings += is_nice(string);
        string = strtok(NULL, "\n");
    }

    printf("%d\n", number_of_nice_strings);

    return 0;
}
