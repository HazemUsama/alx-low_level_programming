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
	listint_t *node, *curr;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	curr = *head;
	while (curr != NULL && i < idx - 1 && idx != 0)
	{
		curr = curr->next;
		i++;
	}
	node = malloc(sizeof(listint_t));
	if (node == NULL || curr == NULL)
	{
		free(node);
		return (NULL);
	}


	node->next = curr->next;
	node->n = n;
	curr->next = node;
	return (node);
}
