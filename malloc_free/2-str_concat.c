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
	char *s3;
	int i = 0;
	int a = 0;
	int x = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[a])
		a++;

	s3 = malloc(sizeof(char) * (i + a) + 1);

	if (s3 == NULL)
		return (NULL);

	for (; x <= (i + a); i++)
{
	if (x < i)
		s3[x] = s1[x];
	else
		s3[x] = s2[x - (i)];
}
return (s3);
}
