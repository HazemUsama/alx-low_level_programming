
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */
int  main(void)
{
	long int i, x, y, z, sum;

	x = 0;
	y = 1;
	z = x + y;
	sum = 0;
	for (i = 0; z <= 4000000; i++)
	{
		if (z % 2 == 0)
			sum += z;
		x = y;
		y = z;
		z = x + y;
	}
	printf("%ld\n", sum);
	return (0);
}
