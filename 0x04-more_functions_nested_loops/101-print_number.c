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
