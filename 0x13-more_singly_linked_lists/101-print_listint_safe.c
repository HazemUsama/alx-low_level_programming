#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, visited_size;
	const listint_t *node;
	const listint_t **visited;

	node = head;
	visited_size = 0;
	visited = NULL;

	while (node != NULL)
	{
		for (i = 0; i < visited_size; i++)
		{
			if (node == visited[i])
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				free(visited);
				return (visited_size);
			}
		}
		visited_size++;
		visited = realloc(visited, visited_size * sizeof(*visited));
		if (visited == NULL)
			exit(98);

		visited[visited_size - 1] = node;
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
	}
	free(visited);
	return (visited_size);
}
