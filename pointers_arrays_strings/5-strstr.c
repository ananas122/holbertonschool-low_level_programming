#include "main.h"
/**
 * _strstr - main function to locate a substring
 * @haystack: main string
 * @needle: sub string to locate
 * Return: Return
 */
char *_strstr(char *haystack, char *needle)
{
	int x, z;

	if (needle[0] == '\0')
	{
		return (haystack);
	}
	for (x = 0; haystack[x]; x++)
	{
		if (haystack[x] == needle[0])
		for (z = 0; needle[z]; z++)
		{
			if (haystack[x + z] != needle[z])
			{
				break;
			}
			if (needle[z] == '\0')
			{
				return (haystack + x);
			}
		}
	}
	return ('\0');
}
