#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_02/I_Was_Told_There_Would_Be_No_Math.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char ** lines = read_lines(argv[1]);
    int area_of_wrapping_paper = 0;
    int index = 0;
    char * length;
    char * width;
    char * height;

    while (lines[index] != NULL) {

        length = strtok(lines[index], "x");
        width = strtok(NULL, "x");
        height = strtok(NULL, "x");

        area_of_wrapping_paper += calculate_area_of_wrapping_paper(atoi(length), atoi(width), atoi(height));

        index++;

    }

    printf("%d\n", area_of_wrapping_paper);

    return 0;
}