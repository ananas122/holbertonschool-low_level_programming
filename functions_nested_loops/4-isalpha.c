#include "main.h"
/**
<<<<<<< HEAD
 * _isalpha - letter, lowercase or uppercase
 * @c: input character
 * Return: 1 if its a letter , uppercases, lowercases or 0 if is otherwise
 */
int _isalpha(int c)
{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
		else
		{
			return (0);
		}
=======
 * _isalpha - returns 1 if its lowercase
 * @c: integer
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
>>>>>>> 89bd28bc4069c47fd974d70d4b6c135ea1e0efb4
}
