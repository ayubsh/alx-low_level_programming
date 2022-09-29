#include "lists.h"

/**
 * add_dnodeint_end - adds new node at the tail of double linked list
 * @head: ptr to the head of double linked list
 * @n: element of the new node
 * Return: ptr to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	curr = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (curr == NULL)
	{
		new->prev = curr;
		new->next = NULL;
		*head = new;
	}
	else
	{
		while (curr && curr->next != NULL)
		{
			curr = curr->next;
		}

		new->next = NULL;
		new->prev = curr;
		curr->next = new;
	}

	return (new);
}

