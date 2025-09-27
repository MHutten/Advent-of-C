#include <stdbool.h>
#include <string.h>

#include <stdio.h>

bool is_vowel(char character) {
    char vowels[] = "aeiou";
    int index = 0;

    while (vowels[index] != '\0') {

        if (character == vowels[index]) {
            return true;
        }

        index++;
    }

    return false;
}

void slice(const char string[], char result[], int start, int end) {
    strncpy(result, string + start, end - start);
}

bool is_naughty_substring(char string[3]) {
    char * naughty_substrings[] = {"ab", "cd", "pq", "xy"};
    int index = 0;

    while (index < 4) {

        if (string[0] == naughty_substrings[index][0] && string[1] == naughty_substrings[index][1]) {
            return true;
        }

        index++;
    }

    return false;
}

bool occurs_at_least_twice(char sub[], char sup[], int start) {

    int sup_index = start;

    while (sup[sup_index] != '\0') {

        int sub_index = 0;
        bool is_match = true;

        while (sub[sub_index] != '\0') {

            if (sub[sub_index] != sup[sup_index + sub_index]) {
                is_match = false;
            }

            sub_index++;

        }

        if (is_match) {
            return true;
        }

        sup_index++;

    }

    return false;

}

bool is_nice(char string[]) {
    
    bool contains_consecutives = false;
    int vowel_count = 0;

    if (is_vowel(string[0])) {
        vowel_count++;
    }

    int index = 1;

    while (string[index] != '\0') {

        char substring[3] = "";
        slice(string, substring, index-1, index+1);

        if (is_naughty_substring(substring)) {
            return false;
        }

        if (is_vowel(string[index])) {
            vowel_count++;
        }

        if (string[index-1] == string[index]) {
            contains_consecutives = true;
        }

        index++;

    }

    return contains_consecutives && (vowel_count > 2);

}

bool is_nice_now(char string[]) {

    bool contains_multiple_non_overlapping_duplicate_pairs = false;
    bool contains_repeating_character_seperated_by_one_character = false;

    char substring[3] = "";
    slice(string, substring, 0, 2);

    if (occurs_at_least_twice(substring, string, 2)) {
        contains_multiple_non_overlapping_duplicate_pairs = true;
    }

    int index = 2;

    while (string[index] != '\0') {

        slice(string, substring, index - 1, index + 1);

        if (occurs_at_least_twice(substring, string, index + 1)) {
            contains_multiple_non_overlapping_duplicate_pairs = true;
        }

        if (string[index - 2] == string[index]) {
            contains_repeating_character_seperated_by_one_character = true;
        }

        if (contains_multiple_non_overlapping_duplicate_pairs && contains_repeating_character_seperated_by_one_character) {
            return true;
        }

        index++;

    }

    return false;

}