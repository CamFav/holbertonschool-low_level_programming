#include <stdio.h>
/**
 * args - program that prints all arguments it receives.
 * @argc: argc
 * @argv: argv
 *
 * Return: received arguments
 */
int main (int argc, char *argv[])
{
	int i = 0;

for (; i < argc; i++)
	printf("%s\n", argv[i]);
return (0);
}
