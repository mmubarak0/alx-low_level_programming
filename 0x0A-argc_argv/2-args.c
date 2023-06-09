#include <stdio.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
