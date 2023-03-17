#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Description: Print all possible combinations of two two-digit numbers.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int dig1, dig2, dig3, dig4;

	for (dig1 = '0'; dig1 <= '9'; dig1++)
	{
		for (dig2 = '0'; dig2 <= '9'; dig2++)
		{
			dig3 = dig1;
			dig4 = dig2 + 1;
			if (dig2 == '9')
			{
				dig3++;
				dig4 = '0';
			}
			for (; dig3 <= '9'; dig3++)
			{
				for (; dig4 <= '9'; dig4++)
				{
					putchar(dig1);
					putchar(dig2);
					putchar(' ');
					putchar(dig3);
					putchar(dig4);
					if (dig1 != '9' || dig2 != '8' || dig3 != '9' || dig4 != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				dig4 = '0';
			}
		}
	}
	putchar('\n');
	return (0);
}
