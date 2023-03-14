#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - prints the number of arguments passed into it
 *
 * @argc: arguments count
 * @argv: array of arguments passed on the command line
 * Return: Always (0)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (1);
}
