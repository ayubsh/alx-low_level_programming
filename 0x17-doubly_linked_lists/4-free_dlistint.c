#include "lists.h"

/**
 * free_dlistint - frees double linked list
 * @head: ptr to th head of linked list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr, *tmp;

	curr = head;

	while (curr)
	{
		tmp = curr->next;
		free(curr);
		curr = tmp;
	}
}
