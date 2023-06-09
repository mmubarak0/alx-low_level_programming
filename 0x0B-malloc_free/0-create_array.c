#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * create_array - creates an array of chars, and initializes
  * it with a specific char.
  * @size: size of the array
  * @c: character to initialize it to
  * Return: pointer to array or null if it fails
  */
char *create_array(unsigned int size, char c)
{
	char *arr = (char *) malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
