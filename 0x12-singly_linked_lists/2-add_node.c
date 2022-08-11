#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds new node at the beginning
 * @head: ptr to the beggining of the linked list
 * @str: new string to be used in creating the new node
 * Return: ptr to the new nodeif fails NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	size_t node_s;

	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);

	node_s = 0;
	while (str[node_s])
		node_s++;

	new_node->len = node_s;
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
