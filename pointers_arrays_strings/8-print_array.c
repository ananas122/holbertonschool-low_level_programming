#include <stdio.h>
#include "main.h"
/**
 * print_array - prints  arrays
 * @a: an integer pointer
 * @n: an integer, the number of array
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		printf("%d", a[x]);
		if (x != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
