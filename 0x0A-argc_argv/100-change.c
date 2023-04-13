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
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		argv++;
		if (**argv == '-')
			printf("0\n");
		else
		{
			int ans = 0, coin;

			coin = atoi(*argv);
			ans += coin / 25;
			coin %= 25;
			ans += coin / 10;
			coin %= 10;
			ans += coin / 2;
			coin %= 2;
			ans += coin;
			printf("%d\n", ans);
		}

	}
	return (0);
}
