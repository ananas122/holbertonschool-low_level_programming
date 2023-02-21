#include <stdio.h>
#include <stdlib.h>
/**
 * main - fonction principale
 *
 *Return: 0
 **/
int main(void)
{
	int num;
	char a;

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
