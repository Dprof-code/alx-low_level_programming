#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints a number from 0 - 100,
 * for multiples of 3 print fizz,
 * for multiples of 5 print buzz.
 * for multiples of 3 and 5 print fizzbuzz
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("fizzbuzz\n");
		}
		else if (i % 3 == 0)
		{
			printf("fizz\n");
		}
		else if (i % 5 == 0)
		{
			printf("buzz\n");
		}
		else
		{
			printf("%d\n", i);
		}
	}

	return (0);
}
