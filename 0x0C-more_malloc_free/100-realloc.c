#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * _realloc - _realloc memory block.
  * @ptr: pointer to previously allocated memory
  * @old_size: old allocated size
  * @new_size: new allocated size
  * Return: pointer to new alloctaed memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		new_ptr = malloc(new_size);
		free(ptr);
		return (new_ptr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	return (ptr);
}
