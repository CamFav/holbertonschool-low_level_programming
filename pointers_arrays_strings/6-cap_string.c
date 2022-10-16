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
	char a[] = "\ \t\n,;.!?\"(){}";

if (s[i] >= 97 && s[i] <= 122)
{
	s[i] -= 32;
}
for (i = 1; s[i] != '\0'; i++)
{
	if (s[i] == *a)
{
	if (s[i - 1] == 32)
{
	if (s[i] >= 97 && s[i] <= 122)
{
	s[i] -= 32;
}
}
}
}
return (s);
}
