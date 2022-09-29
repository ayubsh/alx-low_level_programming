#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>

/**
 * struct dlistint_s - node for doubly linked list
 * @n: element of the linked list
 * @prev: ptr to the previous node
 * @next: ptr to the next node
 *
 * Description: node structure for doubly linked
 * list
 */
typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);

#endif