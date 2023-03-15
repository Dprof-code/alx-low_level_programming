#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: number of arguments passed
 * @argv: character array of passed arguments
 *
 * Return: (0) Success
 * return 0 if no argument is passed
 */

int main(int argc, char *argv[])
{
	int i, result;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if ((!(atoi(argv[i]) >= 0 && atoi(argv[i]) <= 9)) || (atoi(argv[i])) == 0)
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				result += atoi(argv[i]);
			}
		}
		printf("%d\n", result);
	}

	return (0);
}
