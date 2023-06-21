#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - function to get math opperator
 * @s: var to store pointer to func
 * @a: first integer
 * @b: second intrger
 * Return: NULL
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int k;

	k = 0;
	while (ops[k].op != NULL)
	{
		if (*s == *ops[k].op)
			return (ops[k].f);
		k++;
	}
	return (NULL);
}
