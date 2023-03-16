#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers
 * @min: min input
 * @max: max input
 * Return: pointer to new arr 
 */
int *array_range(int min, int max)
{
	int *arr; int i, len;

	if (min > max)
		return (NULL);

	for (len = 0; len < (max - min); len++);

	arr = malloc(sizeof(int) * (len + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		arr[i] = min++;
	}

	return (arr);
}
