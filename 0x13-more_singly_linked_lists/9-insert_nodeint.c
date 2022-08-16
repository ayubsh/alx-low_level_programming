#include <stdlib.h>
#include "lists.h"


/**
 * listint_len - computes the length of linked list
 * @h: ptr to the head of linked list
 * Return: return the length of linked list
 */
unsigned int getlen(const listint_t *h)
{
	unsigned int len_nodes;

	len_nodes = 0;

	while (h)
	{
		h = h->next;
		len_nodes++;
	}

	return (len_nodes);
}

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
	nth = getlen(*head);
	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (idx > nth)
		return (NULL);

	if (idx == 0)
	{
		newnode->next = tmp->next;
		tmp->next = newnode;
	}
	else
	{
		while (--idx)
			tmp = tmp->next;

		newnode->next = tmp->next;
		tmp->next = newnode;
	}

	return (newnode);
}
