#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * @head: pointer to the head of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *next_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	node = *head;
	next_node = node->next;

	if (index == 0)
	{
		free(node);
		*head = next_node;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (node == NULL || next_node == NULL)
		{
			return (-1);
		}
		node = node->next;
		next_node = next_node->next;
	}
	node->next = next_node->next;
	free(next_node);
	return (1);

}
