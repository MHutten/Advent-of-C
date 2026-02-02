#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void increment_password(char *password) {

    int index = 7;

    while (index >= 0) {

        if (password[index] != 'z') {
            password[index]++;
            break;
        }

        password[index] = 'a';
        index--;

    }

}

bool includes_increasing_straight_of_three(char *password) {

    for (int index = 0; index < 6; index++) {

        if (password[index + 1] == password[index] + 1 && password[index + 2] == password[index + 1] + 1) {
            return true;
        }

    }

    return false;

}

bool does_not_contain_i_o_or_l(char *password) {

    for (int index = 0; index < 8; index++) {

        if (password[index] == 'i' || password[index] == 'o' || password[index] == 'l') {
            return false;
        }

    }

    return true;

}

bool contains_two_non_overlapping_pairs(char *password) {

    int pair_count = 0;
    char first_pair_character = '\0';

    for (int index = 0; index < 7; index++) {

        if (password[index] == password[index + 1]) {

            if (pair_count == 0) {
                pair_count++;
                first_pair_character = password[index];
            } else if (password[index] != first_pair_character) {
                return true;
            }

        }

    }

    return false;

}

bool is_secure(char *password) {
    return includes_increasing_straight_of_three(password) && does_not_contain_i_o_or_l(password) && contains_two_non_overlapping_pairs(password);
}

void generate_new_secure_password(char *password) {

    increment_password(password);

    while(!is_secure(password)) {
        increment_password(password);
    }

}