#include "hash_tables.h"
#include <stdlib.h>

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

	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t)), *curr;

	if (!node)
		return (0);

	node->key = (char *) key;
	node->value = (char *) value;
	node->next = NULL;

	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		curr = ht->array[index];
		while (curr->next)
			curr = curr->next;
		curr->next = node;
	}
	return (1);
}
