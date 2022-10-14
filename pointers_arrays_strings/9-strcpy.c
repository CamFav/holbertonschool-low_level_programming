#include "main.h"
/**
 * _strcpy - function that copies pointed string by src to pointed dest
 * @src: source
 * @dest: destination
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != NULL)
{
	dest[i] = src[i];
	i++;
}
	return (dest);
}
