#include <stdlib.h>
#include <time.h>

/**
 ** main - Prints "number and if positive or negative"
 *0x01. C - Variables, if, else, while
 *This is the first task
 *This program will assign a random number
 *to the variable n each time it is executed
 *main - Prints  whether the number stored
 *in the variable n is positive or negative.
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */

	if (n + n > 1)
	{
		printf("%d is positive\n", n);
	} else if (n + n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
