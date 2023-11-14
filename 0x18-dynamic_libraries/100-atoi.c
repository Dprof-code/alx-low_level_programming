#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string into an integer
 * @s: string
 *
 * Return: 0 if there are no numbers
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	for (; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 + (s[i] - '0');
		else
			break;
	}

	return (sign * result);
}
