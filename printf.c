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

	if (format != NULL)
	{
		va_start(list, format);

		while (*format)
		{
			if (*format == '%')
			{
				format++;

				switch (*format)
				{
				case 'd':
					print_d(va_arg(list, int), &count);
					break;
				case 's':
					print_str(va_arg(list, char *), &count);
					break;
				case '%':
					count++;
					_putchar('%');
					break;
				case 'i':
					print_d(va_arg(list, unsigned int),
						&count);
					break;
				case 'b':
					print_b(va_arg(list, int), &count);
					break;
				case 'X':
					print_X(va_arg(list, unsigned int),
						&count, 0);
					break;
				case 'x':
					print_x(va_arg(list, unsigned int),
						&count, 0);
					break;
				case 'c':
					_putchar(va_arg(list, int));
					break;
				case 'u':
					print_u(va_arg(list, unsigned int),
						&count);
					break;
				case 'o':
					print_o(va_arg(list, unsigned int),
						&count, 0);
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
	}

	return (count);
}
