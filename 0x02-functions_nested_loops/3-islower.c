#include "main.h"

/**
 * _islower - checks for lowercase charcter
 * @c: The character to check
 *
 * Return: 1 if c is lowercase
 * If otherwise, 0 is returned
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
