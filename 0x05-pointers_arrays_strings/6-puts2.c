#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - reverse a string
 *
 * @s: the string
 *
 */
void  puts2(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i += 2)
	{
		putchar(s[i]);
	}
	putchar('\n');

}
