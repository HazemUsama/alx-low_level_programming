#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse a string
 *
 * @s: the string
 *
 */
void  rev_string(char *s)
{
	int len = strlen(s);
	int i;
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}

}
