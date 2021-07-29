#include "holberton.h"
#include <stdarg.h>

/**
 * handle_formatting - Calls functions to print appropriate format specifier
 *                     charcaters.
 * @args: list of arguments
 * @fomart: specified format specifier
 *
 * Return: total number of characters printed
 */
int handle_formatting(va_list args, char format)
{
	switch (format)
	{
	case 'c':
		return (print_c(va_arg(args, int)));
		break;
	case 'd':
		return (print_d(va_arg(args, int)));
		break;
	case 'i':
		return (print_i(va_arg(args, int)));
		break;
	case 'x':
		return (print_x(va_arg(args, unsigned int)));
		break;
	case 'X':
		return (print_X(va_arg(args, unsigned int)));
		break;
	case 'u':
		return (print_u(va_arg(args, unsigned int)));
		break;
	case 'o':
		return (print_o(va_arg(args, unsigned int)));
		break;
	case '%':
		return (print_percent('%'));
		break;
	case 's':
		return (print_str(va_arg(args, char *)));
		break;
	default:
		return (-1);
		break;
	}
}
