#include "main.h"
/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 *
 * Return: straight line
 */
void print_line(int n)
{
	int i = 0;

	for (; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
