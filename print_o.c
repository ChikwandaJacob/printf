#include "holberton.h"


/**
 * print_o - prints in numbers in octal form
 * @num: number to be printed
 * @count_ptr: pointer to global count varaible in _printf
 * @tmp: variable to help us not print the first character
 *       @tmp should be initialized to 0
 *
 * Return: nothing
 */
void print_o(unsigned int num, int *count_ptr, int tmp)
{
	if (num != 0)
		print_o((num / 8), count_ptr, tmp++);
	if (tmp > 0)
	{
		_putchar((num % 8) + '0');
		count_ptr += 1;
	}
}
