#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * add_nodeint_end - add a new node in the end of the list.
  * @head: list head.
  * @n: number to add.
  * Return: pointer to list int.
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *p = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (p == NULL)
		*head = new;
	else
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}

	return (*head);
}
