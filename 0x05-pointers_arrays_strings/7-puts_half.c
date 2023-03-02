#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string
 * @str: character
 *
 * Returns: nothing
 */
void puts_half(char *str)
{
	int i, len, start;
	/*get length of string*/

	len = 0;
	while (str[len] != '\0')
		len++;

	/**
	 * determine starting point of the part of the string
	 * to be printed based on if string is odd or even
	 */

	start = 0;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;

	for (i = start; str[i] != 0; i++)
		_putchar(str[i]);
	_putchar('\n');
}
