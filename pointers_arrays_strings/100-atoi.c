#include "main.h"

/**
 * _atoi - convert a string into an integer.
 *
 * @s: the string to use.
 *
 * Return: integer.
 */
int _atoi(char *s)
{
	int i = 0;
	int n = 0;
	int sign = 1;

	while (s[i] == ' ')
	{
		i = i + 1;
	}

	if (s[i] == '-')
	{
		sign = -1;
		i = i + 1;
	}

	else if (s[i] == '+')
	{
		i = i + 1;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		n = n * 10 + (s[i] - '0');
		i = i + 1;
	}
	return (sign * n);
}
