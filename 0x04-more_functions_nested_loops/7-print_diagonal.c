#include "main.h"

/**
  * print_diagonal - draws a diagonal line on the terminal.
  * @n: the number of times the character \ should be printed.
  */
void print_diagonal(int n)
{
	int i = n;
	int p;

	while (n-- > 0)
	{
		p = n;
		while (++p < i)
			_putchar(' ');
		_putchar('\\');
		if (n != 0)
			_putchar('\n');
	}
	_putchar('\n');
}
