#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to resulting string
 */
char *_strcat(char *dest, char *src)
{
	/* get length of char in src string */
	int len, i;

	len = 0;
	while (dest[len] != '\0')
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
