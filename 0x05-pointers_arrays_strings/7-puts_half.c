#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - reverse a string
 *
 * @s: the string
 *
 */
void  puts_half(char *s)
{
	int len = strlen(s);
	int i;

	for (i = (len + 1) / 2; i < len; i++)
	{
		putchar(s[i]);
	}
	putchar('\n');

}
