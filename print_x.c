#include "holberton.h"

/**
 * print_x - prints in numbers in hex form upper case
 * @num: number to be printed
 * @count_ptr: pointer to global count varaible in _printf
 * @tmp: variable to ensure the first character does not get printed.
 *       @tmp should always be set to zero.
 *
 * Return: nothing
 */
void print_x(unsigned int num, int *count_ptr, int tmp)
{
	int remainder = 0;
	char ch;

	if (num != 0)
		print_x(num / 16, count_ptr, tmp++);
	if (tmp > 0)
	{
		remainder = num % 16;
		if (remainder < 10)
		{
			ch = 48 + remainder;
			if (ch >= 'A' && ch <= 'F')
			{
				ch = 48 + remainder + 32;
				_putchar(ch);
			}
			else
				_putchar(ch);

			count_ptr += 1;
		}
		else
		{
		        ch = 55 + remainder;
			if (ch >= 'A' && ch <= 'F')
			{
				ch = 55 + remainder + 32;
				_putchar(ch);
			}
			else
				_putchar(ch);

			count_ptr += 1;
		}
	}
}
