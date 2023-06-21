#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>
#include "3-calc.h"

/**
  * main - entry point
  * @argc: int
  * @argv: params
  * Return: 0
  */
int main(int argc, char **argv)
{
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strchr("+-*/%", argv[2][0]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (strchr("/%", *argv[2]) != NULL && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	operator = get_op_func(argv[2]);

	printf("%d\n", operator(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
