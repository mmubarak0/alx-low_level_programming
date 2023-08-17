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
  * delete_dnodeint_at_index - deletes the node at index.
  * @head: dlistint_t list.
  * @index: index of the node that should be deleted.
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p = *head;
	unsigned int len_head = dlistint_len(*head);
	unsigned int i;

	if (!p)
		return (-1);
	i = 0;
	while (p && p->next && i++ < index)
		p = p->next;
	if (index == 0)
	{
		*head = (*head)->next;
		free(p);
		return (1);
	}
	else if (index == (len_head - 1))
	{
		if (p->prev)
			(p->prev)->next = NULL;
		free(p);
		return (1);
	}
	else if (index >= len_head)
		return (-1);
	(p->prev)->next = p->next;
	(p->next)->prev = p->prev;
	free(p);
	return (1);
}
