#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */

/**
 * main - Entry point
 * Description: Print the number and whether it's positive or negative
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	printf("%d is ", n);
	if (n < 0)
	{
		printf("negative");
	}
	else if (n > 0)
	{
		printf("positive");
	}
	else
		printf("zero");
	printf("\n");
	return (0);
}
