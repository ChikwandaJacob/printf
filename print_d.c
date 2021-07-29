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
	unsigned int new_num = num;

	if (num < 0)
	{
		count++;
		_putchar('-');
		new_num = num;
	}

	if (new_num >= 10)
		count += print_d(new_num / 10);

	_putchar((new_num % 10) + '0');

	return (count);
}
