#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: char that array would be initialized with
 *
 * Return:  NULL if size = 0 or it fails
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int i, s;

	if (size == 0)
		return (NULL);
	str = malloc(size * sizeof(char));

	s = size;
	for (i = 0; i < s; i++)
	{
		str[i] = c;
	}

	if  (str == NULL)
	{
		printf("failed to allocate memory\n");
	}

	return (str);
}
