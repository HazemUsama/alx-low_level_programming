#include <stdio.h>
#include <stdint.h>

void print128(__int128 n);
/**
 * main - main function
 *
 * Return: nothing
 */

int main(void)
{
	int counter = 2;
	__int128 a, b, c;

	a = 0;
	b = 1;
	c = a + b;

	while (counter < 100)
	{
		counter++;
		print128(c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 100)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
/**
 * print128 - prints a 128-bit integer to the console
 *
 * @n: the 128-bit integer value to print
 *
 * Description:
 * This function takes a value of type __int128 and prints
 * it to the console as a decimal integer.
 * The function is designed to handle very large integers that
 * cannot be represented by standard C data types such as long long.
 */
void print128(__int128 n)
{
	__int128 rev = 0;
	int cnt = 0, i;

	while (n)
	{
		rev *= 10;
		rev += n % 10;
		n /= 10;
		cnt++;
	}

	while (cnt--)
	{
		i = rev % 10;
		printf("%d", i);
		rev /= 10;
	}
}
