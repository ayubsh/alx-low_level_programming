#include "lists.h"


/**
 * add_dnodeint - adds new node at the head
 * @head: ptr to the head of linked list
 * @n: the new element to be added
 * Return: ptr to the newly added node or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	*head = new;

	return (new);
}

