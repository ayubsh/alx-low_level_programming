#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a linked list
 * @h: ptr to the head of linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t n_nodes;

	n_nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_nodes++;
	}

	return (n_nodes);
}
