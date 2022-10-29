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

	if (size <= 0)
{
	_putchar('\n');
	return;
}
	for (i = 0; i < size; i++)
{
	for (x = 0; x < size; x++)
{
		if (x >= size - i - 1)
	{
		_putchar('#');
	}
		else
	{
		_putchar(' ');
	}
}
_putchar('\n');
}
}
