#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 *
 * @n: value of bit
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = ~(1UL << index);

	if (index >= size)
		return (-1);

	*n &= mask;

	return (1);
}
