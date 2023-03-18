#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum number of integers
 * @max: maximum number of integers
 *
 * Return: pointer to newly created array
 * if min > max, return NULL
 * if malloc fails, return NULL
 */

int *array_range(int min, int max)
{
	int *arrInt, i;

	if (min > max)
		return (NULL);

	arrInt = malloc(sizeof(int) * (max - min + 1));

	if (arrInt == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arrInt[i] = min + i;

	return (arrInt);
}
