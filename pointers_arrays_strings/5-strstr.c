#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of substring in string
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
for (i = 0; haystack[i]; i++)
{
	for (j = 0; needle[j]; i++)
	if (haystack[i + j] != needle[j])
		break;
	if (needle[j] == '\0')
return (haystack + i);
}
return ('\0');
}
