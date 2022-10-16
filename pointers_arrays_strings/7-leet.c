#include "main.h"
/**
 *
 *
 *
 *
 *
 */
char *leet(char *s)
{
	int i, j;
	i = j = 0

	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
while (s[i] != 0)
{
	while (a[j] != '\0')
{
	if (s[i] == a[j])
		s[i] = b[j];
	j++;
}
i++;
}
return (s);
}







}

