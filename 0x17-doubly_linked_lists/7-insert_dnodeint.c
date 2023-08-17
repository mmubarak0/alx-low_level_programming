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

/**
  * insert_dnodeint_at_index - inserts a new node at a given position.
  * @h: dlistint_t list.
  * @idx: index of the list where the new node should be added.
  * @n: new node value.
  * Return: the address of the new node, or NULL if it failed.
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h;
	dlistint_t *new = malloc(sizeof(dlistint_t));
	unsigned int len_h = dlistint_len(*h);
	unsigned int i;

	if (!new)
		return (NULL);
	i = 0;
	while (p && p->next && i++ < idx)
		p = p->next;
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	if (idx == len_h)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	else if (idx > len_h)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->prev = p->prev;
	(p->prev)->next = new;
	new->next = p;
	p->prev = new;
	return (new);
}
