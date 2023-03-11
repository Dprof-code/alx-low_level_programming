#include "main.h"

/**
 * _strspn - gets length of a prefix substring
 *
 * @s: string
 * @accept: substring
 *
 * Return: number of bytes os substring in string
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i]  == ' ')
			break;

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
	}

	return (len);
}
