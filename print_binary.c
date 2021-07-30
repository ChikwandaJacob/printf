#include "holberton.h"

/**
 * print_digit - prints number in binary format
 * @num: number to be printed
 *
 * Return: pointer to string
 */
int print_binary(long int num)
{
	int count = 1, sign = 0;

	if (num < 0)
	{
		count++;
		sign = 1;
		num *= -1;
	}

	if (sign)
		_putchar('-');

	if (num > 1)
		count += print_binary(num / 2);

	_putchar((num % 2) + '0');

	return (count);
}
