#include "holberton.h"
#include <stdarg.h>

/**
 * handle_formatting - Calls functions to print appropriate format specifier
 *                     charcaters.
 * @args: list of arguments
 * @format: specified format specifier
 *
 * Return: total number of characters printed
 */
int handle_formatting(va_list args, char format)
{
	switch (format)
	{
	case 'c':
		return (print_c(va_arg(args, int)));
	case 'd':
		return (print_digit(va_arg(args, int), 10));
	case 'i':
		return (print_digit(va_arg(args, int), 10));
	case 'x':
		return (print_digit_x(va_arg(args, int), 16));
	case 'X':
	        return (print_digit(va_arg(args, int), 16));
	case 'u':
		return (print_digit(va_arg(args, int), 10));
	case 'o':
		return (print_digit(va_arg(args, int), 8));
	case 'b':
		return (print_digit(va_arg(args, int), 2));
	case '%':
		return (print_percent('%'));
	case 's':
		return (print_str(va_arg(args, char *)));
	case 'z':
		return (-2);
	default:
		return (-1);
	}
}
