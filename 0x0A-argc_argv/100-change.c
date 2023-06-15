#include "main.h"

/**
 * calculateMinCoins - prints the minimum number of coins to
 * make change for an amount of money.
 * @cents: amount of cents you need to give back
 *
 * Return: number of coins
 */

int calculateMinCoins(int cents)
{
	int coins = 0;

	if (cents < 0)
	{
		return (0);
	}

	while (cents > 0)
	{
		if (cents >= 25)
		{
			cents -= 25;
		}
		else if (cents >= 10)
		{
			cents -= 10;
		}
		else if (cents >= 5)
		{
			cents -= 5;
		}
		else if (cents >= 2)
		{
			cents -= 2;
		}
		else
		{
			cents -= 1;
		}

		coins++;
	}

	return (coins);
}

/**
 * main - prints the minimum number of coins
 * @argc: arguments count
 * @argv: array of arguments
 *
 * Return: 0 (Success)
 */

int main(int argc, char *argv[])
{
	int cents, minCoins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	minCoins = calculateMinCoins(cents);

	printf("%d\n", minCoins);

	return (0);
}

