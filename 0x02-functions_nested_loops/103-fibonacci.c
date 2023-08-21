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
	int a = 1, b = 2, sum = 0, c;

	while (b <= 4000000)
	{
		if (b % 2 == 0)
		{
			sum += b;
		}
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", sum);
	return (0);
}
