#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees linked list and sets head to null
 * @head: ptr to the head of linled list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *nextnode;


	tmp = *head;

	while (tmp)
	{
		nextnode = tmp->next;
		free(tmp);
		tmp = nextnode;
	}

	*head = NULL;
}
