#include "main.h"

/**
 * prime_number_check - checks if an integer is a prime number
 * @n: integer to be checked
 * @i: divisor
 * Return: 1 if integer is a prime number
 * return 0 if otherwise
 */

int prime_number_check(int n, int i)
{
	if (n <= 1)
		return (0);
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_number_check(n, i - 1));
}

/**
 * is_prime_number - returns 1 or 1 depending on if n is prime or not
 * @n: integer to be checked
 *
 * Return: 1 if integer is  prime number
 * return 0 if otherwise
 */

int is_prime_number(int n)
{
	return (prime_number_check(n, n - 1));
}
