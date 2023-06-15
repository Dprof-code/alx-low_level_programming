#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to count
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_check - check if a string is palindrome or not
 * @s: string to be checked
 * @x: positional counter
 * @len: count of character
 *
 * Return: 1 if s is a palindrome
 * return 0 if otherwise
 */

int palindrome_check(char *s, int x, int len)
{
	if (x >= len)
		return (1);
	if (s[x] != s[len])
		return (0);
	return (palindrome_check(s, x + 1, len - 1));
}

/**
 * is_palindrome - returns 1 or 0 depending if a string is palindrome
 * or not
 * @s: character to be checked
 *
 * Return: 1 if s ia palindrome
 * return 0 if otherwise
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (palindrome_check(s, 0, len - 1));
}
