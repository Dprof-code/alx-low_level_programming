#include "main.h"

/**
 * _putchar - outputs character to standard output
 * @c: character
 * Return: Always (0) success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
