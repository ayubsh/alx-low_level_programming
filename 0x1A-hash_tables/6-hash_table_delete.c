#include "hash_tables.h"

/**
 * hash_table_delete - deletes and frees hash table
 * @ht: ptr to hash table to be freed
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *f;
	unsigned long int i;
	hash_table_t *h = ht;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			tmp = ht->array[i];
			while (tmp)
			{
				f = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = f;
			}
		}
	}

	free(h->array);
	free(h);
}
