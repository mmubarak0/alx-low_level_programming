#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * int_index - find index
  * @array: array
  * @size: arr size
  * @cmp: operation
  * Return: integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && size > 0 && cmp != NULL)
		for (i = 0; i < size; i++)
			if (cmp(array[i]) > 0)
				return (i);
	return (-1);
}
