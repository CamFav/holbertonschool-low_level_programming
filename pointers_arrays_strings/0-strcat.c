#include "main.h"
/**
 * _strcat - function that concatenates two strings 
 * @dest: string to src
 * @src: string to dest
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = b = 0;
	while (dest[a])
		a++;
	while ((dest[a] = src[b]))
{
	a++;
	b++;
}
	return (dest);
}
