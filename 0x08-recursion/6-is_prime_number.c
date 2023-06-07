#include "main.h"

/**
  * check_p - check if number is prime or not
  * @n: number to check
  * @i: iterator must equall 2
  * Return: 1 if n is prime 0 otherwise
  */
int check_p(int n, int i)
{
	if (i >= n)
		return (1);
	if ((n % i) == 0)
		return (0);
	return (check_p(n, ++i));
}
/**
  * is_prime_number - check if a number is prime
  * @n: number to check
  * Return: 1 if prime 0 otherwise
  */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (check_p(n, i));
}
