#include "main.h"

/**
 * _strdup -  returns a pointer to a new string
 * which is a duplicate of the string str
 * @str: given string
 * Return: NULL, is str = NULL
 * else return pointer to the duplicated string
 * else return NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *new_str;
	int i;

	if (str == NULL)
		return (NULL);

	new_str = (char *)malloc(sizeof(str));
	if (new_str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		new_str[i] = str[i];
	new_str[i] = '\0';

	return (new_str);
}
