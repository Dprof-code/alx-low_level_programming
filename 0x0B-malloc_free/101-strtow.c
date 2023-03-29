#include "main.h"
#include <stdlib.h>

/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string tobe splitted
 *
 * Return: pointer to array
 * return NULL if str == NULL or str == "" or function fails
 */

char **strtow(char *str)
{
	char *arr;

	if (str == NULL || str == "")
		return (NULL);

	arr = malloc(strlen(str);
}
