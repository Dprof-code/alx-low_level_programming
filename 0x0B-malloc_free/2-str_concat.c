#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	char *str;
	int i, j, n;

	str = malloc(sizeof(s1) + sizeof(s2));

	for (i = 0; s1[i] != '\0'; i++)
	{
		str[i] = s1[i];
	}

	j = i;
	n = 0;

	for (j = i; s2[n] != '\0'; n++)
	{
		str[j] = s2[n];
		j++;
	}
	str[j] = '\0';
	/**printf("s1 = %s\n s2 = %s\n str = %s", s1, s2, str);**/

	if (str == NULL)
		return (NULL);
	return (str);
}
