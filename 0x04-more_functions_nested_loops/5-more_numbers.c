#include "main.h"

/**
 * more_numbers - print the given digit.
 */
void more_numbers(void)
{
	char ch;
	int i, cnt;

	for (i = 0; i < 10; i++)
	{
		cnt = 0;
		ch = '0';
		while (1)
		{
			if (cnt > 9)
				_putchar('1');
			_putchar(ch);

			cnt++;
			ch++;

			if (cnt == 10)
				ch = '0';
			if (cnt > 14)
				break;
		}
		_putchar('\n');
	}
}

