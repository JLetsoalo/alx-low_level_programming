#include "main.h"

/**
 * malloc_checked - allocate memory space
 * @b: size of memory to allocate
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *pntr;

	pntr = malloc(b);

	if (pntr == NULL)
		exit(98);

	return (pntr);
}
