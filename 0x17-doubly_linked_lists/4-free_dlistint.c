#include "lists.h"

/**
  * free_dlistint - frees a dlistint_t list.
  * @head: dlistint_t list.
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;

	while (temp)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
