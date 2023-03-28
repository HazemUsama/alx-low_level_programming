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
	const int len = strlen(s);
	int i;
	char *rev = s;

	for (i = 0; i < len; i++)
	{
		rev[len - 1 - i] = s[i];
	}
	puts(rev);

}
