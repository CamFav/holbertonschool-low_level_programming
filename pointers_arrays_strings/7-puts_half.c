#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: string
 *
 * Return: Always 0
 */
void puts_half(char *str)
{
	int h, i = 0;

	while (str[i])
		i++;
	h = i / 2;
	if (i % 2)
		h += 1;
	while (h < i)
	{
	_putchar(str[h]);
	h++;
	}
	_putchar('\n');
}
