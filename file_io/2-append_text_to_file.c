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
	int file_descriptor, new_string;

	if (!filename)
		return (-1);
}
