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

	arrInt = malloc(sizeof(int) * max);

	if (arrInt == NULL)
		return (NULL);

	for (i = min; arrInt[i] <= max; i++)
		arrInt[i] = i;

	return (arrInt);
}
