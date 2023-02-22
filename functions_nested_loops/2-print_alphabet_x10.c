#include "main.h"
/**
 *void print_alphabet_x10(void) - entry
 *@c: the character to print alphabet
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char a;
	int loop;

	for (loop = 0; loop < 10; loop++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{	_putchar(a);
		}

		_putchar('\n');

		}





}
