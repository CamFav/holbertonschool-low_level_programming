#include "main.h"
/**
 * puts2 - function that prints one character on two,
 * starting with the first character.
 * @str: string
 *
 * Return: Always 0
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
{
	if (i % 2 == 0)
		_putchar(str[i]);
	i++;
}
	_putchar('\n');
}
