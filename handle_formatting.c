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
		return (print_digit_x(va_arg(args, unsigned long int), 'x'));
	case 'X':
	        return (print_digit_x(va_arg(args, unsigned long int), 'X'));
	case 'u':
		return (print_unsigned(va_arg(args, unsigned long int)));
	case 'o':
		return (print_octal(va_arg(args, unsigned int)));
	case 'b':
		return (print_binary(va_arg(args, long int)));
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
