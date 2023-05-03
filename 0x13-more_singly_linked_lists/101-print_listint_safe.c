#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i;
	const listint_t *tortoise, *hare;

	if (head == NULL)
		exit(98);

	tortoise = head;
	hare = head;

	while (hare != NULL && hare->next != NULL)
	{
		tortoise = tortoise->next;
		hare = hare->next->next;
		if (tortoise == hare)
		{
			break;
		}
	}

	for (i = 0; head != NULL && (i == 0 || head != hare); i++)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	if (i != 0)
		printf("-> [%p] %d\n", (void *)head, head->n);

	return (i);
}
