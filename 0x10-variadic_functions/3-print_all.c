#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include "variadic_functions.h"


/**
  * pchar - print char
  * @args: variabel list
  */
void pchar(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
  * pinteger - print integer
  * @args: variabel list
  */
void pinteger(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
  * pfloat - print float
  * @args: variabel list
  */
void pfloat(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
  * pstring - print string
  * @args: variabel list
  */
void pstring(va_list args)
{
	char *x = va_arg(args, char *);

	printf("%s", x);
}

/**
  * print_all - prints anything.
  * -- You are allowed to use printf
  * -- You can use a maximum of
  * ---- 2 while loops
  * ---- 2 if
  * -- Print a new line at the end of your function
  * @format: a list of types of arguments passed to the function
  * -- c: char
  * -- i: integer
  * -- f: float
  * -- s: char * (if the string is NULL, print (nil) instead
  * -- any other char should be ignored
  * -- You can declare a maximum of 9 variables
  */
void print_all(const char * const format, ...)
{
	int i;
	const char *a = format;
	va_list args;
	id ident[] = {
		{'c', pchar},
		{'i', pinteger},
		{'f', pfloat},
		{'s', pstring}
	};

	/* Your code goes here */
	va_start(args, format);
	while (*a != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (*a == ident[i].f)
			{
				ident[i].func(args);
				if (*(a + 1) != '\0')
					printf(", ");
				break;
			}
			i++;
		}
		a++;
	}
	printf("\n");

	va_end(args);
}
