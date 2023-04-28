#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer to the list_t list.
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *curr_node;

	while (head != NULL)
	{
		curr_node = head;
		head = head->next;
		free(curr_node->str);
		free(curr_node);
	}
}
