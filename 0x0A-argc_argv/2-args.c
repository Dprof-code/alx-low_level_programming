#include "main.h"
#include <stdio.h>

/**
 * main - prints the list of arguments passed into it
 *
 * @argc: arguments count
 * @argv: array of arguments passed on the command line
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}

	return (0);
}
