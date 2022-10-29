#include "main.h"
/**
 * print_square - function that prints a square, followed by a new line
 * @size: size of the square
 *
 * Return: Square/n
 */
void print_square(int size)
{
	int i, x;

	for (i = 0; i < size; i++)
{
	for (x = 0; x < size; x++)
		_putchar('#');
	if (i != size - 1)
		_putchar('\n');
}
_putchar('\n');
}
