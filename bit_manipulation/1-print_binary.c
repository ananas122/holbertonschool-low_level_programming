#include "main.h"

/**
* print_binary - function prints binary representation of a number.
* @n: number for conversion to binary
* Return: 0.
*/

void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);/*Décalage de bits à droite pour diviser n par 2*/
	}
	_putchar((n & 1) + '0'); /*print bit le plus à droite de n (0 ou 1)*/
}
