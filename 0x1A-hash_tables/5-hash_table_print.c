#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 *
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *curr;
	size_t i, flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		curr = ht->array[i];
		while (curr)
		{
			if (flag)
				printf(", ");

			printf("\'%s\': \'%s\'", curr->key, curr->value);
			flag = 1;
			curr = curr->next;
		}
	}
	printf("}\n");
}
