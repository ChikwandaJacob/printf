#include "holberton.h"

/**
 * print_x - prints numbers in hex format lower case
 * @num: number to be printed
 *
 * Return: total number of characters printed
 */
int print_x(unsigned int num)
{
	int count = 1;

	if (num >= 16)
		count += print_X(num / 16);

	if ((num % 16) < 10)
		_putchar((num % 16) + '0');
	else
		_putchar((num % 16) + (87));

	return (count);
}
