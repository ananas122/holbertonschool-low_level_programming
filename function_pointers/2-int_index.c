#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: array
 * @size: size in the array
 * @cmp: compare two values
 * Return: -1 et 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;


	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}



		return (-1);
}
