#include "lists.h"

/**
 * print_dlistint - prints elements of doubly linked list
 * @h: ptr to the head of doubly linked list
 * Return: the number of node in the linked list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
		return (n);

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}

	return (n);
}
