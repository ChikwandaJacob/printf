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
	const char *traverse = format;
	int count = 0;
	va_list list;

	va_start(list, format);

	traverse++;
	if (format == NULL || (*format == '%' && *traverse == '\0'))
		return (-1);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			switch (*format)
			{
			case 's':
				print_str(va_arg(list, char *), &count);
				break;
			case 'c':
				_putchar(va_arg(list, int));
				break;
			case '%':
				count++;
				_putchar(*format);
				break;
			case 'z':
				return (-1);
				break;
			default:
				count++;
				_putchar('%');
				_putchar(*format);
				break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
		traverse++;
	}
	va_end(list);

	return (count);
}
