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
	int i = 1;
	int a = 0;
	int b = 0;

for (i; i < argc; i++)
{
	for (a = 0; argv[i][a] != '\0'; a++)
		if (isdigit(argv[i][a]) == 0)
{
	printf("Error\n");
	return (-1);
}
	b += atoi(argv[i];
}
	printf("%d\n", c);
	return (0);
}
