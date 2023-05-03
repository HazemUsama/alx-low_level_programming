#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next_list;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		next_list = (*head)->next;
		free(*head);
		*head = next_list;
	}
	head = NULL;
}
