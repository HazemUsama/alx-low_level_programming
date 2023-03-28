#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy - copy string to another
 *
 * @src: the main string
 * @dest: the copy
 *
 * Return: the coppy @dest
 */
char *_strcpy(char *dest, char *src)
{
	strcpy(dest, src);
	return (dest);
}
