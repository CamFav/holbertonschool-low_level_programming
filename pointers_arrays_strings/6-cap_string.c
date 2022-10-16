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
	int j = 0;
	char a[] = "\32\t\n,;.!?\"(){}";

while (s[i] != 0)
{
if (s[i] >= 97 && s[i] <= 122)
{
	if (i == 0)
		s[i] -= 32;
	else if ((s[i - 1] = a[j]))
		s[i] -= 32;
}
i++;
}
return (s);
}
