#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list recursivley
 * @head: ptr to the beginning of the linked list
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	free_list(head->next);
	free(head);
}
