#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: arguments count
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 * return NULL if ac == 0 or av == NULL
 * each argument followed by \n
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, k, len;

	if (ac == 0 || av == NULL)
	return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1; /* +1 for newline character */

	str = malloc(sizeof(char) * (len + 1));

	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[k++] = av[i][j];
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}

