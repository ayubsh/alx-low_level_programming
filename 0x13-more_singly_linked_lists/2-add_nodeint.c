#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_nodeint - adds new node in linked list at the beginning
 * @head: ptr to the head of linked list
 * @n: element to be added at the beginning
 * Return: returns the address of the new element or Null when failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
