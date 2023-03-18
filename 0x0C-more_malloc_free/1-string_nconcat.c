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
	size_t len1, len2;
	char *str;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strnlen(s2, n);
	str = malloc(len1 + len2 + 1);

	if (n < len2)
		len2 = n;

	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	for (j = 0; j < len2; j++, i++)
	{
		str[i] = s2[j];
	}
	str[i] = '\0';

	return (str);
}
