#include "main.h"
#include <stdio>

/**
 * print_numbers - prints number from 0-9
 */

void print_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar(10);
}
