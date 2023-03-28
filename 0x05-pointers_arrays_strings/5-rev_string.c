#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - reverse a string
 *
 * @s: the string
 *
 */
void  rev_string(char *s)
{
	int len = strlen(s) / 2;
	int i;
	char tmp;

	for (i = 0; i < len; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] s[i];
	}

}
