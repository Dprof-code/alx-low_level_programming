#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: string to be printed
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	i = 0;

	while ((*(str + i)) > 0)
	{
		printf("%c", *(str + i));
		i++;
	}
	printf("\n");
}
