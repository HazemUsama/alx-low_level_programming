	#include "main.h"
#include <unistd.h>

/**
 * print_last_digit - main function
 *
 * @n: character to compare.
 *
 * Return: the last digit of the number
 *
 */
int print_last_digit(int n)
{
	int last_digit;
	char ch;

	last_digit = n % 10;
	if (last_digit < 0)
		last_digit *= -1;
	ch = last_digit + '0';
	_putchar(ch);
	return (last_digit);
}
