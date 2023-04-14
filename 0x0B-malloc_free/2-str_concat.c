#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string
 **/
char *str_concat(char *s1, char *s2)
{
	int len1, len2, i;
	char *ptr;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);
	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	ptr = malloc(len1 + len2 + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < len2; i++)
		ptr[len1 + i] = s2[i];

	ptr[len1 + len2] = '\0';
	return (ptr);
}
