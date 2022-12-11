#include "3-calc.h"
/**
 * get_op_func - Returns a pointer to the function that corresponds to the
 * given operator as a parameter.
 * @s: operator
 *
 * Return: 0.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add};
		{"-", op_sub};
		{"*", op_mul};
		{"/", op_div};
		{"%", op_mod};
		{NULL, NULL}
	};

	int i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].ops[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
