#include "main.h"
#include <unistd.h>

/**
* printc - function
*
* @n: character to compare.
*
* Return: void
*
*/
void printc(int c)
{
	char ch1, ch2;

	ch1 = c % 100 + '0';
	ch2 = c % 10 + '0';
	_putchar(ch1);
	_putchar(ch2);
}

/**
 * jack_bauer - main function
 *
 *
 * Return: void
 *
 */
void jack_bauer(void)
{
	int h, m;
	for (h = 0; h <= 24; h++)
	{
		for (m = 0; m <= 59; m++)
		{
			printc(h);
			_putchar('-');
			printc(m);
			_putchar('\n');
		}
	}

}
