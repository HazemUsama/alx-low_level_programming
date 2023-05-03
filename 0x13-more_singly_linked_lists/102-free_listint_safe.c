#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to the head of the list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t i, visited_size;
	listint_t *node;
	listint_t **visited;

	if (h == NULL || *h == NULL)
		return (0);
	node = *h;
	visited_size = 0;
	visited = NULL;

	while (node != NULL)
	{
		for (i = 0; i < visited_size; i++)
		{
			if (node == visited[i])
			{
				*h = NULL;
				h = NULL;
				free(visited);
				return (visited_size);
			}
		}
		visited_size++;
		visited = realloc(visited, visited_size * sizeof(*visited));
		if (visited == NULL)
			exit(98);

		visited[visited_size - 1] = node;
		node = (*h)->next;
		free(*h);
		*h = node;
	}
	*h = NULL;
	h = NULL;
	free(visited);
	return (visited_size);
}
