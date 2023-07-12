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
	FILE *file;
	size_t lettersRead, totalLetters = 0;
	char *buffer = malloc(letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	file = open(filename, "r");
	if (file == -1)
		return (0);
	
	lettersRead = read(file, buffer, letters);
	write(stdout, buffer, lettersRead);
	close(file);
	free(buffer);
	return (lettersRead);
}
