#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with a constant byte
 *
 * @s: pointer
 * @b: the constant byte
 * @n: number of bytes
 *
 * Return: pointer @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	memset(s, s + n, b);
	return (s);
}
