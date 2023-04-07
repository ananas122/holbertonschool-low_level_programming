#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number 0 and 1 and result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (b == NULL)

	return (0); /*Return 0 if input pointer is NULL*/

	for (i = 0; b[i] != '\0'; i++)
	{
	/*Loop through each character in the string*/
	if (b[i] != '0' && b[i] != '1')
	return (0); /*Return 0 if there is a character other than '0' or '1'*/

		result = result * 2 + (b[i] - '0'); /* Convert binary to decimal*/
	}

	return (result);
}
