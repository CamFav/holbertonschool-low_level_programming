#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: string
 * @c: character
 *
 * Return: Pointer to first instance of c in s
 */
char *_strchr(char *s, char c)
{
	if (*s != c)
		s++;
	else
		return (s);
}
	if (c == '\0')
		return (s);
	else
		return ('\0');
}

