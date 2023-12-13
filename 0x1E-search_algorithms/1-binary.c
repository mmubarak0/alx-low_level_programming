#include "search_algos.h"

/**
  * binary_search - is a search algorithm
  *	that finds the position of a target value within a sorted array.
  *
  * @array: array to search in.
  * @size: size of the array.
  * @value: the value of the item to search for.
  * Return: first index where item has been found or -1 if does not exists.
  */
int binary_search(int *array, size_t size, int value)
{
	size_t first = 0;
	size_t last = size - 1;
	size_t mid;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array:");
	for (i = first; i <= last; i++)
	{
		printf(" %d", array[i]);
		if (i != last)
			printf(",");
	}
	printf("\n");
	while (first < last)
	{
		mid = first + (last - first) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			last = mid - 1;
		else if (array[mid] < value)
			first = mid + 1;
		printf("Searching in array:");
		for (i = first; i <= last; i++)
		{
			printf(" %d", array[i]);
			if (i != last)
				printf(",");
		}
		printf("\n");
	}
	return (-1);
}
