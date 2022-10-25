#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - program that adds positive numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: added positive numbers
 */
int main (int argc, char *argv[])
{
	int i, a = 0;

for (i = 1; i < argc; i++)
{
	if (!atoi(argv[i]))
{
	printf("Error\n");
	return (1);
}
	a += atoi(argv[i]);
}
	printf("%d\n", a);
	return (0);
}
