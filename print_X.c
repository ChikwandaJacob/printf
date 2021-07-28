#include "holberton.h"

/**
 * print_X - prints in numbers in hex form upper case
 * @num: number to be printed
 * @count_ptr: pointer to global count varaible in _printf
 * @tmp: variable to ensure the first character does not get printed.
 *       @tmp should always be set to zero.
 *
 * Return: nothing
 */
void print_X(unsigned int num, int *count_ptr, int tmp)
{
	int remainder = 0;
	char ch;

	if (num != 0)
		print_X(num / 16, count_ptr, tmp++);
	if (tmp > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			ch = 48 + remainder;
			count_ptr += 1;
			_putchar(ch);
		}
		else
		{
			ch = 55 + remainder;
			count_ptr += 1;
			_putchar(ch);
		}
	}
}
