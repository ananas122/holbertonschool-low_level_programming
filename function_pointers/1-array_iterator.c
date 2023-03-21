#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes  given as a prmtr on each element of an array
 * @array: pointer to array
 * @size: size of the array
 * @action: pointer to function you need to use
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action) (int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
