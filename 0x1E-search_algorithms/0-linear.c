#include "search_algos.h"


/**
  * linear_search - method for finding an element within a list.
  * @array: array to search in.
  * @size: size of the array.
  * @value: the value of the item to search for.
  * Return: first index where item has been found or -1 if does not exists.
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL || size == 0)
		return (-1);
	while (i < size && array[i] != value)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		i++;
	}
	if (i == size)
		return (-1);
	printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	return (i);
}
