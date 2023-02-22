#include "main.h"

/**
 * jack_bauer - prints every minute of the day starting from 00:00 to 23:59
 *
 * Return: Always (0) Success
 */

void jack_bauer(void)
{
int h1;
int h2;
int m1;
int m2;

h1 = '0';
while (h1 <= '2')
{
	h2 = '0';
	while (h2 <= '3')
	{
		m1 = '0';
		while (m1 <= '5')
		{
			m2 = '0';
			while (m2 <= '9')
			{
				_putchar(h1);
				_putchar(h2);
				_putchar(':');
				_putchar(m1);
				_putchar(m2);
				_putchar('\n');
				m2++;
			}
			m1++;
		}
		h2++;
	}
	h1++;
}
}
