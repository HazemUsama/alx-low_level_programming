#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	while (*head != NULL && i < idx - 1)
	{
		*head = (*head)->next;
	}
	if (i != idx - 1)
		return (NULL);
	node = malloc(sizeof(listint_t));
	node->next = (*head)->next;
	node->n = n;
	(*head)->next = node;
	return (node);
}
