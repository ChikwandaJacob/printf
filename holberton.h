#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _printf(const char *format, ...);
int parser(const char *string, va_list args);
int print_d(int num);
int print_i(int num);
int print_o(unsigned int num);
int _putchar(int c);
int print_X(unsigned int num);
int print_x(unsigned int num);
int print_u(unsigned int num);
int print_str(char *str);
int print_c(int ch);
int handle_formatting(va_list args, char format);
int print_percent(char ch);

#endif
