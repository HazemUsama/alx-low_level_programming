#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: arguments
 * Return: 0 (Success)
 */
int main(int argc, char **argv)
{
	int ans = 0;

	while (--argc && ++argv)
	{
		ans += atoi(*argv);
		while (**argv != '\0')
		{
			if (!isdigit(**argv))
			{
				printf("Error\n");
				return (1);
			}
			(*argv)++;
		}
	}
	printf("%i\n", ans);
	return (0);
}
