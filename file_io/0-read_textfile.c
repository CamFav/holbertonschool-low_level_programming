#include "main.h"
/**
 * read_textfile - function that reads a text file and prints it to
 * the POSIX standard output.
 * @filename: file pointer
 * @letters: number of letters
 *
 * Return: Number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor, fread, fprint;
	char buffer[BUFSIZ];

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	fread = read(file_descriptor, buffer, letters);

	if (fread == -1)
		return (0);

	while (letters != BUFSIZ)
	{
		fprint = write(STDOUT_FILENO, buffer, fread);
	
	close(file_descriptor);
	return (fprint);
	}
return (0);
}
