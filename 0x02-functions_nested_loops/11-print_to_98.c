#include "main.h"
#include <stdio.h>
/**
 *print_to_98 - prints natural numbers
 *@n: argument to hold integer value
 *Description: natural numbers 1 to 98
 */

void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%d, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%d, ", n);
		n--;
	}

	if (n == 98)
		printf("%d", n);

	printf("\n");
}
