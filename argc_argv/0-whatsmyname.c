#include <stdio.h>

/**
 * main - function that prints the name of the program
 * @argc: arguments number
 * @argv: arguments vector
 *
 * Return: name of the program
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);
}
