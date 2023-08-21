#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = '0';
	int b = '0';
	int c;
	int d;

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = a;
			d = b + 1;
			while (c <= '9')
			{
				while (d <= '9')
				{
					putchar(a);
					putchar(b);
					putchar(' ');
					putchar(c);
					putchar(d);
					if (a != '9' || b != '8')
					{
						putchar(',');
						putchar(' ');
					}
					d++;
				}
				d = '0';
				c++;
			}
			b++;
		}
		a++;
	}
	putchar('\n');
	return (0);
}
