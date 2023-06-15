#include "main.h"

/**
 * main - adds two numbers
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res, i;

	res = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];
		int j;

		for (j = 0; arg[j] != '\0'; j++)
		{
			if (isdigit(arg[j]))
			{
				res += atoi(&arg[j]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	printf("%d\n", res);

	return (0);
}
