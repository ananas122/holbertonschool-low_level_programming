#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int i = 0;
	unsigned int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i])
		i++;

	ar = malloc(sizeof(char) * (i + 1));

	if (ar == NULL)
		return (NULL);

	while (str[j])
	{
		ar[j] = str[j];
		j++;
	}

	ar[j + 1] = 0;
	return (ar);
}
