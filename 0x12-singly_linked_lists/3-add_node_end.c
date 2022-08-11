#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at the end
 * @head: ptr to the begging of the linked list
 * @str: string to be populated in the linked list
 * Return: ptr to the new node or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	size_t node_s;
	list_t *temp;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);


	new_node->str = strdup(str);

	node_s = 0;
	while (str[node_s])
		node_s++;

	new_node->len = node_s;
	new_node->next = NULL;

	temp = *head;

	if (temp == NULL)
	{
		*head = new_node;
	}
	else
	{

		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (new_node);
}
