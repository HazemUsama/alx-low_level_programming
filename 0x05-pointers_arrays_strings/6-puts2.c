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
	char tmp;

	for (i = 0; i < len; i += 2)
	{
		puts(s[i]);
	}
	puts('\n');

}
