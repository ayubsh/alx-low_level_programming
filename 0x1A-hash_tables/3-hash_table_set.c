#include "hash_tables.h"

/**
 * hash_table_set - adds element to hash table
 * @ht: prt to hash table to add or update key/value
 * @key: is the key
 * @value: is the value associated with the @key
 * Return: returns 1 on succes and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp;
	char *cp;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	cp = strdup(value);
	if (cp == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			ht->array[i]->value = cp;
			return (1);
		}
	}

	tmp = malloc(sizeof(hash_node_t));
	if (tmp == NULL)
		return (0);
	tmp->key = strdup(key);
	if (tmp->key == NULL)
		return (0);
	tmp->value = cp;
	tmp->next = ht->array[index];
	ht->array[index] = tmp;

	return (1);
}
