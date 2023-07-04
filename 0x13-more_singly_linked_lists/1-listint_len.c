#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

size_t listint_len(const listint_t *h)
{
	const listint_t *p = h;
	size_t i = 0;

	while (p != NULL)
	{
		p = p->next;
		i++;
	}
	return (i);
}
