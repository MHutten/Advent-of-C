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