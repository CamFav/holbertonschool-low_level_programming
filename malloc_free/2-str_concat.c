#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new space memory
 */
char *str_concat(char *s1, char *s2)
{
	char *s3, *rep;
	int i, l1, l2, x;

	rep = "";
	if (s1 == NULL)
		s1 = rep;
	if (s2 == NULL)
		s2 = rep;
	i = l1 = l2 = 0;
	while (s1[l1] != '\0')
{
	l1++;
}
	while (s2[l2] != '\0')
{
	l2++;
}
	l2++;
	s3 = malloc((l1 + l2) * sizeof(*s1));

	if (s3 == NULL)
		return (NULL);
	i = 0;
	while (i < l1)
{
	s3[i] = s1[i];
	i++;
}
	x = 0;
	while (x <= l2)
{
	s3[i] = s2[x];
	i++;
	x++;
}
return (s3);
}
