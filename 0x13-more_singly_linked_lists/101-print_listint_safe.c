#include "lists.h"
/**
 * find_cycle - finds a cycle in a linked list 
 * 
 * @head: pointer to the head of the list
 * Return: the start of the cycle, or NULL if there is no cycle
 */
listint_t *find_cycle(listint_t *head)
{
	listint_t *slow, *fast;

	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i, flag;
	const listint_t *node, *end_point;

	if (head == NULL)
		exit(98);

	node = head;
	end_point = find_cycle((listint_t *)head);
	flag = 0;
	while (node != NULL)
	{
		printf("[%p] %d\n", (void *)node, node->n);
		node = node->next;
		if (node == end_point)
		{
			if (flag)
			{
				printf("-> [%p] %d\n", (void *)node, node->n);
				return (i + 1);
			}
			flag = 1;
		}
		i++;
	}
	return (i);
}
