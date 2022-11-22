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

	file_descriptor = open(filename, O_RDONLY);

	if (!filename)
		return (NULL);

	if (file_descriptor == -1)
		return (0);
		close (file_descriptor);
}





