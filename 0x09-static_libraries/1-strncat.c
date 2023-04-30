#include "main.h"

/**
 * _strncat - concatenate two strings
 * @src: source string
 * @dest: destination string
 * @n: source string
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y;

	while (dest[x] != '\0')
	{
		x++;
	}

	y = 0;
	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';

	return (dest);
}
