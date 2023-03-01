#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: character
 *
 * Returns: Always 0
 */
void rev_string(char *s)
{
	int i, j, len;
	char temp;

	/*calculate the length of the string*/
	len = 0;

	while (*(s + len) != '\0')
		len++;

	/*reverse the string in place*/

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = *(s + i);
		*(s + i) = *(s + j);
		*(s + j) = temp;
	}

}
