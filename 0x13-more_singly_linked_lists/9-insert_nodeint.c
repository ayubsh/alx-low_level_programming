#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insets node at given index
 * @head: ptr to the head od linked list
 * @idx: index to be inserted at
 * @n: the new node data (n)
 * Return: returns the address of the new node or NUll if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode, *tmp;
	unsigned int nth;

	tmp = *head;
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	for (nth = 0; tmp; nth++)
	{
		if (idx == 0)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}
		else if (nth == idx - 1)
		{
			newnode->next = tmp->next;
			tmp->next = newnode;
			return (newnode);
		}

		tmp = tmp->next;
	}

	return (NULL);
}
