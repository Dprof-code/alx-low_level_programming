#include "main.h"
#include <math.h>

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: Always 0 Success
 */
void times_table(void)
{
int n, m, result;

n = 0;
while (n <= 9)
{
	m = 0;
	while (m <= 9)
	{
		result = n * m;
		if (result == 0)
		{
			_putchar('0');
		}
		else if (result < 10)
		{
			_putchar(' ');
			_putchar(result + '0');
		}
		else
		{
			_putchar(result / 10 + '0');
			_putchar(result % 10 + '0');
		}
		if (m < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		m++;
	}
	_putchar('\n');
	n++;
}
}
