#include "main.h"
/**
 * jack_bauer - description
 *
 * Return: Nothing
 */
	void jack_bauer(void)
{
	int h, m, a, b, c, d;

for (h = 0; h < 24; h++)
{
	a = h / 10;
	b = h % 10;
for (m = 0; m < 60; m++)
{
	c = m / 10;
	d = m % 10;

	_putchar(a + '0');
	_putchar(b + '0');
	_putchar(':');
	_putchar(c + '0');
	_putchar(d + '0');
	_putchar('\n');
}
	}
		}

