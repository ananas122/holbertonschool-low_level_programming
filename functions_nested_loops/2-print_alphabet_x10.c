#include "main.h"

/**
 * print_alphabet_x10 - print alphabet x10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	int loop;

	for (loop = 0; loop < 10; loop++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');

	}
}
