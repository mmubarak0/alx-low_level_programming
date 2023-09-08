#include "hash_tables.h"

/**
  * hash_table_set - function that adds an element to the hash table.
  * @ht: the hash table you want to add or update the key/value to.
  * @key: the key.
  * @value: the value associated with the key.
  * Return: 1 if it succeeded, 0 otherwise.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int index = 0;
	hash_node_t *p;

	if (!ht || !value)
		return (0);
	if (!key || !key[0])
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	p = ht->array[index];
	while (p && strcmp(p->key, key) != 0)
		p = p->next;
	if (p)
	{
		p->value = realloc(p->value, sizeof(char) * strlen(value) + 1);
		strcpy(p->value, value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = malloc(sizeof(char) * strlen(key) + 1);
	if (!new_node->key)
		return (0);
	new_node->value = malloc(sizeof(char) * strlen(value) + 1);
	if (!new_node->value)
		return (0);
	strcpy(new_node->key, key);
	strcpy(new_node->value, value);

	if ((ht->array)[index] == NULL)
		(ht->array)[index] = new_node;
	else
	{
		new_node->next = (ht->array)[index];
		(ht->array)[index] = new_node;
	}
	return (1);
}
