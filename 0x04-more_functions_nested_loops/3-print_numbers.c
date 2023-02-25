#include "main.h"

/**
 * print_numbers - prints the numbers, from 0-9
 *
 * Return: (0)
 */
void print_numbers(void)
{
	int num = 48;

	while (num <= 57)
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
