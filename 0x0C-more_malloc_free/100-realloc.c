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
	void *new_ptr;

	if (old_size == new_size)
		return (ptr);
	old_size++;
	if (new_size == 0)
		return (NULL);

	new_ptr = malloc(new_size);
	memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);
	free(ptr);
	return (new_ptr);
}
