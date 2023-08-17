#include "lists.h"

/**
  * print_dlistint - prints all the elements of a dlistint_t list.
  * @h: dlistint_t list.
  * Return: the number of nodes.
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *p = h;
	size_t i = 0;

	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
