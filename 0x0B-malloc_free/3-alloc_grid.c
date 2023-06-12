#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * alloc_grid - allocate memory to a 2 dimesional array
  * @width: number of columns
  * @height: number of rows
  * Return: pointer a 2D array
  */
int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}

	arr = (int **) malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (j = 0; j < height; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
