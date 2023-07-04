#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * pop_listint - pop head element of the list.
  * @head: pointer to the head of the list
  * Return: data of the head.
  */
int pop_listint(listint_t **head)
{
	listint_t *p = *head;
	int x;

	if (p == NULL)
		return (0);
	x = p->n;
	*head = p->next;
	free(p);
	return (x);
}
