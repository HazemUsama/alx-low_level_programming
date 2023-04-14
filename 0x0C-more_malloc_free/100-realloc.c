#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the previous memory
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of the new ptr
 *
 * Return: pointer to the new ptr
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (old_size == new_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
	old_size++;
}
