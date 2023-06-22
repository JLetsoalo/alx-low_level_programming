#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - adding all parameters
 * @n: n parameters
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, x;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}
