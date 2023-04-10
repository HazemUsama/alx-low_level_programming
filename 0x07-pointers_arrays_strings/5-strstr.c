#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - searches a string for any of a set of bytes
 *
 * @s: the string to search into
 * @accept: the chars we need to match
 *
 * Return: number of bytes in the initial segment
 * of @s which consist only of bytes from accept
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
