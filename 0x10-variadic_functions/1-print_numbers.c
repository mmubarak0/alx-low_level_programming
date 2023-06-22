#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_numbers - prints numbers, followed by a new line.
  * -- You are allowed to use printf
  * -- if separator is NULL don't print it
  * @separator: string to be printed between numbers.
  * @n: number of integers passed to the function.
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int d = n - 1;
	va_list args;

	/* Your code goes here */
	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i != d)
			printf("%s", separator);
	}
	printf("\n");

	va_end(args);
}
