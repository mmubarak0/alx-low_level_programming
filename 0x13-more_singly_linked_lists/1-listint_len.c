#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * listint_len - get length of the linked list.
  * @h: head of the list.
  * Return: size of the list
  */
size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	size_t i = 0;

	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
