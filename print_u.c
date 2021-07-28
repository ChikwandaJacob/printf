#include "holberton.h"

/**
 * print_u - prints in numbers in unsigned integer form
 * @num: number to be printed
 * @count_ptr: pointer to global count varaible in _printf
 *
 * Return: nothing
 */
void print_u(unsigned int num, int *count_ptr)
{
	if (num >= 10)
		print_u(num / 10, count_ptr);

	_putchar((num % 10) + '0');
	*count_ptr += 1;
}
