#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: value of bit
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= size)
		return (-1);

	*n |= mask;

	return (1);
}
