#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char c;

	while (count < 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		count++;
	}
}
