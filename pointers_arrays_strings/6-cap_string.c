#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string
 *
 * Return: string adress
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != 0)
{
	if (s[i] >= 'a' && s[i] <= 'z')
{
	if (i == 0)
		s[i] -= 32;
	else if (s[i - 1] == ' ','\t','\n',',',';','.','!','?','"','(',')','{','}', 32)
		s[i] -= 32;
}
	i++;
}
return (s);
}
