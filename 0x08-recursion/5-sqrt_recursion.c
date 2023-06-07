#include "main.h"

/**
  * sqr_r - find natural square root of a number
  * @n: number
  * @i: terator
  * Return: square root of n, -1 if its not natural
  */
int sqr_r(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqr_r(n, ++i));
}

/**
  * _sqrt_recursion - returns the natural square root of a number.
  * @n: number
  * Return: natural square of n
  */
int _sqrt_recursion(int n)
{
	int i = 0;

	return (sqr_r(n, i));
}
