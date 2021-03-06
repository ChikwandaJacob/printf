#include "holberton.h"

/**
 * print_digit - prints integers
 * @num: number to be printed
 * @base: type of number to be printed
 *
 * Return: pointer to string
 */
int print_digit(long int num, int base)
{
        int digit, sign = 0, count = 1;
	char buf;

	if (num < 0)
	{
		sign = 1;
		count++;
		num *= -1;
	}

	if (sign)
		_putchar('-');

	if (num > 2)
		count += print_digit((num / base), base);

	digit = num % base;
        buf = (digit > 9) ? ('A' + digit - 10) : digit + '0';
	_putchar(buf);

	return (count);
}
