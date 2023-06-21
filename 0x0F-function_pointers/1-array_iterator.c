#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
  * array_iterator - func desc
  * @array: an array
  * @size: array size
  * @action: action
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL && size > 0)
		for (i = 0; i < size; i++)
			action(array[i]);
}
