#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
  * _pow2 - power of 2
  * @p: the power
  * Return: return 2 to the power p.
  */
unsigned long int _pow2(int p)
{
	unsigned long int d = 1;

	if (p < 0)
		return (0);
	while (p--)
		d *= 2;
	return (d);
}

/**
  * print_binary - print a binary representation of a number.
  * @n: number to print.
  */
void print_binary(unsigned long int n)
{
	unsigned long int div = 1;
	int power = 0;

	while (n >= div * 2)
	{
		div *= 2;
		power++;
	}
	while (power >= 0)
	{
		if (n >= div)
		{
			_putchar('1');
			n = n - div;
		}
		else
			_putchar('0');
		div = _pow2(--power);
	}
}
