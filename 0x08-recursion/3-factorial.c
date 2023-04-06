#include "main.h"

/**
 * factorial - finds factorial of n
 * @n: integer to find factorial of
 * Return: returns an integer
 */

int factorial(int n)
{
	if (n == 0)
	{
		_putchar('1');
	}
	else if (n < 0)
	{
		return (-1);
	}
	else if (n > 0)
		return (factorial(n) - 1)

	n++;
}
