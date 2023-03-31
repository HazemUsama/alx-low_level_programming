#include "main.h"

/**
 * _strncat - appends two strings
 *
 * @dest: the first string
 * @src: the second string
 * @n: number of chars
 *
 * Return: pointer to the final string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';
	return (dest);
}
