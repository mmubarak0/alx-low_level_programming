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
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
		*n -= 1 << index;
	return (1);
}
