#include "main.h"
/**
 * _strnspn - function that gets length of
 * a prefix substring
 * @s: string
 * @accept: bytes of s to check
 *
 * Return: number of bytes in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
while (*s++ && *accept++)
	;

return (i);
}
