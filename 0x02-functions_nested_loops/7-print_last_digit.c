#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0  n <= 9)
		return (n);
	else
	{
		n = n * -1
		return (n % 10);
	}
}
