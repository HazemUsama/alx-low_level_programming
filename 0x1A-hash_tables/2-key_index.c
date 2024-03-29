#include "hash_tables.h"
#include <strings.h>

/**
 * key_index - gives you the index of a key
 *
 * @key: the key
 * @size: the size of the array
 *
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key) % size;

	return (index);
}
