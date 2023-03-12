#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: integer
 * @y: integer
 *
 * Return: value of x^y
 * return -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * (_pow_recursion(x, (y - 1))));
}