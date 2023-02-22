#include "main.h"

/**
 *_islower - returns 1 if its lowercases
 *@c: input character
 * Return: 1 if is lowercases or 0 if is uppercases 
 */
int _islower(int c)

		char i;
		int lower=0;

		for (i= 'a', i <='z'; i++)
		{
			if (i==c)
				lower = 1;
		}
		return(1);

}
