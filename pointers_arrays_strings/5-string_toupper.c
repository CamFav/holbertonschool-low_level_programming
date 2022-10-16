#include "main.h"
/**
 * string_toupper - function that lowercases to uppercase letters
 * @s: string
 *
 * Return: String with uppercase letters
 */
char *string_toupper(char *s)
{
	int i = 0;

while (s[i] != 0)
{
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 32;
	i++;
}
return (s);
}

