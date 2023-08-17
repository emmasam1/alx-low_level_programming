#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints a list of values using a specific format.
 * @format: A string containing the format for printing.
 *          c: char
 *          i: integer
 *          f: float
 *          s: char * (if string is NULL, print (nil) instead)
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int format_index = 0;

	va_start(args, format);

	while (format && format[format_index])
	{
		char c;
		int i;
		float f;
		char *s;

		if (format[format_index] == 'c')
		{
			c = va_arg(args, int);
			printf("%c", c);
		}
		else if (format[format_index] == 'i')
		{
			i = va_arg(args, int);
			printf("%d", i);
		}
		else if (format[format_index] == 'f')
		{
			f = (float)va_arg(args, double);
			printf("%f", f);
		}
		else if (format[format_index] == 's')
		{
			s = va_arg(args, char *);
			if (!s)
				printf("(nil)");
			else
				printf("%s", s);
		}
		format_index++;

		if (format[format_index])
			printf(", ");
	}

	va_end(args);
	printf("\n");
}
