#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination
 * @src: source memory to copy
 * @n: values or bytes to copy
 * Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}

	return (dest);
}
