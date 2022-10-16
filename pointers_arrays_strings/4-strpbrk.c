#include "main.h"
/**
 * _strpbrk - function that finds the first character
 * in the s1 matching with character in s2
 * @s: scanned string
 * @accept: bytes to search
 *
 * Return: first matching character
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

while (*s)
{
	for (i = 0; accept[i]; i++)
{
	if (*s == accept[i])
{
	return (s);
}
}
s++;
}
return ('\0');
}
