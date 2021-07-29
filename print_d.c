#include "holberton.h"

/**
 * print_d - prints integers
 * @num: number to be printed
 *
 * Return: total number of characters printed
 */
int print_d(int num)
{
	int count = 1;

	if (num < 0)
	{
		count++;
		_putchar('-');
		num *= -1;
	}

	if (num >= 10)
		count += print_d(num / 10);

	_putchar((num % 10) + '0');

	return (count);
}
