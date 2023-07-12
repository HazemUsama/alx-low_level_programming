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
	size_t printed;
	char *buffer = malloc(letters);
	
	if (filename == NULL || buffer == NULL)
		return (0);

	file = fopen(filename, "r");
	if (file == NULL)
		return (0);

	fread(buffer, sizeof(char), letters, file); 
	printed = fwrite(buffer, sizeof(char), letters, stdout);
	
	fclose(file);
	free(buffer);

	return (printed);
}
