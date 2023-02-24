#include "main.h"

/**
 * print_line -draws a straight line in the terminal using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
