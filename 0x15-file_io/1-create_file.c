#include "main.h"

/**
 * create_file - appends text at the end of a file
 * @filename: file to be appended
 * @text_content: text
 * Return - 1 on success
 */

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    int file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1) {
        return -1;
    }

    if (text_content != NULL) {
        size_t text_length = strlen(text_content);
        ssize_t bytes_written = write(file_descriptor, text_content, text_length);
        if (bytes_written != text_length) {
            close(file_descriptor);
            return -1;
        }
    }

    close(file_descriptor);
    return 1;
}

