#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	while (1)
	{
		printf("Enter a number: ");
		scanf("%d", &n);
		print_number(n);
		_putchar('\n');
	}

    return (0);
}
