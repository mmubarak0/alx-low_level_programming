#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "3-calc.h"

/**
 * get_op_func - function return a pointer to a function taking
 * two int parameters and return int
 * @s: operator
 * Return: int f(int, int)
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t op_s[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
		i++;
	}
	return (NULL);
}
