#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 *
 * @dest: dump pointer
 * @src: the source pointer
 * @n: number of bytes
 *
 * Return: pointer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
