#include "lists.h"

/**
  * get_dnodeint_at_index - Get node at index of a dlistint_t list.
  * @head: dlistint_t list.
  * @index: is the index of the node.
  * Return: the nth node or NULL if the node does not exist.
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = head;
	unsigned int i;

	i = 0;
	while (p && i++ < index)
		p = p->next;
	return (p);
}
