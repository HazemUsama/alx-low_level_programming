#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Description: Print all possible different combinations of two digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2;

	for (dig1 = '0'; dig1 <= '9'; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= '9'; dig2++)
		{
			putchar(dig1);
			putchar(dig2);
			if (dig1 != '8' || dig2 != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
