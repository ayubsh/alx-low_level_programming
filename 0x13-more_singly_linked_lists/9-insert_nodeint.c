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
	unsigned int nth;
	listint_t *newnode;
	listint_t *tmp;

	tmp = *head;

	if (idx != 0)
	{
		for (nth = 0; nth < idx - 1 && tmp != NULL; nth++)
		{
			tmp = tmp->next;
		}
	}

	if (tmp == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
	}

	return (newnode);
}
