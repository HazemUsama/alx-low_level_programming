#include "main.h"

/**
 * leet - encodes a string
 *
 * @s: the string
 *
 * Return: the string after conversion
 */
char *leet(char *s)
{
	int i, j;
	char *f = "aAeEoOtTlL";
	char *t = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (f[j] == s[i])
				s[i] = t[j];
		}
	}
	return (s);
}
