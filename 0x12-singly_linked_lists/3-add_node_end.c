#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
  * _strlen - return the length of the string
  * @str: string
  * Return: length of the str.
  */
int _strlen(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
  * add_node_end - add new node at the end of a singly linked list.
  * @head: head of the list.
  * @str: string to add to new node.
  * Return: address of the new node or null.
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *p;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = _strlen(str);
	if (*head == NULL)
		*head = new;
	else
	{
		p = *head;
		while (p->next != NULL)
			p = p->next;
		p->next = new;
	}
	return (new);
}
