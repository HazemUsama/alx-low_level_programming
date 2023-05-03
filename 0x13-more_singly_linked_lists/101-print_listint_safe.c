#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *node, *next_node;

	if (head == NULL)
		exit(98);

	node = head;
	next_node = node->next;

	for (i = 1; next_node != NULL && next_node < node; i++)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = next_node;
		next_node = next_node->next;
	}
	printf("[%p] %d\n", (void *)node, node->n);
	if (next_node != NULL)
		printf("-> [%p] %d\n", (void *)next_node, next_node->n);
	return (i);
}