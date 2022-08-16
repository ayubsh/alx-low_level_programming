#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds new node in linked list at the end
 * @head: ptr to the head of linked list
 * @n: element to be added at the end of linked list
 * Return: return address of the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *lastnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		lastnode = *head;

		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}

		lastnode->next = newnode;
	}

	return (newnode);
}
