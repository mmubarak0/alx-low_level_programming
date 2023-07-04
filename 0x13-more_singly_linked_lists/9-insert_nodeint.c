#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * insert_nodeint_at_index - insert a new node at a given index.
  * @head: head node.
  * @idx: position to add.
  * @n: data.
  * Return: pointer to new node.
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *new = malloc(sizeof(listint_t));
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	p = *head;
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; p != NULL && i < (idx - 1); i++)
		p = p->next;
	new->next = p->next;
	p->next = new;
	return (new);
}
