#include <stdio.h>
/*
 * main - Print all arguments received line per line
 * @argc: Number of arguments
 * @argv: Arguments chaine characters
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int x;
	for (x = 0; x < argc; x++)
	printf("%s\n", argv[x]);
	return (0);
}
