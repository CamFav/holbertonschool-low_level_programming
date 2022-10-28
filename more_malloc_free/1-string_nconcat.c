#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings
 * @s2: string
 * @n: char bytes
 *
 * Return: Concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *c
	unsigned int i, x, z;

	if (s1 == NULL)
		i = 0;
	else
{
	for (i = 0; s1[i]; i++)
		;
}
if (s2 == NULL)
	x = 0;
else
{
	for (x = 0; s2[x]; x++)
		;
}
if (x > n)
	x = n;
c = malloc(sizeof(char) * (i + x + 1));
if (c == NULL)
	return (NULL)
for (z = 0; z < i; z++)
	s[z] = s1[z];
for (z = 0; z < x; z++)
	s[z + i] = s2[z];
s[i + x] = '\0';
return (s);
}
