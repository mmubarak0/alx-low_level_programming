#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"

/**
  * sum_them_all - returns the sum of all its parameters.
  * @n: number of agrs
  * Return: sum of all arguments
  */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	/* your code goes here */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
