#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - execute function on each given array
 * @array: given array
 * @size: size of the array
 * @action: what function do(pointer to function)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array != NULL && action != NULL)
		x = 0;
		while (x < size)
		{
			action(*(array + i));
			x++;
		}
}
