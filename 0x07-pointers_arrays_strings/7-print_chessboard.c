#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints the chessboard
 * @a: chessboard rows
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i <= *a; i++)
	{
		for (j = 0; j <= 8; j++)
			printf("%c", print_chessboard[i][j]);
		printf("\n");
	}
}
