#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: size of argv
 * @argv: command line arguments
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int num;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	while ((num - 25) >= 0)
	{
		sum += 1;
		num -= 25;
	}
	while ((num - 10) >= 0)
	{
		sum += 1;
		num -= 10;
	}
	while ((num - 5) >= 0)
	{
		sum += 1;
		num -= 5;
	}
	while ((num - 2) >= 0)
	{
		sum += 1;
		num -= 2;
	}
	while ((num - 1) >= 0)
	{
		sum += 1;
		num -= 1;
	}
	printf("%d\n", sum);
	return (0);
}
