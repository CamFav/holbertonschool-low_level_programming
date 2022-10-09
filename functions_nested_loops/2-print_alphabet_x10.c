#include "main.h"
/**
 * print_alphabet_x10()
 *
 * Return: Always 0
 */
	void print_alphabet_x10(void)
{
	int x10, l;
	
	x10 = 0;
	while (x10 < 10)
{
	l = 'a';
	while (l <= 'z')
{
	_putchar(l);
	l++;
}
	_putchar('\n');
	x10++;
}

