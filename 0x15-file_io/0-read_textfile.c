#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: file to be read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t bytesRead;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	buffer = (char *)malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}

	bytesRead = fread(buffer, sizeof(char), letters, fp);
	if (bytesRead == 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	buffer[bytesRead] = '\0';

	printf("%s", buffer);

	fclose(fp);
	free(buffer);

	return (bytesRead);
}
