#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: the number of array elements
 * @size: the size of each element
 *
 * Return: a pointer to the allocated memory, or NULL if failed
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i;
	int *ptr;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return (ptr);
}
