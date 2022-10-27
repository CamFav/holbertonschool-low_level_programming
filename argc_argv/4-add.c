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
int main(int argc, char *argv[])
{
	int i = 1;
	int a = 0;

	for (; i < argc; i++)
{
	int b = 0;

	for (; argv[i][b] != '\0'; b++)
{
	if (!isdigit(argv[i][b]))
{
	printf("Error\n");
	return (0);
}
}
	a += atoi(argv[i]);
}
printf("%d\n", a);
return (0);
}
