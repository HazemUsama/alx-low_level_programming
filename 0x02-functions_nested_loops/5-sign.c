#include "main.h"
#include <unistd.h>

/**
 * print_sign - main function
 *
 * @n: character to compare.
 *
 * Return: 1 if positive, -1 if negative and 0 if 0
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}