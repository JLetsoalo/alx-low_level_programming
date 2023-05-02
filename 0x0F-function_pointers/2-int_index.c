#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index - search for integer in array
 * @array: array
 * @size: size of array
 * @cmp: pointer to comparing function to execute
 * Return: index where integer's found, -1 if not found or array not present
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int y = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	while (y < size)
	{
		if (cmp(*(array + y)))
			return (y);
		y++;
	}

	return (-1);
}
