#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * free_listint2 - free the int linked list.
  * @head: head of the list.
  */
void free_listint2(listint_t **head)
{
	listint_t *p = *head;

	while (p != NULL)
	{
		p = p->next;
		free(*head);
		*head = p;
	}
	*head = NULL;
}
