#include "lists.h"


/**
 * dlistint_len - count the number of nodes
 *
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *runner = (dlistint_t *) h;

	while (runner)
	{
		runner = runner->next;
		count++;
	}
	return (count);
}
