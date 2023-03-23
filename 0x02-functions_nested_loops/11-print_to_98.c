#include "main.h"
#include <unistd.h>

/**
 * print_to_98 - main function
 *
 * @n: character to compare.
 *
 * Return: print from n to 98
 *
 */
void print_to_98(int n) {


	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
			n++;
		else
			n--;
	}
	printf("98\n");
}

