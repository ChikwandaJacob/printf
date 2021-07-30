#include "holberton.h"

/**
 * print_digit_x - prints integers
 * @num: number to be printed
 * @base: type of number to be printed
 *
 * Return: total printed characters
 */
int print_digit_x(unsigned long int num, char ch)
{
        int digit, count = 1;
	char buf;

        if (num >= 16)
		count += print_digit_x((num / 16), ch);

	digit = num % 16;
	if (ch == 'x')
		buf = (digit > 9) ? ('a' + digit - 10) : digit + '0';
	else
		buf = (digit > 9) ? ('A' + digit - 10) : digit + '0';
	_putchar(buf);

	return (count);
}
