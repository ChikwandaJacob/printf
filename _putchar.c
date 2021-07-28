#include "holberton.h"
#include <unistd.h>

/**
 * _putchar - prints a character
 * @c: character to be printed out
 *
 * Return: 1 on success.
 *         Otherwise returns 0 on fail.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
