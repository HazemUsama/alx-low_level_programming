#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copy a string
 *
 * @str: the string
 *
 * Return: pointer to the new string location
 **/
char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);
	int size = strlen(str);
	char *ptr = malloc(size + 1);
	unsigned int i;

	for (i = 0; i < size; i++)
		ptr[i] = str[i];
	ptr[size] = '\0';
	return (ptr);
}
