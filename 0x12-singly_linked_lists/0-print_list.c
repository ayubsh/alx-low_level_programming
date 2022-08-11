#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints elements of linked list
 * @h: ptr to the head of linked list
 * Return: returs how many elements have been printed (count)
 */
size_t print_list(const list_t *h)
{
	size_t node_num;

	node_num = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		node_num++;

	}

	return (node_num);
}

