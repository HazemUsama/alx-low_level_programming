#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return (0);

	int n = (*head)->n;
	listint_t *tmp = (*head)->next;

	free(*head);
	head = tmp;
	return (n);

}
