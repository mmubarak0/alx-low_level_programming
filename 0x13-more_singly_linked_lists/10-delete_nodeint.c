#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * delete_nodeint_at_index - delete a node at given index.
  * @head: head node.
  * @index:  index of the node that should be deleted.
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *p = *head;
	listint_t *h;
	unsigned int i;

	if (index == 0)
	{
		if (*head == NULL)
			return (-1);
		*head = p->next;
		free(p);
		return (1);
	}
	for (i = 0; p != NULL && i < (index - 1); i++)
		p = p->next;
	if (p == NULL)
		return (-1);
	h = p->next;
	if (h == NULL)
		return (-1);
	p->next = h->next;
	free(h);
	return (1);
}
