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
	int b;

	while (a < '9')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b++);
			if (a + 1 < '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		a++;
	}
	putchar('\n');
	return (0);
}
