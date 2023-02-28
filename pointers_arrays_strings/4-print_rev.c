#include "main.h"
/**
 * print_rev - reverse sentence
 * @s: string
 * Return: (0)
 */
void print_rev(char *s)
{
	char *i = s;

	while (*i)
		i++;
	i = i-1;

	while (i >= s)
	{

		_putchar(*i);
		i--;
	}
	_putchar ('\n');
}
