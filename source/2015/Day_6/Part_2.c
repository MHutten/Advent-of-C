#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../../include/2015/Day_6/Probably_a_Fire_Hazard.h"
#include "../../../include/file.h"

int main (int argc, char *argv[]) {

    char ** lines = read_lines(argv[1]);
    int ** lights = initialize_lights_with_brightness_controls(0);
    int line_index = 0;

    while (lines[line_index] != NULL) {

        struct OperationData operation_data = parse_operation_string(lines[line_index]);

        if (strcmp(operation_data.operation, "on") == 0) {

            turn_on_ancient_nordic_elvish(operation_data.start, operation_data.end, lights);

        } else if (strcmp(operation_data.operation, "toggle") == 0) {

            toggle_ancient_nordic_elvish(operation_data.start, operation_data.end, lights);

        } else {

            turn_off_ancient_nordic_elvish(operation_data.start, operation_data.end, lights);

        }

        line_index++;

    }

    printf("%d\n", calculate_total_brightness(lights));

    return 0;
}
