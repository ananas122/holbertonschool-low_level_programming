#include "main.h"
/**
 * print_last_digit - write a script that prints the last digit of number
 * @n: number
 *
 * Return: the value of the last digit
 */
int print_last_digit(int num)
{
	int digit = num % 10;
	
	if (digit < 0)
	{
	digit *= -1;
	}
_putchar(digit + '0');
return (digit);
}
