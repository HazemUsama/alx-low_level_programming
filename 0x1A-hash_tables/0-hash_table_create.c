#include "hash_tables.h"
#include <stdlib.h>


/**
 * hash_table_create - Create a new hash table
 *
 * @size: the size of the hash table
 *
 * Return: a pointer to the table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (NULL);
	table->size = size;
	table->array = calloc(table->size, sizeof(hash_node_t *));
	if (!table->array)
	{
		free(table);
		return (NULL);
	}
	return (table);
}

