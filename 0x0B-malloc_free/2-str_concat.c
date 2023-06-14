#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: NULL on failure
 * else return pointer to concatenated string
 * if NULL is passed, treat as an empty string
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 = "";

	str = malloc(sizeof(char) * (length(s1) + length(s2) + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		str[i + j] = s2[j];

	str[i + j] = '\0';

	return (str);
}

/**
 * length - counts a string
 * @str: string
 * Return: count
 */

int length(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}
