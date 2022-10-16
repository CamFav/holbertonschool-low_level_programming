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
	unsigned int i, j;
for (i = 0; s[i]; i++)
{
	for (j = 0; accept[j]; j++)
{
	if (s[i] == accept[j])
{
	break;
}
}
	if (s[i] != accept[j])
{
	break;
}
}
return (i);
}
