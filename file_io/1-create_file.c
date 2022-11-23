#include "main.h"
/**
 * create_file - function that creates a file.
 * @filename: pointer to file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 or -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, index, fprint;

	if (!filename)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC);

	if (file_descriptor == -1)
		return (-1);

	if (!text_content)
	{
		close(file_descriptor);
		return (1);
	}
}


