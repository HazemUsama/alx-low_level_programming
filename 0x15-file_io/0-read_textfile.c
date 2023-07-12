#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 *
 * @filename: ...
 *
 * @letters: ...
 *
 * Return: printed letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, readLetters, printed;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}
	readLetters = read(file, buffer, letters);
	printed = write(STDOUT_FILENO, buffer, readLetters);

	close(file);
	free(buffer);

	return (printed);
}
