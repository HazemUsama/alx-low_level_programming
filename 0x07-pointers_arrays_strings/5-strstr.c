#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strstr - searches a string for any of a set of bytes
 *
 * @haystack: the string to be searched
 * @needle: the substring we are searching for
 *
 * Return: a pointer for the first occurrence of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
