#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
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
	int i, j, result;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			result += atoi(argv[i]);
		}
		printf("%d\n", result);
	}

	return (0);
}
