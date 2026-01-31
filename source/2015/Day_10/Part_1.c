#include <stdio.h>
#include <string.h>

#include "Elves_Look_Elves_Say.h"

int main(int argc, char *argv[]) {

    char *string = argv[1];

    for (int iteration = 0; iteration < 40; iteration++) {
        string = look_and_say(string);
    }

    printf("%ld\n", strlen(string));

    return 0;

}