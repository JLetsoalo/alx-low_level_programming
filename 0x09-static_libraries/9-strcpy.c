#include "main.h"

/**
 * _strcpy - copying pointed strings
 * @src: copy source
 * @dest: copy destination
 * Return: copied string value
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (*(src + x) != '\0')
	{
		x++;
	}

	for (; y < x; y++)
	{
		dest[y] = src[y];
	}

	dest[x] = '\0';
	return (dest);
}
