#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Description: Print all possible different combinations of three digits
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = '0'; dig1 <= '9'; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= '9'; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 <= '9'; dig3++)
			{

				putchar(dig1);
				putchar(dig2);
				putchar(dig3);
				if (dig1 != '7' || dig2 != '8' || dig3 != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
