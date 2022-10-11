#include "main.h"
/**
 * jack_bauer - description
 * @h: Hour
 * @m: Minute
 *
 * Return: Nothing
 */
	void jack_bauer(void)
{
	int h = 0;
for(;h < 24; h++)
{
for(m = 0; m < 60; m++)
{
	_putchar((h / 10) + '0');
	_putchar((h % 10) + '0');
	_putchar(':');
	_putchar((m / 10) + '0');
	_putchar((m % 10) + '0');
	_putchar('\n');
}
	}
		}

