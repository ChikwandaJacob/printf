#include "holberton.h"

/**
 * reverse_string - reverses a string
 * @string: string to be reversed.
 *
 * Return: pointer to reversed string
 */
char * reverse_string(char *string)
{
	int len = 0, i = 0;
	char temp;

        while (*string)
	{
		len++;
		string++;
	}
	for ( ;i < (len / 2); i++)
	{
		temp = string[i];
		string[i] = string[len - i - 1];
		string[len - i - 1] = temp;
	}
	return (string);
}
