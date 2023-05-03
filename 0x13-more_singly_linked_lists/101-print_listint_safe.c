#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
    size_t i = 0;
    const listint_t *slow, *fast;

    if (head == NULL)
        exit(98);

    slow = head;
    fast = head->next;

    while (fast != NULL && fast > slow)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL)
            fast = fast->next;
        i++;
    }

    printf("[%p] %d\n", (void *)slow, slow->n);
    if (fast != NULL)
        printf("-> [%p] %d\n", (void *)fast, fast->n);

    return (i + 1);
}
