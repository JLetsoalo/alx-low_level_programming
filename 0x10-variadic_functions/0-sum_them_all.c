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
	if (n == 0)
	{
		return (0);
	}
    
	va_list args;
	va_start(args, n);

	unsigned int sum = 0, x;

	for (x = 0; x < n; x++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);
	return (sum);
}

