#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees linked list
 * @head: ptr to the beginning of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
