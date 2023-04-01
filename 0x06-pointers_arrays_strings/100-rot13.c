#include "main.h"

/**
 * rot13 - encodes a string
 *
 * @s: the string
 *
 * Return: the string after conversion
 */
char *rot13(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = (s[i] - 'a' + 13) % 26 + 'a';
		}
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = (s[i] - 'A' + 13) % 26 + 'A';
		}
	}
	return (s);
}

