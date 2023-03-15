#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: number of arguments passed
 * @argv: character array of passed arguments
 *
 * Return: (0) Success
 * return 1 if number of argument is not 1
 */

int main(int argc, char *argv[])
{
	int coins_values[5] = {25, 10, 5, 2, 1};

	int money, coins, i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	if (money < 0)
	{
		printf("0\n");
	}
	else
	{

		coins = 0;
		money = atoi(argv[1]);
		i = 0;

		while (money > 0)
		{
			coins += money / coins_values[i];
			money = money % coins_values[i];
			i++;
		}
		printf("%d\n", coins);
	}

	return (0);
}
