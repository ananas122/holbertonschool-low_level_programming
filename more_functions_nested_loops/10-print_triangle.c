#include "main.h"
/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */
void print_triangle(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b >= 1; a--)
			{
				if (a < b)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
