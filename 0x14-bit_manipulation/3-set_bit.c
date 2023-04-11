#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @n: number whose bit value is to be determined
 * @index: index, starting from 0, of the bit you want to get
 * Return: 1 if it worked
 * else, -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/* check if index is invalid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* set the bit at the given index to 1 */
	*n |= (1 << index);
	return (1);
}
