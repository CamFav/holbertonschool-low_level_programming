#include "main.h"
/**
 * _puts - function that prints a string to stdout
 * @str: String
 *
 * Return: Alwayss 0
 */
void _puts(char *str)
{
	int i = 0;

	while (*(str + i))
{
	_putchar(*(str + i));
	i++;
}
	_putchar('\n');
	}
