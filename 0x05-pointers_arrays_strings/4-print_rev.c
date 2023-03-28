#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - print a string in reverse
 *
 * @s: the string
 *
 */
void  print_rev(char *s)
{
	int len, i;
	char rev[len + 1];

	len = strlen(s);
	for (i = 0; i < len; i++)
	{
		rev[len - 1 - i] = s[i];
	}
	rev[len] = '\0';
	puts(rev);

}
