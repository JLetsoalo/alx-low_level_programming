#include "main.h"

/**
 * reverse_array - reverses index of array
 * @i: loop counter
 * @j: temporarily hold array value
 */

void reverse_array(int *a, int n)
{
	int j;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
