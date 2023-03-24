#include "main.h"

/**
 * more_numbers - print the given digit.
 */ 	 
void more_numbers(void)
{
	char ch;
	int cnt;

	for (ch = '0'; ch <= '9'; ch++)
		_putchar(ch);
	for (ch = '0'; ch <= '4'; ch++)
	{
		_putchar('1');
		_putchar(ch);
	}
	_putchar('\n');
}

