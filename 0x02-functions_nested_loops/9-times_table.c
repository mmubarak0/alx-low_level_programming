#include "main.h"

/**
  * times_table - prints the 9 times table, starting with 0.
  */
void times_table(void)
{
	/* a * b */
	int a = 0;
	int b;
	int p;

	while (a < 10)
	{
		b = 0;
		while (b < 10)
		{
			p = a * b;
			if (p / 10 != 0)
				_putchar((p / 10) + '0');
			else
				if (b != 0)
					_putchar(' ');
			_putchar((p % 10) + '0');
			if (b != 9)
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
