#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: ...
 *
 * @text_content: ...
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, chars = 0;

	if (filename == NULL)
		return (-1);
	file = open(filename, O_APPEND| O_RDWR);
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
