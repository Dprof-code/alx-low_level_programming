#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number whose bit value is to be determined
 * @index: index, starting from 0 of the bit you want to get
 * Return: value of the bit at index index
 * else, return -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	/* check if index is invalid */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	return ((n >> index) & 1);
}
