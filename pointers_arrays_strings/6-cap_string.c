#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string
 *
 * Return: string adress
 */
char *cap_string(char *s)
{
	int i = 0; c;
	char a[] = " \t\n,;.!?\"(){}";

	while (s[i])
{
	if (s[i] >= 'a' && s[i] <= 'z')
{
	if (i == 0)
		s[i] -= 32;
	else
{
	for (c; c <= 12; c++)
{
	if (a[c] == s[i] - 1)
		s[i] -= 32;
}
}
}
	i++;
}
return (s);
}

