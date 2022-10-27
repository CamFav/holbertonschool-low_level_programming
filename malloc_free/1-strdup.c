#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter.
 * @str: string
 *
 * Return: Pointer to new string
 */
char *_strdup(char *str)
{
	char *nstr;
	int i = 0;

	if (str == NULL)
		return ('\0');

	while (str[i] != '\0')
		i++;

	nstr = malloc(i * sizeof(char));

	if (nstr == NULL)
{
	return ('\0');
}
	for (; i >= 0; i--)
		nstr[i] = str[i];

	return (nstr);
}
