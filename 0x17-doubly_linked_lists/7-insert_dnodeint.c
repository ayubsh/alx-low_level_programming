#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts element at specific index
 * @h: ptr to the head of doubly linked list
 * @idx: index to be inserted at the new node
 * @n: element (data) of the new node
 * Return: returns ptr to the new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cidx;
	dlistint_t *curr, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	curr = *h;
	cidx = 0;
	while (curr)
	{
		if (cidx == idx)
		{
			new->next = curr;
			new->prev = curr->prev;
			curr->prev = new;
			return (new);
		}
		cidx++;
		curr = curr->next;
	}

	return (NULL);
}
