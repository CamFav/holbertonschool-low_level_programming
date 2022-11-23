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
	int file_descriptor, fread, fprint, fcreate;
	char buffer[BUFSIZ];

	if (!filename)
		return (-1);

	if (!text_content)

