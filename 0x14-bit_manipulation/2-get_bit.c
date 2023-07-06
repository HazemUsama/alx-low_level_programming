#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 *
 * @n: ...
 * @index: ...
 *
 * Return: 1 or 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	return (n >> index & 1);
}
