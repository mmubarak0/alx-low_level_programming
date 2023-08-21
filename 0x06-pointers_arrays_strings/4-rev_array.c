#include "main.h"

/**
  * reverse_array - reverses the content of an array of integers.
  * @a: integer array to be reversed
  * @n: the number of elements of the array
  */
void reverse_array(int *a, int n)
{
	int copy[1000];
	int i = 0;

	for (i = 0; i < n; i++)
		copy[i] = a[i];

	for (i = 0; i < n; i++)
	{
		a[i] = copy[n - i - 1];
	}
}
