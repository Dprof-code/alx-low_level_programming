#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index
 *
 * @n: bytes
 * @index: index
 * Return:  value of the bit at index index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int size = sizeof(unsigned long int) * 8;
	unsigned long int mask = 1UL << index;

	if (index >= size)
		return (-1);

	if (n & mask)
		return (1);
	else
		return (0);
}
