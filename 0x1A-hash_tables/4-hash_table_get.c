#include "hash_tables.h"

/**
  * hash_table_get - function that retrieves a value associated with a key.
  * @ht: hash table.
  * @key: the key.
  * Return: the value.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *p;

	if (!ht || !key)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	p = ht->array[index];
	while (p && strcmp(p->key, key) != 0)
		p = p->next;
	if (p)
		return (p->value);
	return (NULL);
}
