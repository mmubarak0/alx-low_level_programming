#include "hash_tables.h"

/**
  * hash_table_print - print a hash table.
  * @ht: hash table.
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	char *s;

	if (!ht)
		return;
	printf("{");
	s = "";
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		while (p != NULL)
		{
			printf("%s'%s': '%s'", s, p->key, p->value);
			s = ", ";
			p = p->next;
		}
	}
	printf("}\n");
}
