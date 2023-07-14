#include "main.h"

/**
 * error_exit - error handler
 *
 * @message: error message
 * @exit_code: error code
 * Return: nothing
 */

void error_exit(const char *message, int exit_code)
{
	dprintf(STDERR_FILENO, "%s\n", message);
	exit(exit_code);
}

/**
 * main - copies the content of a file to another file.
 *
 * @argc: arguments count
 * @argv: array of passed arguments
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;
	int fd_from;
	int fd_to;

	if (argc != 3)
		error_exit("Usage: cp file_from file_to", 97);

	file_from = argv[1];
	file_to = argv[2];
	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		error_exit("Error: Can't read from file", 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_to == -1)
		error_exit("Error: Can't write to file", 99);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
			error_exit("Error: Can't write to file", 99);
	}

	if (bytes_read == -1)
		error_exit("Error: Can't read from file", 98);

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd", 100);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd", 100);

	return (0);
}
