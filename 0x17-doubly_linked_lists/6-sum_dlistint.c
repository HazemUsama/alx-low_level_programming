#include "lists.h"

/**
 * sum_dlistint - sum all the nodes
 *
 *  @head: the head of the list
 *
 *  Return: the sum of the all nodes
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
