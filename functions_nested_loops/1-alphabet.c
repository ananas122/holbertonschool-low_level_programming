#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_alphabet - entry
 * Return: 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
