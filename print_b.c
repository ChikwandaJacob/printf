#include "holberton.h"

/**
 * print_b - prints in numbers in binary form
 * @num: number to be printed
 * @count_ptr: pointer to global count varaible in _printf
 *
 * Return: nothing
 */
void print_b(int num, int *count_ptr)
{
	int divider = 2;

	while (num > 0)
	{
		_putchar(num % divider);

		num /= divider;
		count_ptr += 1;
	}
}
