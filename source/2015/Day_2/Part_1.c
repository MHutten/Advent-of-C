#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_2/I_Was_Told_There_Would_Be_No_Math.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char * file_content = read(argv[1]);
    int area_of_wrapping_paper = 0;
    char * length = strtok(file_content, "x");
    char * width = strtok(NULL, "x");
    char * height = strtok(NULL, "\n");

    while (length != NULL) {
        area_of_wrapping_paper += calculate_area_of_wrapping_paper(atoi(length), atoi(width), atoi(height));
        length = strtok(NULL, "x");
        width = strtok(NULL, "x");
        height = strtok(NULL, "\n");
    }

    printf("%d\n", area_of_wrapping_paper);

    return 0;
}