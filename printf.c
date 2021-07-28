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

	if (format != NULL && *format != '%')
	{
		va_start(list, format);

		while (*format)
		{
			if (*format == '%')
			{
				format++;
				if (*format == 's')
					print_str(va_arg(list, char *), &count);
				if (*format == '%')
				{
					count++;
					_putchar('%');
				}
				if (*format == 'c')
					_putchar(va_arg(list, int));
			}
			else
			{
				_putchar(*format);
				count++;
			}
			format++;
		}
		va_end(list);
	}
	else
		return (-1);
	return (count);
}
