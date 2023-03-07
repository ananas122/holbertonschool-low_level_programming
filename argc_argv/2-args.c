#include <stdio.h>
/**
 * main - Print all arguments received line per line
 * @argc: Number of arguments
 * @argv: Arguments chaine characters
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
