#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
/**
 * struct format - Struct format
 *
 * @format: the string format
 * @func: the function for which way to print
 */
typedef struct format
{
	char *format;
	void (*func)(va_list);
} format_type;

#endif
