#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list
 * @head: pointer to the head of the list
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr_node, *next_node;

	if (head == NULL || *head == NULL)
		return (NULL);

	curr_node = *head;
	next_node = (*head)->next;

	for (; next_node != NULL; next_node = next_node->next)
	{
		next_node->next = curr_node;
		curr_node = next_node;
	}
	(*head)->next = NULL;
	return (curr_node);
}
