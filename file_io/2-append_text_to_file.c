#include "main.h"
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file pointer
 * @text_content: NULL terminated string to add at the end
 *
 * Return: 1 or -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, i;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, OWRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
		return (1);

	for (i = 0; text_content[i] != '\0'; i++)
		;
	write(file_descriptor, text_content, i);
	close(file_descriptor);
	return (1);
}
