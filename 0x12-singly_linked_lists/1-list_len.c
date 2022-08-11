#include <stdlib.h>
#include "lists.h"

/**
 * list_len - counts the length of linked list
 * @h: ptr to the first element of linked list
 * Return: returns the size (length) of linked list
 */
size_t list_len(const list_t *h)
{
	size_t node_num;

	node_num = 0;

	while  (h)
	{

		h = h->next;
		node_num++;
	}

	return (node_num);
}
