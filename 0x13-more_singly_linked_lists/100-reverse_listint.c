#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - revers linked list
 * @head: ptr to the head of linked list
 * Return: ptr to the reversed linked list (head)
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *tmp;
	listint_t *n_node;

	tmp = NULL;
	n_node = NULL;

	while (*head)
	{
		n_node = (*head)->next;
		(*head)->next = tmp;
		tmp = *head;
		*head = n_node;
	}

	*head = tmp;
	return (*head);
}
