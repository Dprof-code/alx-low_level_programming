#include "main.h"

/**
 * read_textfile - reads a text file and
 * prints it to the POSIX standard output.
 * @filename: text file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if filename is NULL, return 0
 * if the file can not be opened or read, return 0
 * if write fails or does not write the
 * expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters) {
	if (filename == NULL)
	{
		return 0;
	}

	FILE *file = fopen(filename, "r");
	if (file == NULL)
	{
		return 0;
	}

	char *buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
	{
		fclose(file);
		return 0;
	}

	size_t bytes_read = fread(buffer, sizeof(char), letters, file);
	if (bytes_read == 0)
	{
		fclose(file);
		free(buffer);
		return 0;
	}

    buffer[bytes_read] = '\0';
    printf("%s", buffer);

    fclose(file);
    free(buffer);
    return bytes_read;
}
