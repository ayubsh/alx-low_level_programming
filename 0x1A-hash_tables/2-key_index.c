#include "hash_tables.h"

/**
 * key_index - it gives the index of key
 * @key: is the key
 * @size: is the size of the array of the hash table
 * Return: returns the index of the @key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
