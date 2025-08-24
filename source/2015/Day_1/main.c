#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "NotQuiteLisp.h"

int main (int argc, char *argv[]) {
    printf("You have entered %d arguments:\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }

    FILE *fptr;

    fptr = fopen("source/2015/Day_1/NotQuiteLisp.txt", "r");

    if (fptr == NULL) {
        fprintf(stderr, "file not found\n");
        exit(1);
    }

    int c;
    int nch = 0;
    size_t size = 10;
    char *buf = malloc(size);

    if (buf == NULL) {
        fprintf(stderr, "out of memory\n");
        exit(1);
    }

    while ((c = fgetc(fptr)) != EOF) {

        if (nch >= size-1) {
            size *= 2;
            buf = realloc(buf, size);

            if (buf == NULL) {
                fprintf(stderr, "out of memory\n");
                exit(1);
            }
        }

        buf[nch++] = c;
    }

    if (nch >= size-1) {
        size += 1;
        buf = realloc(buf, size);

        if (buf == NULL) {
            fprintf(stderr, "out of memory\n");
            exit(1);
        }
    }

    buf[nch++] = '\0';

    printf("%d\n", calculate_santas_final_destination(buf));

    return 0;
}
