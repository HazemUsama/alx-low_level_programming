#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - add a node at nth index
 *
 * @h: address to the head of the list
 * @idx: the idx to add the node at
 * @n: the value of the node
 *
 * Return: pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *runner = *h, *node;
	unsigned int cnt = 0;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (runner)
	{
		if (cnt == idx)
		{
			node = malloc(sizeof(dlistint_t));
			if (!node)
				return (NULL);
			node->n = n;
			node->prev = runner->prev;
			runner->prev->next = node;
			runner->prev = node;
			node->next = runner;
			return (node);

		}
		cnt++;
		runner = runner->next;
	}
	if (cnt == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
