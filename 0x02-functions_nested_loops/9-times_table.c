#include "main.h"
#include <unistd.h>

/**
* printc - function
*
* @c: character to compare.
*
* Return: void
*
*/
void printc(int c)
{
        char ch1, ch2;

        ch2 = c % 10 + '0';
        c /= 10;
        ch1 = c % 10 + '0';
	_putchar(',');
	if (ch1 != '0')
	{
		_putchar(' ');
	}
	_putchar(' ');
	if (ch1 != '0')
		_putchar(ch1);
        _putchar(ch2);
}

/**
 * times_table - main function
 */
void times_table(void)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			printc(i * j);
		}
		_putchar('\n');
	}
}
