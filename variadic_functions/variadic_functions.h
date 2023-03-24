#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

/**
 * print_type - struct for print_all
 * @type: print type
 * @f: func to print the type
 */

typedef struct print_type
{
	char type;
	void (*f)();
} print_type_t;

void print_all(const char * const format, ...);

#endif
