#include "main.h"
#include <stdio>

/**
 * _isdigit - check if a character is  a digit(0 through 9).
 * @c: character to be checked.
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
		return (0);
}
