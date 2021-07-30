#include "holberton.h"

/**
 * print_unsigned - prints unsigned integers
 * @num: number to be printed
 *
 * Return: pointer to string
 */
int print_unsigned(unsigned long int num)
{
        int digit, count = 1;
	char buf;

        if (num >= 10)
		count += print_unsigned((num / 10));

	digit = num % 10;
        buf = (digit > 9) ? ('A' + digit - 10) : digit + '0';
	_putchar(buf);

	return (count);
}
