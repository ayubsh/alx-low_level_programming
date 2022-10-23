#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: prt to the hash table to be printed
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, c;
	hash_node_t *tmp;

	if (!ht)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (c == 1)
				printf(", ");
			tmp = ht->array[i];
			while (tmp)
			{
				printf("'%s': '%s'", tmp->key, tmp->value);
				tmp = tmp->next;
				if (tmp)
					printf(", ");
			}
			c = 1;
		}
	}
	printf("}\n");
}
