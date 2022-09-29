#include "lists.h"


/**
 * dlistint_len - length of linked list
 * @h: ptr to the head of linked list
 * Return: the length of linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;

	if (h == NULL)
		return (n);

	while (h)
	{
		n++;
		h = h->next;
	}

	return (n);
}
