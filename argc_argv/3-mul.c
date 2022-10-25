#include <stdio.h>
/**
 * main - program that multiplies two numbers
 * @argc: argc
 * @argv: argv
 *
 * Return: multiplied numbers
 */
int main(int argc, char *argv[])
{

	if (argc != 3)
{
	printf("Error\n");
	return (1);
}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
