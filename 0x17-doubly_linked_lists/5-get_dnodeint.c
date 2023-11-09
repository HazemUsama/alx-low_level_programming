#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node
 *
 * @head: the head of the list
 * @index: the nth node
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (index == count)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
