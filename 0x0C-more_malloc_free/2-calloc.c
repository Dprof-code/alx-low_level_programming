#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: size of array
 * @size: size of type
 * Return: pointer to the allocated memory.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arrPtr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arrPtr = malloc(nmemb * size);

	if (arrPtr == NULL)
		return (NULL);

	memset(arrPtr, 0, nmemb * size);
	return (arrPtr);
}
