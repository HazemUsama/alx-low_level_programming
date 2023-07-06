#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 or 0
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
