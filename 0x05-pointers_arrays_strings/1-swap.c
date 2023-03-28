#include "main.h"

/**
 * swap_int - function to swap values of integers
 * @a: integer a
 * @b: integer b to store value
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
