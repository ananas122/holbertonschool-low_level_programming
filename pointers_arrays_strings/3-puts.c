#include "main.h"
/**
 * _puts - prints string
 * @str: the string
 * Return: None
 */
void _puts(char *str)
{
	while (*str)
	{
	_putchar(*str++);
	}

_putchar('\n');
}
