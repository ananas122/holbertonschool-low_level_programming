#include "main.h"

/**
 * _isdigit - check digit 0 9
 * @c: character 0 9
 * Return : 1 if digit , else 0
 */

int _isdigit(int c)
{
	if (c > 0 && c < 9)
		return (1);

	else
		return (0);
}

