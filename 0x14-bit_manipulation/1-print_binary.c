#include "main.h"

/**
 * print_binary - the binary representation of a number
 *
 * @n: number
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << (size - 1);
	int first_one = 0;

	while (mask > 0)
	{
		if (n & mask)
		{
			first_one = 1;
			_putchar('1');
		}
		else if (first_one)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (!first_one)
		_putchar('0');
}
