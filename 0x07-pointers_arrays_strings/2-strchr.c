#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strchr - locates a character in a string.
 *
 * @s: the string we will search
 * @c: the char we are searching for
 *
 * Return: pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
