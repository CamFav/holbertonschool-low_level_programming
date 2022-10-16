#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s:
 *
 * Return: 
 */
void rev_string(char *s)
{
	int a = 0, b = 0;
	char str[500];
	
	while (s[a])
{
	str[a] = s[a];
	a++;
}
	a = a - 1;
	while (a >= 0)
{
	s[a] = str[b];
	a++;
	b--;
}
}
