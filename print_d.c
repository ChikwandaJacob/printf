#include "holberton.h"

/**
 * print_d - prints in numbers in decimal form
 * @num: number to be printed
 * @count_ptr: pointer to global count varaible in _printf
 *
 * Return: nothing
 */
void print_d(int num, int *count_ptr)
{
        if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num >= 10)
		print_d((num / 10), count_ptr);

	_putchar((num % 10) + '0');
	*count_ptr += 1;
}
