#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_array - print n numbers from a
 *
 * @a: the array of numbers
 * @n: the count of numbers to print
 *
 */
void  print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	putchar('\n');

}
