#include "main.h"
/**
<<<<<<< HEAD
 * _isalpha - letter, lowercase or uppercase
 * @c: input character
 * Return: 1 if its a letter , uppercases, lowercases or 0 if is otherwise
 */
int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		else
		{
			return (0);
		}	
}
