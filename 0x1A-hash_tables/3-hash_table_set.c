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

	hash_node_t **array = ht->array;
	unsigned long int index = key_index((const unsigned char *) key, ht->size);
	hash_node_t *node = malloc(sizeof(hash_node_t)), *curr;

	if (!node)
		return (0);

	node->key = (char *) key;
	node->value = (char *) value;
	node->next = NULL;

	if (array[index] == NULL)
		array[index] = node;
	else
	{
		curr = array[index];
		node->next = curr;
		array[index] = node;
	}
	return (1);
}
