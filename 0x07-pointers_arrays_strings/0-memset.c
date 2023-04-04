#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @s: character set
 * @b: constant character
 * @n: sise of bytes
 * Return: value of s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
		s[a] = b;

	return (s);
}
