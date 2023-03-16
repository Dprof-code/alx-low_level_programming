#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a new string
 *  which is a duplicate of the string str.
 *  @str: string to be copied
 *  Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *str_cpy;
	int i;

	if (str == NULL)
		return (NULL);

	str_cpy = malloc(strlen(str) + 1);

	for (i = 0; str[i] != '\0'; i++)
	{
		str_cpy[i] = str[i];
	}
	str_cpy[i] = '\0';

	return (str_cpy);
}
