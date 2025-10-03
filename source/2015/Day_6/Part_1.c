#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_6/Probably_a_Fire_Hazard.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char ** lines = read_lines(argv[1]);
    bool ** lights = initialize_lights(false);
    int number_of_lit_lights = 0;
    int line_index = 0;

    while (lines[line_index] != NULL) {

        struct OperationData operation_data = parse_operation_string(lines[line_index]);

        if (strcmp(operation_data.operation, "on") == 0) {

            number_of_lit_lights += turn_on(operation_data.start, operation_data.end, lights);

        } else if (strcmp(operation_data.operation, "toggle") == 0) {

            int * number_of_lit_and_extinguished_lights = toggle(operation_data.start, operation_data.end, lights);
            number_of_lit_lights += number_of_lit_and_extinguished_lights[0];
            number_of_lit_lights -= number_of_lit_and_extinguished_lights[1];

        } else {

            number_of_lit_lights -= turn_off(operation_data.start, operation_data.end, lights);

        }

        line_index++;

    }

    printf("%d\n", number_of_lit_lights);

    return 0;
}
