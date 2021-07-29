#include "holberton.h"
#include <stdlib.h>

/**
 * print_str - prints numbers in hex format upper casea string
 * @str: string to be printed
 *
 * Return: total number of characters printed
 */
int print_str(char *str)
{
	int count = 1;
	char *null_text = "(null)";

	if (str == NULL)
	{
		while (*null_text)
		{
			_putchar(*null_text);
			null_text++;
			count++;
		}
	}
	else
	{
		while (*str)
		{
			_putchar(*str);
			null_text++;
			count++;
			str++;
		}
	}

	return (count);
}
