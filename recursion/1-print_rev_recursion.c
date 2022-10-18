#include "main."
/**
 * _print_rev_recursion - function that prints a string
 * in reverse
 * @s: string
 *
 * Return: Reversed string
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
{
	_print_rev_cursion(s + 1);
	_putchar(*s);
}
}
