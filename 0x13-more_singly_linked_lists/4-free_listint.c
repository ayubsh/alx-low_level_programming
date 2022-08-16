#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees nodes of linked list
 * @head: ptr to the head of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
