#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * clear_bit -  sets the value of a bit to 0 at a given index.
  * @index: index starting from 0.
  * @n: number to clear.
  * Return: 1 if it worked, or -1 if an error occurred.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int div = 1;
	unsigned int i;

	for (i = 0; i < index; i++)
		div *= 2;
	if (index > 64)
		return (-1);
	*n -= div;
	return (1);
}
