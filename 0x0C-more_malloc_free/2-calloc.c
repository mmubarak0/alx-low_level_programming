#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
  * _calloc - allocates memory for an array
  * @nmemb: number of element in the array
  * @size: byte size
  * Return: void pointer to the newly allocated memeory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *alloc;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	alloc = malloc(nmemb * size);
	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		alloc[i] = 0;

	return (alloc);
}
