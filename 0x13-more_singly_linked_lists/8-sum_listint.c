#include "lists.h"

/**
 * sum_listint - sums all the data of linked list
 * @head: ptr to the head of linked list
 * Return: returns the sum of all the data(n) of linked list
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	tmp = head;
	sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
