#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success
 * return -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *file;
	int result;

	if (filename == NULL || text_content == NULL)
		return (-1);

	file = fopen(filename, "a");
	if (file == NULL)
		return (-1);

	result = fputs(text_content, file);

	fclose(file);

	if (result < 0)
		return (-1);

	return (1);
}
