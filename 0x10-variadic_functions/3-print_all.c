#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char c;
	int num;
	float f;
	char *s;
	int need_separator = 0;

	va_list args;

	va_start(args, format);

	while (format[i])
	{
		if (need_separator && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
			printf(", ");

		if (format[i] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
			need_separator = 1;
		}
		else if (format[i] == 'i')
		{
			num = va_arg(args, int);
			printf("%d", num);
			need_separator = 1;
		}
		else if (format[i] == 'f')
		{
			f = va_arg(args, double);
			printf("%f", f);
			need_separator = 1;
		}
		else if (format[i] == 's')
		{
			s = va_arg(args, char*);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			need_separator = 1;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
