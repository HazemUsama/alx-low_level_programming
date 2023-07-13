#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: ...
 *
 * @text_content: ...
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, chars = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_CREAT | O_TRUNC | O_RDWR, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);
	while (text_content && text_content[chars] != '\0')
		chars++;

	chars = write(file, text_content, chars);
	close(file);
	if (chars == -1)
		return (-1);
	return (1);
}
