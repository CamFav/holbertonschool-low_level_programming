#include "main.h"
/**
 * _puts - function that prints a string to stdout
 * @str: String
 *
 * Return: Alwayss 0
 */
void _puts(char *str)
{
	int i;

	while (*(str + i) != '\0')
{
	_putchar(*(str + i));
	i++;
}
	_putchar('\n');
	}
