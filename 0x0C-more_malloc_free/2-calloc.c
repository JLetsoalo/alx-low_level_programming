#include "main.h"

/**
 * _calloc - allocate memory space
 * @nmemb: size of memory to allot
 * @size: memory size
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *pointr;
	unsigned int b;

	b = 0;
	if (nmemb <= 0 || size <= 0)
		return (NULL);

	pointr = malloc(nmemb * size);
	if (pointr == NULL)
		return (NULL);

	while (b < nmemb * size)
	{
		*((char *)pointr + b) = 0;
		b++;
	}

	return (pointr);
}
