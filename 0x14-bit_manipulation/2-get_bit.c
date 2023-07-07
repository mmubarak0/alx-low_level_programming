#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * get_bit - returns the value of a bit at a given index.
  * @n: number to get.
  * @index: index starting from 0.
  * Return: return the value at index or -1 if an error occured.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
		n /= 2;
	if (index > 64)
		return (-1);
	return (n % 2);
}
