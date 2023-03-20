#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints a name
 * @name: name of the person
 * @f: function pointer
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
	{
	if (name != NULL && *name != '\0' && *f != NULL)
	f(name);
}
