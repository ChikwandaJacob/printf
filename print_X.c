#include "holberton.h"

/**
 * print_X - prints numbers in hex format upper case
 * @num: number to be printed
 *
 * Return: total number of characters printed
 */
int print_X(unsigned int num)
{
	int count = 1;

	if (num >= 16)
		count += print_X(num / 16);

	if ((num % 16) < 10)
		_putchar((num % 16) + '0');
	else
		_putchar((num % 16) + 55);

	return (count);
}
