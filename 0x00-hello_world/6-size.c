#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n"
	       "Size of an int: %zu byte(s)\n"
	       "Size of a long int: %zu byte(s)\n"
	       "Size of a long long int: %zu byte(s)\n"
	       "Size of a float: %zu byte(s)\n",
	       sizeof(char),
	       sizeof(int),
	       sizeof(long int),
	       sizeof(long long int),
	       sizeof(float));
	return (0);
}

