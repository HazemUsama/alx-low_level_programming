#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - delete node at the nth index
 *
 * @head: address to the head
 * @index: the index to remove at
 *
 * Return: 1 if it succeeded -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *runner = *head, *remove;
	unsigned int cnt = 0;

	while (runner)
	{
		if (cnt == index)
		{
			if (runner->next && runner->prev)
			{
				runner->next->prev = runner->prev;
				runner->prev->next = runner->next;
			}
			else if (runner->next)
			{
				*head = runner->next;
				runner->next->prev = NULL;
			}
			else if (runner->prev)
				runner->prev->next = NULL;
			else
				*head = NULL;
			free(runner);
			return (1);
		}
		runner = runner->next;
		cnt++;
	}
	return (-1);
}
