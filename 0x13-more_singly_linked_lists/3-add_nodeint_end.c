#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to the head of the list
 * @n: integer to add to the list
 * Return: address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *curr_node = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (curr_node == NULL)
	{
		*head = new_node;
		return (*head);
	}

	while (curr_node->next != NULL)
	{
		curr_node = curr_node->next;
	}

	curr_node->next = new_node;
	return (*head);

}
