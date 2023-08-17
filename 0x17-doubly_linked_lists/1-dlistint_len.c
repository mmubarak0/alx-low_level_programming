#include "lists.h"

/**
  * dlistint_len - calculate number of elements in a linked.
  * @h: dlistint_t list.
  * Return: the number of elements in a linked dlistint_t list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	int i;
	const dlistint_t *p = h;

	for (i = 0; p; i++)
		p = p->next;
	return (i);
}
