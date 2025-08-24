#include <stdio.h>
#include <stdbool.h>

int calculate_santas_final_destination(const char * directions) {

    int floor = 0;
    int index = 0;

    while (true) {

        if (directions[index] == '(') {
            floor++;
        } else if (directions[index] == ')') {
            floor--;
        } else if (directions[index] == '\0') {
            return floor;
        }

        index++;

    }

}