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
	if (!filename)
		return (NULL);

	else
	{
		int *count = malloc(sizeof(letters));
		while (count != letters)
			count++;

