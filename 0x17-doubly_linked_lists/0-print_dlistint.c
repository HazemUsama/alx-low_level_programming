#include "lists.h"


/**
 * print_dlistint - print all nodes
 *
 * @h: the head of the list
 *
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *runner = (dlistint_t *) h;

	while (runner)
	{
		printf("%d\n", runner->n);
		runner = runner->next;
		count++;
	}
	return (count);
}
