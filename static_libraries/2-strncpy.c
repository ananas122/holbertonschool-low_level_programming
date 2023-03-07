#include "main.h"
#include <stdio.h>
/**
 * _strncpy - copy a string
 * @dest: string dest
 * @src: string to cpy
 * @n: bytes
 *
 * Return: copy a string to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}
