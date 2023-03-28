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
	char tmp;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1  i];
		s[len - 1 - i] = tmp;
	}
	puts(s);

}
