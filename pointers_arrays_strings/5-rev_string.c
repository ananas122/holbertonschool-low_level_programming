#include "main.h"	
/**
 * rev_string - Reverses a string two words
 * @s: The string 
 * Return: void
 */
	
void rev_string(char *s)
{
	int leng = 0, l = 0;
	char temp;
	while(s[l++])
	{
		leng++;
	}

	for ( l = leng - 1 ; l >= leng / 2; l--)
	{
		temp = s[l];
		s[l] = s[leng - l - 1];
		s[leng - l - 1] = temp;
	}

}
