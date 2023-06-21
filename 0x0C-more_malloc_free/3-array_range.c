#include "main.h"

/**
 * array_range - create range of integers
 * @min: smallest integer
 * @max: largest integer
 * Return: integer array
 */

int *array_range(int min, int max)
{
	int *pointr;
	int i;
	int x = (max - min + 1);

	if (min > max)
		return (NULL);

	pointr = malloc(sizeof(int) * x);
	if (pointr == NULL)
		return (NULL);

	i = 0;
	while (i < x)
	{
		pointr[i] = min++;
		i++;
	}
	return (pointr);
}
