#include "main.h"
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memory to allocate
 *
 * Return: a pointer to the allocated memory, or exit with status 98 if failed
 */
void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(b);

	if (ptr == NULL)
		return (98);
	return (ptr);
}
