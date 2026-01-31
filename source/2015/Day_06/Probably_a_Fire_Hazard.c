#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Probably_a_Fire_Hazard.h"

bool ** initialize_lights(bool initial_state) {

    bool ** lights = (bool**) malloc(1000 * sizeof(bool *));

    for (int i = 0; i < 1000; i++) {

        lights[i] = (bool *) malloc(1000 * sizeof(bool));

        for (int j = 0; j < 1000; j++) {

            lights[i][j] = initial_state;

        }

    }

    return lights;

}

struct OperationData parse_operation_string(const string[]) {
    
    char * operation = strtok(string, " ");

    if (strcmp(operation, "turn") == 0) {

        operation = strtok(NULL, " ");

    }

    char * start = strtok(NULL, " ");
    strtok(NULL, " ");
    char * end = strtok(NULL, " ");

    int start_0 = atoi(strtok(start, ","));
    int start_1 = atoi(strtok(NULL, ","));

    int end_0 = atoi(strtok(end, ","));
    int end_1 = atoi(strtok(NULL, ","));

    struct OperationData operation_data = {
        operation,
        {start_0, start_1},
        {end_0, end_1}
    };

    return operation_data;

}

void turn_on(int start[2], int end[2], bool * lights[]) {

    for (int i = start[0]; i <= end[0]; i++) {

        for (int j = start[1]; j <= end[1]; j++) {

            lights[i][j] = true;

        }

    }

}

void toggle(int start[2], int end[2], bool * lights[]) {

    for (int i = start[0]; i <= end[0]; i++) {

        for (int j = start[1]; j <= end[1]; j++) {

            lights[i][j] = !lights[i][j];

        }

    }

}

void turn_off(int start[2], int end[2], bool * lights[]) {

    for (int i = start[0]; i <= end[0]; i++) {

        for (int j = start[1]; j <= end[1]; j++) {

            lights[i][j] = false;

        }

    }

}

int get_number_of_lit_lights(bool * lights[]) {

    int number_of_lit_lights = 0;

    for (int i = 0; i < 1000; i++) {

        for (int j = 0; j < 1000; j++) {

            if (lights[i][j] == true) {
                number_of_lit_lights++;
            }

        }

    }

    return number_of_lit_lights;

}

int ** initialize_lights_with_brightness_controls(int initial_state) {

    int ** lights = (int**) malloc(1000 * sizeof(int *));

    for (int i = 0; i < 1000; i++) {

        lights[i] = (int *) malloc(1000 * sizeof(int));

        for (int j = 0; j < 1000; j++) {

            lights[i][j] = initial_state;

        }

    }

    return lights;

}

int turn_on_ancient_nordic_elvish(int start[2], int end[2], int * lights[]) {

    int increase_in_brightness = 0;

    for (int i = start[0]; i <= end[0]; i++) {

        for (int j = start[1]; j <= end[1]; j++) {

            lights[i][j]++;
            increase_in_brightness++;

        }

    }

    return increase_in_brightness;

}

int toggle_ancient_nordic_elvish(int start[2], int end[2], int * lights[]) {

    int increase_in_brightness = 0;

    for (int i = start[0]; i <= end[0]; i++) {

        for (int j = start[1]; j <= end[1]; j++) {

            lights[i][j] += 2;
            increase_in_brightness += 2;

        }

    }

    return increase_in_brightness;

}

int turn_off_ancient_nordic_elvish(int start[2], int end[2], int * lights[]) {

    int decrease_in_brightness = 0;

    for (int i = start[0]; i <= end[0]; i++) {

        for (int j = start[1]; j <= end[1]; j++) {

            if (lights[i][j] > 0) {
                lights[i][j]--;
                decrease_in_brightness++;
            }

        }

    }

    return decrease_in_brightness;

}

int calculate_total_brightness(int * lights[]) {

    int brightness = 0;

    for (int i = 0; i < 1000; i++) {

        for (int j = 0; j < 1000; j++) {

            brightness += lights[i][j];

        }

    }

    return brightness;

}