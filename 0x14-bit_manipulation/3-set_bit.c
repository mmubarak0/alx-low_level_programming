#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * set_bit - sets the value of a bit to 1 at a given index.
  * @index: index starting from 0.
  * @n: number to set.
  * Return: 1 if it worked, or -1 if an error occurred.
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int div = 1;
	unsigned int i;

	for (i = 0; i < index; i++)
		div *= 2;
	/*
	 *if (div > *n)
	 *	return (-1);
	*/
	*n += div;
	return (1);
}
