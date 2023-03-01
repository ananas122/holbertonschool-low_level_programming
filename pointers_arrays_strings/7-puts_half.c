#include "main.h"
#include <string.h>
/**
  * puts_half - Prints half of a string
  * @str: string
  * Return: void
  */
void puts_half(char *str)
{
	int i = 0, len = 0;

	while (str[i])
	{
		i++;
		len++;
	}

	for (i = 0 ; i < len ; i++)
	{
		if (len % 2 == 0 && i >= len / 2)
			_putchar(str[i]);
		else if (i - 1 >= len / 2)
			_putchar(str[i]);
	}

	_putchar('\n');
}
