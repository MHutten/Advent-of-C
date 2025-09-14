#include <stdio.h>
#include <stdlib.h>

#include "../../../include/2015/Day_3/Perfectly_Spherical_Houses_in_a_Vacuum.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    printf("%d\n", calculate_number_of_visited_houses(read(argv[1])));

    return 0;
}
