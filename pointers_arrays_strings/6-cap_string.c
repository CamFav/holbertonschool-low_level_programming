#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @s: string
 *
 * Return: string adress
 */
char *cap_string(char *s)
{
	int i, j;
	char *a = ",.;{}()\"?!\n\t ";

for (i = 0; s[i] != '\0'; i++)
{
	for (j = 0; a[j] != '\0'; j++)
		if (s[i - 1] == a[j])
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;
}
return (s);
}
