#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, l, wc = 0, len = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			++wc;
	}
	if (wc == 0)
		return (NULL);
	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; j < wc; ++i)
	{
		if (str[i] != ' ')
		{
			for (len = 0, k = i; str[k] != '\0' && str[k] != ' '; ++k)
				++len;
			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; ++k)
					free(words[k]);
				free(words);
				return (NULL);
			}
			for (l = 0; l < len; ++l, ++i)
				words[j][l] = str[i];
			words[j][l] = '\0';
			j++;
		}
	}
	words[j] = NULL;
	return (words);
}
