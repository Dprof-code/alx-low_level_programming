#include "main.h"

/**
 * get_endianness - checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int num = 0x01020304;
	unsigned char* byte_array = (unsigned char*)&num;

	return (byte_array[0] == 0x01) ? 0 : 1;
}
