#include "main.h"
/**
 * _strstr -  to locate a substring
 * @haystack: main string
 * @needle: sub string to locate
 * Return: Return
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n, *p;

		for (h = haystack; *h != '\0'; h++)
		{
			for (n = needle, p = h; *n != '\0' && *n == *p;)
			{
				n++;
				p++;
			}

			if (*n == '\0')
			{
				return (h);
			}
		}
		return (0);
}
