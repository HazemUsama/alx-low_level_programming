#include "main.h"
#include <unistd.h>

/**
* printc - function
*
* @c: character to compare.
* @i: tells me if it's the start of a newline
* Return: void
*
*/

void printc(int c, int i)
{
	char ch1, ch2, ch3;

	ch1 = c % 10 + '0';
	c /= 10;
	ch2 = c % 10 + '0';
	c /= 10;
	ch3 = c % 10 + '0';
	if (i)
	{
		_putchar(',');
		if (ch3 == '0')
			_putchar(' ');
		if (ch2 == '0' && ch3 == '0')
			_putchar(' ');
		_putchar(' ');
		if (ch3 != '0')
			_putchar(ch3);
		if (ch2 != '0' || ch3 != '0')
			_putchar(ch2);

	}
	_putchar(ch1);
}

/**
 * print_times_table - main function
 *
 * @n: print the times table for this number
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printc(i * j, j);
		}
		_putchar('\n');
	}
}
