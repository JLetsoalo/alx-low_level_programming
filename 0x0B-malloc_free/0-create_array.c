#include "main.h"
#include <stdlib.h>

/**
 * create_array - creating array of characters
 * @size: size of the array
 * @c: character to get
 * Return: string
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	int x = 0;

	if (size <= 0 || arr == NULL)
		return (NULL);
	while (x < (int)size)
	{
		arr[x] = c;
		x++;
	}
	return (arr);
}
