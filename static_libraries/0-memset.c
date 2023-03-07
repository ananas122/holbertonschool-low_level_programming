#include <stdio.h>
#include "main.h"

/**
 * _memset - This function  fills memory with a constant byte
 *           The function fills the first n bytes of the memory area
 *           pointed to by s with the constant byte b
 *
 * @s: pointer to the block of memory to be filled
 * @b: the address of memory
 * @n: the size of the memory
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
