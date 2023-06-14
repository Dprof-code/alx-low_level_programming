#include "main.h"

/*
 * _putchar - output character to standars output
 * @c: character
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
