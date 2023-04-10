#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the string to search into
 * @accept: the chars we need to match
 *
 * Return: number of bytes in the initial segment
 * of @s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
