#include "main.h"

/**
 * _strncpy - appends two strings
 *
 * @dest: the first string
 * @src: the second string
 * @n: number of chars
 *
 * Return: pointer to the final string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
