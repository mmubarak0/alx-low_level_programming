#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * array_range - creates an array of integers.
  * @min: first number in the array
  * @max: last number in the array
  * Return: pointer to array
  */
int *array_range(int min, int max)
{
	int i;
	int *arr;
	int len = max - min + 1;

	if (min > max)
		return (NULL);
	arr = calloc(sizeof(int), len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
