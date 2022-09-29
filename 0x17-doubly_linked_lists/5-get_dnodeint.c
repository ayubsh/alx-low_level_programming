#include "lists.h"

/**
 * get_dnodeint_at_index - gets node at specific index
 * @head: ptr to the head of doubly linked list
 * @index: the index of the node to be returned
 * Return: returns the node if found other wise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n;

	if (head == NULL)
		return (NULL);

	n = 0;
	while (head != NULL)
	{
		if (n == index)
		{
			return (head);
		}
		head = head->next;
		n++;
	}

	return (NULL);
}
