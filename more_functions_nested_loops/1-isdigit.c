#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
* _isdigit - check for a digit o through 9
* * @c: N/A
* Return: 1 or 0 (Success)
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	return (1);
	else
	return (0);
}
