#include "main.h"

/**
 * string_toupper - convert to upper case
 *
 * @s: the string
 *
 * Return: the string after conversion
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] += 'A' - 'a';
		i++;
	}
	return (s);
}
