#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * get_nodeint_at_index - return node at index (index).
  * @head: head of the list.
  * @index: index of the node to return.
  * Return: a pointer to a node.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int i = 0;

	for (i = 0; p != NULL && i < index; i++)
	{
		p = p->next;
	}
	return (p);
}
