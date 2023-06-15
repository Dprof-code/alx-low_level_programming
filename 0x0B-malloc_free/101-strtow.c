#include "main.h"

/**
 * strtow - returns a pointer to an array of strings (words)
 * @str: string tobe splitted
 * each element of this array should contain a single word,
 * null - terminated
 * words are separated by spaceis
 * Return: pointer to array
 * return NULL if str == NULL or str == "" or function fails
 */

char **strtow(char *str)
{
	char **arr;
	int i, j, k, len, count = 0;

	if (str == NULL || strlen(str) == 0 || str[0] == ' ')
		return (NULL);

	len = strlen(str);
	arr = malloc(sizeof(char *) * (len + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++;

			arr[count] = malloc(sizeof(char) * (j - i + 1));
			if (arr[count] == NULL)
			{
				for (k = 0; k < count; k++)
					free(arr[k]);
				free(arr);
				return (NULL);
			}

			for (k = 0; i < j; i++, k++)
				arr[count][k] = str[i];
			arr[count][k] = '\0';

			count++;
			i = j;
		}
	}

	arr[count] = NULL;
	return (arr);
}
