#include "main.h"

/**
  * _pow_recursion - value of x raised to the power of y.
  * @x: number
  * @y: power
  * Return: x^y or -1 if y < 0
  */
int _pow_recursion(int x, int y)
{
	if (y > 1)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x);
}
