#include "main.h"

/**
 * main - program that copies the content of a file to another file
 *
 * @ac: argument count
 *
 * @av: arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int file_from, file_to, readLetters, printedLetters;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1],  O_RDONLY);
	file_to = open(av[2],  O_CREAT | O_TRUNC | O_WRONLY, 0664);

	if (file_from == -1)
	{
readError:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	while ((readLetters = read(file_from, buffer, 1024)))
	{
		if (readLetters == -1)
			goto readError;
		printedLetters = write(file_to, buffer, readLetters);
		if (printedLetters == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (close(file_from) == -1 || close(file_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
		exit(100);
	}
	return (0);
}
