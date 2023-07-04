#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
  * print_listint - print int single linked list
  * @h: head of list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	const listint_t *p = h;
	size_t i = 0;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		i++;
	}
	return (i);
}
