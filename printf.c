#include "holberton.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - Prints formatted string to the screen
 * @format: Format of string to be printed.
 *
 * Return: returns total number of characters printed to the screen.
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list args;

	if (format == NULL || (*format == '%' && *(format +1) == '\0'))
		return (-1);

	va_start(args, format);
	count = parser(format, args);

	return (count);
}
