#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number
 *
 * Return: factorial of number
 * return -1 if n is lower then 0
 * factorial of 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
