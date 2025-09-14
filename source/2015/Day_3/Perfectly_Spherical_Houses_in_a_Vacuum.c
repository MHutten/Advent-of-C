#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#include "../../../include/2015/Day_3/Perfectly_Spherical_Houses_in_a_Vacuum.h"

int count_visited_houses(Node * visited_houses) {
    int count = 0;

    Node * current_house_pointer = visited_houses;

    while(current_house_pointer != NULL) {
        count++;
        current_house_pointer = current_house_pointer->child;
    }

    return count;
}

void update_location(int location[2], char instruction) {
    if (instruction == '^') {
        location[1]++;
    } else if (instruction == 'v') {
        location[1]--;
    } else if (instruction == '>') {
        location[0]++;
    } else {
        location[0]--;
    }
}

Node * construct_node(int x, int y) {

    struct Node * node = malloc(sizeof (struct Node));

    node->position[0] = x;
    node->position[1] = y;
    node->child = NULL;

    return node;

}

void set_node(Node * root, int position[2]) {
    Node * previous_house_pointer = NULL;
    Node * current_house_pointer = root;

    while (true) {

        if (current_house_pointer == NULL) {

            previous_house_pointer->child = construct_node(position[0], position[1]);
            break;

        } else {

            if (current_house_pointer->position[0] == position[0] && current_house_pointer->position[1] == position[1]) {
                break;
            }

            previous_house_pointer = current_house_pointer;
            current_house_pointer = current_house_pointer->child;

        }

    }
}

int calculate_number_of_visited_houses(const char * instructions) {

    Node first_house = {
        {0, 0},
        NULL
    };

    Node * visited_houses = &first_house;

    int current_location[] = {0, 0};
    int index = 0;

    while (true) {

        if (instructions[index] == '\0') {
            return count_visited_houses(visited_houses);
        }

        update_location(current_location, instructions[index]);

        set_node(visited_houses, current_location);

        index++;

    }
}

int calculate_number_of_visited_houses_with_robo_santa(const char * instructions) {

    Node first_house = {
        {0, 0},
        NULL
    };

    Node * visited_houses = &first_house;

    int santas_current_location[] = {0, 0};
    int robo_current_location[] = {0, 0};
    bool it_is_santas_turn = true;
    int index = 0;

    while (true) {

        if (instructions[index] == '\0') {
            return count_visited_houses(visited_houses);
        }

        if (it_is_santas_turn) {
            update_location(santas_current_location, instructions[index]);
            set_node(visited_houses, santas_current_location);
        } else {
            update_location(robo_current_location, instructions[index]);
            set_node(visited_houses, robo_current_location);
        }

        it_is_santas_turn = !it_is_santas_turn;
        index++;

    }

}