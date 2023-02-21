#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - Fonction principale
 *Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{	
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
	{	
		putchar(c);
	}
		putchar('\n');
	return (0);
	}
