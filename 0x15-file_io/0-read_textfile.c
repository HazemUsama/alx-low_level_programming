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
	char buffer[1024];
	FILE *file;
	size_t lettersRead, totalLetters = 0;

	if (filename == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	while (totalLetters < letters &&
	(lettersRead = fread(buffer, sizeof(char), letters, file)))
	{
		if (fwrite(buffer, sizeof(char), lettersRead, stdout) != lettersRead)
			return (0);
		totalLetters += lettersRead;
	}
	return (totalLetters);
}
