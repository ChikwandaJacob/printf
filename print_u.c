#include "holberton.h"

/**
 * print_u - prints unsigned integers
 * @num: number to be printed
 *
 * Return: total number of characters printed
 */
int print_u(unsigned int num)
{
	int count = 1;

	if (num >= 10)
		count += print_i(num / 10);

	_putchar((num % 10) + '0');

	return (count);
}
