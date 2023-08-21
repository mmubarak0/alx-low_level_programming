#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: finds and prints the largest prime factor of the number:
 * 612852475143
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long a = 612852475143, j = 2;

	while (a / j != 1)
	{
		if ((a % j) == 0)
			a /= j;
		else
			j++;
	}
	printf("%lu\n", a);
	return (0);
}
