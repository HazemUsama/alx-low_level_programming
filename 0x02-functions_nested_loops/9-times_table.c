#include "main.h"
#include <unistd.h>

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
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
