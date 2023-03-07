#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: pointer memory
 * @b: constant byte
 * @n: number of bytes
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n > 0)
	{
		s[n] = b;
		n--;
	}

	return (s);
}
