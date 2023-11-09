#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - add a new node
 *
 * @head: the head of the list
 * @n: the value of the node
 *
 * Return: an address to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node, *runner;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;

	if (*head)
	{
		runner = *head;
		while (runner->next)
			runner = runner->next;
		node->prev = runner;
		runner->next = node;
	}
	else
		*head = node;
	return (node);
}
