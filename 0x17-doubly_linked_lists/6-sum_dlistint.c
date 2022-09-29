#include "lists.h"

/**
 * sum_dlistint - sums elements of doubly linked list
 * @head: ptr to the head of linked list
 * Return: sum of the element
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
