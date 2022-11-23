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
	int file_descriptor;
	char str[BUFSIZ];

	file_descriptor = open(filename, O_RDONLY);

	if (!filename)
		return (0);

	if (file_descriptor == -1)
		return (0);

	read(file_descriptor, str, letters);
	str[BUFSIZ] = '\0';

	while (letters > BUFSIZ)
	{
		write(STDOUT_FILENO, &str, 1);
	
	close(file_descriptor);
	return (strlen(str));
	}
}
