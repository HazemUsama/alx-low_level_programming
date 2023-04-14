#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array
 * @c: the char we will initialize with
 *
 * Return: pointer to the array or NULL if fails
 **/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(size + 1);
	unsigned int i;

	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[size] = '\0';
	return (ptr);
}
