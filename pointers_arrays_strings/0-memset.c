#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: memory space
 * @n: number, size of spaces to fill
 * @b: byte to fill
 *
 * Return: Pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

while (i < n)
{
	s[i] = b;
	i++;
}
return (s);
}
