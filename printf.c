#include "holberton.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - works like printf
 * @format: number to be printedstring to be printed
 *
 * Return: number of characters printed out.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list list;

	va_start(list, format);

	while (*format != '\0' && format != NULL)
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 's':
				print_str(va_arg(list, char *), &count);
				break;
			case '%':
				count++;
				_putchar(va_arg(list, int));
				break;
			case 'c':
				_putchar(va_arg(list, int));
				break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(list);

	return (count);
}
