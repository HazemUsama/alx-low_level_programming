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
	size_t readLetters, printed;
	char *buffer = malloc(letters);

	if (filename == NULL || buffer == NULL)
	{
		free(buffer);
		return (0);
	}
	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	readLetters = fread(buffer, sizeof(char), letters, file);
	printed = fwrite(buffer, sizeof(char), readLetters, stdout);

	fclose(file);
	free(buffer);

	return (printed);
}
