#include "main.h"
/**
 *_strspn - main
 *@s: s
 *@accept: accept
 *Return: return
 */
unsigned int _strspn(char *s, char *accept)
{
int a, b;
unsigned int res = 0;

for (a = 0; s[a] != '\0'; a++)
	{
	for (b = 0; s[b] != '\0'; b++)
		{
		if (s[a] == accept[b])
		{
		res++;
		break;
		}
		}
	if (s[b] == '\0')
		{
		return (res);
		}
	}
return (res);
}
