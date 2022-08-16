#include <stddef.h>
#include "lists.h"

/**
 * listint_len - computes the length of linked list
 * @h: ptr to the head of linked list
 * Return: return the length of linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t len_nodes;

	len_nodes = 0;

	while (h)
	{
		h = h->next;
		len_nodes++;
	}

	return (len_nodes);
}
