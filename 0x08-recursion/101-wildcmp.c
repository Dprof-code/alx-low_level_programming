#include "main.h"

/**
 * match - handles the case where the current character of s2 is *
 * @s1: first string
 * @s2: second string
 *
 * Return: (0)
 */

int match(char *s1, char *s2)
{
	/* If both strings are empty, they are identical */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/*
	 * If the current character of s2 is '*',
	 * recursively match the rest of the string
	 */
	if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	}

	/*
	 * If the current characters match,
	 * recursively match the rest of the strings
	 */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	/* Otherwise, the strings are not identical */
	return (0);
}

/**
 * wildcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * s2 can contain the special character *
 * the special char * can replace any string (including an empty string)
 *
 * Return: 1 if strings are identical
 * else return 0
 */

int wildcmp(char *s1, char *s2)
{
	/* If s2 is empty, return 1 if s1 is also empty, and 0 otherwise */
	if (*s2 == '\0')
		return (*s1 == '\0');

	/*
	 * If the current character of s2 is '*',
	 * recursively match the rest of the string
	 */
	if (*s2 == '*')
	{
		return (match(s1, s2));
	}

	/*
	 * If the current characters match,
	 * recursively match the rest of the strings
	 */
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	/* Otherwise, the strings are not identical */
	return (0);
}
