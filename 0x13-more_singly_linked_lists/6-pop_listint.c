#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes first element of linked list
 * @head: ptr to the head of linked list
 * Return: returns the deleted nodes content
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int deleted_n;

	tmp = *head;
	deleted_n = tmp->n;

	*head = tmp->next;
	free(tmp);

	return (deleted_n);
}
