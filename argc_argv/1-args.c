#include<stdio.h>

/**
 * main - prints the name followed by a new line
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: Always 0
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
