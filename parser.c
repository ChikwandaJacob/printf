#include "holberton.h"
#include <stdlib.h>

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

	while (*string)
	{
	        if (*string == '%')
		{
			string++;
			tmp = handle_formatting(args, *string);

			if (tmp != -1)
			{
				count += tmp;
				tmp = 0;
			}
			else
			{
				tmp = 0;
				if (*string == ' ')
				{
					while (*string == ' ')
					{
						string++;
						if (*string == '\0')
							tmp = -1;
					}
					if (*string != '\0')
					{
						count += 3;
						_putchar('%');
						_putchar(' ');
						_putchar(*string);
					}
				}
				else if (*string == '\0')
				{
				        tmp = -1;
				}
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
		if (*string != '\0')
			string++;
	}
	va_end(args);
	if (tmp == -1)
		return (-1);
        return(count);
}
