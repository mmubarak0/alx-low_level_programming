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
	int i = 1025;
	int sum = 0;

	while (i-- > 1)
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	printf("%d\n", sum);
	return (0);
}
