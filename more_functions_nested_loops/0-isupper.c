#include "main.h"
/**
 * _isupper - function that checks for uppercase character.
 * @c: char
 *
 * Return: 1 if uppercase, otherwise 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
