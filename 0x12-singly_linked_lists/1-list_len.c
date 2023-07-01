#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

/**
  * list_len - returns the number of elements in a linked list_t list.
  * @h: list to calculate
  * Return: number of elements in a linked list_t list.
  */
size_t list_len(const list_t *h)
{
	size_t len = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		p = p->next;
		len++;
	}
	return (len);
}
