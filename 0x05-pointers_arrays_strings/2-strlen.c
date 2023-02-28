#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: char
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i, l;

	i = 0;
	l = 0;

	while ((*(s + i)) > 0)
	{
		printf("char: %c\n", *(s + i));
		i++;
		l++;
	}

	return (l);
}
