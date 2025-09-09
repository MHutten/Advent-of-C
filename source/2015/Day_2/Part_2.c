#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_2/I_Was_Told_There_Would_Be_No_Math.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char * file_content = read(argv[1]);
    int ribbon_length = 0;
    char * length = strtok(file_content, "x");
    char * width = strtok(NULL, "x");
    char * height = strtok(NULL, "\n");

    while (length != NULL) {
        ribbon_length += calculate_ribbon_length(atoi(length), atoi(width), atoi(height));
        length = strtok(NULL, "x");
        width = strtok(NULL, "x");
        height = strtok(NULL, "\n");
    }

    printf("%d\n", ribbon_length);

    return 0;
}