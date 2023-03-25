#include <stdio.h>
/**
 * max - Returns the bigger of two numbers
 *
 * @num1: The first number to compare
 * @num2: The second number to compare
 *
 * Return: The biggest number
 */
long int max(long int num1, long int num2)
{
	if (num1 > num2)
		return (num1);
	return (num2);
}
/**
 * main - main fuction.
 *
 * Return: always 0.
 */
int main(void)
{
	long int i, maxi, num;

	maxi = 0;
	num = 612852475143;

	for (i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			maxi = max(i, maxi);
		while (num % i == 0)
			num /= i;
	}
	maxi = max(maxi, num);
	printf("%ld\n", maxi);
	return (0);
}

