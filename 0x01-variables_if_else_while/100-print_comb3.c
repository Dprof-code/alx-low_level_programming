#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: Always (0) Success
 */
int main(void)
{
int x = '0';
int y = '0';

while (x <= '9')
{
	while (y <= '9')
	{
		if (x != y && x < y)
		{
			putchar(x);
			putchar(y);
			if (x != '8')
			{
				putchar(44);
				putchar(32);
			}
		}
		y++;
	}
	y = x;
	x++;
}
putchar('\n');
return (0);
}
