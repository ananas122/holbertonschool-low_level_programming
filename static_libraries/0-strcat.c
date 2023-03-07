#include "main.h"
#include <string.h>
/**
 * _strcat - this function concatenate two strings
 * @dest: the first string to be concatenated
 * @src: the second string to be concatenated
 * Return: return the final result of the string in char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}


	return (dest);
}
