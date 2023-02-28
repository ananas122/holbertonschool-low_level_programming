#include "main.h"
/**
 * print_rev - toma la cadena de la funcion.
 * @s: value taken from main
 * Return: (0)
 */
void print_rev(char *s)
{
	int i = 0;

	while (*s != '\0')

	{
		i++;
	}
	while (i >= 0)
	{

		_putchar(s[i--]);
	}
	_putchar ('\n');
}
