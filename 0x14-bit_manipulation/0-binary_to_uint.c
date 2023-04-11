#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 * Return: converted number
 * else return 0, if one or more chars in b is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (check_char(b) == 1 || b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		result <<= 1;
		if (*b == '1')
			result += 1;
	}

	return (result);
}

/**
 * check_char - checks the character string for characters other
 * than 0 or 1
 * @b: string char
 * Return: 1 if char apart from 0 and 1 is found
 */

int check_char(const char *b)
{
	int i, j;

	if (b == NULL)
		return (1);

	for (i = 0, j = strlen(b); j != 0; i++, j--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (1);
	}

	return (0);
}
