#include "main.h"

/**
  * print_number - function that prints an integer
  * @n: number to print
  */
void print_number(int n)
{
	unsigned int i = 1;
	unsigned int u;

	if (n == 0)
	{
		_putchar(n + '0');
		return;
	}
	else if (n < 0)
	{
		u = -((unsigned int)n);
		while ((u / i) / 10)
			i *= 10;

		_putchar('-');
		while (i != 0)
		{
			_putchar((u / i) + '0');
			u %= i;
			i /= 10;
		}
	}
	else
	{
		u = (unsigned int)n;
		while ((u / i) / 10)
			i *= 10;

		while (i != 0)
		{
			_putchar((u / i) + '0');
			u %= i;
			i /= 10;
		}
	}
}

/**
  * print_array - print array values
  * @a: array of integer
  * @n: length of numbers to be printed
  */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		print_number(a[i++]);
		if (i != n)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
