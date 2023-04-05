#include "main.h"

/**
 * print_diagsums - print diagomal sums as matrix
 * @a: matrix values
 * @size: dimensions of the matrix
 */

void print_diagsums(int *a, int size)
{
	int dsum_1 = 0;
	int dsum_2 = 0;
	int r, i;

	for (r = 0; r < size; r++)
	{
		i = (r * size) + r;
		dsum_1 += a[i];
	}

	for (r = 1; r <= size; r++)
	{
		i = (r * size) - r;
		dsum_2 += a[i];
	}

	printf("%d, %d\n", dsum_1, dsum_2);

}
