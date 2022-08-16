#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets node from linked list at specified index
 * @head: ptr to the head of a linked list
 * @index: index to be searched for element
 * Return: returns the node if found otherwise null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int nth;

	tmp = head;

	for (nth = 0; tmp; nth++)
	{
		if (nth == index)
		{
			return (tmp);
		}
		tmp = tmp->next;
	}

	return (NULL);
}
