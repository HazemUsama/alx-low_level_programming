#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @s: the string
 *
 * Return: the string after conversion
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if ((s[i] >= 'a' && s[i] <= 'z') 
		&& (i == 0 || s[i - 1] == ' '))
			s[i] += 'A' - 'a';
		i++;
	}
	return (s);
}
