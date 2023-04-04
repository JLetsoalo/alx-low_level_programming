#include "main.h"

/**
 * _memcpy - copy memory value from src to dest
 * @dest: destination
 * @src: source
 * @n: sise of bytes
 * Return: value of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int length;

	length = n;
	while (length > 0)
	{
	int a;

	for (a = 0; a < length; a++)
		dest[a] = src;
	}
	return (dest);
}
