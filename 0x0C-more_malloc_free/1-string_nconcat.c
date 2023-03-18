#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: bytes
 * Return: pointer to newly allocated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = malloc(strlen(s1) + strlen(s2) + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < n; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';

	return (str);
}
