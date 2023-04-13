#include <stdio.h>
/**
 * main - prints all arguments
 * @argc: argument count
 * @argv: arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	return (0);
}
