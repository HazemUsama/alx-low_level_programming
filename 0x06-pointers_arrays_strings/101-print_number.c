#include "main.h"
/**
 * print_number - print a number.
 *
 * @n: the number to print
 */
void print_number(int n)
{
	int rev, cnt;
	char i;

	cnt = 0;
	rev = 0;
	if (!n)
		_putchar('0');
	if (n == -2147483648)
	{
		n = 147483648;
		_putchar('-');
		_putchar('2');
	}
	if (n >= 1000000000)
	{
		_putchar('0' + n / 1000000000);
		n -= (n / 1000000000) * 1000000000;
	}
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (n)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
		cnt++;
	}
	while (cnt--)
	{
		i = rev % 10 + '0';
		_putchar(i);
		rev /= 10;
	}
}

