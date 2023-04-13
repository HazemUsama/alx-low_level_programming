#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: argument count
 * @argv: arguments
 * Return: 0 (Success)
 */
int main(int argc, char __attribute__((unused)) **argv)
{
	printf("%i\n", argc - 1);
	return (0);
}
