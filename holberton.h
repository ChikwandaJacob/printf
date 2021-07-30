#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _printf(const char *format, ...);
int parser(const char *string, va_list args);
/*This function prints hex, octal, binary, unsigned int and decimal numbers*/
int print_digit(long int num, int base);
int print_binary(long int num);
int print_digit_x(int num, int base);
int _putchar(int c);
int print_str(char *str);
int print_c(int ch);
int handle_formatting(va_list args, char format);
int print_percent(char ch);
char *reverse_string(char *string);

#endif
