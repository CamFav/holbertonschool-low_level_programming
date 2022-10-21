#include <stdio.h>
/**
 * main - function that prints the number of arguments
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: number of arguments
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
