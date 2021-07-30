#include "holberton.h"

/**
 * print_octal - prints integers
 * @num: number to be printed
 * @base: type of number to be printed
 *
 * Return: total printed characters
 */
int print_octal(unsigned long int num)
{
        int digit, count = 1;
	char buf;

        if (num >= 8)
		count += print_octal((num / 8));

	digit = num % 8;
        buf = (digit > 9) ? ('A' + digit - 10) : digit + '0';
	_putchar(buf);

	return (count);
}
