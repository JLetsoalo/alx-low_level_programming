#include "main.h"
#include <stdio.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

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
		return (factorial(n) - 1);

	n++;
}
