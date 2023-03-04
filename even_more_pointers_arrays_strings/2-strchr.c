#include "main.h"
/**
 *_strchr - main
 *@s: s
 *@c: c
 *Return: Return
 */
char *_strchr(char *s, char c)
{
int a;

for (a = 0; s[a] != '\0'; a++)
{
	if (s[a] == c)
	{
	return (s + a);
	}
}
if (c == s[a])
{
return (s + a);
}
return (0);
}
