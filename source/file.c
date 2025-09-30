#include <stdio.h>
#include <stdlib.h>

void __assert_file_found(FILE * file_pointer) {
    if (file_pointer == NULL) {
        fprintf(stderr, "file not found\n");
        exit(1);
    }
}

void __assert_memory_is_allocated(char * file_content_buffer) {
    if (file_content_buffer == NULL) {
        fprintf(stderr, "out of memory\n");
        exit(1);
    }
}

void __assert_lines_memory_is_allocated(char ** file_content_buffer) {
    if (file_content_buffer == NULL) {
        fprintf(stderr, "out of memory\n");
        exit(1);
    }
}

char * read(char * file_path) {

    FILE *file_pointer = fopen(file_path, "r");

    __assert_file_found(file_pointer);

    int character;
    int character_index = 0;
    size_t size = 10;
    char *file_content_buffer = malloc(size);

    __assert_memory_is_allocated(file_content_buffer);

    while ((character = fgetc(file_pointer)) != EOF) {

        if (character_index >= size-1) {
            size *= 2;
            file_content_buffer = realloc(file_content_buffer, size);
            __assert_memory_is_allocated(file_content_buffer);
        }

        file_content_buffer[character_index++] = character;
    }

    if (character_index >= size-1) {
        size += 1;
        file_content_buffer = realloc(file_content_buffer, size);
        __assert_memory_is_allocated(file_content_buffer);
    }

    file_content_buffer[character_index++] = '\0';

    return file_content_buffer;
}

char ** read_lines(char file_path[]) {

    FILE *file_pointer = fopen(file_path, "r");

    __assert_file_found(file_pointer);

    int character;
    int line_index = 0;
    size_t size = 10;
    char ** file_content_buffer = (char **) malloc(size * sizeof(char *));

    __assert_lines_memory_is_allocated(file_content_buffer);

    character = fgetc(file_pointer);

    while (character != EOF) {

        if (line_index >= size - 1) {
            size *= 2;
            file_content_buffer = (char **) realloc(file_content_buffer, size * sizeof(char *));
            __assert_lines_memory_is_allocated(file_content_buffer);
        }

        int character_index = 0;
        size_t line_size = 10;
        char * line_buffer = malloc(line_size);

        __assert_memory_is_allocated(line_buffer);

        while (character != '\n' && character != EOF) {

            if (character_index >= line_size - 1) {

                line_size *= 2;
                line_buffer = realloc(line_buffer, line_size);
                __assert_memory_is_allocated(line_buffer);

            }

            line_buffer[character_index++] = character;

            character = fgetc(file_pointer);

        }

        if (character_index >= line_size - 1) {

            line_size += 1;
            line_buffer = realloc(line_buffer, line_size);
            __assert_memory_is_allocated(line_buffer);

        }

        line_buffer[character_index++] = '\0';

        file_content_buffer[line_index++] = line_buffer;

        if (character == '\n') {
            character = fgetc(file_pointer);
        }
    }

    if (line_index >= size-1) {
        size += 1;
        file_content_buffer = (char **) realloc(file_content_buffer, size * sizeof(char *));
        __assert_lines_memory_is_allocated(file_content_buffer);
    }

    file_content_buffer[line_index++] = NULL;

    return file_content_buffer;

}