#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * sum_listint - return the sum of all data
  * @head: head node.
  * Return: sum of the data
  */
int sum_listint(listint_t *head)
{
	listint_t *p = head;
	int sum = 0;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
