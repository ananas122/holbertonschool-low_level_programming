#include "main.h"
/**
*cap_string - capitalize words
*@s: parameter string input
*Return: 0;
*/
char *cap_string(char *s)
{
	int i = 0, j = 0;
	char c[] = {
		',', ';', '.', '!', '?',
		'"', '(', ')', '{', ' ',
		'}', '\n', '\t'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;

	while (s[i] != '\0')
	{
		for (j = 0 ; j < 13 ; j++)
		{
			if (c[j] == s[i - 1] && s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] -= 32;
			}
		}

		i++;
	}

	return (s);
}
