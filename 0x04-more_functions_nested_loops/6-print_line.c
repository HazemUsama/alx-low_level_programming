#include "main.h"

/**
 * print_line - print @n lines.
 *
 * @n: the number of line to print
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}

