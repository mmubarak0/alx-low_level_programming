#include "main.h"
#include <stdio.h>

/**
  * print_to_98 - prints all natural numbers from n to 98
  * @n: starting number
  */
void print_to_98(int n)
{
	int first_num = 0;

	if (n <= 98)
		while (n <= 98)
		{
			if (!first_num)
			{
				first_num = 1;
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
			n++;
		}
	else
		while (n >= 98)
		{
			if (!first_num)
			{
				first_num = 1;
				printf("%d", n);
			}
			else
			{
				printf(", %d", n);
			}
			n--;
		}
	printf("\n");
}
