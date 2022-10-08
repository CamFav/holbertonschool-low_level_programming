#include <stdio.h>
/**
 * main - description
 *
 * Return: Always 0
 */
	int main(void)
{
	char l = 'a';
	char n = '0';

	while (n <= '9')
{
	putchar(n);
	n++;
}

	while (l <= 'f')
{
	putchar(l);
	l++;
}
	putchar('\n');
	return (0);
}
