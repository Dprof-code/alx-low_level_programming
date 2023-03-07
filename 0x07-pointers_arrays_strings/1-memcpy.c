#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory area where byte is copied to
 * @src: memory area where byte is copied from
 * @n: number of byte to be copied
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = src[i];

	return (dest);
}
