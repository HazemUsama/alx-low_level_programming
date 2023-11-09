#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node
 *
 * @head: the head of the list
 * @n: the value of the node
 *
 * Return: an address to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->prev = NULL;
	node->next = *head;
	if (*head)
		(*head)->prev = node;
	*head = node;
	return (node);
}
