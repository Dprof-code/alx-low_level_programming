#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: character
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len;

	len = _strlen(s) - 1;

	while (len >=  0)
	{
		printf("%c", *(s + len));
		len--;
	}

	printf("\n");
}

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
		i++;
		l++;
	}

	return (l);
}
