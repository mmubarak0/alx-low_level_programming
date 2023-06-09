#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	if (argc > 2)
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	else
		printf("Error\n");

	return (0);
}
