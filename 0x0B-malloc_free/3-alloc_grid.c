#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to array
 * else, return NULL on failure
 * return NULL, if width or height is 0 or negative
 */

int **alloc_grid(int width, int height)
{
	int **two_dim_arr, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_dim_arr = malloc(height * sizeof(int *));
	if (two_dim_arr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		two_dim_arr[i] = malloc(width * sizeof(int));
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			two_dim_arr[i][j] = 0;

	return (two_dim_arr);
}
