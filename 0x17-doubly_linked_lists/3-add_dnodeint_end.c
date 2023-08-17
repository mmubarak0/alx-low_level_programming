#include "lists.h"

/**
  * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
  * @head: dlistint_t list.
  * @n: new node value.
  * Return: the address of the new element, or NULL if it failed.
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tail = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);
	while (tail && tail->next)
		tail = tail->next;
	new->n = n;
	if (tail)
	{
		new->prev = tail;
		tail->next = new;
	}
	else
		*head = new;
	return (new);
}
