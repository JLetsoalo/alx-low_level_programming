#include "main.h"

/**
 * _memset - filling block of memory with a specific value
 * @s: memory start address
 * @b: the specific value
 * @n: bytes to be changed
 * Return: changing array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int e;
	
	e = 0;
	for (; n > 0; e++)
	{
		s[e] = b;
		n--;
	}
	return (s);
}
