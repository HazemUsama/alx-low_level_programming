#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
		printf("Error\n");
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
