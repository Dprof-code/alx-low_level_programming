#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of the substring needle in the
 *  string haystack. The terminating null bytes (\0) are not compared
 *
 *  @haystack: string
 *  @needle: substring
 *
 *  Return: pointer to the beginning of the located substring
 *  otherwise return NULL if substring not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
				break;
		}

		if (!needle[j]) /* found needle */
			return (haystack + i);
	}

	return (NULL);
}
