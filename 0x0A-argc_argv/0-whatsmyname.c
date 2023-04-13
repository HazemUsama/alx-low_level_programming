#include <stdio.h>
/**
 * main - Prints the name of the program
 * @argc: argument count
 * @argv: arguments
 * Return: 0 (Success)
 */
int main(int __attribute__((unused)) argc, char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
