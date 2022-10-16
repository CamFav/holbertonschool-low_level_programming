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
	i = 0;
while (accept[i] != '\0')
{
	if (accept[i] == *s)
return (s);
	i++;
}
	s++;
}
return (0);
}
