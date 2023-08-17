#include "lists.h"

/**
  * sum_dlistint - sum of all the data of dlistint_t list.
  * @head: dlistint_t list.
  * Return: the sume of all data (n).
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *p = head;

	while (p)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}
