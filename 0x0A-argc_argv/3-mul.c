#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: arguments count
 * @argv: array of arguments passed on the command line
 *
 * Return: (1) if argument is not two and print error
 */
int main(int argc, char *argv[])
{
	int result, num_1, num_2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num_1 =  atoi(argv[1]);
	num_2 =  atoi(argv[2]);

	result = num_1 * num_2;
	printf("%d\n", result);
	return (0);
}
