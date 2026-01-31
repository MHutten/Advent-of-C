#include <stdio.h>
#include <stdlib.h>

#include "Not_Quite_Lisp.h"
#include "../../file.h"

int main (int argc, char *argv[]) {

    printf("%d\n", calculate_basement_entering_instruction_position(read(argv[1])));

    return 0;
}
