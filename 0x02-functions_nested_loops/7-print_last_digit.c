#include "main.h"

/**
  * print_last_digit - prints the last digit of a number.
  * @n: the number to check
  * Return: last digit of n
  */
int print_last_digit(int n)
{
	long ans;

	if (n >= 0)
		ans = n % 10;
	else
		ans = -((unsigned int)(n)) % 10;

	_putchar(ans + '0');
	return (ans);
}
