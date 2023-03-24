#include "main.h"

/**
 * print_most_numbers - print the given digit.
 */ 	 
void print_most_numbers(void)
{
	char ch;

	for (ch = '0'; ch <= '9'; ch++)
	{
		if (ch == '2' || ch == '4')
			continue;
		_putchar(ch);
	}
	_putchar('\n');
}

