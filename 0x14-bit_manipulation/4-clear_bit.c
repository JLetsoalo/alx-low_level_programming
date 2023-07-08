#include "main.h"

/**
 * clear_bit - change bit 1 to 0 at given index
 * @n: number at index
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int cov = 1;

	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	cov = ~(cov << index);
	*n = (*n & cov);

	return (1);
}
