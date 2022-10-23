#include "hash_tables.h"


/**
 * hash_table_get - retrieves value associated with key
 * @key: is the key to be looked
 * @ht: hash table to be looked into
 * Return: returns value associated with the key, if failed NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;

	unsigned long index = key_index((const unsigned char *) key, ht->size);


	if (ht->size <= index)
		return (NULL);

	tmp = ht->array[index];
	if (strcmp(tmp->key, key) && tmp)
	{
		tmp = tmp->next;
	}

	return ((tmp == NULL) ? NULL : tmp->value);
}
