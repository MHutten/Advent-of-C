#include <stdio.h>
#include <stdlib.h>

#include "../../../include/2015/Day_1/NotQuiteLisp.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    printf("%d\n", calculate_santas_final_destination(read(argv[1])));

    return 0;
}
