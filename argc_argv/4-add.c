#include <stdio.h>
#include<stdlib.h>

/**
*main - function to add variables
*@argc: Argument numbers
*@argv: Argument passed.
*Return: Always 0 or 1
*/
int main(int argc, char **argv)
{
int i, j, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != 0; j++)
			{
				if (argv[i][j] > '9' || argv[i][j] < '0')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
