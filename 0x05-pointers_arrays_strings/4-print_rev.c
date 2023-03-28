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
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		putchar(s[len - 1 - i]);
	}
	putchar('\n');

}
