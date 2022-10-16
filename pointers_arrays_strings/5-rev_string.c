#include "main.h"
/**
 * rev_string - function that reverses a string
 * @s:
 *
 * Return: 
 */
void rev_string(char *s)
{
	int i = 0; int r = i - 1;
	char str[1000];
	
	while (s[i] != 0)
{
	str[i] = s[i];
	i++;
}
	while (r >= 0)
{
	s[i] = str[i];
	r--;
	i++;
}
}
