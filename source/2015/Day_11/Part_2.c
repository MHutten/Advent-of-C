#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Corporate_Policy.h"

int main (int argc, char *argv[]) {

    char *password = (char *) malloc(9 * sizeof(char));
    strcpy(password, argv[1]);

    generate_new_secure_password(password);
    generate_new_secure_password(password);

    printf("%s\n", password);

    free(password);

    return 0;

}
