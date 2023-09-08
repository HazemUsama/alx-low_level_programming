#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hast table
 * @key: the key
 * @value: the value of the key
 *
 * Return: 1 on success 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

	unsigned long int index;
	hash_node_t *node, *head;

	if (!ht || !ht->array || !ht->size || !key || strlen(key) == 0 || !value)
		return (0);

	index = key_index((const unsigned char *) key, ht->size);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);

	node->key = strdup(key);
	if (!node->key)
		return (0);

	node->value = strdup(value);
	if (!node->value)
		return (0);

	node->next = NULL;

	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			if (!head->value)
				return (0);
			return (1);
		}
		head = head->next;
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}
