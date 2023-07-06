#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: the number to pirnt
 */
void print_binary(unsigned long int n)
{
	int start = 0, i = 32;

	if (!n)
		_putchar('0');
	while (i--)
	{
		if (n >> i & 1)
			start = 1;
		if (start)
			_putchar('0' + (n >> i & 1));
	}
}

