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
	char ch = n % 10 + '0';
	_putchar(ch);
	return (n % 10);
}
