#include "main.h"

/**
  * print_times_table - prints the times table, starting with 0 to some number.
  * @n: integer to stop at.
  */
void print_times_table(int n)
{
	int a = 0;
	int b;
	int p;

	if (n > 15 || n < 0)
		return;
	while (a <= n)
	{
		b = 0;
		while (b <= n)
		{
			p = a * b;
			if (p / 10 != 0)
				if (p / 100 != 0)
				{
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(((p / 10) % 10) + '0');
				}
			else
				if (b != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
			_putchar((p % 10) + '0');
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
