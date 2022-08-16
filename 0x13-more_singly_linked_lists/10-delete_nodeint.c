#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specifi index in linked list
 * @head: ptr to the head of linked list
 * @index: the index to node to be deleted
 * Return: the data of the deleted node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int nth;
	listint_t *tmp;
	listint_t *n_node;

	tmp = *head;

	if (index != 0)
	{
		for (nth = 0; nth < index - 1 && tmp != NULL; nth++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL || (tmp->next == NULL && index != 0))
	{
		return (-1);
	}

	n_node = tmp->next;

	if (index != 0)
	{
		tmp->next = n_node->next;
		free(n_node);
	}
	else
	{
		free(tmp);
		*head = n_node;
	}

	return (1);
}
