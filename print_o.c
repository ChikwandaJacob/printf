#include "holberton.h"

/**
 * print_o - prints numbers in octal format
 * @num: number to be printed
 *
 * Return: total number of characters printed
 */
int print_o(unsigned int num)
{
	int count = 1;

        if (num >= 8)
		count += print_o(num / 8);

        _putchar((num % 8) + '0');

	return (count);
}
