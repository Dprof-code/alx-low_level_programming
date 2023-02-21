#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: Always (0) Success
 */
int main(void)
{
int x = '0';
int y = '0';
int z = '0';

while (x <= '9')
{
	while (y <= '9')
	{
		while (z <= '9')
		{
			putchar(x);
			putchar(y);
			putchar(z);

			putchar(',');
			putchar(' ');
			z++;
		}
		z = y;
		y++;
	}
	y = x;
	x++;
}
putchar('\n');
return (0);
}
