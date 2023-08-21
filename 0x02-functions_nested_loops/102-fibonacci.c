#include <stdio.h>

/**
  * fibonacci - compute the fibonacci series
  */
void fibonacci(void)
{
	long a = 0;
	long b = 1;
	int i = 0;
	long sum;

	while (i++ < 50)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%ld", sum);
		if (i != 50)
			printf(", ");
	}
	printf("\n");
}

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fibonacci();
	return (0);
}
