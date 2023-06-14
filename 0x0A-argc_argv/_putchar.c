#include "main.h"

/**
 * _putchar - oiutput character to output
 * @c: character
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
