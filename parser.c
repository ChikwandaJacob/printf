#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * parser - Calls appropriate functions for format specifiers in string.
 *          Also, it prints ordinary characters.
 * @string: string to be formated.
 * @args: arguments to be added to final string.
 *
 * Return: Total number of strings in final string.
 *         Return (-1) when format specifier next character is invalid
 */
int parser(const char *string, va_list args)
{
	int count = 0, tmp = 0;

	for ( ; *string; string++)
	{
		if (*string == '%')
		{
			string++;
			tmp = handle_formatting(args, *string);

			if (tmp >= 0)
			{
				count += tmp;
			}
			else if (tmp == -2)
			{
				count++;
				_putchar('%');
			}
			else
			{
				if (*string == '\0')
					tmp = -1;
				else
				{
					count += 2;
					_putchar('%');
					_putchar(*string);
				}
			}
		}
		else
		{
			_putchar(*string);
			count++;
		}
	}
	va_end(args);
	if (tmp == -1)
		return (-1);
	return (count);
}
