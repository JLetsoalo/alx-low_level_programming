#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - print different amount of numbers
 * @separator: delimitor
 * @n: number of arguments on list
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int x;

	if (n > 0)
	{
		va_start(valist, n);
		x = 1;
		while (x <= n)
		{
			printf("%d", va_arg(valist, int));
			if (x != n && separator != NULL)
				printf("%s", separator);
			x++;
		}
		va_end(valist);
	}
	printf("\n");
}
