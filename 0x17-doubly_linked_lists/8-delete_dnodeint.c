#include "lists.h"

/**
  * delete_dnodeint_at_index - deletes the node at index.
  * @head: dlistint_t list.
  * @index: index of the node that should be deleted.
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *p;
	dlistint_t *pprev;
	unsigned int i;

	if (!(*head))
		return (-1);
	p = *head;
	while (p->prev)
		p = p->prev;
	i = 0;
	while (p)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = (*head)->next;
				if (*head)
					(*head)->prev = NULL;
				free(p);
				return (1);
			}
			else
			{
				pprev->next = p->next;
				if (p->next)
					(p->next)->prev = pprev;
				free(p);
				return (1);
			}
		}
		pprev = p;
		p = p->next;
		i++;
	}
	return (-1);
}
