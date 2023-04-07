#include "main.h"
#include <stdio.h>

/**
 * factorial - finds factorial of n
 * @n: integer to find factorial of
 * Return: returns an integer
 */

int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (n * factorial(n - 1));
}
