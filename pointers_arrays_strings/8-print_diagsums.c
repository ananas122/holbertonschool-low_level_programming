#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - funtion that prints the sums of the diagonals
 *@a: matrix
 *@size: matrix size
 */
void print_diagsums(int *a, int size)
{
int x;
int suma1 = 0;
int suma2 = 0;

for (x = 0; x < size; x++)
{
	suma1 = suma1 + a[x * (size + 1)];
	suma2 = suma2 + a[(size - 1) * (x + 1)];
}
printf("%d, %d\n", suma1, suma2);
}
