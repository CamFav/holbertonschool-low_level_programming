#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int val;

	if (!b)
		return (0);

	for (val = 0; *b; b++)
	{
		if (*b == '1')
			val = (val << 1) | 1;
		else if (*b == '0')
			val <<= 1;
		else
			break;
	}
	return (val);
}
