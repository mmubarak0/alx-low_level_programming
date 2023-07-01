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
  * add_node - adds a new node at the beginning of a list_t list.
  * @head: list head.
  * @str: string to add.
  * Return: the address of the new element, or NULL if it failed.
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
		return (NULL);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);
}
