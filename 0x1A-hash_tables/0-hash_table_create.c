#include "hash_tables.h"

/**
 * hash_table_create - creates new hash table
 * @size: is the size of the array
 * Return: returns ptr to newly created hash table if failed NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	new_table = malloc(sizeof(hash_table_t) * size);

	if (!new_table)
	{
		return (NULL);
	}

	return (new_table);
}
