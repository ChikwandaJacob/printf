#include "holberton.h"

/**
 * print_str - prints a string
 * @str: string to be printed
 * @count_ptr: pointer to global count varaible in _printf
 *
 * Return: nothing
 */
void print_str(char *str, int *count_ptr)
{
	while (*str)
	{
		_putchar(*str);
		count_ptr++;
		str++;
	}
}
