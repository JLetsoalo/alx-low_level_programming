#include "main.h"

/**
 * _pow_recursion - exponents
 * @x: interger base
 * @y: exponent or power
 * Return: integer
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (0);


	if (y < 0)
		return (-1);


	if (x == 1 || y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
