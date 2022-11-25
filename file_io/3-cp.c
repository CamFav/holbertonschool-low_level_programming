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
	int file_descriptor, copy_file;
	char buffer[1024];

	if (ac != 3)
		exit();

	file_descriptor = 0;

	file_descriptor = open(av[1], O_RDONLY);

	if (file_descriptor == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	copy_file = 0;

	copy_file = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	size = 1;

	while (size > 0)
	{
		size = read(file_descriptor, buffer, 1024);
		if (size == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		fprint = write(copy_file, buffer, size);
		fprint = 0;

		if (fprint == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (close(file_descriptor) == -1)
	{
		exit(100);
	}
	if (close(copy_file) == -1)
	{
		exit(100);
	}
	return (0);
}
