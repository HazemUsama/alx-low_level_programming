#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to the list_t list.
 * @str: string to be added to the list_t list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
    list_t *new_node, *temp;
    size_t i = 0;

    new_node = malloc(sizeof(list_t));
    if (new_node == NULL)
        return (NULL);
    while (str[i] != '\0')
        i++;
    new_node->str = strdup(str);
    new_node->len = i;
    new_node->next = NULL;
    if (*head == NULL)
        *head = new_node;
    else
    {
        temp = *head;
        while ((*temp).next != NULL)
            temp = (*temp).next;
        (*temp).next = new_node;
    }
    return (*head);
}
