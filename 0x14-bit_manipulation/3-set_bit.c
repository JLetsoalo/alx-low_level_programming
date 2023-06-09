#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int hi_bits;
	unsigned long int cov = 1;

	/* validate index is not out of range */
	hi_bits = (sizeof(unsigned long int) * 8);
	if (index > hi_bits)
		return (-1);

	cov <<= index;
	*n = (*n | cov);

	return (1);
}
