#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

/**
  * print_list - prints all the elements of a list_t list.
  * @h: list to be printed.
  * Return: the number of nodes.
  */
size_t print_list(const list_t *h)
{
	size_t len = 0;
	const list_t *p = h;

	while (p != NULL)
	{
		len++;
		if (p->str == NULL)
		{
			printf("[0] (nil)\n");
			p = p->next;
		}
		else
		{
			printf("[%d] %s\n", p->len, p->str);
			p = p->next;
		}
	}
	return (len);
}
