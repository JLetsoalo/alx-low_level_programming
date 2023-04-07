#include "main.h"

/**
 * find_root - get square root of n,from smallest number
 * @n: number to check
 * @root: check if number is natural root
 * Return: -1 or root
 */

int get_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (get_root(n, root + 1));
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_root(n, 0));
}
