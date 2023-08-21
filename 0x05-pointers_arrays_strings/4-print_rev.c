#include "main.h"

/**
  * print_rev - reverse a string
  * @s: string to be reversed
  */
void print_rev(char *s)
{
	char *a = s;
	int len = 0, i;

	while (*a++ != '\0')
		len++;

	for (i = len; i > 0; i--)
	{
		_putchar(s[i - 1]);
	}
	_putchar('\n');
}
