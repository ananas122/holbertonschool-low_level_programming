#include "main.h"

/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: Pointer to an unsigned long integer to modify
 * @index: Index of the bit to set to 0
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1); /* Check if i is out of bounds, return -1: error*/

	*n &= ~(1ul << index);

	return (1);
}
