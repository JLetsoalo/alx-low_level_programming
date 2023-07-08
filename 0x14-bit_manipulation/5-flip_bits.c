#include "main.h"

/**
 * flip_bits - determine number of bits to flip to get another
 * @n: number bit
 * @m: number2 bit
 * Return: number of different bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff_bits = 0;
	unsigned long int changes;

	changes = n ^ m;

	do {
		diff_bits += (changes & 1);
		changes >>= 1;
	} while
		(changes > 0);

	return (diff_bits);
}
