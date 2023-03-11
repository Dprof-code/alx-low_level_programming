#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the name of a program
 *
 * @argc: arguments count
 * @argv: array of arguments passed on the command line
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[0]);

	return (0);
}
