#include "main.h"

/**
 * _isdigit - check digit 0 through 9
 * @c: character ascii
 * Return : 1 if isdigit , else otherwise 0
 */

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);

	else
		return (0);
}

