#include <stdio.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: command line arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void) argv;
	printf("%d\n", (argc - 1));

	return (0);
}
