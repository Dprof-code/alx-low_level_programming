#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: column
 * @height: row
 *
 * Return: NULL on fail
 * if width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **two_d_arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_d_arr = malloc(sizeof(int *) * height);

	if (two_d_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		two_d_arr[i] = malloc(sizeof(int) * width);
		if (two_d_arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(two_d_arr[j]);
			free(two_d_arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			two_d_arr[i][j] = 0;
		}
	}

	return (two_d_arr);
}
