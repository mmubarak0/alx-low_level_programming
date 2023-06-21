#include <stddef.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - addition
 * @a: num1
 * @b: num2
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: num1
 * @b: num2
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - ((unsigned int)b));
}

/**
 * op_mul - multiplication
 * @a: num1
 * @b: num2
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: num1
 * @b: num2
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - modulo
 * @a: num1
 * @b: num2
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
