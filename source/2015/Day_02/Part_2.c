#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "I_Was_Told_There_Would_Be_No_Math.h"
#include "../../file.h"

int main (int argc, char *argv[]) {

    char ** lines = read_lines(argv[1]);
    int ribbon_length = 0;
    int index = 0;
    char * length;
    char * width;
    char * height;

    while (lines[index] != NULL) {
        
        length = strtok(lines[index], "x");
        width = strtok(NULL, "x");
        height = strtok(NULL, "x");

        ribbon_length += calculate_ribbon_length(atoi(length), atoi(width), atoi(height));
        
        index++;

    }

    printf("%d\n", ribbon_length);

    return 0;
}