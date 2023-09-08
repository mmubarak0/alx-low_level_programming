#include "hash_tables.h"

/**
  * hash_table_delete - delete a hash table.
  * @ht: hash table.
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *pl;

	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			free(p->key);
			free(p->value);
			pl = p;
			p = p->next;
			free(pl);
		}
	}
	free(ht->array);
	free(ht);
}
