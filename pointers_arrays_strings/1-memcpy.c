#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: destination
 * @src: memory area to copy
 * @n: Size to copy from memory area
 *
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
while (i < n)
{
	dest[i] = src[i];
	i++;
}
return (dest);
}
