#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: arguments count
 * @av: arguments
 *
 * Return: a pointer to a new string or null if it fails
 **/
char *argstostr(int ac, char **av)
{
	int i, j, size = 1 + ac, cnt = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
		size += strlen(av[i]);

	str = malloc(size);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < (int) strlen(av[i]); j++)
			str[cnt++] = av[i][j];
		str[cnt++] = '\n';
	}
	str[cnt] = '\0';
	return (str);
}
