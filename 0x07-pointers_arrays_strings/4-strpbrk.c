#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: the string to search into
 * @accept: the chars we need to match
 *
 * Return: number of bytes in the initial segment
 * of @s which consist only of bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
