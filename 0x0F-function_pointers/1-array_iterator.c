#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a
 * parameter on each element of an array.
 * @array: array of function arguments
 * @size: size of the array
 * @action: pointer to the function to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
