#include "main.h"

/*
 * binary_to_uint - converting binary num to unsigned int
 * @b: argument to hold binary value
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, pow = 1;
	unsigned int sum = 0, error = 0;

	if (b == NULL)
		return (error);

	while (b[len] != '\0')
		len++;
	len -= 1;

	while (len >= 0)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (error);

		if (b[len] == '1')
			sum += pow;

		pow *= 2;
		len--;
	}

	return (sum);
}
