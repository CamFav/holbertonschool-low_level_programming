#include "main.h"
/**
 * main - copies the content of a file to another file.
 * @ac: number of arg
 * @av: the arg
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	int file_descriptor, copy_file, fread, fprint;
	char buffer[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);

	file_descriptor = open(av[1], O_RDONLY);

	if (file_descriptor == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);

	copy_file = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (copy_file == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);

	fread = 1;

	while (fread)
	{
		fread = read(file_descriptor, buffer, 1024);
		if (fread == -1)
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		if (fread > 0)
		{
			fprint = write(copy_file, buffer, fread);
			if (fprint != fread || fprint == -1)
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
				exit(99);
		}
	}
	if (close (file_descriptor) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	if (close(copy_file) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", copy_file);
		exit(100);
	return (0);
}
		


