#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz instead
 * of the number and for the multiples of five print Buzz. For numbers which
 * are multiples of both three and five print FizzBuzz
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, n = 100;

	for (i = 1; i <= n; i++)
	{
		if (!(i % 3) && !(i % 5))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);
		if (i != n)
			printf(" ");
	}
	printf("\n");
	return (0);
}
