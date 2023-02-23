#include "main.h"
/**
 * times_table -   prints the 9 times table, starting with 0
 * rone = row, cone = column, res = digits of current result
 * Return: times table
  */
void times_table(void)
{
	int rone, cone, res;

	for (rone = 0; rone <= 9; rone++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (cone = 1; cone <= 9; cone++)
		{
			res = (rone * cone);
			if ((res / 10) > 0)
			{
				_putchar((res / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((res % 10) + '0');

			if (cone < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
