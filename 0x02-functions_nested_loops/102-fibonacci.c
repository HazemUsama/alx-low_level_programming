
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: prints the sum of all the multiples of 3 or 5 below 1024
 * Return: Always 0 (Success)
 */
int  main(void)
{
	long int i, x, y, z;

	x = 0;
	y = 1;

	for (i = 0; i < 50; i++)
	{
		z = x + y;
		printf("%ld", z);
		if (i < 49)
			printf(", ");
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
