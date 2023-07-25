#include "main.h"

/**
 * get_endianness - checks if endianess
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int v = 1;
	char *c = (char *) &v;

	return (*c);
}
