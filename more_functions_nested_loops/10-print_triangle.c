#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
 *
 * Return: Triangle
 */
void print_triangle(int size)
{
	int i, x;

	for (i = 1; i <= size; i++)
{
	for (x = 0; x < size - i; x++)
		_putchar (' ');
	for (x = 0; x < i + (size - i); x++)
		_putchar('#');
	if (i != size)
		_putchar('\n');
}
_putchar('\n');
}
