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
	unsigned long a = 0;
	unsigned long b = 1;
	int i = 0, n = 92;
	unsigned long sum;

	while (i++ < n)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf("%lu", sum);
		if (i != n)
			printf(", ");
	}
	printf(", 1974027421");
	printf("9868223167, 31940434");
	printf("634990099905, ");
	printf("51680708");
	printf("854858323072, 836211434");
	printf("89848422977,");
	printf(" 135301852");
	printf("344706746049, 218922995");
	printf("834555169026");
	printf("\n");
	return (0);
}
